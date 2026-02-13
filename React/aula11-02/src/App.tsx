import { zodResolver } from '@hookform/resolvers/zod'
import { useEffect, useState } from 'react'
import { useForm } from 'react-hook-form'
import * as z from 'zod'

export function App() {
  // "BANCO DE DADOS - APENAS NA APLICAÇÃO" de endereços
  const [enderecos, setEnderecos] = useState<TypeForm[]>([]);

  useEffect(() => {
    // if (enderecos.length === 1) {
    //   return console.log('ENDERECOS ATUALIZADOS!')
    // }
    // console.log('AAAAA')

    const enderecosArmazenados = localStorage.getItem('enderecos')// Busca as informações do LocalStorage onde a chave é 'enderecos'

    if (enderecosArmazenados === null) {
      return setEnderecos([])
    } // Verifica se o localStorage é null, caso seja, inicia o estado enderecos como um array vazio

    setEnderecos(JSON.parse(enderecosArmazenados)) // Caso possua valores no localStorage, este valor é inserido no enderecos (state), realizando o parse do JSON retornado.

  }, [])
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
    localStorage.setItem('enderecos', JSON.stringify([...enderecos, camposDoFormulario])) // transforma o json em string para ser inserido no localStorage da chave 'enderecos'. 
  }

  return (
    <div className='flex flex-col items-center justify-center mt-4'>
      <h1>Lista de Endereços</h1>
      <form onSubmit={formulario.handleSubmit(submeterFormulario)} className="flex flex-col gap-4">
        <div className="flex flex-col relative">
          <label>Cep:</label>
          <input {...formulario.register('cep')} type="text" className="border-1 border-solid border-gray-400 text-zinc-900 max-w-[400px] rounded-sm px-2 py-1" />
          {formulario.formState.errors.cep && (
            <span className="text-red-500 text-xs absolute -bottom-4 left-0">{formulario.formState.errors.cep.message}</span>
          )}
        </div>
        <div className="flex flex-col relative">
          <label>Rua:</label>
          <input {...formulario.register("rua")} type="text" className="border-1 border-solid border-gray-400 text-zinc-900 max-w-[400px] rounded-sm px-2 py-1" />
          {formulario.formState.errors.rua && (
            <span className="text-red-500 text-xs absolute -bottom-4 left-0">{formulario.formState.errors.rua.message}</span>
          )}
        </div>
        <div className="flex flex-col relative">
          <label>Número:</label>
          <input {...formulario.register("numero")} type="text" className="border-1 border-solid border-gray-400 text-zinc-900 max-w-[400px] rounded-sm px-2 py-1" />
          {formulario.formState.errors.numero && (
            <span className="text-red-500 text-xs absolute -bottom-4 left-0">{formulario.formState.errors.numero.message}</span>
          )}
        </div>
        <div className="flex flex-col relative">
          <label>Bairro:</label>
          <input {...formulario.register("bairro")} type="text" className="border-1 border-solid border-gray-400 text-zinc-900 max-w-[400px] rounded-sm px-2 py-1" />
          {formulario.formState.errors.bairro && (
            <span className="text-red-500 text-xs absolute -bottom-4 left-0">{formulario.formState.errors.bairro.message}</span>
          )}
        </div>
        <div className="flex flex-col relative">
          <label>Cidade:</label>
          <input {...formulario.register("cidade")} type="text" className="border-1 border-solid border-gray-400 text-zinc-900 max-w-[400px] rounded-sm px-2 py-1" />
          {formulario.formState.errors.cidade && (
            <span className="text-red-500 text-xs absolute -bottom-4 left-0">{formulario.formState.errors.cidade.message}</span>
          )}
        </div>
        <div className="flex flex-col relative">
          <label>UF:</label>
          <input {...formulario.register("uf")} type="text" className="border-1 border-solid border-gray-400 text-zinc-900 max-w-[400px] rounded-sm px-2 py-1" />
          {formulario.formState.errors.uf && (
            <span className="text-red-500 text-xs absolute -bottom-4 left-0">{formulario.formState.errors.uf.message}</span>
          )}
        </div>

        <div className="flex max-w-[400px] gap-4 justify-end mt-4">
          <button type="reset" className="p-2 border border-zinc-600 rounded-sm">Reset</button>
          <button className="p-2 border border-zinc-600 rounded-sm bg-zinc-900 text-zinc-50">Enviar</button>
        </div>
      </form>

      <div>
        {enderecos.length > 0 && enderecos.map((endereco, index) => {
          return (
            <>
              <p key={index}>{`Endereço ${index + 1}: CEP: ${endereco.cep} Rua: ${endereco.rua},${endereco.numero} - ${endereco.bairro}, ${endereco.cidade}/${endereco.uf}`}</p>
            </>
          )
        })}
      </div>
    </div>
  )
}