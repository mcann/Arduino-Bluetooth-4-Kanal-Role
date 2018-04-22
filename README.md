# Arduino-Bluetooth-4-Kanal-Role
Arduino Bluetooth + 4 Kanal Röle Kontrolü 

Bendeki role karti ilk calistiginda 4 rolede acik geliyor ve ters calisiyor HIGH verince kapali LOW verince acik oluıyor,
oyuzden void setup() icerisinde digitalWrite(role7,HIGH);digitalWrite(role6,HIGH);digitalWrite(role5,HIGH);digitalWrite(role4,HIGH);
komutu ile tüm röleleri kapalı konuma getiriyorum. void loop() icerisinde de ters kullanıyorum. en basta tanimlama yapilarak komutlarin calismasi
da duzgun hale getirilebilir.
