/*
 * Ohjelma näyttää miten saadaan Arduino kertomaan meille asioita. 
 * Sarjaporttiin kirjoittamista voi käyttää esimerkiksi vianhaku-
 * tilanteissa.
 */
void setup() {
  //Sarjaliikenteen alustus. 9600 edustaa standardoitua nopeutta
  Serial.begin(9600);
}

int viive = 1000;
void loop() {
  /*
   * Serial.println() funktio tulostaa parametrikenttään 
   * sijoitetun tekstin, sekä rivinvaihdon.
   */
  Serial.println("moi!");
  delay(viive);
}
