import * as z from 'zod'

export const regrasFormulario = z.object({
    cep: z.string().min(8, 'Mínimo 8 caracteres.'),
    rua: z.string().min(1, 'Campo obrigatório.').max(60, 'Máximo 60 caracteres.'),
    numero: z.string().min(1, 'Campo obrigatório.'),
    bairro: z.string().min(1, 'Campo obrigatório.').max(15, 'Máximo 15 caracteres.'),
    cidade: z.string().min(1, 'Campo obrigatório.').max(15, 'Máximo 20 caracteres.'),
    uf: z.string().length(2, 'Utilize siglas (2 caracteres).'),
})

export type TypeForm = z.infer<typeof regrasFormulario>
