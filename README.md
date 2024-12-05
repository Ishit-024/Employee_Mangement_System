# Employee Management System

## 📋 Table of Contents
- [Overview](#overview)
- [Project Structure](#project-structure)
- [Dataset Description](#dataset-description)
- [Features](#features)
  - [1. Employee Registration](#1-employee-registration)
  - [2. Employee Login](#2-employee-login)
  - [3. Attendance Management](#3-attendance-management)
  - [4. Leave Management](#4-leave-management)
  - [5. Salary Management](#5-salary-management)
- [Usage Instructions](#usage-instructions)
  - [1. Install Dependencies](#1-install-dependencies)
  - [2. Run the Main Script](#2-run-the-main-script)
- [Evaluation Metrics](#evaluation-metrics)
- [Model Results](#model-results)
- [Conclusion](#conclusion)
- [Future Work](#future-work)

## 📝 Overview
This Employee Management System allows companies to manage their employees effectively by automating common HR processes such as employee registration, attendance, leave management, and salary calculation.

## 📁 Project Structure
- **`src/`**: Contains all the Python scripts for the backend functionality of the system.
- **`templates/`**: Contains HTML templates for the web interface.
- **`data/`**: Contains CSV or database files for storing employee data.

## 📊 Dataset Description
The primary dataset `employee_data.csv` consists of the following columns:

| **Column Name**   | **Description**                     |
|-------------------|-------------------------------------|
| employee_id       | Unique identifier for each employee |
| name              | Full name of the employee           |
| department        | Department where the employee works |
| date_of_joining   | Date when the employee joined      |
| salary            | Monthly salary of the employee      |
| attendance        | Attendance record (present/absent) |
| leave_days        | Number of leave days taken          |

## 🔄 Features
### 1. Employee Registration
This feature allows new employees to register in the system with basic details like name, department, and joining date.

### 2. Employee Login
Employees can log into the system using their credentials and view their personal information, attendance, and leave records.

### 3. Attendance Management
The system tracks employee attendance daily, allowing HR managers to update and monitor attendance records.

### 4. Leave Management
Employees can apply for leave, and HR managers can approve or reject leave requests. The leave history is also maintained.

### 5. Salary Management
The system calculates and tracks the monthly salary of each employee based on attendance and leave taken.

## 🛠️ Usage Instructions

### 1. Install Dependencies
To get started, you need to install the required dependencies:
```bash
pip install -r requirements.txt
