export interface Endereco {
  cep: string;
  rua: string;
  numero: string;
  cidade: string;
  estado: string;
}

export interface Cliente {
  id: string;
  nome: string;
  email: string;
  telefone: string;
  cpf: string;
  dataNascimento: string;
  endereco: Endereco;
  ativo: boolean;
  criadoEm: string;
}
