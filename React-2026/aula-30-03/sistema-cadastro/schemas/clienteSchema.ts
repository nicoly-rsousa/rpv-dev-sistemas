import { z } from "zod";

export const clienteSchema = z.object({
  nome: z.string().min(3, "Nome deve ter pelo menos 3 caracteres"),
  email: z.string().min(1, "Email é obrigatório"),
  telefone: z
    .string()
    .min(1, "Telefone é obrigatório")
    .regex(/^\(\d{2}\)\s?\d{4,5}-\d{4}$/, "Telefone inválido (use formato (00) 00000-0000)"),
  cpf: z.string().min(1, "CPF é obrigatório"),
  dataNascimento: z.string().min(1, "Data de nascimento é obrigatória"),
  endereco: z.object({
    cep: z
      .string()
      .min(1, "CEP é obrigatório")
      .regex(/^\d{5}-?\d{3}$/, "CEP inválido"),
    rua: z.string().min(1, "Rua é obrigatória"),
    numero: z.string().min(1, "Número é obrigatório"),
    cidade: z.string().min(1, "Cidade é obrigatória"),
    estado: z
      .string()
      .min(2, "Estado é obrigatório")
      .max(2, "Use a sigla do estado (ex: SP)"),
  }),
});

export type ClienteFormData = z.infer<typeof clienteSchema>;
