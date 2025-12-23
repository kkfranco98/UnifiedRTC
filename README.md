# 🕒 UnifiedRTC

**UnifiedRTC** is a lightweight C++ library for microcontrollers that provides a **common interface to access different RTC (Real-Time Clock) backends**.

Instead of dealing with multiple, hardware-specific RTC APIs, UnifiedRTC allows you to **write portable firmware** by interacting with a single, unified abstraction.

---

## ✨ What problem does it solve?

Different microcontrollers and RTC sources expose **different APIs**:
- internal MCU RTCs
- external RTC chips (e.g. DS3231)

UnifiedRTC acts as an **adapter layer**, normalizing these APIs behind one consistent interface.

---

## 🧠 How it works

- Defines a single abstract interface (`RTC_Interface`)
- Each RTC backend is wrapped by an adapter class
- Application code depends only on the interface, not on the hardware

📐 Design pattern used: **Adapter**

---

## 🚀 Features

- 🔌 Unified API for multiple RTC backends
- 🧩 Adapter-based design
- ⚙️ Designed for embedded systems
- 🔁 Easy to extend with new RTC or time sources
- 🧪 Suitable for frameworks and standalone firmware
