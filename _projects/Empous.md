---
title:  "Empous, the Empire Simulation Game"
status: complete
---

I\'ve always been interested in coding as a hobby and have learned various programming languages in my free time. It started with BASIC, which I learned on the TI-83 calculators that we had in high school. At the time, I mostly wanted to make video games and I made a couple halfway-decent button mashers. My friend Ryan also made a very cool game called Empous. It was an empire management game, and I was always impressed with how complex it was, given that it ran on a tiny little calculator screen.

Later on, I decided to learn Java from a free online book. As I worked through it, I wanted a project on which to practice my new skills. So I decided to remake Empous for the PC.

Related info:

* [The online book I used to learn Java](http://math.hws.edu/javanotes/)
* [Source code on Github](https://github.com/Angineer/Empous)
* [Download the game](/resources/Empous.jar)

### Design

The design is based on the original game with a couple extra pieces for visual flair. This is the title screen, which is almost a direct copy of the original:

![](/pictures/EmpousTitle.png)

Essentially, you are the leader of an empire, which you must manage by building different zones (residential, industrial, commercial) and setting government policies. If your populace reaches the maximum level of happiness, you win.


On top of this framework, I added some new GUIs, some extended government policies, and a tongue-in-cheek map that shows the extent of your empire. In terms of gameplay, the main addition is a personal assistant named Jennifer. She gives you status updates and just generally acts as a narrator as you play through the game (because a lot of it is kind of nonsensical).

### Build Log

#### 2011
I started the game with only a couple ideas of what I wanted to do and a limited idea of how object oriented programming worked. But the basic concepts were enough to allow me to lay out the general shape of the different game components and the basic flow of the turns.

I got far enough that the game was basically playable, but only on the machine on which I was coding. I took a few weeks to get everything tied together. When I tried to export it to play on another machine, I ran into a lot of error messages that required understanding I just didn't have at the time. So, satisfied that I could at least play through on my laptop, I put the project on the shelf for a while.

#### 2015
Eventually, I came back to the game and decided to get it working. My additional knowledge that I gained in the interim was enough to dig into the errors and fix them. Surprisingly (or not), a lot of the issues were simply bad file paths from when I had moved the source code around.

Another thing happened in the meantime: Ryan created yet another iteration of Empous that could be played on a mobile device. Whereas I had tried to recreate the original gameplay, Ryan actually made a new version of the game that was much more enjoyable. You can see the source code on [his github page](https://github.com/Slruh/Empous-Control-The-World).

So I basically wrapped things up and got everything working, then packaged the game up as a jar file for anyone to play (see link above). I can't say that the finished game is a masterpiece, but I definitely learned a lot about OOP and can hold my own when working in Java now.
