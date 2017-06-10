---
layout: project
title:  "Universal Remote"
date:   2015-11-17 16:16:01 -0600
categories: projects
---

I had been playing with a few different technologies for home automation and found a good application for them, so I designed what I call the Universal Remote, which is universal in a broader sense than most remotes out there. 

#### Requirements:

* Small form factor
* Use a variety of methods for input signals
* Control a variety of hardware and software

#### References:
This project relies very heavily on a number of existing technologies that other people have developed:

* ![Link](URL)
* Raspberry Pi
* <a href="http://www.robogaia.com/4-relays-raspberry-pi-plateshield.html">Robogaia relay board</a>
* <a href="http://aron.ws/projects/lirc_rpi/">LIRC</a>
* A few Python libraries
* A myriad of online tutorials

#### Design Log

##### June 1, 2015
The basic setup is as follows: The Raspberry Pi is setup in a box on your home network. Connected to the Pi is a relay board that can be controlled by the Pi's GPIO pins. Also attached to the Pi are sensors that allow for a variety of inputs.

I currently have two sensors connected:

* <a href="https://www.sparkfun.com/products/13285">Sparkfun IR sensor</a>
* <a href="http://www.digikey.com/product-search/EN?mpart=TSOP38238&vendor=751">38kHz IR receiver</a>

One is a passive infrared sensor, like the ones used in typical security systems in an office setting. The other is an infrared sensor that is designed to detect signals from a remote control, like the ones for your TV or DVD player.

The current application is in our basement. We have a roommate that lives down there, so when he goes downstairs at night, he has to turn the light on. However, there is no lightswitch at the bottom of the stairs to turn it off again. With the IR proximity sensor, the light will turn on when it detects someone coming down the stairs. And then, when someone is coming up the stairs in the middle of the night, the light needs to turn on again. For this, I have adapted a DVD controller from a player that we don't use any more. I setup it up using LIRC, a system developed for IR input on Linux, which is actually quite easy because there are a <a href="http://www.instructables.com/id/Add-Infrared-Interface-to-Your-Raspberry-Pi/#step1">bunch of tutorials online</a>. It's pretty basic, but it gets the job done and is a pretty neat use of simple technology.

##### July 26, 2015
I bought a wifi dongle to go with the Pi to allow me to control it over our network. This makes developing the system much easier and lets me play around with things a little more. It also allowed me to put some of the <a href="https://github.com/Angineer/Automation">code up on Github</a> for safekeeping. I'll probably extend the capabilities in the future to have the Pi send out additional signals to other devices; we'll see what I can brainstorm.
