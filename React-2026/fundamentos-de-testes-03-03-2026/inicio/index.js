//Cenario de Utilizacao
//Regra de Negocio : O aluno ganha Xp por tarefa concluida
// Ao atingur 1000 Xp o aluno sobe de nivel. Tarefas entregues com atraso
//rendem apenas  50% do xp. Existe um multiplicador de "Combo" para quem 
// Entrega 3 tarefas seguidas no prazo.

const { Interface } = require("readline")

//cada tarefa vale 200 Xp
const aluno = {
    id: 1,
    nome: "Nicoly",
    xp: 0,
    nivel: 0,
    multiplicadorCombo: false
}
Interface IEntregarTarefa {
    idAluno: number,
    idTarefa:{
        id: number,
        descricao: string,
        xp: number
    
    }
    Interface 
    
}