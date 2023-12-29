// The Project OF Finding The Character .

// In this program, We want to receive a Character from The Serial Monitor, and if this Character is ' A ' , it prints The phrase " Character, A " on The Serial Monitor, otherwise The phrase " A Not Found " will be printed .

// The Main Code OF The Project OF Finding The Character . . INO . .




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
