# AED Simulator
## Overview

This project is an implementation of an Automated External Defibrillator (AED) simulator developed using C++ and Qt Designer to help first responders and healthcare practitioners learn how to use a defibrillator. Through this simulation, rescuers can practice using a defibrillator and gain proficiency with all the different scenarios that may arise for a patient requiring cardiac assistance. We modelled the essential features and use cases of a defibrillator in our application based on the Zoll AED Plus instruction manual in order to provide a high level of fidelity between simulation and real-world practice.

## Functional Requirements & Features 

1. **The AED Application interface contains buttons, indicator light, audio, and display**.
   
The Qt's MainWindow connects the slots to the
function that will simulate its behaviour. The
mouse allows users to press the buttons to see
the display flash different messages and hear
audio prompts. One button simulates the
electrode pads being put on patient.

2. **The battery of the AED is dependent upon the number of shocks emitted and the patient type.**

The application has buttons to press, which
decides the scenario of the patient. The
battery depletes whenever a shock is given,
and since more power is needed for an adult,
the battery depletes faster when an adult
receives the shock compared to a child.

3. **A timer is displayed and starts as soon as the AED powers on until the AED powers off.**

The MainWindow class has a little timer using
QTimer that keeps track of how long the
treatment takes until the AED is done or the
battery dies.

4. **The AED's battery must be replaced when the battery is depleted or the self-test fails.**
   
The MainWindow class has a button
designated for replacing batteries which links
to a function that sets the battery percentage
back to 100%.

5. **The AED application provides real-time CPR feedback.**

The application provides visual and audible
feedback on the quality and rate if chest
compressions during CPR. If the compressions
are less than two inches then the display will
say to "push harder."

6. **The AED's electrode analyzes the patient's heart rhythm to determine a shockable rhythm.**

The electrode pads monitor the heart's
electrical activity to determine whether a
shockable rhythm is present. The shockable
rhythm is ventricular fibrillation and ventricular
tachycardia.

7. **The AED delivers a shock after a shockable rhythm is identified with different intensity levels.**

The AED's pads will analyze the heart rhythm,
and depending on whether the patient is an
adult or a child it will deliver a shock of higher
or lower intensity.



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

