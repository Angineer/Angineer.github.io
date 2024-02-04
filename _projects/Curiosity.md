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
The inspiration for this project was a mix of different things. First, I have always been interested in control panel design. I find it especially interesting in scenarios like airplanes and spaceships where operators have to manage a lot of complex controls. So I've had the idea of building a panel to control various things in my house for a while now.

I also was inspired by other builds I had seen where people built backyard spaceships for their kids to play in. It seemed like such a fun activity for a growing kid; it combines the tactile fun of hitting buttons and switches with the chance to imagine that they're exploring far-off worlds.

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

#### Feb 3, 2023
Since my <a href="iris.html">comic book project</a> is wrapping up, I've been trying to decide which project to take on next. I decided to focus on this one for 2 reasons:
1. This project involves learning Rust, which is something I've been wanting to do regardless of this project
2. My kid is getting older by the day, and I don't want to miss the opportunity to do this with him

So over the last couple weeks, I've starting working my way through the <a href="https://doc.rust-lang.org/book">Rust book</a>. It's actually pretty nice being able to just sit down and read. It's easy and doesn't require working in the shop or at my desk. Plus, the book is very readable and it's a joy to see that a lot of the issues that I face working with C++ are solved before I even start coding. In particular, I love that the language, compiler, and packaging system are all unified.

I plan to work through the entire book, but I think I know enough now to start messing around with the code for my project. So I'll spend some more time nailing down the design and maybe try implementing a couple of the basic features.
