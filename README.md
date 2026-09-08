# Bank-Account-System
# Bank Account Management System (C++)

A clean, modular C++ project representing my first milestone in mastering **Object-Oriented Programming (OOP)** fundamentals.

## 🚀 Key Features & Concepts Applied
- **Encapsulation & Data Hiding:** Member variables (`accountNumber`, `accountHolder`, `balance`) are kept private and accessible only through controlled interfaces.
- **Constructor Overloading:** Supports default initialization as well as parameterized constructors for custom account creation.
- **Data Validation:** Ensures sensitive attributes (like 15-digit account numbers and positive balances) adhere to strict business rules.
- **Resource & Lifecycle Management:** Explicit destructors implemented to trace object lifespan.
- **Header Separation (Best Practices):** Clear separation between interface (`.h`) and execution logic (`.cpp`) using `#pragma once`.

##🛠️ Project Structure
- `AccountBank.h` : Class declaration and interface definition.
- `AccountBank.cpp` : Method implementation and validation logic.
- `main.cpp` : Driver code testing default constructors and customized instances.

## 💻 Tech Stack
- **Language:** C++ (C++11 or higher)
- **Tooling:** VS Code / GCC
