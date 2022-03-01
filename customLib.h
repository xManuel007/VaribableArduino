class Serial_class {
  private: 
    byte a = 2 ;
    uint16_t b = 2;
    uint32_t c = 2;
    uint64_t d = 2;
    
    int8_t a1 = 2;
    int16_t b1 = 2;
    int32_t c1 = 2;
    int64_t d1 = 2;

  public:
  void get_data();
  void get_min(String variable) {

  if(variable == "uint8_t"){
      a=0;
      Serial.print("Minimo valor equivale a: ");
      Serial.println(a);
      
    }else if(variable == "uint16_t"){
        b = 0;
      Serial.print("Minimo valor equivale a: ");
      Serial.println(b);
      
      }else if(variable == "uint32_t"){
          c = 0;
      Serial.print("Minimo valor equivale a: ");
      Serial.println(c);
        }else if(variable == "uint64_t"){
          
      Serial.println("Minimo valor equivale a: 0");
        }
        
      else if(variable == "int8_t"){
      a1 = pow(2, 8);
      a1 += 1;
      Serial.print("Minimo valor equivale a: ");
      Serial.println(a1);
      
    }else if(variable == "int16_t"){
        b1 = pow(2, 16);
        b1 += 1;
      Serial.print("Minimo valor equivale a: ");
      Serial.println(b1);
      
      }else if(variable == "int32_t"){
          c1 = pow(2, 32);
          c1 += 1;
      Serial.print("Minimo valor equivale a: ");
      Serial.println(c1);
        }else if(variable == "int64_t"){
         d1 = pow(2, 64);
         d1 += 1;
      Serial.print("Minimo valor equivale a: ");
      Serial.println(d1);
        }else{
          Serial.println("De momento eso no esta dispoible");
        }
}

void get_max(String variable) {
  if(variable == "uint8_t"){
      a = pow(2, 8);
      Serial.print("Maximo valor equivale a: ");
      Serial.println(a);
      
    }else if(variable == "uint16_t"){
        b = pow(2, 16);
      Serial.print("Maximo valor equivale a: ");
      Serial.println(b);
      
      }else if(variable == "uint32_t"){
          c = pow(2, 32);
      Serial.print("Maximo valor equivale a: ");
      Serial.println(c);
        }else if(variable == "uint64_t"){
          d = pow(2, 64);
          Serial.print("Maximo valor equivale a: ");
          Serial.println(d);
        }
        
   else if(variable == "int8_t"){
      a1 = pow(2, 8);

      Serial.print("Maximo valor equivale a: ");
      Serial.println(a1);
      
    }else if(variable == "int16_t"){
        b1 = pow(2, 16);
      Serial.print("Maximo valor equivale a: ");
      Serial.println(b1);
      
      }else if(variable == "int32_t"){
          c1 = pow(2, 32);
      Serial.print("Maximo valor equivale a: ");
      Serial.println(c1);
        }else if(variable == "int64_t"){
          d1 = pow(2, 64);
      Serial.print("Maximo valor equivale a: ");
      Serial.println(d1);
        }else{
          Serial.println("De momento eso no esta dispoible");
        }
    }
    void post_data(String myString){
        Serial.print("Valor leido: ");
        Serial.println(myString);
  }
  };
