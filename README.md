# C-Sorting-Visualizer
A high-performance sorting visualizer built with C for computation and Jupyter Notebook + Matplotlib for animations. Captures every array state during Bubble, Quick, Merge, and Heap Sort, then renders smooth bar-chart animations to show how each algorithm works internally.
# Sorting Algorithm Visualizer (C + Jupyter + Matplotlib)

## Overview
This project demonstrates visualizing sorting algorithms with a C implementation that records array snapshots and a Jupyter Notebook which animates those snapshots using Matplotlib.

Included algorithms:
- Bubble Sort
- Quick Sort
- Merge Sort
- Heap Sort

## Files
- sorts.c : C source implementing sorts and snapshot capture
- sorts.so : compiled shared library (created by notebook)
- sorting_visualizer.ipynb : Jupyter Notebook (compile, run sorts and animate)
- README.md : this file

## How to run
1. Install Python packages: `numpy`, `matplotlib`, `notebook` (or JupyterLab).
2. Make sure `gcc` is installed.
3. Open `sorting_visualizer.ipynb` and run cells top-to-bottom. The notebook will compile `sorts.c` to `sorts.so` automatically.
4. Edit `algo` and `n` in the example cell to try different algorithms and sizes.

## Notes
- `max_steps` protects memory; increase if you want more snapshots (and have RAM).
- Bubble sort can create many snapshots for large `n`. Use small `n` for bubble.
