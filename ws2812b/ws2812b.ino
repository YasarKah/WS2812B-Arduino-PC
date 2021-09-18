#include <Adafruit_NeoPixel.h>
#define PIN 12 //LED'in Din pinini yazın
#define NUM_LEDS 53 //Kaç tane LED'iniz varsa buraya yazın
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRB + NEO_KHZ800);
int mod;
int lastmod;
String veri;
int randommod;
int parlaklik = 0;
void setup() {
  strip.begin();
  strip.show();
  Serial.begin(9600);
  veri.reserve(5);
}

void loop() {

  switch (mod) {
    case 1:
      Serial.println("RGBLoop");
      RGBLoop();
      break;
    case 2:
      Serial.println("Strobe");
      Strobe(0xff, 0xff, 0xff, 10, 50, 1000);
      break;
    case 3:
      Serial.println("HalloweenEyes");
      HalloweenEyes(0xff, 0x00, 0x00, 1, 4, true, random(5, 50), random(10, 50), random(50, 300));
      break;
    case 4:
      Serial.println("NewKITT RightToLeft");
      NewKITT(0xff, 0, 0, 8, 10, 50);
      break;
    case 5:
      Serial.println("Twinkle");
      Twinkle(0xff, 0, 0, 10, 100, false);
      break;
    case 6:
      Serial.println("TwinkleRandom");
      Twinkle(0xff, 0, 0, 10, 100, false);
      break;
    case 7:
      Serial.println("Sparkle");
      Sparkle(0xff, 0xff, 0xff, 0);
      break;
    case 8:
      Serial.println("SnowSparkle");
      SnowSparkle(0x10, 0x10, 0x10, 20, random(100, 1000));
      break;
    case 9:
      Serial.println("RunningLights");
      RunningLights(0xff, 0xff, 0x00, 50);
      break;
    case 10:
      Serial.println("colorWipe");
      colorWipe(0x00, 0xff, 0x00, 50);
      colorWipe(0xff, 0x00, 0x00, 50);
      break;
    case 11:
      Serial.println("rainbowCycle");
      rainbowCycle(20);
      break;
    case 12:
      Serial.println("theaterChase");
      theaterChase(0xff, 0, 0, 50);
      break;
    case 13:
      Serial.println("theaterChaseRainbow");
      theaterChaseRainbow(50);
      break;
    case 14:
      Serial.println("Fire");
      Fire(55, 120, 15);
      break;
    case 15:
      Serial.println("BouncingBalls");
      meteorRain(0xff, 0xff, 0xff, 10, 64, true, 30);
      break;
    case 16:
      Serial.println("meteorRain");
      meteorRain(0xff, 0xff, 0xff, 10, 64, true, 30);
      break;
    case 17:
      Serial.println("Red");
      setAll(255, 0, 0);
      break;
    case 18:
      Serial.println("Green");
      setAll(0, 255, 0);
      break;
    case 19:
      Serial.println("Blue");
      setAll(0, 0, 255);
      break;
    case 20:
      Serial.println("On");
      randommod = random(1, 19);
      switch (randommod) {
        case 1:
          Serial.println("RGBLoop");
          RGBLoop();
          break;
        case 2:
          Serial.println("Strobe");
          Strobe(0xff, 0xff, 0xff, 10, 50, 1000);
          break;
        case 3:
          Serial.println("HalloweenEyes");
          HalloweenEyes(0xff, 0x00, 0x00, 1, 4, true, random(5, 50), random(10, 50), random(50, 300));
          break;
        case 4:
          Serial.println("NewKITT RightToLeft");
          NewKITT(0xff, 0, 0, 8, 10, 50);
          break;
        case 5:
          Serial.println("Twinkle");
          Twinkle(0xff, 0, 0, 10, 100, false);
          break;
        case 6:
          Serial.println("TwinkleRandom");
          Twinkle(0xff, 0, 0, 10, 100, false);
          break;
        case 7:
          Serial.println("Sparkle");
          Sparkle(0xff, 0xff, 0xff, 0);
          break;
        case 8:
          Serial.println("SnowSparkle");
          SnowSparkle(0x10, 0x10, 0x10, 20, random(100, 1000));
          break;
        case 9:
          Serial.println("RunningLights");
          RunningLights(0xff, 0xff, 0x00, 50);
          break;
        case 10:
          Serial.println("colorWipe");
          colorWipe(0x00, 0xff, 0x00, 50);
          colorWipe(0xff, 0x00, 0x00, 50);
          break;
        case 11:
          Serial.println("rainbowCycle");
          rainbowCycle(20);
          break;
        case 12:
          Serial.println("theaterChase");
          theaterChase(0xff, 0, 0, 50);
          break;
        case 13:
          Serial.println("theaterChaseRainbow");
          theaterChaseRainbow(50);
          break;
        case 14:
          Serial.println("Fire");
          Fire(55, 120, 15);
          break;
        case 15:
          Serial.println("BouncingBalls");
          meteorRain(0xff, 0xff, 0xff, 10, 64, true, 30);
          break;
        case 16:
          Serial.println("meteorRain");
          meteorRain(0xff, 0xff, 0xff, 10, 64, true, 30);
          break;
        case 17:
          Serial.println("Red");
          setAll(255, 0, 0);
          break;
        case 18:
          Serial.println("Green");
          setAll(0, 255, 0);
          break;
        case 19:
          Serial.println("Blue");
          setAll(0, 0, 255);
          break;
      }
      break;
    case 21:
      Serial.println("OFF");
      setAll(0, 0, 0);
      break;
    default:
      //Serial.println("Red");
      setAll(255, 0, 0);
      break;
  }
}
void meteorRain(byte red, byte green, byte blue, byte meteorSize, byte meteorTrailDecay, boolean meteorRandomDecay, int SpeedDelay) {
  setAll(0, 0, 0);

  for (int i = 0; i < NUM_LEDS + NUM_LEDS; i++) {


    // fade brightness all LEDs one step
    for (int j = 0; j < NUM_LEDS; j++) {
      if ( (!meteorRandomDecay) || (random(10) > 5) ) {
        fadeToBlack(j, meteorTrailDecay );
      }
      if (serialEvent() != false) break;
    }

    // draw meteor
    for (int j = 0; j < meteorSize; j++) {
      if ( ( i - j < NUM_LEDS) && (i - j >= 0) ) {
        setPixel(i - j, red, green, blue);
      }
      if (serialEvent() != false) break;
    }

    showStrip();
    delay(SpeedDelay);
    if (serialEvent() != false) break;
  }
}

void fadeToBlack(int ledNo, byte fadeValue) {
#ifdef ADAFRUIT_NEOPIXEL_H
  // NeoPixel
  uint32_t oldColor;
  uint8_t r, g, b;
  int value;

  oldColor = strip.getPixelColor(ledNo);
  r = (oldColor & 0x00ff0000UL) >> 16;
  g = (oldColor & 0x0000ff00UL) >> 8;
  b = (oldColor & 0x000000ffUL);

  r = (r <= 10) ? 0 : (int) r - (r * fadeValue / 256);
  g = (g <= 10) ? 0 : (int) g - (g * fadeValue / 256);
  b = (b <= 10) ? 0 : (int) b - (b * fadeValue / 256);

  strip.setPixelColor(ledNo, r, g, b);
#endif
#ifndef ADAFRUIT_NEOPIXEL_H
  // FastLED
  leds[ledNo].fadeToBlackBy( fadeValue );
#endif
}
void BouncingBalls(byte red, byte green, byte blue, int BallCount) {
  float Gravity = -9.81;
  int StartHeight = 1;

  float Height[BallCount];
  float ImpactVelocityStart = sqrt( -2 * Gravity * StartHeight );
  float ImpactVelocity[BallCount];
  float TimeSinceLastBounce[BallCount];
  int   Position[BallCount];
  long  ClockTimeSinceLastBounce[BallCount];
  float Dampening[BallCount];

  for (int i = 0 ; i < BallCount ; i++) {
    ClockTimeSinceLastBounce[i] = millis();
    Height[i] = StartHeight;
    Position[i] = 0;
    ImpactVelocity[i] = ImpactVelocityStart;
    TimeSinceLastBounce[i] = 0;
    Dampening[i] = 0.90 - float(i) / pow(BallCount, 2);
    if (serialEvent() != false) break;
  }

  while (true) {
    for (int i = 0 ; i < BallCount ; i++) {
      TimeSinceLastBounce[i] =  millis() - ClockTimeSinceLastBounce[i];
      Height[i] = 0.5 * Gravity * pow( TimeSinceLastBounce[i] / 1000 , 2.0 ) + ImpactVelocity[i] * TimeSinceLastBounce[i] / 1000;

      if ( Height[i] < 0 ) {
        Height[i] = 0;
        ImpactVelocity[i] = Dampening[i] * ImpactVelocity[i];
        ClockTimeSinceLastBounce[i] = millis();

        if ( ImpactVelocity[i] < 0.01 ) {
          ImpactVelocity[i] = ImpactVelocityStart;
        }
      }
      Position[i] = round( Height[i] * (NUM_LEDS - 1) / StartHeight);
      if (serialEvent() != false) break;
    }

    for (int i = 0 ; i < BallCount ; i++) {
      setPixel(Position[i], red, green, blue);
      if (serialEvent() != false) break;
    }

    showStrip();
    setAll(0, 0, 0);
    if (serialEvent() != false) break;
  }
}
void Fire(int Cooling, int Sparking, int SpeedDelay) {
  static byte heat[NUM_LEDS];
  int cooldown;
  for ( int i = 0; i < NUM_LEDS; i++) {
    cooldown = random(0, ((Cooling * 10) / NUM_LEDS) + 2);

    if (cooldown > heat[i]) {
      heat[i] = 0;
    } else {
      heat[i] = heat[i] - cooldown;
    }
    if (serialEvent() != false) break;
  }
  for ( int k = NUM_LEDS - 1; k >= 2; k--) {
    heat[k] = (heat[k - 1] + heat[k - 2] + heat[k - 2]) / 3;
    if (serialEvent() != false) break;
  }
  if ( random(255) < Sparking ) {
    int y = random(7);
    heat[y] = heat[y] + random(160, 255);
  }

  for ( int j = 0; j < NUM_LEDS; j++) {
    setPixelHeatColor(j, heat[j] );
    if (serialEvent() != false) break;
  }

  showStrip();
  delay(SpeedDelay);
}

void setPixelHeatColor (int Pixel, byte temperature) {
  byte t192 = round((temperature / 255.0) * 191);

  byte heatramp = t192 & 0x3F; // 0..63
  heatramp <<= 2; // scale up to 0..252
  if ( t192 > 0x80) {                    // hottest
    setPixel(Pixel, 255, 255, heatramp);
  } else if ( t192 > 0x40 ) {            // middle
    setPixel(Pixel, 255, heatramp, 0);
  } else {                               // coolest
    setPixel(Pixel, heatramp, 0, 0);
  }
}
void theaterChaseRainbow(int SpeedDelay) {
  byte *c;

  for (int j = 0; j < 256; j++) {
    for (int q = 0; q < 3; q++) {
      for (int i = 0; i < NUM_LEDS; i = i + 3) {
        c = Wheel( (i + j) % 255);
        setPixel(i + q, *c, *(c + 1), *(c + 2));
        if (serialEvent() != false) break;
      }
      showStrip();

      delay(SpeedDelay);

      for (int i = 0; i < NUM_LEDS; i = i + 3) {
        setPixel(i + q, 0, 0, 0);
        if (serialEvent() != false) break;
      }
      if (serialEvent() != false) break;
    }
    if (serialEvent() != false) break;
  }
}
void theaterChase(byte red, byte green, byte blue, int SpeedDelay) {
  for (int j = 0; j < 10; j++) {
    for (int q = 0; q < 3; q++) {
      for (int i = 0; i < NUM_LEDS; i = i + 3) {
        setPixel(i + q, red, green, blue);
        if (serialEvent() != false) break;
      }
      showStrip();

      delay(SpeedDelay);

      for (int i = 0; i < NUM_LEDS; i = i + 3) {
        setPixel(i + q, 0, 0, 0);
        if (serialEvent() != false) break;
      }
      if (serialEvent() != false) break;
    }
    if (serialEvent() != false) break;
  }
}
void rainbowCycle(int SpeedDelay) {
  byte *c;
  uint16_t i, j;

  for (j = 0; j < 256 * 5; j++) {
    for (i = 0; i < NUM_LEDS; i++) {
      c = Wheel(((i * 256 / NUM_LEDS) + j) & 255);
      setPixel(i, *c, *(c + 1), *(c + 2));
      if (serialEvent() != false) break;
    }
    showStrip();
    delay(SpeedDelay);
    if (serialEvent() != false) break;
  }
}

byte * Wheel(byte WheelPos) {
  static byte c[3];

  if (WheelPos < 85) {
    c[0] = WheelPos * 3;
    c[1] = 255 - WheelPos * 3;
    c[2] = 0;
  } else if (WheelPos < 170) {
    WheelPos -= 85;
    c[0] = 255 - WheelPos * 3;
    c[1] = 0;
    c[2] = WheelPos * 3;
  } else {
    WheelPos -= 170;
    c[0] = 0;
    c[1] = WheelPos * 3;
    c[2] = 255 - WheelPos * 3;
  }

  return c;
}
void colorWipe(byte red, byte green, byte blue, int SpeedDelay) {
  for (uint16_t i = 0; i < NUM_LEDS; i++) {
    setPixel(i, red, green, blue);
    showStrip();
    delay(SpeedDelay);
    if (serialEvent() != false) break;
  }
}
void RunningLights(byte red, byte green, byte blue, int WaveDelay) {
  int Position = 0;

  for (int j = 0; j < NUM_LEDS * 2; j++)
  {
    Position++; // = 0; //Position + Rate;
    for (int i = 0; i < NUM_LEDS; i++) {
      // sine wave, 3 offset waves make a rainbow!
      //float level = sin(i+Position) * 127 + 128;
      //setPixel(i,level,0,0);
      //float level = sin(i+Position) * 127 + 128;
      setPixel(i, ((sin(i + Position) * 127 + 128) / 255)*red,
               ((sin(i + Position) * 127 + 128) / 255)*green,
               ((sin(i + Position) * 127 + 128) / 255)*blue);
      if (serialEvent() != false) break;
    }

    showStrip();
    delay(WaveDelay);
    if (serialEvent() != false) break;
  }
}
void SnowSparkle(byte red, byte green, byte blue, int SparkleDelay, int SpeedDelay) {
  setAll(red, green, blue);
  int Pixel = random(NUM_LEDS);
  setPixel(Pixel, 0xff, 0xff, 0xff);
  showStrip();
  delay(SparkleDelay);
  setPixel(Pixel, red, green, blue);
  showStrip();
  delay(SpeedDelay);
}
void Sparkle(byte red, byte green, byte blue, int SpeedDelay) {
  int Pixel = random(NUM_LEDS);
  setPixel(Pixel, red, green, blue);
  showStrip();
  delay(SpeedDelay);
  setPixel(Pixel, 0, 0, 0);
}
void TwinkleRandom(int Count, int SpeedDelay, boolean OnlyOne) {
  setAll(0, 0, 0);

  for (int i = 0; i < Count; i++) {
    setPixel(random(NUM_LEDS), random(0, 255), random(0, 255), random(0, 255));
    showStrip();
    delay(SpeedDelay);
    if (OnlyOne) {
      setAll(0, 0, 0);
    }
    if (serialEvent() != false) break;
  }

  delay(SpeedDelay);
}
void Twinkle(byte red, byte green, byte blue, int Count, int SpeedDelay, boolean OnlyOne) {
  setAll(0, 0, 0);

  for (int i = 0; i < Count; i++) {
    setPixel(random(NUM_LEDS), red, green, blue);
    showStrip();
    delay(SpeedDelay);
    if (OnlyOne) {
      setAll(0, 0, 0);
    }
    if (serialEvent() != false) break;
  }

  delay(SpeedDelay);
}
void NewKITT(byte red, byte green, byte blue, int EyeSize, int SpeedDelay, int ReturnDelay) {
  RightToLeft(red, green, blue, EyeSize, SpeedDelay, ReturnDelay);
  LeftToRight(red, green, blue, EyeSize, SpeedDelay, ReturnDelay);
  /*OutsideToCenter(red, green, blue, EyeSize, SpeedDelay, ReturnDelay);
    CenterToOutside(red, green, blue, EyeSize, SpeedDelay, ReturnDelay);
    LeftToRight(red, green, blue, EyeSize, SpeedDelay, ReturnDelay);
    RightToLeft(red, green, blue, EyeSize, SpeedDelay, ReturnDelay);
    OutsideToCenter(red, green, blue, EyeSize, SpeedDelay, ReturnDelay);
    CenterToOutside(red, green, blue, EyeSize, SpeedDelay, ReturnDelay);*/
}

void CenterToOutside(byte red, byte green, byte blue, int EyeSize, int SpeedDelay, int ReturnDelay) {
  for (int i = ((NUM_LEDS - EyeSize) / 2); i >= 0; i--) {
    setAll(0, 0, 0);

    setPixel(i, red / 10, green / 10, blue / 10);
    for (int j = 1; j <= EyeSize; j++) {
      setPixel(i + j, red, green, blue);
      if (serialEvent() != false) break;
    }
    setPixel(i + EyeSize + 1, red / 10, green / 10, blue / 10);

    setPixel(NUM_LEDS - i, red / 10, green / 10, blue / 10);
    for (int j = 1; j <= EyeSize; j++) {
      setPixel(NUM_LEDS - i - j, red, green, blue);
      if (serialEvent() != false) break;
    }
    setPixel(NUM_LEDS - i - EyeSize - 1, red / 10, green / 10, blue / 10);

    showStrip();
    delay(SpeedDelay);
    if (serialEvent() != false) break;
  }
  delay(ReturnDelay);
}

void OutsideToCenter(byte red, byte green, byte blue, int EyeSize, int SpeedDelay, int ReturnDelay) {
  for (int i = 0; i <= ((NUM_LEDS - EyeSize) / 2); i++) {
    setAll(0, 0, 0);

    setPixel(i, red / 10, green / 10, blue / 10);
    for (int j = 1; j <= EyeSize; j++) {
      setPixel(i + j, red, green, blue);
      if (serialEvent() != false) break;
    }
    setPixel(i + EyeSize + 1, red / 10, green / 10, blue / 10);

    setPixel(NUM_LEDS - i, red / 10, green / 10, blue / 10);
    for (int j = 1; j <= EyeSize; j++) {
      setPixel(NUM_LEDS - i - j, red, green, blue);
      if (serialEvent() != false) break;
    }
    setPixel(NUM_LEDS - i - EyeSize - 1, red / 10, green / 10, blue / 10);

    showStrip();
    delay(SpeedDelay);
    if (serialEvent() != false) break;
  }
  delay(ReturnDelay);
}

void LeftToRight(byte red, byte green, byte blue, int EyeSize, int SpeedDelay, int ReturnDelay) {
  for (int i = 0; i < NUM_LEDS - EyeSize - 2; i++) {
    setAll(0, 0, 0);
    setPixel(i, red / 10, green / 10, blue / 10);
    for (int j = 1; j <= EyeSize; j++) {
      setPixel(i + j, red, green, blue);
      if (serialEvent() != false) break;;
    }
    setPixel(i + EyeSize + 1, red / 10, green / 10, blue / 10);
    showStrip();
    delay(SpeedDelay);
    if (serialEvent() != false) break;
  }
  delay(ReturnDelay);
}

void RightToLeft(byte red, byte green, byte blue, int EyeSize, int SpeedDelay, int ReturnDelay) {
  for (int i = NUM_LEDS - EyeSize - 2; i > 0; i--) {
    setAll(0, 0, 0);
    setPixel(i, red / 10, green / 10, blue / 10);
    for (int j = 1; j <= EyeSize; j++) {
      setPixel(i + j, red, green, blue);
      if (serialEvent() != false) break;
    }
    setPixel(i + EyeSize + 1, red / 10, green / 10, blue / 10);
    showStrip();
    delay(SpeedDelay);
    if (serialEvent() != false) break;
  }
  delay(ReturnDelay);
}
void HalloweenEyes(byte red, byte green, byte blue, int EyeWidth, int EyeSpace, boolean Fade, int Steps, int FadeDelay, int EndPause) {
  randomSeed(analogRead(0));

  int i;
  int StartPoint  = random( 0, NUM_LEDS - (2 * EyeWidth) - EyeSpace );
  int Start2ndEye = StartPoint + EyeWidth + EyeSpace;

  for (i = 0; i < EyeWidth; i++) {
    setPixel(StartPoint + i, red, green, blue);
    setPixel(Start2ndEye + i, red, green, blue);
    if (serialEvent() != false) break;
  }

  showStrip();

  if (Fade == true) {
    float r, g, b;

    for (int j = Steps; j >= 0; j--) {
      r = j * (red / Steps);
      g = j * (green / Steps);
      b = j * (blue / Steps);

      for (i = 0; i < EyeWidth; i++) {
        setPixel(StartPoint + i, r, g, b);
        setPixel(Start2ndEye + i, r, g, b);
        if (serialEvent() != false) break;
      }

      showStrip();
      delay(FadeDelay);
      if (serialEvent() != false) break;
    }
  }

  setAll(0, 0, 0); // Set all black

  delay(EndPause);
}
void Strobe(byte red, byte green, byte blue, int StrobeCount, int FlashDelay, int EndPause) {
  for (int j = 0; j < StrobeCount; j++) {
    setAll(red, green, blue);
    showStrip();
    delay(FlashDelay);
    setAll(0, 0, 0);
    showStrip();
    delay(FlashDelay);
    if (serialEvent() != false) break;
  }

  delay(EndPause);
}
void RGBLoop() {
  for (int j = 0; j < 3; j++ ) {
    // Fade IN
    for (int k = 0; k < 256; k++) {
      switch (j) {
        case 0: setAll(k, 0, 0); if (serialEvent() != false) break; break;
        case 1: setAll(0, k, 0); if (serialEvent() != false) break; break;
        case 2: setAll(0, 0, k); if (serialEvent() != false) break; break;
      }
      showStrip();
      if (serialEvent() != false)break;
    }
    // Fade OUT
    for (int k = 255; k >= 0; k--) {
      switch (j) {
        case 0: setAll(k, 0, 0); if (serialEvent() != false) break; break;
        case 1: setAll(0, k, 0); if (serialEvent() != false) break; break;
        case 2: setAll(0, 0, k); if (serialEvent() != false) break; break;
      }
      showStrip();
      if (serialEvent() != false)break;
    }
    if (serialEvent() != false)break;
  }
}
void showStrip() {
#ifdef ADAFRUIT_NEOPIXEL_H
  // NeoPixel
  strip.show();
#endif
#ifndef ADAFRUIT_NEOPIXEL_H
  // FastLED
  FastLED.show();
#endif
}

void setPixel(int Pixel, byte red, byte green, byte blue) {
#ifdef ADAFRUIT_NEOPIXEL_H
  // NeoPixel
  strip.setPixelColor(Pixel, strip.Color(red, green, blue));
#endif
#ifndef ADAFRUIT_NEOPIXEL_H
  // FastLED
  leds[Pixel].r = red;
  leds[Pixel].g = green;
  leds[Pixel].b = blue;
#endif
}

void setAll(byte red, byte green, byte blue) {
  for (int i = 0; i < NUM_LEDS; i++ ) {
    setPixel(i, red, green, blue);
  }
  showStrip();
}
bool serialEvent() {
  if (Serial.available()) {
    veri = Serial.readString();
    if (veri.charAt(0) == 'b') {
      veri = veri.substring(1, 4);
      parlaklik = veri.toInt();
      parlaklik = map(parlaklik, 0, 100, 0, 255);
      strip.setBrightness(parlaklik);
    }
    else {
      mod = veri.toInt();
      return true;
    }
  }
  return false;
}
