# Wiring reference

| Connection | Description |
|---|---|
| UNO 5V -> START contact 1 | HIGH supply while START held |
| UNO 5V -> STOP contact 1 | HIGH supply while STOP held |
| START contact 2 -> D7 | START signal |
| START contact 2 -> 10kΩ -> GND | Pull-down |
| STOP contact 2 -> D8 | STOP signal |
| STOP contact 2 -> 10kΩ -> GND | Pull-down |
| D6 -> 220Ω -> LED anode (A) | Output indication |
| LED cathode (C) -> GND | Return |

Each Wokwi pushbutton has contact 1 (pins 1.l / 1.r) and contact 2 (pins 2.l / 2.r). When pressed, contacts 1 and 2 connect.

This is a simulated stop-priority demonstration only, **not a safety-rated emergency stop**.
