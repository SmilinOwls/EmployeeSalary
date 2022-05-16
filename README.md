<h1 align="center">EMPLOYEE PAYMENT PROJECT 👋</h1>
<p>
  <img alt="Version" src="https://img.shields.io/badge/version-v1.0.0-blue.svg?cacheSeconds=2592000" />
  <a href="https://gcc.gnu.org/projects/cxx-status.html" target="_blank">
    <img alt="g++ ver" src="https://img.shields.io/badge/g%2B%2B---std%3Dc%2B%2B17-blue" />
  </a>
  <a href="https://github.com/SmilinOwls/MockStudentDataGenerator#readme" target="_blank">
    <img alt="Documentation" src="https://img.shields.io/badge/documentation-yes-brightgreen.svg" />
  </a>
  <a href="https://github.com/SmilinOwls/MockStudentDataGenerator/blob/master/LICENSE" target="_blank">
    <img alt="License: MIT" src="https://img.shields.io/badge/license-MIT-green" />
  </a>
  <a href="https://visualstudio.microsoft.com/downloads/">
    <img alth="IDE: Visual Studio Code 2019" src = "https://img.shields.io/badge/IDE-VS%20Code%202019-ff69b4"/>  
  </a>
  <img alt="Git Followers" src ="https://img.shields.io/github/followers/SmilinOwls?style=social"/>
</p>

> Project OOP's 02 - Detailed Instruction To Problem: [Employee Payment](https://tdquang7.notion.site/Project-Emloyee-payment-78ac0241bfea4e07b502020b0c20de86) 
 
> *See Solution at [Github Project Here](https://github.com/SmilinOwls/EmployeeSalary/)*

### 🏠 [Homepage](https://github.com/SmilinOwls/EmployeeSalary#readme)

## ✨ Objectives
   ### Main Target 
   - Understand, explain, implement four basic design patterns
        * Singleton
        * **Factory** (core design pattern in project)
        * Prototype
        * Builder
   ### Sub Goal
   - Practice On Handling Data Stream By `tuple<classs T1,class T2,..>` (when reading file **.txt**)
   - Validate Check: Indicate The **Error Line** Position In Text If Wrongly Formatted (bonus function)
   - Sort A Vector And Save As A Ranked List In **.csv** Format (bonus function)
  
## Prerequisites

- Visual Studio Code 2019 or latest versions
- Build, Compile & Run on `g++ -std=c++17 [..]` or above

  ### Small Tip:
    - Since VS 2017.3.5, there appears to be a drop down where you could specifically select C++17. 
    - Available options are described here: 
                        <p align='center'> <b> Under project > Properties > C/C++ > Language > C++ Language Standard) </b> </p>
    - ISO C++17 or C++20 Standard. msvc command line option: `/std::c++17` or `/std::c++20`
    

## Install

- Open Terminal (MacOS) or CMD Shell (Windows), then go on command line described below:
```sh
#Change your direction path to Desktop/ 
cd Desktop/
#Fork the project, clone this fork in a repo called EmployeeSalary
git clone https://github.com/SmilinOwls/EmployeeSalary/ EmployeeSalary
#Navigate to the newly cloned repo
cd EmployeeSalary/
```
## Usage

- Open file `.exe` in *Release* folder to run all functions to check wether all requirements are completely done
```sh
cd EmployeeSalary/Release
open EmployeeSalary.exe
```
- Then, a console application would be appearing to show all results. If you want to see any differences, just add/delete/change something you want in `November2021.txt` and run again for any interesting things you hope to show up 

## Run tests

1. Open file *November2021.txt* to make some mini tests on validating data with format
 * **Name valid:** <p>                   </p>
      ![name](https://github.com/SmilinOwls/EmployeeSalary/blob/master/Documents/img/name.png)
 * **Payment valid:**  <p>                   </p>
      ![payment](https://github.com/SmilinOwls/EmployeeSalary/blob/master/Documents/img/payment.png)
 * **Total valid:**  <p>                   </p>
      ![total](https://github.com/SmilinOwls/EmployeeSalary/blob/master/Documents/img/total.png)
2. Run every each of four above tests by running *EmployeeSalary.exe* or by command line `open EmployeeSalary.exe`
3. Wait a second, here are the results all printed out on console to notice about the error format on each specified line, in particular:
      |     Item    | Specified Error Fomat Message |
      |-------------|-------------------------------|
      | Name| ![name_error](https://github.com/SmilinOwls/EmployeeSalary/blob/master/Documents/img/name_error.png)  |
      |Payment| ![payment_error](https://github.com/SmilinOwls/EmployeeSalary/blob/master/Documents/img/payment_error.png) |
      |Total | ![total_error](https://github.com/SmilinOwls/EmployeeSalary/blob/master/Documents/img/total_error.png)|
      
## Author

👤 **NGO NGUYEN QUANG TU**

* Github: [@SmilinOwls](https://github.com/SmilinOwls "SmilinOwls")
* Student ID: 20120234
* Full Name: Ngô Nguyễn Quang Tú

## 📅 Working Progress

After project, we both appreciate our experience on our team-working time which we are so grateful for and proud of ourselves. We are on 200% of our ability way to have accomplished one as soon as possible. Hence, all requirements described in [Project Instruction](https://tdquang7.notion.site/Project-Emloyee-payment-78ac0241bfea4e07b502020b0c20de86) are completely met.

|Basic Requirements|Done Status|
|------------------|-----------|
|Read the file|Yes|
|Print out all the employees' information and the final payment for each employee.|Yes|

## Bonus Functions

Some bonus functions to check the wrongly-formatted line in file **November2021.txt** (validate name, payment, total) then indicate where that line is through showing a message on console with line index. If prgramm runs without no failure, based on their own **Final Payment** a <i> .csv </i> ranked list will be released demonstrating the TOP highly-paid employees sorted DESC with ranked order. 
 
> *Sample Ranked List of T.O.P Highly-Paid Employees:*

<div align='center'> <img alt='rankings' src="https://github.com/SmilinOwls/EmployeeSalary/blob/master/Documents/img/rankings.png"/> </div>

## 💯 Expected Grades

|Student ID| Workload |  Fulfilled-Work Percent | Subjective Grade |
|----------|----------|-------------------------|------------------|
|20120234  | an author of README.md, mainly responsible for most of aspects of project/solution (Source code, Release, Documents/img), build pattern like  `SingleTon`, `Factory`, `Prototype`, bonus function  ..  |       100%          |          9.5        |
|20120205  |  draw class diagrams, write a detailed report, write test sample and debug, produce `Builder` pattern, check data valid ...        |               100%          |         9.5         |

## 🎥 Demo Video 

> Go On [Youtube]() To See Project Demo

## 🤝 Contributing

Contributions, issues and feature requests are welcome! You can also take a look at the [contributing guide](https://github.com/SmilinOwls/EmployeeSalary/blob/master/CONTRIBUTING.md)

## Show your support

Give a ⭐️ if this project helped you!

## 📝 License

Copyright © 2022 [TU NGO NGUYEN QUANG](https://github.com/SmilinOwls).<br />
This project is [MIT](https://github.com/SmilinOwls/MockStudentDataGenerator/blob/master/LICENSE) licensed.

***
_A ton thanks to [**kefranabg**](https://github.com/kefranabg) for helping me foster a great interest in creating a powerful [readme.md](https://github.com/SmilinOwls/MockStudentDataGenerator/blob/master/README.md) ❤️_
