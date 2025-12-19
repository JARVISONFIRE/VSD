# VSDSquadron RISC-V SoC Design & FPGA Implementation

This repository contains my progress through the VSD-RISCV SoC Design course. It documents the end-to-end flow of designing, compiling, and implementing RISC-V based systems on the VSDSquadron FPGA.

## Repository Structure

The labs are organized into task-specific subdirectories:

| Task | Title | Description | Status |
| :--- | :--- | :--- | :--- |
| [**Task 1**](./Task_1/) | Environment & Setup | Native Arch Linux toolchain setup and FPGA hardware verification. | ✅ Complete |

---

## Task 1: Environment Setup & Reference Bring-Up
**Objective:** Port the RISC-V development environment to a native Arch Linux system and verify the VSDSquadron FPGA hardware.

### Key Highlights:
* **Native Toolchain:** Successfully configured `riscv64-elf-gcc` and supporting utilities on Arch Linux.
* **Hardware Verification:** Compiled and flashed a RISC-V SoC bitstream FPGA.
* **Firmware Execution:** Verified the RISC-V core functionality via RGB LED control.
* **Custom Tests:** Verified the toolchain with a custom Factorial program and `sum1ton` program.

Detailed documentation, screenshots, and architectural answers can be found in the [**Task 1 Subdirectory**](./Task_1/).

---

## Hardware Used
* **Board:** VSDSquadron FPGA Mini
* **Connectivity:** USB-to-Serial (Programming/UART)
* **Workstation:** Native Arch Linux / GitHub Codespaces

---

