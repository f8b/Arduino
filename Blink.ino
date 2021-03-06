/*
 Blink
Menghidupkan LED untuk satu detik, lalu mati untuk sedetik, dilakukan berulang-ulang.

// fungsi setup hanya berlangsung sekali yaitu saat board dihidupkan atau direstart
void setup() {
 // initialize digital pin LED_BUILTIN as an output.
 pinMode(LED_BUILTIN, OUTPUT);
}

// fungsi loop berlangsung berulang kali
void loop() {
 digitalWrite(LED_BUILTIN, HIGH); // menghidupkan lampu (menaikkan voltase)
 delay(1000); // jeda selama 1000ms (1 detik)
 digitalWrite(LED_BUILTIN, LOW); // mematikan lampu (menurunkan voltase)
 delay(1000); // jeda selama 1000ms (1 detik)
}