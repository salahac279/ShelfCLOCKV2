

void show2(uint8_t a, uint8_t d, CRGB color1, CRGB color2 ) {
  if(a>12) {
  a=a%12;}
 
  uint8_t time[4] = {
  ( d % 10),
    (d/10)%10,
    ( a % 10),
     11
  };
  if(a<=9) {
    time[3]= 10;
    leds(189,207) =0;
  }
  else {
    time[3] = time[3];
  }
  
for(uint8_t s=0; s<=3; s++) {
  uint8_t c = time[s];
  uint8_t b = 63*s;
  CRGB color;
  if(s>1) {color=color1;}
  else{color=color2;}
  switch (c) {
    case 0:
    leds(0+b,26+b) = color;
    leds(27+b,35+b) = 0;
    leds(36+b,62+b) = color;
    FastLED.show();
    break;
    case 1:
    leds(0+b,8+b) = color;
    leds(9+b,35+b) = 0;
    leds(45+b,62+b) = 0;
    leds(36+b,44+b) = color;
    FastLED.show();
    break;
    case 2:
  leds(0+b,17+b) = color;
  leds(18+b,26+b) = 0;
   leds(27+b,35+b) = color;
   leds(36+b,44+b) = 0;
   leds(45+b,62+b) = color;
  FastLED.show();
    break;
    case 3:
    leds(0+b,17+b)= color;
    leds(17+b,26+b) = 0;
    leds(27+b,53+b) = color;
    leds(54+b,62+b) = 0;
   

    FastLED.show();
    
    break;
    case 4:
    leds(0+b,8+b) = color;
    leds(9+b,17+b) = 0;
    leds(18+b,44+b) = color;
    leds(44+b,62+b) = 0;
    
    FastLED.show();
    
    break;
    case 5:
    leds(9+b,53+b) = color;
    leds(0+b,8+b) = 0;
    leds(54+b,62+b) = 0;
    FastLED.show();
    
    break;
    case 6:
    leds(9+b,62+b) = color;
    leds(0+b,8+b) = 0;
    FastLED.show();
    
    break;
    case 7:
    
    leds(0+b,17+b) = color;
    leds(18+b,35+b)=0;
    leds(36+b,44+b) = color;
     leds(45+b,62+b)=0;
    FastLED.show();
    
    break;
    case 8:
    leds(0+b,62+b) = color;
    break;
    case 9:
    leds(0+b,53+b)  = color;
     leds(54+b,62+b)=0;
    FastLED.show();
    
    break;
    case 10:
    
    break;
    case 11:
    leds(189,207) = color;
    
    
    FastLED.show();
    
  
  break;
  }
    
  }

}
CRGB change(int dAta) {
  switch(dAta) {
    case 1:
    return  CRGB(0, 255, 255);
    break;
    case 2:
    return CRGB(255, 0, 0);
    break;
    case 3:
     return CRGB(0, 255, 0);
    break;
    case 4:
     return CRGB(204, 0, 255);
    break;
    case 5:
     return CRGB(0, 0, 255);
    break;
    case 6:
    return CRGB(0, 102, 255);
    break;
    case 7:
     return CRGB(0, 255, 153);
    break;
    case 8:
    return CRGB(255, 102, 255);
    break;
    case 9:
    return CRGB(255, 255, 0);
    break;
    case 10:
    return CRGB(153, 0, 255);
    break;
    case 11:
    return  CRGB(255,255,255);
    break;
    case 12:
    for(int q=0; q<208; q++) {
      leds[q] = CRGB(q, 255-q, q+q);
      FastLED.show();
      
      leds[q] = CRGB(q*2,q,255-q);
      FastLED.show();
      leds[q] = CRGB(q*5, 0, 255);
       FastLED.show();
      
      }
      for(int q=207; q>=0; q--) {
         leds[q] = CRGB(q*5, 0, 255);
     
      FastLED.show();
      
      leds[q] = CRGB(q*2,0,255-q);
      FastLED.show();
      leds[q] = CRGB(q, 255-q, q+q);
       FastLED.show();
      
      }
      
      
    break;
    case 13:
    for(int q=0; q<208; q++) {
      leds[q] = CRGB(q*4, 255-q, 0);
      FastLED.show();
      
      leds[q] = CRGB(q*2,0,255-q);
      FastLED.show();
      leds[q] = CRGB(0, q*6, 255);
       FastLED.show();
      
      }
      for(int q=207; q>=0; q--) {
         leds[q] = CRGB(q*5, 0, 255);
     
      FastLED.show();
      
      leds[q] = CRGB(255-q,q*5,0);
      FastLED.show();
      leds[q] = CRGB(0, 255-q, q+q);
       FastLED.show();
      
      }
    break;
    
    }
  }
