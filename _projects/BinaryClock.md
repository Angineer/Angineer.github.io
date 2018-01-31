---
title:  "Binary Clock"
status: complete
---

A binary clock is just like a regular clock, but it displays the time in a binary or psuedo-binary format. I learned about the concept at some point in high school and toyed around with some app versions on my computer. This project was an attempt to capure the concept and make it into a pleasing piece of art using an Arduino.

Related info:

* [Binary Clock info on wikipedia](http://en.wikipedia.org/wiki/Binary_clock)
* [Blog that my design is based on](http://blog.thelifeofkenneth.com/2010_02_01_archive.html)

### Design

I did some research into other builds that people had done and decided to base my design on this blog that I found: [Ken\'s Blog](http://blog.thelifeofkenneth.com/2010_02_01_archive.html)

The core components are

* ATMega328 chip from an Arduino Uno (I used an old one with a fried pin) for the logic
* DS3234 Real Time Clock breakout from [Sparkfun](https://www.sparkfun.com/products/10160) for keeping the time
* 3 LED drivers for powering the LEDs

Most of the design follows Ken\'s blog, especially the schematics. However, I made a few customizations:

* Instead of an LED array, I used individual red, blue, and green LEDs for the hours, minutes, and seconds, respectively
* I was building this as a permanent fixture, so I soldered it to a PCB once I had it working on the breadboard and placed it inside a project box from Radio Shack
* I used a basic wall wort AC adapter for powering the Arduino and the LED drivers

To read the clock, you have to be able to convert the numbers from binary into decimal. My clock has a \"Binary Coded Decimal\" setup. A tutorial on what that means and how to read it is here: [WikiHow](http://www.wikihow.com/Read-a-Binary-Clock)

The DS3234 is a very cool chip. It is accurate enough that, using this design, I never foresee having to reset it. Because I used the breakout board from Sparkfun that includes a backup battery, I can also unplug the clock and not worry about losing the time. Simply plug it back in and it will have the current time on it. The board is a little expensive for such a simple project, but I installed it using a socket so if I ever decide to use it for another project, I can repurpose it.

My original design had an issue because I did not allow the user to provide any inputs to the microcontroller without taking the entire clock apart. This meant that setting/adjusting the time required popping out the DS3234 and reprogramming it with a separate Arduino. I ended up fixing this by adding a button on the side of the clock to advance the time (very useful for daylight savings).

### Build Log

#### August 2012
All the electrical parts are in and I have them attached to a breadboard for testing/coding. Here\'s a picture of the setup (you can see the different components laid out, and the seconds and minutes working):

![](/pictures/Clock_Breadboard.jpg)

Here is my code: [Code](/resources/Clock_Run.ino)

#### September 2012
I went and picked out a project box to put it in, so I\'m ready to start soldering things to the PCB. I\'m not going to say that I\'m a master solderer or circuit designer, so it\'s a little bit messy. But hey, it works:

![](/pictures/Clock_Guts.jpg)

Drilled a few holes, added a strain relief, and viola: a finished binary clock. It\'s now happily telling time on my desk at home.

![](/pictures/Clock_Final.jpg)

#### June 2013
After having the clock around for a while, I have had some time to reflect on the design. There are a few drawbacks to the way that I built it:

* The time must be set manually. This is fine for most of the year, as the DS3234 keeps time extremely accurately. However, whenever daylight savings time changes, I have to pop the box open and change things forward or backward an hour. I\'ll probably add a button to do this in the future
* The brightness of the LEDs prevents me from keeping this anywhere near the bedroom, as it\'s too bright to sleep next to. I think this could easily be fixed with a potentiometer that would look nice on the front of the box.

In general, I am very pleased with the outcome. It makes a great clock and piece of art for friends who don\'t have any interest in learning binary.

#### January 2, 2015

The effort required to update the clock every 6 months finally got to me and I added a button to change the time. I installed one pushbutton that advances the time when you hold it down and one potentiometer to adjust the brightness:

![](/pictures/ClockButtons.png)

The pushbutton works great with a little code update: [new code](/resources/Clock_Run_Update.ino). The potentiometer does dim the lights, but not quite in the way I expected. I added it in series with all the LEDs, assuming that it would simply limit the current and dim each light proportionally. However, it dims the blue lights much more than the red or green and, more interestingly, causes the blue lights to dim when other lights are on (e.g. 5 green lights on causes the blue to be much more dim that 1 green light on). I guess I never claimed to be an electrical engineer\...

Anyway, it is much improved and I\'m happy with the outcome. I may investigate the dimmer switch further, but it\'s much less bothersome than the time update issue was.
