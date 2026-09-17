import { Cliente } from "@/types/cliente";

interface ClienteCardProps {
  cliente: Cliente;
  onEditar: (cliente: Cliente) => void;
  onExcluir: (id: string) => void;
  onToggleAtivo: (id: string) => void;
}

function formatarCPF(cpf: string): string {
  const nums = cpf.replace(/\D/g, "");
  if (nums.length !== 11) return cpf;
  return nums.replace(/(\d{3})(\d{3})(\d{3})(\d{2})/, "$1.$2.$3-$4");
}

function formatarTelefone(tel: string): string {
  const nums = tel.replace(/\D/g, "");
  if (nums.length === 11) {
    return nums.replace(/(\d{2})(\d{5})(\d{4})/, "($1) $2-$3");
  }
  if (nums.length === 10) {
    return nums.replace(/(\d{2})(\d{4})(\d{4})/, "($1) $2-$3");
  }
  return tel;
}

export default function ClienteCard({
  cliente,
  onEditar,
  onExcluir,
  onToggleAtivo,
}: ClienteCardProps) {
  return (
    <div className="bg-gray-900 border border-gray-800 rounded-xl p-5 flex flex-col gap-3 hover:border-gray-700 transition-colors">
      <div className="flex items-start justify-between">
        <div>
          <h3 className="text-lg font-semibold text-gray-100">
            {cliente.nome}
          </h3>
          <p className="text-sm text-gray-400">{cliente.email}</p>
        </div>
        <span
          className={`text-xs font-semibold px-2 py-1 rounded-full ${
            cliente.ativo
              ? "bg-emerald-900/50 text-emerald-400"
              : "bg-red-900/50 text-red-400"
          }`}
        >
          {cliente.ativo ? "Ativo" : "Inativo"}
        </span>
      </div>

      <div className="grid grid-cols-2 gap-2 text-sm">
        <div>
          <span className="text-gray-500">CPF:</span>{" "}
          <span className="text-gray-300">{formatarCPF(cliente.cpf)}</span>
        </div>
        <div>
          <span className="text-gray-500">Tel:</span>{" "}
          <span className="text-gray-300">
            {formatarTelefone(cliente.telefone)}
          </span>
        </div>
        <div>
          <span className="text-gray-500">Nascimento:</span>{" "}
          <span className="text-gray-300">{cliente.dataNascimento}</span>
        </div>
        <div>
          <span className="text-gray-500">Cidade:</span>{" "}
          <span className="text-gray-300">
            {cliente.endereco.cidade}/{cliente.endereco.estado}
          </span>
        </div>
      </div>

      <div className="text-xs text-gray-600">
        Cadastrado em: {new Date(cliente.criadoEm).toLocaleDateString("pt-BR")}
      </div>

      <div className="flex gap-2 mt-1">
        <button
          onClick={() => onEditar(cliente)}
          className="text-sm bg-cyan-600/20 text-cyan-400 hover:bg-cyan-600/30 px-3 py-1 rounded-lg transition-colors"
        >
          Editar
        </button>
        <button
          onClick={() => onToggleAtivo(cliente.id)}
          className={`text-sm px-3 py-1 rounded-lg transition-colors ${
            cliente.ativo
              ? "bg-yellow-600/20 text-yellow-400 hover:bg-yellow-600/30"
              : "bg-emerald-600/20 text-emerald-400 hover:bg-emerald-600/30"
          }`}
        >
          {cliente.ativo ? "Desativar" : "Ativar"}
        </button>
        <button
          onClick={() => onExcluir(cliente.id)}
          className="text-sm bg-red-600/20 text-red-400 hover:bg-red-600/30 px-3 py-1 rounded-lg transition-colors"
        >
          Excluir
        </button>
      </div>
    </div>
  );
}
