---
title:  "Service Robot"
status: ongoing
---

This is a butler-style robot that takes orders for food and drink and delivers them to you.

### Design
#### Origins
I originally started this as a project with my college friends. As engineering students, we were into pretty nerdy topics. One time when we were hanging out, the idea came up of building a robot. Although it started out as just a fun idea, we eventually convinced ourselves that we had the skills to really make something like this happen. Once we committed to actually doing it, we designed a robot that could do the following:

* Prepare mixed drinks and deliver them from a home base to the users' locations
* Provide a basic user interface
* Be able to navigate an interior space and avoid obstacles
* Be built from scratch wherever possible (avoid using kits)

With those basic ideas, we came up with a list of parts, including motors, a battery, and some valves. At this point, we were still pretty naive about how things would all come together; I was of the mind that once we had all the components, the robot would pretty much assemble itself. In retrospect, we had no idea how long a project like this would take and how expensive it would be.

As poor college students, we didn't have nearly enough money to buy all the parts we decided to get. We brainstormed and came up with the idea of funding the project by redeeming beverage containers on campus (as there was no shortage of those). Using that money and some small contributions from our own pockets, we bought servos, DC motors, a battery, and some of the power management and motor driver circuits. However, we didn't get the chance to really put all the components together into a functional platform. Also, some mixup with the valves that I ordered resulted in them never getting delivered, so the drink mixing component unwittingly took a backseat to the mobile platform.

So at this point, the design was really nothing more than some components and the belief that all the integration would come to us naturally. Here is the list of components that we bought:

* 1 x 12V Lead Acid Battery
* 2 x 322HD Hobby Servos
* 2 x 12V Jameco DC motors
* 2 x Maxbotix Ultrasonic Rangers

One main issue I ran into during this phase was the weight of the robot. The chassis we had started with was a gigantic steel box that put some strain on the drive motors and steering hardware.

#### Some Added Perspective
After a lot of work on the project, but not a lot of progress toward a concrete goal, I added some more extensive design information. First, I created a set of goals and requirements for the project:

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

Next, I created a cyber-physical architecture to identify all the subsystems and components and clarify how they interact with each other:

![](/pictures/CyberPhysicalArch.png)

Finally, I created a work breakdown based on the requirements and architecture that lays out exactly what work needs to be done in order to see the project through to completion. I converted this directly into a schedule so I have deadlines to ensure I stay on top of everything. You can see the spreadsheet here: [work breakdown](https://www.dropbox.com/s/6b3l2dih5ho3b7p/Work%20Breakdown.ods?dl=0).

### Build Log

#### 2011
After I graduated college, I used my spare time to design and build the initial steering hardware. My goal was simply to get the robot driving around, which I accomplished: [The steel box design](https://youtu.be/j0Zf290-C6U). As you can probably tell, the steering hardware was fairly shoddy, mostly because I didn't have access to any tools to machine it properly.

#### April 24, 2014
I'm finally getting back into working on this project. The 2 areas I'm focused on right now are getting better steering hardware built and finalizing the circuitry. The motor driver is an L298 H-bridge circuit. Here are a couple pics of testing the motor driver circuit and (finally) soldering it to a real circuit board:

![](/pictures/MotorTest.png)
![](/pictures/PCBMotorCircuit.png)

You can also see that the new chassis is a plastic box. This is both much lighter than the steel one and allows you to see what's happening inside, which is kind of cool.

#### March 13, 2015
Although I haven't posted about the robot in some time, I've been making some small progress in the last year. Mostly, I've designed and 3D printed a steering assembly:

![](/pictures/Steering1.png)
![](/pictures/Steering2.png)

You can see that it is like a rack and pinion but instead of a gear, the rack is directly connected to a servo. Currently, it's really a piece of crap, but I am trying to just get the robot back up and running again, then I will work on fine tuning things. In addition, I recently undid the progress in my last post by blowing up the motor driver chip. So now I'm in the process of buying and resolding that circuit. It's a pain when you do something so dumb, but I guess that's part of learning:

![](/pictures/Whoops.png)

In general, things are coming together, even with the setbacks, and I think that the robot will be driving again pretty soon.

#### April 28 2015
As promised, it is working again: [Robot Test](https://youtu.be/zMsPi7ghxFU).

I rewired the driver circuit and hooked up the two servos, plus I did some organizing of components in the box and added some strain reliefs. I also included a key switch, so you have to have the keys to turn it on (and off). I also bought a battery charger so I can have some extended testing sessions without worrying about draining it down too low for long periods at a time.

#### July 26, 2015
More setbacks recently: I left the robot in the car when I was at work one day and learned that the PLA-printed steering assembly tends to melt even in moderate temperatures. So I'm going to have to find a long term solution and print a new one in the meantime. In addition, I hooked up all the motors and sensors in the box and started testing only to find out that somewhere along the line, I didn't check my circuitry closely enough. When the DC motors were turning, it caused noise in the servo power that made them jitter like crazy.

I have overcome the power issue by rearranging how I ran the power through the system. I originally had a switching voltage rectifier to bring the 12V battery down to 6V, which I was going to use to power the servos and the Arduino. I added a lot of capacitors at various points throughout to try to eliminate the noise in that circuit, but couldn't beat it. It then occurred to me to try to run the 12V directly into the Arduino, then run the servos off the Arduino's 5V pin. As it turns out, that was exactly what I needed.

As for the melted steering, I'll have to wait until I can print a new one. I have some ideas about redesigning it, but I need to think more about how I want to do that.

#### August 30, 2015
I've re-printed the steering. In addition to printing out new parts, the size of the connector piece (what would be the rack in an equivalent rack and pinion design) was too small, so I kludged together a new one out of the multiple prototypes that I had printed already.

With the power and steering figured out, I can finally play around with the programming to see what I can make the robot do. I currently have it performing a basic obstacle-avoidance algorithm that seems to work pretty well. It can drive itself around a room and generally not run into anything. However, I've noticed a different problem now. After a minute or two, the Arduino starts to reset every few seconds. If I turn the power off, wait a minute, and then turn it back on, it will run again for a minute and then do the same thing. I think that either the battery is getting worn out or I'm tripping a thermal shutdown--perhaps my power management solution is not really what I needed after all.

#### October 11, 2015
A couple of updates. First, it was indeed the thermal shutdown on the Arduino that was causing the robot to stall. The fix, as it turned out, was to run the power through the switching regulator (down to 6.5V) and <i>then</i> through a linear regular to get to 5V. That was sufficient to run the servos and keep out the noise from the DC motors.

Second, I was annoyed that the robot was spending so much time waiting in the [existing obstacle avoidance algorithm](https://www.youtube.com/watch?v=f8gt-79XD8o). I wanted it to run constantly, but the DC motors were too fast for the robot to have time to look around with its head servo. I wasn't sure if I could simply run PWM into the H-bridge circuit, but I gave it a shot and it worked well. [The dog](https://youtu.be/5nOurTZPQm4) isn't sure he approves though...

I think the robot is finally at the point where I have sufficient hardware built to allow me to focus more on the software and design a little intelligence into it. I would still like to work on the hardware more in the future, but it feels like an accomplishment that it can drive around by itself and looks like a robot, however simple it is.

#### April 2, 2016
Since the last update, I brought the robot to a local hackerspace and a [maker program that I started at the local library](/makerspace.html). Generally, I have received positive feedback. My only real concern has been that the steering assembly is too weak for the weight of the robot. The lead acid battery really weighs it down.

I thought it was fun designing and building the steering, but in order to keep things moving forward, I replaced the assembly with a simple caster:

![](/pictures/Steering3.png)

While making the code update to implement the new steering, I also changed the algorithm a little. Before, any object caused the robot to back up and turn a specific amount; I added randomness by changing directions when there were no obstacles detected. Now, the amount of time that robot backs up is random, so, after he avoids an obstacle, the new direction he faces is never the same: [New Algorithm](https://youtu.be/w-Gu0EnD35M)

#### January 12, 2018
The robot has been on hold for a little bit while I've been in school getting my master's degree in [Robotic Systems Development](https://mrsdprojects.ri.cmu.edu/2016teami/). Luckily, this means that I can apply some of my new skills to this project.

The main thing that I've gained from the master's program is a perspective on systems engineering. The basic philosophy behind systems engineering is that you should design a system before you start implementing it. This will save you time and money by illuminating obscure issues early and it will ensure that all system components are going towards fulfilling a set of clear system requirements. Without this perspective, projects can tend to get bloated or behind schedule (a symptom I've noticed in this project in particular). So, with that in mind, I've created a set of design documents that I think will help me complete the robot by the end of the year. You can see the updates in the Design section above.

In addition to the systems engineering, I have written a bunch of code which makes up the foundational software components of the base station. I am writing it in C++ to build up my skills with that and CMake. All the code can be found on my [Github repo](https://github.com/Angineer/roboDrive).

#### Feb 1, 2018
I spent the day today working on the base design. I've created a preliminary design in FreeCAD based on a hand-drawn design that I made last summer:

![](/pictures/Robot_BaseOrig1.png)
![](/pictures/Robot_BaseOrig2.png)
![](/pictures/Robot_BasePrelim.png)

It's going to take some more time to get the entire design ready because I'm learning FreeCAD as I go.

I also started hacking away at some of the components for the base and robot and found some gaps in my materials or preparation, so I had to order a few parts.

#### Feb 19, 2018
I've spent a little more time on the base design. Specifically, I've been thinking about how to make the charging connection between the mobile platform and the base. I think that I will use a magnetic connector like the ones used for Mac laptops. The connector needs to have some alignment features, so I've added that to the robot side. It will also need flexibility, so I added a compression spring to the base side. This will hold it in place but allow some movement during alignment:

![](/pictures/Robot_PowerConnector.png)

Here's the full base design with the robot parked in charging position:

![](/pictures/Robot_BaseFull.png)

The current mobile platform design uses line-following for navigation throughout the house. I purchased a [line-follower array from Sparkfun](https://www.sparkfun.com/products/13582) and added it to the Robot--[here](https://www.youtube.com/watch?v=50ZuVvZ7mBI) is a short clip of my initial testing. I still need to make a permanent fixture to attach it to the chassis, as it is currently attached with duct tape.

I've been running behind schedule a little bit, but I think the project is still on track. Most of the delay is due to postponing component purchases until I have more stability in my day job. Regardless, since adding a work breakdown structure, it has been much easier to keep tabs on my progress and stay abreast of how the project is going overall.
