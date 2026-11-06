# Simulation test cases

1. **Startup:** With neither button held, LED OFF.
2. **START:** Press green button; LED ON. Release it; LED stays ON.
3. **STOP:** Press red button; LED OFF. Release it; LED stays OFF.
4. **STOP priority:** Hold START, then press STOP; LED OFF while STOP held.
5. **Restart:** Release STOP and START; tap START again; LED ON.
6. **Serial Monitor:** At 9600 baud, expected messages are `START PRESSED - SYSTEM ON` and `E-STOP PRESSED - SYSTEM OFF`. Holding a button repeats its message.

These are expected behaviors from the provided source code. The reconstructed diagram has not been executed by a Wokwi simulator in this environment.
