int motorpin1 = 2;                //pinnen van de motor definiëren
int motorpin2 = 3;
int ena = 9;

int knoppin = 8;                   //pinnen en waardes van de knop definiëren
int knop;
int knopteller = 1;

void setup() {
  Serial.begin(9600);
  pinMode(motorpin1, OUTPUT);         //de pinnen van de motor als output instellen
  pinMode(motorpin2, OUTPUT);
  pinMode(ena,   OUTPUT); 
  digitalWrite(motorpin1, LOW);     //motor afleggen
  digitalWrite(motorpin2, LOW);

  pinMode(knoppin, INPUT);            //de pin van de knop als input instellen

}

void loop() {
  //controle snelheid (0 = af en 255 = max snelheid)     
  analogWrite(ena, 50);
  knop = digitalRead(knoppin);            //de knop aflezen voor de waarde van de knop

  if (knop == HIGH){                    //als de knop ingeduwd wordt, de knopteller +1 in waarde geven
    knopteller += 1;
    delay(1000);

    }
  
  if ((knopteller % 2) == 0){            //als de knopteller even is dan motor aan
    digitalWrite(motorpin1,   HIGH);
    Serial.println("AAN");
    }

  else{           //als de knopteller oneven is dan motor af
    digitalWrite(motorpin1, LOW);
    Serial.println("UIT");
    }

}
