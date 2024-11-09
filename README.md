# Porównanie algorytmów GCD

## Opis projektu
Projekt porównuje dwa sposoby obliczania największego wspólnego dzielnika (GCD) dwóch liczb:
1. **GCD_subtraction**: Algorytm, który oblicza GCD przez odejmowanie.
2. **GCD_modulo**: Algorytm, który oblicza GCD, używając operacji modulo.

## Struktura projektu
- **GCDLib**: Zawiera kod z algorytmami GCD.
- **GCDUnitTest**: Testy, które sprawdzają, czy algorytmy działają poprawnie.
- **GCDApp**: Główna aplikacja, która mierzy czas działania algorytmów.

## Wnioski
Testy pokazują, że algorytm `GCD_modulo` działa szybciej niż `GCD_subtraction`, zwłaszcza dla dużych liczb.
