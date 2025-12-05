# 📻 SPLE Lab - Radio HTML Generator

## 🚀 Usage
```bash
cpp -P configs/<config>.txt > output.html
```

## 📋 Available Configs
- `cfg_darmstadt.txt` - Darmstadt station
- `cfg_dieburg.txt` - Dieburg station  
- `cfg_griesheim.txt` - Griesheim station
- `cfg_template.txt` - Base template

Copy the base template and configure the different define flags

## ⚙️ Creating Your Own Config

To create a custom radio manual, answer these questions:

1. **📍 Station Location**: What city/region is your radio for?
2. **🌐 Language**: Which language should the manual use? (EN/DE/CN)
3. **🎛️ Tuning Method**: How should users tune the radio?
   - 🤖 Automatic tuning
   - ✋ Manual (single/double/accelerated)
4. **📊 Display Features**: What should be shown?
   - 🔢 Numeric keyboard
   - ℹ️ Station info display
   - 🔍 Seek tuning table

Create `configs/cfg_<yourstation>.txt` with corresponding `#define` statements based on existing configs. Use the given template config `cfg_template.txt`

## 💡 Example
```bash
cpp -P -I. configs/cfg_darmstadt.txt > output_darmstadt.html
```