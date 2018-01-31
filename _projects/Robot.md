---
title:  "Service Robot"
status: ongoing
---

This robot will take orders for food and drink and deliver them to you.

### Design
I originally started this as a project with my college friends. We envisioned a robot that could meet the following requirements:
* Deliver food requested by users from a home base to the users\' locations
* Basic user interface with variety of options
* Be able to navigate an interior space and avoid obstacles
* Built from scratch wherever possible (avoid using kits)

In the beginning, we wanted to fund the project by redeeming containers on campus (as there was a huge surplus of them). For the most part, we were successful. We bought a set of basic parts, including the chassis, servos, DC motors, battery, and some of the power management and motor driver circuits just from the cash we got redeeming cans and bottles. However, the robot never really got to a functional point while I was in college.

After I graduated (2011), I got the time to design and build more of the steering hardware, and the robot starting driving around: [The steel box design](https://youtu.be/j0Zf290-C6U)

The main issue with this design was the weight of the robot. The chassis we had started with was a gigantic steel box that put some strain on the driving system. In addition, the steering hardware was fairly shoddy.

After a lot of work on the project, but not a lot of progress toward a concrete goal, I added some more extensive design information. First, I've created a set of goals and requirements for the project:

_Objectives_
* Offers variety of food and drink
* Delivers items on demand
* Navigates throughout home
* Maintains self when not engaged

_Performance Requirements_
* Ordering system available via any web browser on network 24/7
* Delivers order within 1 minute
* Delivers to at least 10 predetermined waypoints
* Offers 2 drinks and 4 types of food
* Provides current status of pantry

_Non-functional Requirements_
* Does not spill food
* Stops when an obstacle is in the way
* Can navigate variety of terrain: carpet, wood floor, tile, thresholds
* Is pleasant to be around/has personality/makes funny quips
* Recharges battery automatically at home base

I also created a cyber-physical architecture to identify all the subsystems and components and clarify how they interact with each other:

![](/pictures/CyberPhysicalArch.png)

Finally, I've created a work breakdown based on the requirements and architecture that lays out exactly what work needs to be done in order to see the project through to completion. I converted this directly into a schedule so I have deadlines to ensure I stay on top of everything.

### Build Log

#### April 24, 2014
I\'m finally getting back into working on this project. The 2 areas I\'m focused on right now are getting the steering hardware built and finalizing the circuitry. Here are a couple pics of testing the motor driver circuit and (finally) soldering it to a real circuit board:

![](/pictures/MotorTest.png)
![](/pictures/PCBMotorCircuit.png)

You can also see that the new chassis is a plastic box. This is both much lighter than the steel one and allows you to see what\'s happening inside, which is kind of cool.

#### March 13, 2015
Although I haven\'t posted about the robot in some time, I\'ve been making some small progress in the last year. Mostly, I\'ve designed and 3D printed a steering assembly:

![](/pictures/Steering1.png)
![](/pictures/Steering2.png)

Currently, it\'s really a piece of crap, but I am trying to just get the robot back up and running again, then I will work on fine tuning things. In addition, I recently undid the progress in my last post by blowing up the motor driver chip. So now I\'m in the process of buying and resolding that circuit. It\'s a pain when you do something so dumb, but I guess that\'s part of learning:

![](/pictures/Whoops.png)

In general, things are coming together, even with the setbacks, and I think that the robot will be driving again pretty soon.

#### April 28 2015
As promised, it is working again: [Robot Test](https://youtu.be/zMsPi7ghxFU).

I rewired the driver circuit and hooked up the two servos, plus I did some organizing of components in the box and added some strain reliefs. I also included a key switch, so you have to have the keys to turn it on (and off). I also bought a battery charger so I can have some extended testing sessions without worrying about draining it down too low for long periods at a time.

#### July 26, 2015
More setbacks recently: I left the robot in the car when I was at work one day and learned that the PLA-printed steering assembly tends to melt even in moderate temperatures. So I\'m going to have to find a long term solution and print a new one in the meantime. In addition, I hooked up all the motors and sensors in the box and started testing only to find out that somewhere along the line, I didn\'t check my circuitry closely enough. When the DC motors were turning, it caused noise in the servo power that made them jitter like crazy.

I have overcome the power issue by rearranging how I ran the power through the system. I originally had a switching voltage rectifier to bring the 12V battery down to 6V, which I was going to use to power the servos and the Arduino. I added a lot of capacitors at various points throughout to try to eliminate the noise in that circuit, but couldn\'t beat it. It then occurred to me to try to run the 12V directly into the Arduino, then run the servos off the Arduino\'s 5V pin. As it turns out, that was exactly what I needed.

As for the melted steering, I\'ll have to wait until I can print a new one. I have some ideas about redesigning it, but I need to think more about how I want to do that.

#### August 30, 2015
I\'ve re-printed the steering. In addition to printing out new parts, the size of the connector piece (what would be the rack in an equivalent rack and pinion design) was too small, so I kludged together a new one out of the multiple prototypes that I had printed already.

With the power and steering figured out, I can finally play around with the programming to see what I can make the robot do. I currently have it performing a basic obstacle-avoidance algorithm that seems to work pretty well. It can drive itself around a room and generally not run into anything. However, I\'ve noticed a different problem now. After a minute or two, the Arduino starts to reset every few seconds. If I turn the power off, wait a minute, and then turn it back on, it will run again for a minute and then do the same thing. I think that either the battery is getting worn out or I\'m tripping a thermal shutdown--perhaps my power management solution is not really what I needed after all.

#### October 11, 2015
A couple of updates. First, it was indeed the thermal shutdown on the Arduino that was causing the robot to stall. The fix, as it turned out, was to run the power through the switching regulator (down to 6.5V) and <i>then</i> through a linear regular to get to 5V. That was sufficient to run the servos and keep out the noise from the DC motors.

Second, I was annoyed that the robot was spending so much time waiting in the [existing obstacle avoidance algorithm](https://www.youtube.com/watch?v=f8gt-79XD8o). I wanted it to run constantly, but the DC motors were too fast for the robot to have time to look around with its head servo. I wasn\'t sure if I could simply run PWM into the H-bridge circuit, but I gave it a shot and it worked well. [The dog](https://youtu.be/5nOurTZPQm4) isn\'t sure he approves though...

I think the robot is finally at the point where I have sufficient hardware built to allow me to focus more on the software and design a little intelligence into it. I would still like to work on the hardware more in the future, but it feels like an accomplishment that it can drive around by itself and looks like a robot, however simple it is.

#### April 2, 2016
Since the last update, I brought the robot to a local hackerspace and a [maker program that I started at the local library](/makerspace.html). Generally, I have received positive feedback. My only real concern has been that the steering assembly is too weak for the weight of the robot. The lead acid battery really weighs it down.

I thought it was fun designing and building the steering, but in order to keep things moving forward, I replaced the assembly with a simple caster:

![](/pictures/Steering3.png)

While making the code update to implement the new steering, I also changed the algorithm a little. Before, any object caused the robot to back up and turn a specific amount; I added randomness by changing directions when there were no obstacles detected. Now, the amount of time that robot backs up is random, so, after he avoids an obstacle, the new direction he faces is never the same: [New Algorithm](https://youtu.be/w-Gu0EnD35M)

#### January 12, 2018
The robot has been on hold for a little bit while I've been in school getting my master's degree in [Robotic Systems Development](https://mrsdprojects.ri.cmu.edu/2016teami/). Luckily, this means that I can apply some of my new skills to this project.

The main thing that I've gained from the master's program is a perspective on systems engineering. The basic philosophy behind systems engineering is that you should design a system before you start implementing it. This will save you time and money by illuminating obscure issues early and it will ensure that all system components are going towards fulfilling a set of clear system requirements. Without this perspective, projects can tend to get bloated or behind schedule (a symptom I've noticed in some of my past projects that weren't planned out very well). So, with that in mind, I've created a set of design documents that I think will help me complete this robot by the end of the year. You can see the updates in the Design section above.
