# 🍢 Comilla Kebab - Arduino LCD Matrix Advertising Display

Projekt interaktywnego, dynamicznego szyldu reklamowego stworzonego na Arduino oraz wyświetlacz LCD 16x2. Kod symuluje efekt migającego neonu w stylu "apteki", dynamiczne przewijanie w lewo i w prawo ("gibanie") oraz efekty ruchu tekstu w pionie, promując lokal **Comilla Kebab**!

---

## ✨ Funkcje projektu
* **Miganie Neonu:** Szybkie, pulsujące miganie tekstu na start (jak klasyczny szyld świetlny).
* **Ruch Góra-Dół:** Płynne przeskakiwanie haseł reklamowych między wierszami wyświetlacza.
* **Mocne Gibanie (Lewo-Prawo):** Automatyczne przewijanie tekstu w obie strony za pomocą wbudowanych funkcji biblioteki `LiquidCrystal`.
* **Dedykowany kontent:** Chwytliwe hasła reklamowe w 100% skupione na marce Comilla Kebab.

---

## 🛠️ Wymagany sprzęt
* **Płytka Arduino** (np. Uno, Nano, Mega)
* **Wyświetlacz LCD 16x2** (kompatybilny ze sterownikiem HD44780)
* **Potencjometr 10kΩ** (do regulacji kontrastu ekranu)
* **Rezystor 220Ω** (lub podświetlenie LED)
* **Przewody połączeniowe (Jumpery)** oraz płytka stykowa (Breadboard)

---

## 🔌 Schemat podłączenia (Pinout)

Standardowe podłączenie wyświetlacza do Arduino (zgodnie z kodem):

| Pinu LCD | Opis | Pin w Arduino |
| :--- | :--- | :--- |
| **RS** | Register Select | Pin `12` |
| **E** | Enable | Pin `11` |
| **D4** | Data Bit 4 | Pin `5` |
| **D5** | Data Bit 5 | Pin `4` |
| **D6** | Data Bit 6 | Pin `3` |
| **D7** | Data Bit 7 | Pin `2` |

> *Uwaga: Nie zapomnij podłączyć zasilania (`VSS`, `VDD`), kontrastu (`VO` do środkowej nóżki potencjometru) oraz podświetlenia (`A` / `K`).*

---

## 🚀 Szybki start

1. Pobierz i zainstaluj środowisko [Arduino IDE](https://www.arduino.cc/en/software).
2. Podłącz płytkę Arduino do komputera.
3. Skopiuj kod z pliku [`sketch.ino`](sketch.ino) i wklej go do Arduino IDE.
4. Upewnij się, że biblioteka **LiquidCrystal** jest dostępna (jest ona domyślnie wbudowana w Arduino IDE).
5. Wybierz odpowiednią płytkę oraz port w menu `Narzędzia (Tools)` i kliknij **Wgraj (Upload)**!

---

## 📜 Przykładowe hasła w rotacji
* `COMILLA KEBAB`
* `NAJLEPSZY W MIEŚCIE`
* `SOCZYSTE MIĘSO`
* `PROSTO Z GRILLA`
* `WPADNIJ NA ROLLO`
* `KEBAB & GRILL`

---

## 📝 Licencja
Ten projekt jest udostępniony na licencji MIT – możesz go swobodnie modyfikować i używać do woli. Smacznego kebaba! 🌯
