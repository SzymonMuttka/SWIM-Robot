# 🚗 Autonomiczny Pojazd z STM32

Projekt semestralny z przedmiotu **Systemy Wbudowane i Mikrokontrolery**  
Autorzy: _Szymon Muttka 21278, Michał Mazurek 21265, Szymon Makutonowicz 21263_   
Data rozpoczęcia: _13.05.2025_  
Repozytorium zawiera kod, dokumentację oraz materiały projektowe.

---

## 📌 Opis projektu

Celem projektu jest opracowanie modelu autonomicznego pojazdu sterowanego za pomocą mikrokontrolera STM32. Pojazd porusza się w trybie półautomatycznym lub automatycznym, omija przeszkody i śledzi linię. Komunikacja z użytkownikiem odbywa się przwodowo przez UART.

---

## 🛠️ Zastosowane technologie i narzędzia

- **Mikrokontroler:** STM32 STM32F303RE
- **IDE:** STM32CubeIDE
- **Programowanie:** C (HAL)
- **Sensory:**
  - 1x ultradźwiękowy (HC-SR04)
  - 2x optyczny (TCRT5000)
- **Zasilanie:** Akumulator ??? / Powerbank
- **Sterownik silników:** Mostek H L298N
- **Komunikacja:** UART (USB)

---

## ⚙️ Funkcjonalności

- ✅ Napęd sterowany przez PWM z użyciem Timerów
- ✅ Obsługa sensorów ultradźwiękowych (pomiar odległości)
- ✅ Odczyt wartości z sensorów optycznych
- ✅ Detekcja kolizji i unikanie przeszkód
- ✅ Sterowanie ruchem przez UART (komendy tekstowe)
- ✅ Zasilanie bateryjne – pełna autonomia

---

## 📁 Struktura repozytorium


---

## 🔌 Komendy UART

| Komenda | Opis                    |
|--------:|-------------------------|
| `W` | Pojazd jedzie do przodu     |
| `A` | Pojazd skręca w lewo        |
| `S` | Pojazd jedzie do tyłu       |
| `D` | Pojazd skręca w prawo       |

---

## 🧪 Scenariusze testowe

- [x] Sterowanie ruchem w czasie rzeczywistym
- [x] Detekcja przeszkody z przodu (sensor HC-SR04)
- [x] Reakcja na białą/czarną linię (IR)

---

## 📸 Demo i zdjęcia

- Zdjęcia pojazdu: [`/Media/photos/`](./Media/photos/)
- Nagranie testów: [Demo Video](#) *(link do YouTube lub Dysku Google)*

---

## 📄 Dokumentacja

Pełna dokumentacja projektu znajduje się w folderze [`Docs/`](./Docs/), w tym:
- Raport końcowy (PDF)
- Schematy układów
- Lista komponentów  

---

## 🧠 Wnioski

_(Tutaj uzupełnij po zakończeniu projektu)_

---

**Licencja:** MIT  
