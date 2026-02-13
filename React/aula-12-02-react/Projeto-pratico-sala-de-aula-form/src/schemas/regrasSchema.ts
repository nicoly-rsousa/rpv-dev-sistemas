import { z } from "zod";
export const REGRAS = z.object({
  nome: z.string(),
  idade: z.number(),
});
export type Regras = z.infer<typeof REGRAS>;
