# (Arduino + WS2812B LED + .Net Framework) PC Kontrolcüsü
![image](https://github.com/YasarKah/WS2812B-Arduino-PC/blob/main/strip.png)
## Özet

Bu proje WS2812B Adreslenebilir Şerit LED'i Arduino ile Bilgisayar üzerinden kontrol etmeye yarar.

## Test Edilmiş Platformlar

Arduino Uno,
Arduino Nano.

## Başlarken

### Bağlantılar
Bağlantıları şekildeki gibi yapın. Bağlantıları yaparken LED üzerindeki ok yönüne dikkat edin.
Arduino GND - WS2812B GND - Adaptör GND
Arduino Pın 8 - WS2812B Din
Adaptör 5V - WS2812B 5V

![image](https://github.com/YasarKah/WS2812B-Arduino-PC/blob/main/schematic.png)

### Arduino Yazılımı

Arduino kodu Adafruit Neopixel Kütüphanesi kullanılarak yazılmıştır.
Github üzerinden indirebilirsiniz

1. Adafruit Neopixel Kütüphanesi (https://github.com/adafruit/Adafruit_NeoPixel).

## .Net Framework Yazılımı

Projede Visual Studio çalışma dosyası verilmiştir.
1. SeriPortProgrami Çalışma Dosyası (https://github.com/YasarKah/WS2812B-Arduino-PC/tree/main/SeriPortProgrami).

## .Net Framework Yazılımı Derlenmiş Sürümü

Programı doğrudan çalıştırıp kullanmak için;<br />
1. SeriPortProgrami (https://github.com/YasarKah/WS2812B-Arduino-PC/tree/main/SeriPortProgrami.exe).
