🟦 Bubble Sort CLI Visualizer (C)

A simple and interactive Bubble Sort visualizer built entirely in C.
This program displays each step of the sorting process using ASCII bar graphics, creating a clear and beginner-friendly visualization of how Bubble Sort rearranges elements in an array.
Designed to run instantly in Dev-C++ / MinGW with no additional setup.

🚀 Features

Real-time sorting animation in the console

ASCII bar visualization using #

Step-by-step updates using system("cls")

Smooth animation using Sleep()

Beginner-friendly, lightweight, no external libraries

Runs on any Windows environment with Dev-C++

📌 How It Works

The program repeatedly visualizes the array after every swap during Bubble Sort.
Each element is displayed as a vertical bar made of # symbols:

##### (5)
## (2)
######## (8)


This allows you to see the algorithm in action, not just the final sorted output.

🛠 Requirements

Dev-C++

TDM-GCC or MinGW GCC compiler

Windows OS (uses cls and Sleep())

▶️ Usage

Open the project in Dev-C++.

Compile & Run (F11).

Watch the array animate as Bubble Sort progresses.

📂 Example Output
Sorting...
###
# 
#####
##
########


The bars update after each swap to show progress toward the final sorted array.

📜 Code Highlight

This project includes:

printArray() – Simple value printer

visualize() – ASCII bar animation

bubbleSort() – Classic Bubble Sort with visualization

main() – Immediate execution on run

🤝 Contributing

Feel free to fork the project, improve the visualization, add color, or implement more sorting algorithms like Quick Sort or Merge Sort.

📄 License

This project is open-source and free to use.
📄 License

This project is open-source and free to use
