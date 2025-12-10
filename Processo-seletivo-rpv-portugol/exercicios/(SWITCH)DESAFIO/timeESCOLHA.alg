algoritmo "Time"
// Função :
// Autor : Nicoly Rodrigues
// Data : 19/08/2025
// Seção de Declarações
//Calculadora 1.0
var
cor,fla,pal,vas :inteiro
time, proxvoto :caracter

inicio
cor:=0
fla:=0
pal:=0
vas:=0
// Seção de Comandos

Enquanto time <> "5"  faca
   Escreval("****A MAIOR TORCIDA DO BRASIL****")
   Escreval("1 - Corinthians")
   Escreval("2 - Flamengo")
   Escreval("3 - Palmeiras")
   Escreval("4 - Vasco do Gama")
   Escreval("5 - Resultado")
   Escreva("Escolha seu voto[1/2/3/4/5]: ")

   leia(time)
   Escreval("-------------------------------------------------")
   escolha time
   caso "1"
      cor:=cor+1
      Escreval("Voto do Corinthians!")
      Escreval("Pressione ENTER para VOTAR ...")
      leia(proxvoto)
      limpatela
   caso "2"
      fla:=fla+1
      Escreval("Voto do Flamengo!")
      Escreval("Pressione ENTER para VOTAR ...")
      leia(proxvoto)
      limpatela
   caso "3"
      pal:=pal+1
      Escreval("Voto do Palmeiras!")
      Escreval("Pressione ENTER para VOTAR ...")
      leia(proxvoto)
      limpatela
   caso "4"
      vas:=vas+1

      Escreval("Voto do Vasco")
      Escreval("Pressione ENTER para VOTAR ...")
      leia(proxvoto)
      limpatela
   caso "5"
      limpatela
      Escreval("RESULTADO DOS VOTOS")
      Escreval("Corinthians total de", cor, " voto(s)")
      Escreval("Flamengo total de", fla, " voto(s)")
      Escreval("Palmeiras total de", pal, " voto(s)")
      Escreval("Vasco total de", vas, " votos(s)")
      Escreval("-------------------------------------------------")
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
                  Escreva("TIVEMOS UM EMPATE!")
               fimse
            fimse
         fimse
      fimse

   outrocaso
      limpatela
      Escreval("-------------------------------------------------")
      Escreval("Voto invalido!")
      Escreval("DIGITE NOVAMENTE, SEU VOTO NÃO FOI CONTABILIZADO.")

   fimescolha


fimenquanto





fimalgoritmo





