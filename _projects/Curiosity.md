---
title:  Curiosity Spaceship Simulator
status: ongoing
pictures:
    -
---

When I had my first child, I decided to start building a spaceship simulator that we could play with together as he grew up.

Related info:
* [Onboard software Github repo](https://github.com/Angineer/curiosity-os)

### Design
The inspiration for this project was a mix of different ideas. I have always liked control panel design and considered working in that field after college. That type of design is especially important in scenarios like airplanes and spaceships where simplicity has to be balanced with robust control. So I've had the idea of building a panel to control various things in my house for a while now.

I also was inspired by other builds I had seen where people built backyard spaceships for their kids to play in. It just seemed like such a fun activity for a growing kid; it combines the tactile fun of hitting buttons and switches with the chance to imagine that they're exploring far-off worlds.

And finally, I was looking for a new software language to learn around the beginning of 2020. I decided to start investigating Rust and picked this project as my jumping off point.

### Build Log

#### Nov 11, 2020
So far, I only have an idea in my head and an empty git repo. Here are the broad strokes:

Spaceship name: Curiosity
- Physical control panel with buttons/switches/throttle/steering
- Runs custom software (Curiosity Operating System)
- Has keyboard for terminal access/controls
- One main computer plus separate microcontrollers for different subsystems (engines, shields, life support, navigation, etc)

Server can run on a separate computer, accessible via SSH from my desktop
- Allows adding modules for new stuff to do
- Keeps logs of missions and places visited
- Lets me play mission control and chat with Curiosity directly

I will fill out the details of the design next. One big thing I want to ensure is that the system can easily be expanded as my son plays with it so that it never gets boring.