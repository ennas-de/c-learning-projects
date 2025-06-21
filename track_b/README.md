
### ✅ TRACK B: **10 dependent projects (step-by-step roadmap)**


## 🟦 **C LANGUAGE ROADMAP PROJECTS (10 total)**

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

