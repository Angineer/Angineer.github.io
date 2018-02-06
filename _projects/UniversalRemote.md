---
title:  "Universal Remote"
status: ongoing
---

Automation is one of my favorite applications of technology. I feel like there is a certain magic to it--when you do the same thing in less time with less effort, it's almost like you're getting it for free. This project is a device that I am designing to help automate some aspects of home life.

The main idea is to create a basic building block of home automation by combining simple existing tools. Once you have that single, reliable unit of automation, you could combine it into any number of more complex projects. I call it a universal remote because it should be able to accept a set of basic inputs and control any arbitrary ("smart") devices in your home through a very simple API.

Related info:

* [Robogaia relay board](http://www.robogaia.com/4-relays-raspberry-pi-plateshield.html)
* [LIRC](http://aron.ws/projects/lirc_rpi/)
* [fauxmo](https://github.com/makermusings/fauxmo)

### Design
This project started out as a component of my [Home Theater PC project](HomeTheaterPC.html) because I wanted some way of turning on my TV and computer remotely. In the research for that project, I found a neat [relay shield](http://www.robogaia.com/4-relays-raspberry-pi-plateshield.html) that interfaced with the Raspberry Pi. The shield made it super simple to switch any device on and off using a Python script.

After playing with the relay shield for a little while, I began to think about this component more abstractly. I envisioned a device that could be simply installed on the network and respond to a wide variety of inputs, then use those inputs to control any other network-connected device (a sort of super-universal remote). Here is my conceptual drawing of what the universal remote would look like:

![](/pictures/UR_Concept.png)

The fundamental components are:
* A Raspberry Pi for the brains
* An Arduino Uno for managing the sensors
* A suite of sensors
  - IR for remote controls
  - Infrared motion sensing
  - Python-powered HTTP polling
* A set of Python modules for talking to network-connected devices
* A relay shield for local hardware switching

### Build Log
#### Early 2015
Because this project started from a Raspberry Pi, I focused my initial effort on getting everything working on that platform. What I discovered early on, however, was that the Raspberry Pi's GPIO can be very limited by the complex nature of the operating system. This was especially true with the IR remote control.

There are a handful of tools that let you use an IR remote with Linux. The one that I found easiest to use was [LIRC](www.lirc.org). It has been used by a lot of people and has good documentation and [tutorials](http://www.instructables.com/id/Add-Infrared-Interface-to-Your-Raspberry-Pi/#step1). I followed the instructions to get it set up and it generally worked really well. However, once I left it running for a little while, it started showing delays or even unresponsiveness.

During this time period, I was also frequently visiting the [Berkshire County Technology Group](https://www.meetup.com/Berkshire-County-Technology-Group/), a makerspace in Western Mass. They were working on a robot that used a Raspberry Pi brain, but they were using Arduinos for controlling the actuators and communicating with the Pi via serial. It occurred to me that this was a good way to ensure real-time control for the time sensitive components while still using the general computing power of the Pi. So I adopted this in my universal remote design to great success. Indeed, because Arduino already has a built-in IR library, I didn't even have to write software to integrate the remote controls and I could use a stock version of Raspbian on the Pi.

#### June 1, 2015
Here is a picture of the current setup:

![](/pictures/UR_Box1.png)
![](/pictures/UR_Box2.png)

I currently have two sensors connected:

* [Sparkfun IR sensor](https://www.sparkfun.com/products/13285)
* [38kHz IR receiver](http://www.digikey.com/product-search/EN?mpart=TSOP38238&vendor=751)

The first is a passive infrared sensor for motion detection, like the ones used in typical security systems in an office setting. The other is an infrared sensor that is designed to detect signals from a remote control, like the ones for your TV or DVD player.

The current application is in our basement. We have a roommate that lives down there, so when he goes downstairs at night, he has to turn the light on. However, there is no lightswitch at the bottom of the stairs to turn it off again. With the IR proximity sensor, the light will turn on when it detects someone coming down the stairs. And then, when someone is coming up the stairs in the middle of the night, the light needs to turn on again. For this, I have adapted a DVD controller from a player that we don\'t use any more. 

#### July 26, 2015
I bought a wifi dongle to go with the Pi to allow me to control it over our network. This makes developing the system much easier and lets me play around with things a little more. It also allowed me to put some of the [code up on Github](https://github.com/Angineer/Automation) for safekeeping. I\'ll probably extend the capabilities in the future to have the Pi send out additional signals to other devices; we\'ll see what I can brainstorm.

#### February 6, 2018
The magic box has been working great and has seen a few minor upgrades. First, we moved to Pittsburgh, so the box has changed its role in our house. Now, instead of working in the basement, it is in our living room and is used to control a lamp and set of string lights. Because it is no longer solving the light switch problem, I've disabled the motion sensor.

Second, in order to make things a little safer and to increase the box's utility, I've replaced the power cord. Before, I was using an old two-prong extension cord. Now, I am using a three prong cord, making the device a little safer and allowing us to plug a variety of newer devices into the controller.

Third, I've upgraded the computer to a Raspberry Pi 3, which comes with built-in wifi and bluetooth. The wifi is more reliable than the dongle I was using, and the bluetooth opens up new possibilities for interacting with devices in the future.

Also, since the last update, I have gained a new piece of technology that is basically asking to be integrated with this project: an Amazon Echo Dot. Amazon has a great API and set of documentation to create your own Alexa skills, including ones for controlling smart home devices. When I started working on integrating Alexa with my universal remote, I dove right into the Amazon tutorials.

It turned out that the components of an Alexa skill, while not that complex, do require a lot of careful configuration, so it bogged me down for a while. Even though I have had the Dot for a year now, I haven't had the time to dive in and solve the issues until recently. I managed to create the new skill, set up a lambda funtion in AWS, enable authorization, and start testing, but I didn't know how to get the Dot to detect my device on the network. After some googling, I found [Fauxmo](https://github.com/makermusings/fauxmo), a Python script that basically lets any computer emulate an Alexa-compatible WeMo device.

I downloaded the script, ran it on my Raspberry Pi, and it worked out of the box. After a moment's pause, I also realized that it wasn't even using the skill that I had spent so much time setting up. In fact, it turned out that this one script was all that is needed to control a computer from your Echo device! Reveling in the power of this newfound tool, I integrated it into my existing code and got it working with the relay shield. Now all I have to do is say "Computer, turn on the lights" and the remote responds accordingly.
