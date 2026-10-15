# DSA — C++ Practice Repository

Personal data-structures-and-algorithms workspace in C++. The repository is split into two
independent study tracks: **topic-wise fundamentals** and **pattern-wise problem solving**.

---

## Layout

```
DSA/
├── topic/     Topic-wise fundamentals — 10 groups, 56 programs
├── pattern/   Pattern-wise problem solving — 52 patterns, 150 problems
└── .vscode/   Build task + IntelliSense config (not tracked in git)
```

### `topic/` — Fundamentals

Groups follow a fixed curriculum order so each folder only depends on the ones before it.

| # | Group | Covers |
|---|---|---|
| 01 | `basics` | First program, operators |
| 02 | `control-flow` | if/else, `for`, `while` / `do-while`, `switch` |
| 03 | `number-system` | Binary / decimal / octal / hex conversion |
| 04 | `functions` | Recursion basics, factorial, sum of two numbers |
| 05 | `pointers` | Raw pointers, pointers in arrays, char pointers |
| 06 | `arrays` | Array basics, search, reverse, second max, missing number |
| 07 | `sorting-and-searching` | Selection sort, binary search |
| 08 | `complexity` | Big-O notes ([Notes.md](topic/08_complexity/01-time-and-space-complexity/Notes.md)) |
| 09 | `star-patterns` | Nested-loop pattern printing |
| 10 | `practice` | LeetCode warm-ups, assorted problems |

### `pattern/` — Problem Solving

Structured after the [AlgoMaster 150](https://algomaster.io/practice/dsa-patterns?tab=am-150)
sheet (Ashish Pratap Singh) — 150 problems across 52 patterns, grouped into 15 sections.

Each problem is a single `.cpp` stub whose header records the pattern, difficulty and LeetCode
link. See [`pattern/README.md`](pattern/README.md) for the full indexed table.

| Section | Patterns | Problems |
|---|---|---|
| 01 | Arrays & Strings | 16 |
| 02 | Core Techniques (Two Pointers, Prefix Sum, Sliding Window, Kadane) | 13 |
| 03 | Matrix (2D Array) | 3 |
| 04 | Linear Data Structures (Linked List, Stacks, Monotonic) | 16 |
| 05 | Sorting (Bucket, Merge, QuickSort, Top K, K-Way Merge) | 9 |
| 06 | Intervals | 3 |
| 07 | Recursion & Backtracking | 8 |
| 08 | Searching (Binary Search, BST, Tries) | 13 |
| 09 | Trees (Level / Pre / In / Post Order) | 18 |
| 10 | Heaps | 4 |
| 11 | Data Structure Design | 4 |
| 12 | Greedy | 3 |
| 13 | Graphs (DFS, BFS, Topological, Union Find, MST, Shortest Path) | 15 |
| 14 | Dynamic Programming | 22 |
| 15 | Maths / Geometry | 3 |
| | **Total** | **150** |

---

## Toolchain

| Component | Value |
|---|---|
| Compiler | MinGW GCC **6.3.0** |
| Path | `C:\MinGW\bin\g++.exe` |
| Effective language standard | **C++14** |
| Editor | VS Code |
| Build task | `C/C++: g++.exe build active file` (<kbd>Ctrl</kbd>+<kbd>Shift</kbd>+<kbd>B</kbd>) |

### Language support — read before writing code

`.vscode/c_cpp_properties.json` advertises `cppStandard: c++17`, but GCC 6.3.0 does **not**
provide the C++17 library or core language features. Verified against this toolchain:

| Feature | Status |
|---|---|
| `auto`, lambdas | Works |
| `bits/stdc++.h` | Works |
| `vector`, `list`, `queue`, `stack`, `priority_queue`, `map`, `set`, `unordered_map` | Works |
| `make_unique` | Works |
| Structured bindings — `auto [a, b] = ...` | **Fails** |
| `if constexpr` | **Fails** |
| `std::string_view` | **Fails** |
| `std::optional` / `std::variant` | **Fails** |
| `<filesystem>` | **Fails** |

Write to **C++14**. If a solution genuinely needs a C++17 feature, use a plain alternative —
take `const string&` instead of `string_view`, return `bool` instead of `optional`, and avoid
structured bindings.

---

## Build & Run

Open any `.cpp` file and press <kbd>Ctrl</kbd>+<kbd>Shift</kbd>+<kbd>B</kbd> to build with the
configured task, or compile manually:

```powershell
g++ -std=c++14 path\to\file.cpp -o file.exe
.\file.exe
```

Compiled binaries (`*.exe`, `*.out`, `*.o`) are git-ignored.

## Conventions

- **Folders** — `NN-kebab-case`, numbered to define study order.
- **Files** — `NN_kebab-case.cpp`, numbered in recommended solve order.
- **Problem headers** — every `pattern/` stub starts with a provenance header:

  ```cpp
  // AlgoMaster 150 | Pattern: Two Pointers | Difficulty: Hard
  // LeetCode 42: https://leetcode.com/problems/trapping-rain-water/
  // Status: unsolved
  ```

  Flip `Status: unsolved` to `Status: solved` when a problem is done.

## Tracking Progress

- **Problems** — flip the `Status:` line in each file's header.
- **Patterns** — update the `Done` column in [`pattern/README.md`](pattern/README.md).

## Resources

- [AlgoMaster 150](https://algomaster.io/practice/dsa-patterns?tab=am-150) — the sheet `pattern/` mirrors
- [LeetCode](https://leetcode.com) — problem statements and editor
- [CP-Algorithms](https://cp-algorithms.com) — algorithm reference for implementation details