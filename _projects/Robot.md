---
title:  "Service Robot"
status: ongoing
pictures:
    - https://www.dropbox.com/s/b1wpww1ykkzr58a/2020-02-08%2016.23.46.jpg?raw=1
    - https://www.dropbox.com/s/1fnnpzlmy7ah7ik/2020-02-08%2016.23.33.jpg?raw=1
    - https://www.dropbox.com/s/2qmq8nfte1d4tut/2020-02-23%2017.54.55.jpg?raw=1
    - https://www.dropbox.com/s/tkv8kfpykya8f1e/2020-02-27%2022.03.21.jpg?raw=1
    - https://www.dropbox.com/s/4bgf9j9cu7gprvc/2020-05-19%2022.41.46.jpg?raw=1
    - ?raw=1
    - ?raw=1
    - ?raw=1
---

This is a butler-style robot that takes orders for food and drink and delivers them to you.

<a href="https://www.dropbox.com/sh/1p2adajwfhmlddk/AACoJkiwpoX1KDW8QVOU-KRca?dl=0">Photo gallery</a>

### Design
#### Origins
I originally started this as a project with my college friends. As engineering students, we were into pretty nerdy topics. One time when we were hanging out, the idea came up of building a robot. Although it started out as just a fun idea, we eventually convinced ourselves that we had the skills to really make something like this happen. Once we committed to actually doing it, we designed a robot that could do the following:

* Prepare mixed drinks and deliver them from a home base to the users' locations
* Provide a basic user interface
* Be able to navigate an interior space and avoid obstacles
* Be built from scratch wherever possible (avoid using kits)

With those basic ideas, we came up with a list of parts, including motors, a battery, and some valves. The design was really nothing more than some components and the belief that all the integration would come to us naturally. Here is the list of components that we bought:

* 1 x 12V Lead Acid Battery
* 2 x 322HD Hobby Servos
* 2 x 12V Jameco DC motors
* 2 x Maxbotix Ultrasonic Rangers

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

#### 2010
At this point, we were still pretty naive about how things would all come together; I was of the mind that once we had all the components, the robot would pretty much assemble itself. In retrospect, we had no idea how long a project like this would take and how expensive it would be.

As poor college students, we didn't have nearly enough money to buy all the parts we decided to get. We brainstormed and came up with the idea of funding the project by redeeming beverage containers on campus (as there was no shortage of those). Using that money and some small contributions from our own pockets, we bought servos, DC motors, a battery, and some of the power management and motor driver circuits. However, we didn't get the chance to really put all the components together into a functional platform. Also, some mixup with the valves that I ordered resulted in them never getting delivered, so the drink mixing component unwittingly took a backseat to the mobile platform.

One main issue I ran into during this phase was the weight of the robot. The chassis we had started with was a gigantic steel box that put some strain on the drive motors and steering hardware.

College stories
- Collecting cans
- Steel box from scrap at LRC
- Plasma cutter

#### 2011
After I graduated college, I used my spare time to design and build the initial steering hardware.
- Wheels off an RC car
- Cut, tried to tap angles at McGuckins
- Bought rod, crimps at McGuckins
- Visit to guy's shed shop

Bought motor driver circuit and got it running (video). Emphasis on not wanting to use kits.

My goal was simply to get the robot driving around, which I accomplished: [The steel box design](https://youtu.be/j0Zf290-C6U). As you can probably tell, the steering hardware was fairly shoddy, mostly because I didn't have access to any tools to machine it properly.

Discussion of rack and pinion design

Heavy lead acid battery

#### Sometime between 2011 and 2014
Discovered SSD, got distracted by other projects.

Bought new wheels since the old ones sucked.

Designed and 3D printed ultrasonic mount based on designs on the internet. First time I got to use a 3D printer.

#### April 24, 2014
I'm finally getting back into working on this project. The 2 areas I'm focused on right now are getting better steering hardware built and finalizing the circuitry. The motor driver is an L298 H-bridge circuit. Here are a couple pics of testing the motor driver circuit and (finally) soldering it to a real circuit board:

![](/pictures/MotorTest.png)
![](/pictures/PCBMotorCircuit.png)

You can also see that the new chassis is a plastic box. This is both much lighter than the steel one and allows you to see what's happening inside, which is kind of cool.

Bought box at McGuckins

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

#### Summer 2017
Base design considerations

Looking for dispenser

Beginning of communication aspects, learning sockets for client/server design

#### January 12, 2018
The robot has been on hold for a little bit while I've been in school getting my master's degree in [Robotic Systems Development](https://mrsdprojects.ri.cmu.edu/2016teami/). Luckily, this means that I can apply some of my new skills to this project.

The main thing that I've gained from the master's program is a perspective on systems engineering. The basic philosophy behind systems engineering is that you should design a system before you start implementing it. This will save you time and money by illuminating obscure issues early and it will ensure that all system components are going towards fulfilling a set of clear system requirements. Without this perspective, projects can tend to get bloated or behind schedule (a symptom I've noticed in this project in particular). So, with that in mind, I've created a set of design documents that I think will help me complete the robot by the end of the year. You can see the updates in the Design section above.

In addition to the systems engineering, I have written a bunch of code which makes up the foundational software components of the base station. I am writing it in C++ to build up my skills with that and CMake. All the code can be found on my [Github repo](https://github.com/Angineer/Robot-Mobile).

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

#### Mar 30, 2018
While waiting to buy parts, I've focused on the software components of Robie (I've also decided that will be his official name). Because I never had a formal introduction to C++, I set aside some time to read Bjarne Stroustup's _The C++ Programming Language_. Even though I knew most of the concepts already, it was nice to get a new perspective, especially that of the language's creator. I've also been studying for technical interviews, which has helped me learn some of the language's "gotchas."

After some time away and armed with new knowledge, I looked at the existing C++ code and made some upgrades:
* First, I split the existing repo into separate repos for each component: base software, mobile platform software, and user interface software. You can see the new repos on [Github](https://github.com/Angineer).
* Second, I tore up and replaced some of my simplistic code with some more sophisticated components, especially parts that dealt with C-style strings.
* Third, I separated out the inventory and communication code into a separate library so it was available to be linked to the HTTP server and for any apps that I wrote in the future.

Once I had those revisions complete, I focused on writing the HTTP server code so users could interact with the inventory. I was unsure how to approach this part, since HTTP doesn't have a standard implementation in C++. I knew I could write a server myself, but I didn't want to go through such a hassle for something that had already been implemented many times before. I ended up finding a [simple server](https://github.com/eidheim/Simple-Web-Server) off of which I could base my own. 

In making the HTTP server interact with the inventory server, I realized that I really needed to have some kind of administrative interface for checking on and updating the inventory. To create this, I converted my old test client--which was just for debugging the communications--into a full admin client. This revealed a number of issues with my original design, which I fixed up as I went.

Now things are running pretty smoothly. I can connect to the HTTP server from my browser, submit an order, and see the inventory levels change. If I need to edit things, I just need to boot up the admin console and send a few simple commands.

#### Jul 3, 2018
We moved into a new place so I've been setting up my workshop:

![](/pictures/Robot_Workshop.png)

I've got a lot more room to build, which has helped me make good progress on the home base portion of the project:

![](/pictures/Robot_BaseFrame.png)

Conveyer from children's hay elevator toy

#### Aug 12, 2018
The design of the power electronics for the mobile platform has been a sticking point because I've been unsure of how to approach the battery charging. I envisioned an auto-charging system where Robie would drive up to the base and make some kind of magnetic connection to a [charging circuit](/resources/robie_mobile_power.pdf). But I also wanted to switch battery chemistry from lead acid to something lighter.

I did some light research and discussed the idea with my electrical engineer friend and decided that the added circuitry would be more complex than I had hoped. So I've decided to make the auto charging another phase of the project after the current build is done. For now, I'm going to use a NiMH battery and a basic charger that I bought online.

The basic wiring of the mobile platform had always been very messy and fragile, so I decided to reorganize. I'm most of the way done and it's looking much better:

![](/pictures/Robot_NewWiring.png)

You can also see that I've mounted my line-following board on the bottom of the bot:

![](/pictures/Robot_LineFollowerMounted.png)

#### Jul 7, 2019
Although I haven't been posting here, I've made a number of updates in the last few months.

First, I did some machining and assembly of the base station. The main takeaway is that typical consumer plastics are difficult to machine. In particular, I had a hard time drilling out the center of the spindles in my conveyor belts. The results are accurate enough to work with, but I may have to redo them (probably a 3D print) in the future. I also tweaked the design a little and used some threaded rod to hold the conveyors together. Here are a couple pictures of what I have so far:

![](/pictures/Robot_Conveyors_1.png) ![](/pictures/Robot_Conveyors_2.png)

Second, I've done some work on the coding side. I rearranged things a little bit to update the style and also to make everything more modular. The coolest addition is Bluetooth communication between the Raspberry Pis; now the base and the mobile platform can communicate with each other. You can see the updates on my [Github](https://github.com/Angineer) page.

Discussion of bluetooth socket comms

The end result is that the ordering system is somewhat functional. You can see all the pieces working together in this video: [Ordering System](https://youtu.be/Y87iaBGqlAw).

#### Jan 26, 2020
Every year, I set new year's resolutions, and I have included finishing the robot project every year for the last 7 years. Last year I felt pretty good about being able to finish everything, since I did a lot of the systems engineering work and had a good idea of what I was trying to accomplish. I made good progress, but still wasn't able to wrap it up. So I'm trying again this year.

I started this month by working on the coding side. Robie needs some way to figure out where he is so that he can wait at the base station for orders and stop when he gets to his destination as part of the delivery. I've had a few ideas for how to do this including RFID or some kind of simple proximity sensor. I decided to try doing it with vision. I decided this because the Raspberry Pi has built-in (and cheap) camera support and because I wanted to try out this type of sensing. In particular, I wanted to learn about how to use [apriltags](https://github.com/AprilRobotics/apriltag). Apriltags are ubitquitous in robotics and I've never used them before, so I thought this would be a good opportunity.

For something as simple as reading an image from disk, I assumed that there would be a very simple library available. As it turns out, the truth is more complicated. There are existing libraries for jpegs, but they are not exactly plug and play. OpenCV is super simple, but it requires building from source on the Raspberry Pi, which includes gigabytes of features that I don't care about. In the end, I just wrote my own function for reading bitmaps. I didn't know anything about the format, so it was kind of neat to learn. Of course, it would have been even better to just grab an image from the camera and keep it in memory, but that leads to the other issue that makes this complicated...

Grabbing an image from the Raspberry Pi camera is super easy if you use their [command line tool](https://www.raspberrypi.org/documentation/usage/camera/raspicam/raspistill.md), but the only option for handling the resulting data is to save it to disk. Again, OpenCV would greatly simplify this, but I don't want all that overhead. I assume that I could figure out how to grab the images directly in my program (especially since the Raspberry Pi app is open source), but I'm leaving this as an area for optimization in the future. At this point, I've strung together the different components well enough that I can move forward with testing. As always, the latest updates are on my [Github](https://github.com/Angineer) page.

#### Feb 1, 2020
I'm at the point now where I can basically test the entire system's functionality. I made a little masking tape track in the basement and have some starting apriltags, plus I added a little extra state management software so Robie knows when he's delivering an order and when he's headed back home. It's a little janky, but it shows off how everything will come together in the end:

<video controls="controls" style="width:300px">
  <source type="video/mp4" src="https://www.dropbox.com/s/bt7l27rs5mb276t/VID_20200201_130308499.mp4?raw=1"></source>
</video>

#### Feb 8, 2020
I've taken the robot to my local hackerspace, [HackPGH](https://www.hackpgh.org). I thought that, by keeping it there, it would be easier to get large chunks of work done since I would have access to all the tools I need in the same place. I also thought that sharing my progress with fellow hackers could be an extra motivator to get things accomplished.

In transporting the components, I realized that they are pretty susceptible to damage from movement, so today I started out by attaching the circuitry to the base of the dispenser:

{% include img_h.html idx=0 %}

Then, I cut out and attached some parts of the chute where food will fall when it is dispensed:

{% include img_v.html idx=1 %}

#### Feb 15, 2019
The apriltag processing components are pretty slow, to the point that I'm not sure if they will be reliable in the final product. So today, I went back to the image processing and tried to implement some optimizations. The actual processing side of things (i.e. not the `raspistill` process) is now split out into two components. One pings the camera to request a new image, then uses ionotify to wait for the image to be written to disk and reads it into memory. The other object waits for the first one to read a new image, grabs it, and does the apriltag detection.

I came up with a triple buffer system to try to minimize contention and improve throughput; each thread works on data in its own buffer, then swaps with a shared buffer in order to exchange data with the other thread. This worked out pretty well, but still isn't very fast on the Raspberry Pi. The best optimization I could come up with is reducing the image resolution, which decreases tag detection accuracy. This is an area that I will have to come back to again, probably to completely eliminate writing to disk.

#### Feb 23, 2020
The focus today was on getting the line following working well so I can lay down a full track for testing. The line following hardware works with both a dark line on light background and a light line on dark background. It also has a knob for adjusting the LED power so you can tune it for whatever surface you're working with. At the hackerspace, we have a light blue floor, so I wasn't sure which configuration would work best.

I started by testing dark blue painter tape directly on the floor, but it didn't work too well. I learned that the floor, while being light in color, is acutally pretty absorptive with the IR light. Next, I tried printing out some black lines on white paper and taping them to the floor with masking tape:

{% include img_h.html idx=2 %}

Next I tried inverting the hardware to look for a light-colored line and using reflective tape:

<video controls="controls" style="width:300px">
  <source type="video/mp4" src="https://www.dropbox.com/s/jtemk4y4733mxdt/VID_20200223_181442553.mp4?raw=1"></source>
</video>

This worked pretty well and I think I'll use this layout in the future. I'll have to buy some tapes and test them to find out what works best.

The other thing I learned today is that the width of the line is important. If it's too thin, it can be hard to detect and causes a lot of oscillation, which can turn into instability. A line that is wide enough to be picked up by at least two sensors in the array at once is much better.

#### Feb 27, 2020
I added some more components to the chute. It's starting to look pretty good:

{% include img_v.html idx=3 %}

#### May 19, 2020
Just as soon as I started working on the robot at HackPGH, the global coronavirus pandemic hit, and I had to move operations back home. I decided to dive into the issue of the slow apriltag processing:

{% include img_h.html idx=4 %}

My first attempt at this was to create a stripped-down verison of raspistill. I didn't know much about the underlying libraries (primarily MMAL), so it was difficult and slow-going. After spending a few days on this, I decided to take a different approach: instead of stipping down raspistill, I would just compile it as a library and slightly modify the objects so they could be called from my c++ program.

#### July 12, 2020
Success! After a couple months of slogging though the camera capture code, I have a new version that grabs images directly from the sensor and detects the apriltags. The new, straight-to-memory approach is much faster, but it still has a few issues to debug:
- Because I wasn't running the full raspistill program, I had to manually adjust things like exposure and white balance
- 

Robie is now set up in the basement on a test track of masking tape:

{% include img_h.html idx=4 %}

This is the closest that Robie has felt to completion and it's satisfying to run a full order through the system.

#### July 21, 2020
I've moved Robie upstairs into our dining room, so that I can finally start testing him in a real world environment. The next step will be setting up the track that he's going to follow. Based on my testing back in February, I decided to build my line out of reflective tape on black paper.

Issues with black construction paper

#### Aug 2, 2020
Fixing bugs

#### Aug 9, 2020
Redo track with just the tape

Tidying up the code

#### Aug 15, 2020
Build up the box

Issues with apriltag placement close to the camera

Issues with lack of shielding for servo--he's just nervous

#### Aug 16, 2020
Introduction of auto-docking

#### Aug 21, 2020
Done?!

Note: have to collect all my pictures and put them in the folder
