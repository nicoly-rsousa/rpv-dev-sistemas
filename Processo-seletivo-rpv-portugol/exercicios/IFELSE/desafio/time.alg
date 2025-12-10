algoritmo "Ca
// Função :
// Autor :
// Data : 19/08/2025
// Seção de Declarações
//Calculadora 1.0
var
cor,fla,pal,vas :inteiro
time :caracter

inicio
cor:=0
fla:=0
pal:=0
vas:=0
// Seção de Comandos

enquanto time <> "5"  faca
   Escreval("****A MAIOR TORCIDA DO BRASIL****")
   Escreval("1 - Corinthians")
   Escreval("2 - Flamengo")
   Escreval("3 - Palmeiras")
   Escreval("4 - Vasco do Gama")
   Escreval("5 - Resultado")
   Escreval("Escolha seu voto[1/2/3/4/5]")
   Leia(time)
   se(time="1") entao
      cor:=cor+1
      limpatela
      Escreval("Voto do Corinthians!")
   senao

      se(time="2") entao
         fla:=fla+1
         limpatela
         Escreval("Voto do Flamengo!")
      senao

         se(time="3") entao
            pal:=pal+1
            limpatela
            Escreval("Voto do Palmeiras!")

         senao
            se(time="4") entao
               vas:=vas+1
               limpatela
               Escreval("Voto do Vasco")
            senao
               se(time="5") entao
                  Escreval("Corinthians total de", cor, " votos")
                  Escreval("Flamengo total de", fla, " votos")
                  Escreval("Palmeiras total de", pal, " votos")
                  Escreval("Vasco total de", vas, " votos")
                  Escreval("-------------------------------------------------")
               senao
                  limpatela
                  Escreval("Voto invalido!")
                  Escreval("DIGITE NOVAMENTE, SEU VOTO NÃO FOI CONTABILIZADO.")
               fimse
            fimse
         fimse
      fimse
   fimse


fimenquanto
Escreval("-----------------------------------")
se(cor>fla) e (cor>pal) e (cor>vas) entao
   Escreval("CORINTHIANS É A MAIOR TORCIDA!")
senao
   se(fla>cor) e (fla>pal) e (fla>vas) entao
      Escreval("FLAMENGO É A MAIOR TORCIDA!")
   senao
      se(pal>cor) e (pal>fla) e (pal>vas) entao
         Escreval("PALMEIRAS É A MAIOR TORCIDA!")
      senao
         se(vas>cor) e (vas>fla) e (vas>pal) entao
            Escreval("VASCO É A MAIOR TORCIDA!")
            senao
            Escreval("TIVEMOS UM EMPATE!")

         fimse
      fimse
   fimse
fimse



fimalgoritmo





