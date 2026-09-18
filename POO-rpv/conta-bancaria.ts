//17-09
/*CRIAR NOVA CLASSE 

ContaBancaria

Atributos: numeroDaConta, titular, saldo (privado), saldoCaixinha (privado)
Métodos: sacar, depositar, verSaldo, guardarCaixinha, retirarCaixinha, verSaldoCaixinha*/

export class ContaBancaria{
 public  numeroDaConta : number;
 public  titular : string;
 private  saldo: number;
 private saldoCaixinha: number;
 

 constructor(numeroDaConta:number,titular:string, saldo: number, saldoCaixinha:number){
    this.numeroDaConta = numeroDaConta;
    this.titular = titular;
    this.saldo=saldo;
    this.saldoCaixinha = 0;
    
 }
public depositar(valor: number): void {
    if (valor <= 0) {
        console.log("Valor de depósito inválido.");
        return;
    }
    this.saldo += valor;
    console.log("Depósito realizado. Novo saldo: " + this.saldo);
}
public sacar(){

}
 public verSaldo(){
    return;
    console.log("SEU SALDO É :" + this.saldo);
 }
}
