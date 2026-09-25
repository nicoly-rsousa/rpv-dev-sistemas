// ============================================
// 1. Classe Pessoa
// ============================================
class Pessoa {
  nome: string;
  idade: number;

  constructor(nome: string, idade: number) {
    this.nome = nome;
    this.idade = idade;
  }

  apresentar(): void {
    console.log(`Olá, meu nome é ${this.nome} e tenho ${this.idade} anos`);
  }
}

// Instanciando 3 pessoas diferentes
const pessoa1 = new Pessoa("Ana", 28);
const pessoa2 = new Pessoa("Carlos", 34);
const pessoa3 = new Pessoa("Beatriz", 19);

pessoa1.apresentar();
pessoa2.apresentar();
pessoa3.apresentar();

console.log("\n----------------------------------------\n");

// ============================================
// 2. Classe Contador
// ============================================
class Contador {
  private valor: number = 0;

  incrementar(): void {
    this.valor++;
  }

  decrementar(): void {
    this.valor--;
  }

  resetar(): void {
    this.valor = 0;
  }

  mostrar(): void {
    console.log(`Valor atual: ${this.valor}`);
  }
}

// Testando os métodos em sequência
const contador = new Contador();
contador.mostrar();       // Valor atual: 0
contador.incrementar();
contador.incrementar();
contador.incrementar();
contador.mostrar();       // Valor atual: 3
contador.decrementar();
contador.mostrar();       // Valor atual: 2
contador.resetar();
contador.mostrar();       // Valor atual: 0

console.log("\n----------------------------------------\n");

// ============================================
// 3. Classes Livro e Biblioteca
// ============================================
class Livro {
  titulo: string;
  autor: string;

  constructor(titulo: string, autor: string) {
    this.titulo = titulo;
    this.autor = autor;
  }
}

class Biblioteca {
  private livros: Livro[] = [];

  adicionar(livro: Livro): void {
    this.livros.push(livro);
  }

  listar(): void {
    if (this.livros.length === 0) {
      console.log("A biblioteca está vazia.");
      return;
    }
    console.log("Livros na biblioteca:");
    this.livros.forEach((livro, index) => {
      console.log(`${index + 1}. "${livro.titulo}" - ${livro.autor}`);
    });
  }
}

// Testando a biblioteca
const biblioteca = new Biblioteca();
biblioteca.adicionar(new Livro("Dom Casmurro", "Machado de Assis"));
biblioteca.adicionar(new Livro("1984", "George Orwell"));
biblioteca.adicionar(new Livro("O Pequeno Príncipe", "Antoine de Saint-Exupéry"));

biblioteca.listar();