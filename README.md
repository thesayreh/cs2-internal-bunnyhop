<div align="center">
  <img src="https://raw.githubusercontent.com/thesayreh/cs2-internal-bunnyhop/main/src/image.jpg" alt="CS2 Bhop" width="200" height="200">
  <h1>CS2 Bhop</h1>
  <p>Internal BunnyHop Cheat for Counter-Strike 2</p>

  <a href="https://github.com/thesayreh/cs2-internal-bunnyhop/releases/tag/Release">
    <img src="https://img.shields.io/badge/Downloads-CS2--Bhop--Release-D5006D?style=for-the-badge&logo=github" alt="Downloads">
  </a>
  <img src="https://img.shields.io/badge/platform-Windows-blue?style=for-the-badge&color=D5006D" alt="Platform">
  <a href="https://github.com/thesayreh/cs2-internal-bunnyhop/blob/main/LICENSE">
    <img src="https://img.shields.io/github/license/thesayreh/cs2-internal-bunnyhop?style=for-the-badge&color=D5006D" alt="License">
  </a>
</div>

---

### 📌 Navigation
<a href="#features"><strong>Features</strong></a> •
<a href="#installation"><strong>Installation</strong></a> •
<a href="#usage"><strong>Usage</strong></a> •
<a href="#technical-overview"><strong>Technical Overview</strong></a> •
<a href="#changelog"><strong>Changelog</strong></a> •
<a href="#troubleshooting"><strong>Troubleshooting</strong></a> •
<a href="#contributing"><strong>Contributing</strong></a>

---

## 🎯 Features

- 🟢 Internal BunnyHop cheat for CS2
- 📦 Written in pure C++
- 💡 Uses current CS2 offsets
- 🔄 Designed to be regularly updated
- 🧠 Simple structure — great for learning and extension
- ⌨️ **SPACE** = bhop | **END** = exit

---

## 🧪 Installation

1. Clone the repository or download it as `.zip`  
2. Compile the project as a DLL (e.g., using Visual Studio)
3. Inject the DLL into `cs2.exe` using your preferred injector  
   _(I used Extreme Injector, manual map mode)_
4. The cheat auto-starts upon injection

> ℹ️ Make sure the offsets are up to date — see `include.h`.

---

## 🚀 Usage

- Inject the compiled DLL into **cs2.exe**
- Press **SPACE** to BunnyHop
- Press **END** to unload the cheat and close the console

---

## ⚙️ Technical Overview

This is a minimal **internal** BunnyHop cheat that hooks into CS2 using WinAPI functions:

- Uses `GetModuleHandleA()` to grab module base addresses
- Reads `m_fFlags` to check if the player is on the ground
- Writes to the `jump` offset to trigger jumps
- Console interface for status/debug output

All offsets are stored in `include.h` and should be kept up to date after game updates.

---

## 📝 Changelog

> Latest updates

### ✅ 2025-06-11
- First version of the cheat released
- Working BunnyHop
- Uses up-to-date offsets
- Clean console with user-friendly output

---

## 🛠 Troubleshooting

- ❓ **Cheat not working?**  
  → Make sure:
  - CS2 is updated → check the offsets
  - DLL is compiled as **x64**
  - **Precompiled headers** are disabled
  - **Multi-byte character set** is enabled
  - Offsets `jump` and `m_fFlags` are correctly defined

---

## 🤝 Contributing

Pull requests and ideas are welcome.  
If you want to improve the cheat — feel free to fork and modify it.

---

## ⚠ Disclaimer

This project is made for **educational purposes only**.  
By using this code, **you take full responsibility** for how it’s used.  
Use at your own risk.

---
