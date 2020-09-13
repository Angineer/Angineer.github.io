---
title:  "Marble Machine"
status: "on hold"
---

This is a project I worked on for Build18 at CMU with my friend Matt and couple other graduate students. It is a machine that plays songs on a xylophone by dropping marbles on it. It was inspired by the famous machine built by Wintergatan.

Related info:

* [Build18](http://www.build18.org/)
* [Wintergatan Marble Machine](https://www.youtube.com/watch?v=IvUU8joBb1Q)

### Design
I wasn't involved in the original design of the project, but this is what the (still unassembled) hardware looked like:

![](/pictures/Marble_HW_S.png)

It is built from a sandwich of acrylic plates and has a large hole in the top where you can pour marbles in. The middle plate (the clear piece on the ground in the picture) has space for the marbles to fall down into slots. Each slot has a hole at the bottom, covered by a servo horn that is attached to a mini servo. When the servos move, the hole will be uncovered and marbles will fall out, landing on the xylophone which is placed below. Each hole corresponds to a single key on the xylophone.

The servos are operated by the [Adafruit 16-Channel Servo Hat](https://www.adafruit.com/product/2327).

Conceptually speaking, the software has two components:
* A component that pulls audio from the computer's speakers, runs an FFT on it, and outputs a set of notes in a format that can be sent to the machine
* A component on the machine to read in notes and actuate the servos to drop the correct marbles with the correct timing

### Build Log
I joined the project after the initial design phase to help with some of the coding aspects, specifically the code to operate the servo hat. The hat has a lot of example code available, but it was a tad difficult getting the correct version. Although the Adafruit website points to [this repo](https://github.com/adafruit/Adafruit-Raspberry-Pi-Python-Code), the most up-to-date code can be found [here](https://github.com/adafruit/Adafruit_Python_PCA9685).

After perusing the example code, we created some functions to operate the servos using a 16-bit mask with each bit representing a servo state. You can see the code on my [github](https://github.com/Angineer/marble-machine).

While I was working on the servo code with Matt, our other teammate was working on MATLAB code to process the audio into individual notes. The result of that can also be found on the github repo.

#### January 19, 2018
Today was demo day. By design, this build-a-thon is quite rushed, and we were cutting and assembling pieces right up to the deadline. Unfortunately, this meant we didn't have a chance to test the entire system before the demo.

We ran into the following problems during the demo:
* The MATLAB code didn't run fast enough to operate in realtime. We were hoping to play a Youtube video and hear the xylophone produce the audio simultaneously, but we had to accept a pre-generated piece of audio instead.
* One of the acrylic pieces cracked during assembly, so the holes for the marbles didn't align properly. We tried to drill them out to fix it, but ended up cracking the pieces even more.
* The center acrylic piece also turned out to be too thick. We used a thicker piece to allow the marbles to move freely, but they ended up stacking in such a way that they sometimes got stuck. As shown in this diagram by [Wolfram](http://mathworld.wolfram.com/CirclePacking.html), we expected the left-hand side but got the right-hand side:

![](http://mathworld.wolfram.com/images/eps-gif/CirclePacking_1000.gif){: .center-image }
* The angle of the machine wasn't steep enough for the marbles to fall through the holes. This may not have been an issue if the alignment and stacking issues were fixed.

In the end, we could show that the concept worked by playing a few notes, but we couldn't actually play a full song.

#### Mar 16, 2018
We've made the following upgrades:
* Soldered headers on the hat to help with connections to the Pi
* Redesigned the middle plate to prevent balls from falling out the sides
* Recut the middle plate from a piece of 1/4" wood

The newly reassembled machine:

![](/pictures/Marble_Reassembled1.jpg) ![](/pictures/Marble_Reassembled2.jpg)

After applying these upgrades, we ran a simple test, which you can see [here](https://youtu.be/z4I49aJYiOA). The upgrades are definitely an improvement, but we are now able to see some other issues in the design which we can tweak. Specifically, the wiring needs some organization, the servos need to be realigned, and the balls are still catching at the bottom of the chute. We also are planning on making it easier to add the balls and catch them while the machine is running.
