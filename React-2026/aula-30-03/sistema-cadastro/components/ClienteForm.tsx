import { useForm } from "react-hook-form";
import { zodResolver } from "@hookform/resolvers/zod";
import { clienteSchema, ClienteFormData } from "@/schemas/clienteSchema";
import { Cliente } from "@/types/cliente";

interface ClienteFormProps {
  onSubmit: (data: ClienteFormData) => void;
  clienteEditando: Cliente | null;
  onCancelarEdicao: () => void;
}

export default function ClienteForm({
  onSubmit,
  clienteEditando,
  onCancelarEdicao,
}: ClienteFormProps) {
  const {
    register,
    handleSubmit,
    formState: { errors },
    reset,
  } = useForm<ClienteFormData>({
    resolver: zodResolver(clienteSchema),
  });

  function handleFormSubmit(data: ClienteFormData) {
    onSubmit(data);
  }

  return (
    <form
      onSubmit={handleSubmit(handleFormSubmit)}
      className="bg-gray-900 border border-gray-800 rounded-xl p-6 mb-8"
    >
      <h2 className="text-xl font-bold text-cyan-400 mb-4">
        {clienteEditando ? "Editar Cliente" : "Novo Cliente"}
      </h2>

      <div className="grid grid-cols-1 md:grid-cols-2 gap-4">
        {/* Nome */}
        <div className="flex flex-col gap-1">
          <label className="text-sm text-gray-400">Nome</label>
          <input
            {...register("nome")}
            placeholder="Nome completo"
            className="bg-gray-800 border border-gray-700 rounded-lg px-3 py-2 text-gray-100 placeholder-gray-600 focus:outline-none focus:border-cyan-500"
          />
          {errors.nome && (
            <span className="text-red-400 text-xs">{errors.nome.message}</span>
          )}
        </div>

        {/* Email */}
        <div className="flex flex-col gap-1">
          <label className="text-sm text-gray-400">Email</label>
          <input
            {...register("email")}
            placeholder="email@exemplo.com"
            className="bg-gray-800 border border-gray-700 rounded-lg px-3 py-2 text-gray-100 placeholder-gray-600 focus:outline-none focus:border-cyan-500"
          />
          {errors.email && (
            <span className="text-red-400 text-xs">
              {errors.email.message}
            </span>
          )}
        </div>

        {/* Telefone */}
        <div className="flex flex-col gap-1">
          <label className="text-sm text-gray-400">Telefone</label>
          <input
            {...register("telefone")}
            placeholder="(00) 00000-0000"
            className="bg-gray-800 border border-gray-700 rounded-lg px-3 py-2 text-gray-100 placeholder-gray-600 focus:outline-none focus:border-cyan-500"
          />
          {errors.telefone && (
            <span className="text-red-400 text-xs">
              {errors.telefone.message}
            </span>
          )}
        </div>

        {/* CPF */}
        <div className="flex flex-col gap-1">
          <label className="text-sm text-gray-400">CPF</label>
          <input
            {...register("cpf")}
            placeholder="000.000.000-00"
            className="bg-gray-800 border border-gray-700 rounded-lg px-3 py-2 text-gray-100 placeholder-gray-600 focus:outline-none focus:border-cyan-500"
          />
          {errors.cpf && (
            <span className="text-red-400 text-xs">{errors.cpf.message}</span>
          )}
        </div>

        {/* Data de Nascimento */}
        <div className="flex flex-col gap-1">
          <label className="text-sm text-gray-400">Data de Nascimento</label>
          <input
            type="date"
            {...register("dataNascimento")}
            className="bg-gray-800 border border-gray-700 rounded-lg px-3 py-2 text-gray-100 focus:outline-none focus:border-cyan-500"
          />
          {errors.dataNascimento && (
            <span className="text-red-400 text-xs">
              {errors.dataNascimento.message}
            </span>
          )}
        </div>

        {/* CEP */}
        <div className="flex flex-col gap-1">
          <label className="text-sm text-gray-400">CEP</label>
          <input
            {...register("endereco.cep")}
            placeholder="00000-000"
            className="bg-gray-800 border border-gray-700 rounded-lg px-3 py-2 text-gray-100 placeholder-gray-600 focus:outline-none focus:border-cyan-500"
          />
          {errors.endereco?.cep && (
            <span className="text-red-400 text-xs">
              {errors.endereco.cep.message}
            </span>
          )}
        </div>

        {/* Rua */}
        <div className="flex flex-col gap-1">
          <label className="text-sm text-gray-400">Rua</label>
          <input
            {...register("endereco.rua")}
            placeholder="Nome da rua"
            className="bg-gray-800 border border-gray-700 rounded-lg px-3 py-2 text-gray-100 placeholder-gray-600 focus:outline-none focus:border-cyan-500"
          />
          {errors.endereco?.rua && (
            <span className="text-red-400 text-xs">
              {errors.endereco.rua.message}
            </span>
          )}
        </div>

        {/* Número */}
        <div className="flex flex-col gap-1">
          <label className="text-sm text-gray-400">Número</label>
          <input
            {...register("endereco.numero")}
            placeholder="123"
            className="bg-gray-800 border border-gray-700 rounded-lg px-3 py-2 text-gray-100 placeholder-gray-600 focus:outline-none focus:border-cyan-500"
          />
          {errors.endereco?.numero && (
            <span className="text-red-400 text-xs">
              {errors.endereco.numero.message}
            </span>
          )}
        </div>

        {/* Cidade */}
        <div className="flex flex-col gap-1">
          <label className="text-sm text-gray-400">Cidade</label>
          <input
            {...register("endereco.cidade")}
            placeholder="São Paulo"
            className="bg-gray-800 border border-gray-700 rounded-lg px-3 py-2 text-gray-100 placeholder-gray-600 focus:outline-none focus:border-cyan-500"
          />
          {errors.endereco?.cidade && (
            <span className="text-red-400 text-xs">
              {errors.endereco.cidade.message}
            </span>
          )}
        </div>

        {/* Estado */}
        <div className="flex flex-col gap-1">
          <label className="text-sm text-gray-400">Estado</label>
          <input
            {...register("endereco.estado")}
            placeholder="SP"
            maxLength={2}
            className="bg-gray-800 border border-gray-700 rounded-lg px-3 py-2 text-gray-100 placeholder-gray-600 focus:outline-none focus:border-cyan-500"
          />
          {errors.endereco?.estado && (
            <span className="text-red-400 text-xs">
              {errors.endereco.estado.message}
            </span>
          )}
        </div>
      </div>

      <div className="flex gap-3 mt-6">
        <button
          type="submit"
          className="bg-cyan-600 hover:bg-cyan-700 text-white font-semibold px-6 py-2 rounded-lg transition-colors"
        >
          {clienteEditando ? "Salvar Alterações" : "Cadastrar"}
        </button>
        {clienteEditando && (
          <button
            type="button"
            onClick={() => {
              onCancelarEdicao();
              reset();
            }}
            className="bg-gray-700 hover:bg-gray-600 text-gray-300 font-semibold px-6 py-2 rounded-lg transition-colors"
          >
            Cancelar
          </button>
        )}
      </div>
    </form>
  );
}
