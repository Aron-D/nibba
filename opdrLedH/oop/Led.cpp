#include "Led.h"
#include "gpiofuncties.h"

    Led::Led(int pin): pinNr(pin), eigenaar("Anoniem"), status(0) {
    
    }
    Led::~Led() {

    }
    Led::Led(int pin, string kl):pinNr(pin), kleur(kl), eigenaar("Anoniem"), status(0) {
    
    }
    Led::Led(int, string, string) {

    }
void Led::zetAan() {
    zetPinWaarde();
}
    void Led::zetUit() {

    }
    string Led::ledKleur()const {

    }
    int Led::isLedAan()const {

    }
    int Led::pinNummer() const {

    }
    string Led::deEigenaar() const {

    }