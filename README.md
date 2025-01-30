# **🖥️ QMK Keymaps Repository**

> **Custom QMK firmware keymaps for my mechanical keyboard**

This repository contains my **personal QMK keymaps**, optimized for better typing, macros, and workflow automation. The keymaps are stored separately from the main `qmk_firmware` directory for better organization and version control.

### **⌨️ Current Keyboard Support**

🟢 **Keychron Q5 Max** – My personal keymaps are designed for this keyboard.  
🔜 More keyboards may be added in the future.

---

## **📌 Features**

✔️ **Custom Layers & Macros** – Personalized key layouts for efficiency  
✔️ **QMK CLI & VIA Compatible** – Easy flashing and real-time modifications  
✔️ **Symlinked Setup** – Keeps `qmk_firmware` clean  
✔️ **Multi-Keyboard Support (Future)** – More keymaps may be added later

---

## **📁 Repository Structure**

```
qmk-keymaps/
├── keychron_q5_max/
│   ├── my_keymap/
│   │   ├── keymap.c
│   │   ├── rules.mk
│   │   ├── config.h
│   │   ├── readme.md
```

Each keyboard has its own **keymap folder** containing:

- `keymap.c` → Defines the layout and macros
- `rules.mk` → Configuration settings
- `config.h` → Additional firmware settings
- `readme.md` → Keyboard-specific notes

---

## **🚀 Setup & Usage**

### **1️⃣ Symlink Keymap to QMK Firmware**

```sh
ln -s ~/qmk-keymaps/keychron_q5_max/my_keymap ~/qmk_firmware/keyboards/keychron/q5_max/keymaps/my_keymap
```

This keeps your keymaps organized without modifying QMK firmware directly.

### **2️⃣ Compile & Flash the Keymap**

#### **Compile**

```sh
qmk compile -kb keychron/q5_max -km my_keymap
```

#### **Flash**

```sh
qmk flash -kb keychron/q5_max -km my_keymap
```

Make sure your keyboard is in **bootloader mode** before flashing.

---

## **🎛️ VIA & QMK Configurator Support**

If you want real-time keymap customization, generate a `.json` file:

```sh
qmk json-keymap keychron_q5_max/my_keymap > my_keymap.json
```

Upload this file to [VIA](https://usevia.app/) or [QMK Configurator](https://config.qmk.fm/).

---

## **📜 License**

This project is open-source under the [MIT License](LICENSE). Feel free to modify and use it!

---

### **📝 Notes**

- If `qmk compile` fails, ensure your firmware is up to date:
  ```sh
  qmk setup
  qmk doctor
  ```
- If you are flashing a different microcontroller, adjust `rules.mk` accordingly.
