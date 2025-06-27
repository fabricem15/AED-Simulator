# AED Simulator
## Overview
This project is an implementation of an Automated External Defibrillator (AED) simulator, developed using C++ and Qt Designer, to assist first responders and healthcare practitioners in learning how to use a defibrillator. The system enables users to select multiple test cases and simulate device interaction based on various patient conditions.

###  Design decisions

***Classes***

We decided to encapsulate the behaviour of an AED in 3 classes: the AED, Battery, and Electrodes. The Battery class sends signals to the AED when its charge drops below an operational amount and receives instructions from the AED class to deplete itself after every shock. Secondly, the Electrodes class is used to detect the placement of electrodes and send electric shocks to the patient as instructed by the AED. Lastly, the AED class guides the user through each stage of the resuscitation process using voice prompts on a display and tells the user what to do based on the patient’s heart rhythm. Furthermore, the AED performs checks to ensure that the battery is sufficiently charged to deliver the shocks and that the electrodes are properly placed on the patient’s bare chest to resuscitate them. The battery and electrodes classes are included in the AED as member variables so that it can easily check the state of each class and display the appropriate voice prompt. We also created a Patient class to simulate all the different conditions a patient can be in, such as the shockable and non-shockable heart rhythms, resuscitation and flatlining, and the adult or child type. 

***Design patterns***

We implemented the Observer design pattern using Qt’s signals and slots mechanism. For the most part, the MainWindow class is the subscriber that updates the user interface based on signals from the patient, battery, electrodes, and AED. Every other class is a publisher that sends messages to the MainWindow. This allowed us to handle the logic separately in each class and send a signal to update the UI after the internal state changes. 


## Sequence diagram 
![COMP3004_finalproject_UMLdiagram drawio](https://github.com/user-attachments/assets/8c253f33-bf3b-4565-9afe-75fa05f14652)

## Demo video
https://youtu.be/VmMG_T7sNn0


## GUI 
Our GUI features a high-fidelity prototype of the AED device that allows the user to interact with an accurate simulation of the real device. The main features include: 
1. A timer for the running device
2. A progress bar for the battery health
3. A progress bar to model the compression depth
4. Labels to model flashing lights
5. Buttons for user actions
6. A slider for setting the compression depth.

<img width="1212" alt="image" src="https://github.com/user-attachments/assets/523aa401-019f-4a0e-8ee6-b2ceae6ffa19" />


## Setup Instructions 
1. Download or clone the source code in a Linux environment
2. Open Qt Creator and navigate to the repository location in your file system
3. Launch the program in Qt to interact with the GUI and run the simulation

**Note that it is recommended to use a larger screen to see the full GUI window. You may run into scaling issues when running it on a regular laptop screen.**

## Contributions
1. Fabrice Mikobi: UML, UI, Program Logic
2. Yasmin Hersi: State Diagram, Traceability Matrix, Program Logic
3. Fatima Ferdous: Use Case Diagram, Sequence Diagram, Program Logic 

