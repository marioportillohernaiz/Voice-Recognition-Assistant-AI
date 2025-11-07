# OTTO – Voice Recognition Virtual Assistant AI

[![Framework: Arduino](https://img.shields.io/badge/Built%20with-Arduino-blue.svg)](https://www.arduino.cc/)
[![Voice Recognition: AI Module](https://img.shields.io/badge/Voice%20Recognition-AI%20Module-yellow.svg)](https://www.geeetech.com/wiki/images/6/69/Voice_Recognize_manual.pdf)
[![Hardware: Open Source](https://img.shields.io/badge/Hardware-Open%20Source-brightgreen.svg)](https://opensourcehardware.org/)
[![Audio Engine: TMRpcm](https://img.shields.io/badge/Audio%20Engine-TMRpcm-orange.svg)](https://github.com/TMRh20/TMRpcm)


**This project is a home-made recreation of an Alexa-like device developed by Mario Portillo Hernaiz as part of a personal research and development project. It demonstrates how voice recognition and AI can be implemented using open-source hardware and software.**

**Table of Contents**  
- [Overview](#overview)
- [Features](#features)
- [Hardware Requirements](#hardware-requirements)
- [Software Requirements](#software-requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Testing](#testing)

## Overview

**OTTO** is a voice recognition AI assistant built from scratch using **Arduino** and a **Voice Recognition Module**. It listens to voice commands, interprets them through serial communication, and responds with pre-recorded voice outputs through a speaker.

OTTO aims to replicate the essential features of commercial voice assistants such as Amazon Alexa or Google Assistant — on a much smaller and customizable scale.

![Picture1](https://github.com/user-attachments/assets/32cf3d8f-bb1f-42fc-aa6b-c95a625a74b6)

## Features

- 🔊 **Voice Command Recognition:** Up to 15 stored voice commands split into 3 groups.  
- 💬 **Audio Response Playback:** Pre-recorded `.wav` responses stored on an SD card.  
- 🧠 **Integrated AI Control:** Input, processing, and output handled by an Arduino board.  
- ⚙️ **Modular Design:** Separate components for recognition, playback, and control.  
- 💡 **Expandable:** Designed for potential upgrades (e.g., LCD integration, wake word detection).  

## Hardware Requirements

- **Arduino Uno / Elegoo Uno R3** (main board)
- **Voice Recognition Module (V3)**
- **Microphone**
- **USB to TTL Serial Converter**
- **SD Card Reader Module** (with 32GB SD card)
- **Speakers (3W max)**
- **Breadboard & Jumper Cables**

Optional:
- **LCD Display**  
- **Push Buttons** for manual control  

## Software Requirements

- **Arduino IDE** (for programming and serial monitoring)
- **AccessPort** (to send HEX commands to the voice module)  
  👉 [Download here](http://www.sudt.com/en/ap/)  
- **TMRpcm Library** (for speaker audio control)  
- **SD Library** (to access files on SD card)
- Audio conversion software to produce `.wav` files (8-bit, 16000Hz, mono).  
  👉 [Convert your audio online](https://audio.online-convert.com/convert-to-wav)

## Installation

Follow these steps to build and deploy OTTO:

1. **Clone the Repository**
   ```bash
   git clone https://github.com/yourusername/OTTO-Voice-Assistant.git
   cd OTTO-Voice-Assistant
   ```

2. **Set Up Hardware**
   - Connect all components as described in the wiring diagrams.
   - Use the breadboard for shared 5V and GND lines.

3. **Program the Voice Recognition Module**
   - Connect the module using the USB to TTL converter.
   - Use AccessPort to record and import your 15 voice commands.

4. **Upload the Code**
   - Open the Arduino IDE.
   - Install required libraries (`TMRpcm`, `SD`).
   - Upload the `otto_main.ino` sketch.
   - Reconnect TX/RX pins after upload.

5. **Add Audio Files**
   - Convert and name your `.wav` files (`1.wav`, `2.wav`, etc.).
   - Copy them to the SD card and insert it into the reader.

6. **Power OTTO**
   - Connect the Arduino via USB or an external power supply.
   - Watch OTTO respond to your voice commands!

## Usage

Once powered on and initialized, OTTO will:

- Listen for pre-recorded voice commands.  
- Process recognized inputs through the Arduino.  
- Play corresponding `.wav` audio responses from the SD card.  

OTTO replies through the connected speaker with the associated response.

## Testing

✅ **Voice input recognized via microphone**  
✅ **Different logs printed for unique commands**  
✅ **SD card successfully stores and retrieves `.wav` responses**  
✅ **Speaker outputs correct voice response**  
✅ **All components communicate through Arduino Uno**

⚠️ *3D enclosure model was not implemented due to limited resources.*


---
### Circuit diagram of the full project:

![image](https://user-images.githubusercontent.com/44906569/184479000-55949657-410c-4010-80f2-b02b7aefc347.png)
