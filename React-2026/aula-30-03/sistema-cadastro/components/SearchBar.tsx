interface SearchBarProps {
  busca: string;
  onBuscaChange: (valor: string) => void;
  abaAtiva: "todos" | "ativos" | "inativos";
  onAbaChange: (aba: "todos" | "ativos" | "inativos") => void;
  onOrdenar: () => void;
  ordenacao: "nome" | "data";
}

export default function SearchBar({
  busca,
  onBuscaChange,
  abaAtiva,
  onAbaChange,
  onOrdenar,
  ordenacao,
}: SearchBarProps) {
  return (
    <div className="flex flex-col md:flex-row gap-4 mb-6">
      <input
        type="text"
        value={busca}
        onChange={(e) => onBuscaChange(e.target.value)}
        placeholder="Buscar por nome ou email..."
        className="flex-1 bg-gray-900 border border-gray-800 rounded-lg px-4 py-2 text-gray-100 placeholder-gray-600 focus:outline-none focus:border-cyan-500"
      />

      <div className="flex gap-2">
        {(["todos", "ativos", "inativos"] as const).map((aba) => (
          <button
            key={aba}
            onClick={() => onAbaChange(aba)}
            className={`px-4 py-2 rounded-lg text-sm font-medium transition-colors capitalize ${
              abaAtiva === aba
                ? "bg-cyan-600 text-white"
                : "bg-gray-800 text-gray-400 hover:bg-gray-700"
            }`}
          >
            {aba}
          </button>
        ))}
      </div>

      <button
        onClick={onOrdenar}
        className="bg-gray-800 text-gray-400 hover:bg-gray-700 px-4 py-2 rounded-lg text-sm font-medium transition-colors"
      >
        Ordenar: {ordenacao === "nome" ? "A→Z" : "Data"}
      </button>
    </div>
  );
}
