void fim_rua(){
  ClearScreen();
  TextOut(0, 40,"preto");
}
void azul(){
  ClearScreen();
  TextOut(0, 40,"azul");
}
void verde(){
  ClearScreen();
  TextOut(0, 40,"verde");
}
void amarelo(){
  ClearScreen();
  TextOut(0, 40,"amarelo");
}
void vermelho(){
  ClearScreen();
  TextOut(0, 40,"vermelho");
}
void branco(){
  ClearScreen();
  TextOut(0, 40,"amarelo");
}


void printa_cor() {
    int nColor;
    // liga o sensor
    SetSensorColorFull(S1);
    while (true) {
        nColor = Sensor(S1);
        switch(nColor) {
            case 1:fim_rua();break;
            case 2:azul();break;//azul
            case 3:verde();break;//verde
            case 4:amarelo();break;//amarelo
            case 5:vermelho();break;//vermelho
            case 6:branco();break;//branco
            default: break;
        }
        while( Sensor(S1) == nColor );
    }
}

task tPrinta_cor(){
  printa_cor();
}
