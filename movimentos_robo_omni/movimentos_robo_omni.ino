//CÓDIGO PARA ROBÔ COM RODAS OMNIDIRECIONAL POR LEONARDO DE SOUZA


/*
DECLARAÇÃO DE VARIÁVEIS DOS PINOS 
EM QUE OS MOTORES ESTÃO LIGADOS
*/
int rodaEsquerdaDianteira_IN1=9;
int rodaEsquerdaDianteira_IN2=5;
int rodaDireitaDianteira_IN1=13;
int rodaDireitaDianteira_IN2=12;
int rodaEsquerdaTraseira_IN1=6;
int rodaEsquerdaTraseira_IN2=7;
int rodaDireitaTraseira_IN1=11;
int rodaDireitaTraseira_IN2=10;



void setup() {
  
  /*
  DEFINIÇÃO DOS MODOS DE CADA PINO 
  NO ARDUINO
  */
  pinMode(rodaDireitaDianteira_IN1,OUTPUT);
  pinMode(rodaDireitaDianteira_IN2,OUTPUT);
  pinMode(rodaEsquerdaTraseira_IN1,OUTPUT);
  pinMode(rodaEsquerdaTraseira_IN2,OUTPUT);
  pinMode(rodaDireitaTraseira_IN2,OUTPUT);
  pinMode(rodaDireitaTraseira_IN1,OUTPUT);
  
  /* TAREFA 1: Programe o modo dos pinos 
      restantes abaixo
  */

  
   
}

void loop() {


  
 
  /*
    EXEMPLO FAZENDO O ROBÔ ANDAR PARA
    TRAS POR 2 SEGUNDOS, DEPOIS ANDAR
    PARA DIAGONAL ESQUERDA POR 1 SEGUNDO,
    DEPOIS REALIZAR UM GIRO PARA DIREITA POR 600MS
  */
  irParaTras(2000);
  parar(200);
  irParaDiagonalEsquerda(1000);
  parar(200);
  girarParaDireita(600);
  parar(200);

    /*
  TAREFA FINAL: 
  APAGUE AS LINHAS DE MOVIMENTAÇÃO ACIMA E PROGRAME AQUI NO LOOP OS MOVIMENTOS PARA O CARRO
  REALIZAR O CIRCUITO DEFINIDO PELO PROFESSOR

  */
  

}


/*
CRIAÇÃO DE FUNÇÕES DE MOVIMENTAÇÃO 
PARA O ROBÔ,
RECEBE COMO PARÂMETRO O TEMPO
QUE O ROBÔ PERMANECE NAQUELE 
MOVIMENTO
*/
void irParaEsquerda(int tempo){
  rodaDianteiraDireita("tras");
  rodaTraseiraDireita("frente");
  rodaDianteiraEsquerda("tras");
  rodaTraseiraEsquerda("frente");
  delay(tempo);
}
/*
TAREFA 2: CRIE ABAIXO A FUNÇÃO QUE 
FAZ O MOVIMENTO DE IR PARA DIREITA
*/

void irParaTras(int tempo){
  rodaDianteiraDireita("tras");
  rodaTraseiraDireita("tras");
  rodaDianteiraEsquerda("tras");
  rodaTraseiraEsquerda("tras");
  delay(tempo);
}

/*
TAREFA 3: CRIE ABAIXO A FUNÇÃO QUE 
FAZ O MOVIMENTO DE IR PARA FRENTE
*/


void irParaDiagonalEsquerda(int tempo){
  rodaTraseiraDireita("frente");
  rodaTraseiraEsquerda("frente");
  delay(tempo);
}
void irParaDiagonalDireita(int tempo){
  rodaDianteiraDireita("frente");
  rodaDianteiraEsquerda("frente");
  delay(tempo);
}
void girarParaEsquerda(int tempo){
  
  rodaDianteiraDireita("tras");
  rodaTraseiraDireita("tras");
  rodaDianteiraEsquerda("frente");
  rodaTraseiraEsquerda("frente");
  delay(tempo);
  
}
void girarParaDireita(int tempo){
   rodaDianteiraDireita("frente");
  rodaTraseiraDireita("frente");
  rodaDianteiraEsquerda("tras");
  rodaTraseiraEsquerda("tras");
  delay(tempo);
  
}
/*
CRIAÇÃO DA FUNÇÃO QUE
PARA O ROBÔ COMPLETAMENTE,
RECEBE COMO PARÂMETRO O TEMPO
QUE O ROBÔ PERMANECE PARADO
*/
void parar(int tempo){
  digitalWrite(rodaEsquerdaDianteira_IN1, LOW);
  digitalWrite(rodaEsquerdaDianteira_IN2, LOW);
  digitalWrite(rodaEsquerdaTraseira_IN1, LOW);
  digitalWrite(rodaEsquerdaTraseira_IN2, LOW);
  digitalWrite(rodaDireitaTraseira_IN1, LOW);
  digitalWrite(rodaDireitaTraseira_IN2, LOW);
  digitalWrite(rodaDireitaDianteira_IN1, LOW);
  digitalWrite(rodaDireitaDianteira_IN2, LOW);
  delay(tempo);

}

/*
CRIAÇÃO DE FUNÇÕES DE GIROS 
DE CADA RODA
RECEBE COMO PARÂMETRO UMA 
VARIÁVEL STRING INDICANDO A
DIREÇÃO QUE A RODA DEVE MOVER
("FRENTE" OU "TRAS")
*/
void rodaDianteiraDireita(String direcao){
    
  //SE A DIREÇÃO INFORMADA FOR FRENTE...
  if(direcao=="frente"){
    digitalWrite(rodaDireitaDianteira_IN1,LOW);
    digitalWrite(rodaDireitaDianteira_IN2,HIGH);
  }
  // SENÃO, CASO A DIREÇÃO INFORMADA NÃO FOR FRENTE...
  else{
    digitalWrite(rodaDireitaDianteira_IN1,HIGH);
    digitalWrite(rodaDireitaDianteira_IN2,LOW);
  }
}
void rodaTraseiraDireita(String direcao){
  if(direcao=="frente"){
    digitalWrite(rodaDireitaTraseira_IN1,LOW);
    digitalWrite(rodaDireitaTraseira_IN2,HIGH);
  }else{  
    digitalWrite(rodaDireitaTraseira_IN1,HIGH);
    digitalWrite(rodaDireitaTraseira_IN2,LOW);
    }
}
void rodaDianteiraEsquerda(String direcao){
  if(direcao=="frente"){
    digitalWrite(rodaEsquerdaDianteira_IN1,LOW);
    digitalWrite(rodaEsquerdaDianteira_IN2,HIGH);
  }else{
    digitalWrite(rodaEsquerdaDianteira_IN1,HIGH);
    digitalWrite(rodaEsquerdaDianteira_IN2,LOW);
  }
}
/*
TAREFA 4: CRIE ABAIXO A FUNÇÃO DA RODA QUE ESTA
FALTANDO
*/
} 
