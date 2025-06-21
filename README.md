Two beautiful tracks for learning C through projects:

### ✅ TRACK A: **20 independent projects (progressively harder)**

### ✅ TRACK B: **10 dependent projects (step-by-step roadmap)**


---

## 🔹 **C PROJECT LIST (INDEPENDENT – TRACK A)**

### 🧩 Beginner

1. **Hello Menu CLI Tool** – Print menu options, take input, perform basic actions.
2. **Simple Calculator** – Add, subtract, multiply, divide, modulo.
3. **Temperature Converter** – Convert between Celsius, Fahrenheit, Kelvin.
4. **File Reader/Writer Tool** – Read from/write to files using `fopen`, `fscanf`, etc.
5. **Student Grade Analyzer** – Struct-based system for entering and calculating student results.
6. **Mini Calendar Generator** – Show calendar for a given year/month.
7. **Number System Converter** – Convert between binary, decimal, octal, hexadecimal.

### ⚙️ Intermediate

8. **Contact Management System** – CRUD with file persistence (binary file).
9. **Bank Account Manager** – PIN login, deposits/withdrawals, file-based state saving.
10. **To-Do Task Tracker** – Add/edit/delete tasks with priorities and deadlines.
11. **Maze Solver** – Matrix-based pathfinding using recursion or DFS/BFS.
12. **Simple Shell (Mini Bash)** – Accept and execute basic commands (`ls`, `cd`, etc).
13. **Matrix Calculator** – Matrix addition, subtraction, multiplication.
14. **Library Management System** – Track borrowed books, student records, due dates.

### 🚀 Advanced

15. **Multi-Client Chat Server (Socket Programming)** – Handle TCP communication using `select()`.
16. **Dynamic Memory Heap Visualizer** – Show memory allocation for blocks with `malloc/free`.
17. **Embedded Sensor Simulator** – Fake data streaming + logging to file.
18. **INI Config Parser** – Parse `.ini` file formats into structured config data.
19. **Threaded Download Manager** – Simulate segmented file download using pthreads.
20. **Process Monitor CLI Tool (Linux)** – Fetch running processes, memory usage, and CPU stats.

---




## 🟦 **C PROJECT LIST (DEPENDENT - TRACK B)**

Each project builds on the previous one, introducing more complex concepts gradually. The final result will be a **mini operating environment toolkit** — like a basic CLI-based operating system shell.

---

### 🔵 **C Roadmap Project Path**

1. **System Info Printer**

   * Prints OS info, RAM size (via `/proc/meminfo` on Linux), CPU info.
   * Teaches: File parsing, string manipulation.

2. **File Explorer CLI**

   * Navigate directories, list files, view file size/type.
   * Teaches: `opendir`, `readdir`, file metadata.

3. **Simple Text Editor (Nano-Lite)**

   * View and edit text files with basic commands: open, save, search.
   * Teaches: `fopen`, buffer manipulation, cursor tracking.

4. **User Login System**

   * Users register and login with credentials saved to a file.
   * Teaches: hashing (e.g. SHA-256 via OpenSSL), password masking.

5. **Task Scheduler (CRON-Lite)**

   * Create/execute timed tasks, log executions.
   * Teaches: `time.h`, process creation (`fork`, `exec`), signals.

6. **Mini Shell**

   * Parses and executes commands like `ls`, `cd`, `mkdir`, `cat`.
   * Teaches: string tokenization, process spawning, PATH resolution.

7. **Piped Commands Support**

   * Extend shell to support command pipelines (`ls | grep txt`).
   * Teaches: pipes, input/output redirection.

8. **Multithreaded File Copier**

   * Copy large files using multithreading and buffer pooling.
   * Teaches: `pthread`, synchronization.

9. **Basic TCP Server/Client Shell**

   * Send shell commands to server, get response.
   * Teaches: Sockets, TCP stream management.

10. **Plugin-based Command Executor**

* Load external `.so` files that define new commands.
* Teaches: `dlopen`, `dlsym`, modular architecture.

