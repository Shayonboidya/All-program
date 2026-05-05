import os

folders = {
    "Array_Strings": [],
    "Sorting_Searching": [],
    "Two_Pointer_Sliding_Window": [],
    "Dynamic_Programming": [],
    "Math_Combinatorics": [],
    "Graphs_Trees": [],
    "Stack_Queue": [],
    "Linked_List": [],
    "Backtracking": [],
    "Miscellaneous": [],
}

base = "G:/My Drive/DSA"
for folder in folders:
    path = os.path.join(base, folder)
    if os.path.exists(path):
        folders[folder] = sorted([f for f in os.listdir(path) if f.endswith(".cpp")])

lines = []
lines.append("# DSA Practice in C++ 🚀\n")
lines.append("![Language](https://img.shields.io/badge/Language-C%2B%2B-blue) ![Status](https://img.shields.io/badge/Status-Active-green)\n\n")
lines.append("## 📖 Description\n")
lines.append("Practical implementation of Data Structures and Algorithms in C++. Problems organized by topic with test cases.\n\n")
lines.append("## 📁 Folder Structure\n```\nDSA/\n")
for folder, files in folders.items():
    lines.append(f"├─ {folder}/   ({len(files)} files)\n")
lines.append("└─ README.md\n```\n\n")

lines.append("## 🧠 Topics Covered\n")
for folder, files in folders.items():
    if len(files) > 0:
        lines.append(f"- **{folder.replace('_', ' ')}** — {len(files)} problems\n")
lines.append("\n")

lines.append("## 📊 File Index Table\n")
lines.append("| File Name | Topic | Difficulty |\n")
lines.append("|-----------|-------|------------|\n")
for folder, files in folders.items():
    topic = folder.replace("_", " ")
    for f in files:
        lines.append(f"| {f} | {topic} | — |\n")
lines.append("\n")

lines.append("## 📈 Progress Tracker\n")
lines.append("| Topic | Files | Status |\n")
lines.append("|-------|-------|--------|\n")
for folder, files in folders.items():
    status = "✅ Done" if len(files) > 5 else ("🚧 In Progress" if len(files) > 0 else "📭 Empty")
    lines.append(f"| {folder.replace('_', ' ')} | {len(files)} | {status} |\n")
lines.append("\n")

lines.append("## 🛠 How to Compile & Run\n")
lines.append("```bash\n# Compile a single file\ng++ -std=c++17 filename.cpp -o output\n./output\n\n# Run with input file\ng++ -std=c++17 filename.cpp -o output && ./output < input.txt\n```\n\n")

lines.append("## 👤 Author\n")
lines.append("Developed by **[Your Name]**  \n📧 [your@email.com]  \n💼 [GitHub Profile Link]\n")

readme_path = os.path.join(base, "README.md")
with open(readme_path, "w", encoding="utf-8") as f:
    f.writelines(lines)

print(f"✅ README.md saved to {readme_path}")
print(f"Total files: {sum(len(v) for v in folders.values())}")