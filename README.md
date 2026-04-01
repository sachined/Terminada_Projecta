# 🏦 Terminada Projecta — Banking Session Token Demo

A C++ console banking application featuring a custom session token generator (`DataToken`). Built as a prototype exploring fintech concepts — secure customer identification and session management.

## What It Does

- Greets the user and presents a banking menu (Deposit, Withdrawal, Transfer, Questions)
- Generates a unique `DataToken` per session — a random alphanumeric token with a derived ID
- Displays token details: ID, cache string, and member name

## The DataToken Class

```cpp
DataToken customer; // generates token on construction
customer.showData(); // prints ID, cache, name
```

| Method | Description |
|--------|-------------|
| `generateCache(n, seed)` | Builds a random alphanumeric token string |
| `generateID()` | Derives a 4-char session ID from the token |
| `genRandom()` | Returns a random alphanumeric character |
| `showData()` | Displays token details to console |

## Concepts Demonstrated
- Session/auth token generation pattern
- OOP in C++ — encapsulation, constructors, destructors
- Header/source separation (`.h` + `.cpp`)
- Fintech domain: customer identity and session management

## Status
Prototype / WIP — token generation complete; banking menu actions (deposit, withdrawal, etc.) planned.

## Build
Open `Terminada_Projecta.sln` in Visual Studio and build (x64 Debug).
