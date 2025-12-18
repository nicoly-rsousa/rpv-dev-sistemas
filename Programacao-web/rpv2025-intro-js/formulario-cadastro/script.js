//  Validações 
//     1. Nome deverá ser nome e sobrenome
//     2. Email deverá conter @ e .com
//     3. Sexo deverá ser "M" || "F" || "Masculino" || "MASCULINO" || "masculino" || "Feminino" || "FEMININO" || "feminino"
//     4. Data nascimento Formato pt-br "DD/MM/AAAA"

const formCadastro = document.querySelector("#form-cadastro")
const nome = document.querySelector("#nome")
const email = document.querySelector("#email")
const sexo = document.querySelector("#sexo")
const dataNascimento = document.querySelector("#data-nascimento")

const spanErrorNome = document.getElementById('text-error-nome')
formCadastro.addEventListener('submit', (event) => {
    event.preventDefault()
    console.log('infos', nome.value, email.value, sexo.value, dataNascimento.value)
    
    const arrayComOsCamposQuePossuemErro = []
    
    if(nome.value === '') {
        nome.style.border = '1px solid red'
        spanErrorNome.style.display = 'inline'
        arrayComOsCamposQuePossuemErro.push('nome')
    }else {
        nome.style.border = ''
        spanErrorNome.style.display = 'none'
    }
    if(email.value === '') {
        email.style.border = '1px solid red'
        arrayComOsCamposQuePossuemErro.push('email')
    }else {
        email.style.border = ''
    }
    if(sexo.value === '') {
        sexo.style.border = '1px solid red'
        arrayComOsCamposQuePossuemErro.push('sexo')
    }else {
        sexo.style.border = ''
    }
    if(dataNascimento.value === '') {
        dataNascimento.style.border = '1px solid red'
        arrayComOsCamposQuePossuemErro.push('dataNascimento')
    }else {
        dataNascimento.style.border = ''
    }

    if(arrayComOsCamposQuePossuemErro.length > 0) return;

    alert('Passou da validação inicial')

    console.log('array de erros', arrayComOsCamposQuePossuemErro)
    
    // if( nome.value === '' || email.value === '' || sexo.value === '' || dataNascimento.value === ''){
    //     // mesma coisa que nome.value === '' ? nome.style.border = '1px solid red' : nome.style.border = ''
    //     email.value === '' ? email.style.border = '1px solid red' : email.style.border = ''
    //     sexo.value === '' ? sexo.style.border = '1px solid red' : sexo.style.border = ''
    //     dataNascimento.value === '' ? dataNascimento.style.border = '1px solid red' : dataNascimento.style.border = ''
    //     // return alert('Existem campos obrigatórios não preenchidos !')
    //     return;
    // }

    const possuiNomeESobrenome = nome.value.trim().split(' ').filter(item => item.length > 0).length > 1

    // o Regex a seguir, testa a validade de um email 
    // é necessário que tenha @, ".com", e ".br"
    const emailRegex = /^[a-z0-9.]+@[a-z0-9]+\.[a-z]+\.([a-z]+)?$/i 
    const emailEhValido = emailRegex.test(email.value)

    const ehSexoValido = sexo.value.trim().toLowerCase() === 'masculino' || sexo.value.trim().toLowerCase() === 'feminino' || sexo.value.trim().toLowerCase() === 'f' || sexo.value.trim().toLowerCase() === 'm'

    const converteDataNascimento = new Intl.DateTimeFormat('pt-BR').format(new Date(dataNascimento.value))

    const splittedDate = converteDataNascimento.split('/')
    // ["08", "05", "1991"]
    // splittedDate[0].length === 2, [1] === 2, [2] === 4
    console.log('Data splitada: ', splittedDate)

    const ehUmFormatoValidoDeData = splittedDate[0].length === 2 || splittedDate[1].length === 2 || splittedDate[2].length === 4

    
})
