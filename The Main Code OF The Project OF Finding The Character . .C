// The Project OF Finding The Character .

// The Main Code OF The Project OF Finding The Character . .C

// In this program, We want to receive a Character from the Serial Monitor, and if this Character is ' A ' , it prints the phrase " Character, A " on the Serial Monitor, otherwise the phrase " A Not Found " will be printed .




void setup () {


  Serial.begin (9600);                                                                                                                                // Introducing The Series .


}


void loop () {


  if (Serial.available () > 0 ) {


    char TheCharacter = (char) Serial.read ();


    if ( TheCharacter == ' A ' ) {


      Serial.print (" * * * * The Character : A * * * * ");                                                                           // Show The Desired Message .


    }


    else


    {


      Serial.println (" * * * * The Character : A Not Found * * * * ");                                                      // Show The Desired Message .


    }


}


while (true)


  {


    }


}
