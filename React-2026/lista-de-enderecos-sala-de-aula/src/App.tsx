import { zodResolver } from '@hookform/resolvers/zod'
import { useState } from 'react'
import { useForm } from 'react-hook-form'
import * as z from 'zod'

export function App() {
  // "BANCO DE DADOS" de endereços
  const [enderecos, setEnderecos] = useState<TypeForm[]>([]);
  // Regras do Formulário
  const regrasFormulario = z.object({
    cep: z.string().min(8, 'Mínimo 8 caracteres.'),
    rua: z.string().min(1, 'Campo obrigatório.').max(60, 'Máximo 60 caracteres.'),
    numero: z.string().min(1, 'Campo obrigatório.'),
    bairro: z.string().min(1, 'Campo obrigatório.').max(15, 'Máximo 15 caracteres.'),
    cidade: z.string().min(1, 'Campo obrigatório.').max(15, 'Máximo 20 caracteres.'),
    uf: z.string().length(2, 'Utilize siglas (2 caracteres).'),
  })

  type TypeForm = z.infer<typeof regrasFormulario>
  // Criação do formulário com React Hook Form
  // { handleSubmit, register, formState: {errors} }
  const formulario = useForm<TypeForm>({
    resolver: zodResolver(regrasFormulario)
  })

  // Submissão do formulário
  function submeterFormulario(camposDoFormulario: TypeForm) {
    setEnderecos(oldState => [...oldState, camposDoFormulario])
    formulario.reset();
  }
  // Guardar as informações
  // Exibir em tela
  // Limpar o formulário

  return (
    <>
      <h1>Lista de Endereços</h1>
      <form onSubmit={formulario.handleSubmit(submeterFormulario)} className="flex flex-col gap-2">
        <div className="flex flex-col">
          <label>Cep:</label>
          <input {...formulario.register('cep')} type="text" className="border-1 border-solid border-gray-400 text-zinc-900 max-w-[400px] rounded-sm" />
        </div>
        <div className="flex flex-col">
          <label>Rua:</label>
          <input {...formulario.register("rua")} type="text" className="border-1 border-solid border-gray-400 text-zinc-900 max-w-[400px] rounded-sm" />
        </div>
        <div className="flex flex-col">
          <label>Número:</label>
          <input {...formulario.register("numero")} type="text" className="border-1 border-solid border-gray-400 text-zinc-900 max-w-[400px] rounded-sm" />
        </div>
        <div className="flex flex-col">
          <label>Bairro:</label>
          <input {...formulario.register("bairro")} type="text" className="border-1 border-solid border-gray-400 text-zinc-900 max-w-[400px] rounded-sm" />
        </div>
        <div className="flex flex-col">
          <label>Cidade:</label>
          <input {...formulario.register("cidade")} type="text" className="border-1 border-solid border-gray-400 text-zinc-900 max-w-[400px] rounded-sm" />
        </div>
        <div className="flex flex-col">
          <label>UF:</label>
          <input {...formulario.register("uf")} type="text" className="border-1 border-solid border-gray-400 text-zinc-900 max-w-[400px] rounded-sm" />
        </div>

        <div className="flex max-w-[400px] gap-4 justify-end">
          <button type="reset" className="p-2 border border-zinc-600 rounded-sm">Reset</button>
          <button className="p-2 border border-zinc-600 rounded-sm bg-zinc-900 text-zinc-50">Enviar</button>
        </div>
      </form>

      <div>
        {enderecos.length > 0 && enderecos.map((endereco, index) => {
          return (
            <>
              <p key={index}>{`Endereço ${index + 1}: Rua: ${endereco.rua},${endereco.numero} - ${endereco.bairro}, ${endereco.cidade}/${endereco.uf}`}</p>
            </>
          )
        })}
      </div>
    </>
  )
}