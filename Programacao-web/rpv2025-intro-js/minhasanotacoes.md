1. Seletores: Onde usar # e .?ContextoSintaxe para IDSintaxe para ClasseHTMLid="username"class="input-style"CSS#username { ... }.input-style { ... }JS (querySelector)('#username')('.input-style')JS (getElemById)('username')(Não se aplica)2. JavaScript: 

Conceitos FundamentaisEventosevent: Nome do parâmetro (pode ser qualquer um) que recebe os detalhes da ação (ex: clique).event.target:
 Identifica de onde saiu o evento (o elemento clicado).event.preventDefault(): Para o comportamento padrão (ex: não deixa a página recarregar no envio do form).FunçõesJavaScript// Tradicional
function somar(a, b) {
    return a + b;
}

// Arrow Function (Moderna)
const subtrair = (a, b) => a - b;
Tipos e Comparaçõesundefined: Variável declarada, mas sem valor atribuído.==: Compara apenas o valor 
(ex: 5 == "5" é true).===: Compara valor e tipo
 (ex: 5 === "5" é false). (RECOMENDADO)

3. Manipulação de Strings e ValidaçãoJavaScript
// Limpeza com Regex (Mantém apenas letras e números)
let apenasLetras = frase.replace(/[^a-zA-Z0-9]/g, "");

// Validação de Tamanho (Conta espaços e pontos!)
if (campo.length < 5) {
    console.log("Muito curto!");
}

// Limpeza de espaços nas bordas
campo.trim();
4. CSS: Visibilidadedisplay: none;: O elemento é removido do layout. Ele "desaparece" e não ocupa espaço.📅 Próximos Passos (Atividades)Terça-feira: Mensagens de ErroObjetivo: Informar que os campos são obrigatórios.JavaScriptif (usernameInput.value.trim() === "" || passwordInput.value.trim() === "") {
    alert("Erro: Todos os campos são obrigatórios!");
}
Quarta-feira: Atividade ComplementarEstudar estados de display.Revisar inicialização de variáveis.