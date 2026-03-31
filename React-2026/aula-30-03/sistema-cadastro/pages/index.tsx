import { useState } from "react";
import { Cliente } from "@/types/cliente";
import { ClienteFormData } from "@/schemas/clienteSchema";
import ClienteForm from "@/components/ClienteForm";
import ClienteList from "@/components/ClienteList";
import SearchBar from "@/components/SearchBar";

const clientesIniciais: Cliente[] = [
  {
    id: "1",
    nome: "Maria Silva",
    email: "maria@email.com",
    telefone: "(11) 99999-1111",
    cpf: "123.456.789-00",
    dataNascimento: "1990-05-15",
    endereco: {
      cep: "01001-000",
      rua: "Rua das Flores",
      numero: "100",
      cidade: "São Paulo",
      estado: "SP",
    },
    ativo: true,
    criadoEm: "2024-01-10T10:00:00Z",
  },
  {
    id: "2",
    nome: "João Santos",
    email: "joao@email.com",
    telefone: "(21) 98888-2222",
    cpf: "987.654.321-00",
    dataNascimento: "1985-11-20",
    endereco: {
      cep: "20040-020",
      rua: "Av. Brasil",
      numero: "500",
      cidade: "Rio de Janeiro",
      estado: "RJ",
    },
    ativo: true,
    criadoEm: "2024-02-15T14:30:00Z",
  },
  {
    id: "3",
    nome: "Ana Oliveira",
    email: "ana@email.com",
    telefone: "(31) 97777-3333",
    cpf: "456.789.123-00",
    dataNascimento: "1992-03-08",
    endereco: {
      cep: "30130-000",
      rua: "Rua da Bahia",
      numero: "250",
      cidade: "Belo Horizonte",
      estado: "MG",
    },
    ativo: false,
    criadoEm: "2024-03-20T09:15:00Z",
  },
  {
    id: "4",
    nome: "Carlos Souza",
    email: "carlos@email.com",
    telefone: "(41) 96666-4444",
    cpf: "321.654.987-00",
    dataNascimento: "1988-07-25",
    endereco: {
      cep: "80010-000",
      rua: "Rua XV de Novembro",
      numero: "75",
      cidade: "Curitiba",
      estado: "PR",
    },
    ativo: true,
    criadoEm: "2024-04-05T16:45:00Z",
  },
  {
    id: "5",
    nome: "Júlia Álvares",
    email: "julia@email.com",
    telefone: "(51) 95555-5555",
    cpf: "654.321.789-00",
    dataNascimento: "1995-12-01",
    endereco: {
      cep: "90010-000",
      rua: "Rua dos Andradas",
      numero: "300",
      cidade: "Porto Alegre",
      estado: "RS",
    },
    ativo: false,
    criadoEm: "2024-05-12T11:20:00Z",
  },
];

export default function Home() {
  const [clientes, setClientes] = useState<Cliente[]>(clientesIniciais);
  const [clienteEditando, setClienteEditando] = useState<Cliente | null>(null);
  const [busca, setBusca] = useState("");
  const [abaAtiva, setAbaAtiva] = useState<"todos" | "ativos" | "inativos">(
    "todos"
  );
  const [ordenacao, setOrdenacao] = useState<"nome" | "data">("nome");
  const [ativosContador, setAtivosContador] = useState(
    clientesIniciais.filter((c) => c.ativo).length
  );
  const [inativosContador, setInativosContador] = useState(
    clientesIniciais.filter((c) => !c.ativo).length
  );

  function handleAdicionarOuEditar(data: ClienteFormData) {
    if (clienteEditando) {
      const atualizados = clientes.map((c) =>
        c.id === clienteEditando.id
          ? { ...c, ...data, endereco: { ...data.endereco } }
          : c
      );
      setClientes(atualizados);
      setClienteEditando(null);
    } else {
      const novoCliente: Cliente = {
        id: String(Date.now()),
        ...data,
        ativo: true,
        criadoEm: new Date().toISOString(),
      };
      const novosClientes = [...clientes, novoCliente];
      setClientes(novosClientes);
    }
  }

  function handleExcluir(id: string) {
    const novosClientes = clientes.filter((c) => c.id !== id);
    setClientes(novosClientes);

    const ativos = clientes.filter((c) => c.ativo).length;
    const inativos = clientes.filter((c) => !c.ativo).length;
    setAtivosContador(ativos);
    setInativosContador(inativos);
  }

  function handleToggleAtivo(id: string) {
    const novosClientes = clientes.map((c) =>
      c.id === id ? { ...c, ativo: !c.ativo } : c
    );
    setClientes(novosClientes);

    const ativos = clientes.filter((c) => c.ativo).length;
    const inativos = clientes.filter((c) => !c.ativo).length;
    setAtivosContador(ativos);
    setInativosContador(inativos);
  }

  function handleEditar(cliente: Cliente) {
    setClienteEditando(cliente);
  }

  function handleCancelarEdicao() {
    setClienteEditando(null);
  }

  function handleOrdenar() {
    setOrdenacao((prev) => (prev === "nome" ? "data" : "nome"));
  }

  // Filtrar por aba
  let clientesFiltrados = clientes;
  if (abaAtiva === "ativos") {
    clientesFiltrados = clientes.filter((c) => c.ativo);
  } else if (abaAtiva === "inativos") {
    clientesFiltrados = clientes.filter((c) => !c.ativo);
  }

  if (busca.trim()) {
    clientesFiltrados = clientesFiltrados.filter(
      (c) => c.nome.includes(busca) || c.email.includes(busca)
    );
  }

  if (ordenacao === "nome") {
    clientesFiltrados = [...clientesFiltrados].sort((a, b) =>
      a.nome > b.nome ? 1 : -1
    );
  } else {
    clientesFiltrados = [...clientesFiltrados].sort(
      (a, b) =>
        new Date(b.criadoEm).getTime() - new Date(a.criadoEm).getTime()
    );
  }

  return (
    <div className="min-h-screen bg-gray-950 py-8 px-4">
      <div className="max-w-5xl mx-auto">
        {/* Header */}
        <header className="mb-8 text-center">
          <h1 className="text-3xl font-bold text-cyan-400 mb-2">
            Sistema de Cadastro de Clientes
          </h1>
          <p className="text-gray-500 max-w-2xl mx-auto">
            🐛 <strong>Missão:</strong> O QA reportou{" "}
            <span className="text-cyan-400 font-semibold">10 problemas</span>{" "}
            neste sistema. Localize cada bug no código-fonte e aplique a
            correção.
          </p>
        </header>

        {/* Formulário */}
        <ClienteForm
          onSubmit={handleAdicionarOuEditar}
          clienteEditando={clienteEditando}
          onCancelarEdicao={handleCancelarEdicao}
        />

        {/* Busca + Filtros */}
        <SearchBar
          busca={busca}
          onBuscaChange={setBusca}
          abaAtiva={abaAtiva}
          onAbaChange={setAbaAtiva}
          onOrdenar={handleOrdenar}
          ordenacao={ordenacao}
        />

        {/* Lista */}
        <ClienteList
          clientes={clientesFiltrados}
          onEditar={handleEditar}
          onExcluir={handleExcluir}
          onToggleAtivo={handleToggleAtivo}
        />

        {/* Rodapé com contadores */}
        <footer className="mt-8 pt-6 border-t border-gray-800 flex justify-center gap-8 text-sm">
          <span className="text-gray-400">
            Total:{" "}
            <span className="text-gray-200 font-semibold">
              {clientes.length}
            </span>
          </span>
          <span className="text-gray-400">
            Ativos:{" "}
            <span className="text-emerald-400 font-semibold">
              {ativosContador}
            </span>
          </span>
          <span className="text-gray-400">
            Inativos:{" "}
            <span className="text-red-400 font-semibold">
              {inativosContador}
            </span>
          </span>
        </footer>
      </div>
    </div>
  );
}
