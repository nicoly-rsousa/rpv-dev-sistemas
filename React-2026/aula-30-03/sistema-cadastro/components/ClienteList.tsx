import { Cliente } from "@/types/cliente";
import ClienteCard from "./ClienteCard";

interface ClienteListProps {
  clientes: Cliente[];
  onEditar: (cliente: Cliente) => void;
  onExcluir: (id: string) => void;
  onToggleAtivo: (id: string) => void;
}

export default function ClienteList({
  clientes,
  onEditar,
  onExcluir,
  onToggleAtivo,
}: ClienteListProps) {
  if (clientes.length === 0) {
    return (
      <div className="text-center py-12 text-gray-500">
        <p className="text-lg">Nenhum cliente encontrado.</p>
      </div>
    );
  }

  return (
    <div className="grid grid-cols-1 md:grid-cols-2 gap-4">
      {clientes.map((cliente, index) => (
        <ClienteCard
          key={index}
          cliente={cliente}
          onEditar={onEditar}
          onExcluir={onExcluir}
          onToggleAtivo={onToggleAtivo}
        />
      ))}
    </div>
  );
}
