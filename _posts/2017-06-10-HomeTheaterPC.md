---
layout: project
title:  "Home Theater PC"
date:   2015-11-17 16:16:01 -0600
categories: projects
---

For this project, I embarked on building my own PC for gaming in the living room. I had always been a console person when I was younger, but the idea of being able to tweak my computer to do more interesting things became more of a priority as I got older and could afford it.

#### Requirements:

* Be able run high end video games with moderately good graphics
* Fit within a $600-800 budget

#### References:

* [Newegg](http://www.newegg.com/)
* [Music Player Daemon](http://www.musicpd.org)
* [Raspberry Pi Relay Board](http://www.robogaia.com/4-relays-raspberry-pi-plateshield.html)

#### Design Log
I originally started with just the idea of a gaming computer. As time went on, I gradually developed an interest in a full-featured entertainment system that would interface with the TV and stereo and feature networked media storage and control.

When I had done a little bit of research, I gradually started buying parts. These were my original specs:

* Rosewill challenger case
* ASRock z68 extreme3 gen3 motherboard
* Intel i5 2500K CPU
* Coolermaster Hyper 212 CPU cooler
* 8 GB GSkill RAM
* NVidia GTX 460 GPU

I had originally gone low-range on the GPU to save money. Eventually, that decision started to feel like it was holding the computer back from doing some of the fancier things I was looking for, so I upgraded to an EVGA GeForce GTX 760. To be honest, it didn\'t make too much of a difference, but it feels a little more future-proof to me.

Once the GPU was upgraded, I felt like the only component that I hadn\'t maxed out was the hard drive. All the cool kids were going solid state, and prices were dropping, so I grabbed one on Newegg when I found a good deal. Under some circumstances, it makes things blazing fast. Under others, it\'s not as noticeable.

##### August 14, 2014
With the main components of the gaming computer completed, I have started to work on the integration into a larger, interconnected home theater system. Currently, the gaming computer is hooked up to the television, and we can use it for gaming and watching content on the internet. With the current work that Valve is putting into making Steam living room-friendly, it works out quite nicely.

I\'m thinking that I want to set up a server to operate as a NAS so that content can be added/removed from anywhere on the network and then also streamed to any devices in the house. I recently switched my website hosting from a raspberry pi to GitHub pages, so I think I may reclaim the little guy for this project.

##### November 4, 2014
I now have the NAS setup on my Raspberry Pi using an external hard drive and a samba share, and it generally works great. In addition, I have a little application running on the Pi that I learned about when I was a member of Solid State Depot, the Boulder hackerspace. It\'s called  [MPD](http://www.musicpd.org/). It allows you to set up a music server that can play music locally or stream it to any other computer on the network, and can be controlled from any computer on the network.

I\'m starting to feel like I want to use my desktop for more things that actually require a desk, so I'm thinking of finding a smaller, less-powerful computer to hook up to the TV. With Steam, I can still stream to the TV for games, but then I\'ll be able to work on spreadsheets in a more comfortable setting. However, it's going to have to wait until I find a really good deal on another computer.

##### November 13, 2014

As a somewhat related project, I just created a webpage-controlled Raspberry Pi relay system, so you can turn things on and off around the house via a simple HTML form. I\'m thinking it could possibly be integrated with the networked media to turn on speakers or lighting to match the music or video that you are watching. Here is my code (based on the Python/Flask example given on the [board creator\'s site](http://www.robogaia.com/4-relays-raspberry-pi-plateshield.html)): [my code](/resources/FlaskSite.tar.gz)

##### May 25, 2015

I\'ve been working on the Raspberry Pi relay a little more and have branched it off into [its own project]({% post_url 2017-06-10-UniversalRemote %}).

At the same time, I built a new computer which I was hoping to use as my streaming computer. However, after thinking about the various configurations I could use, I decided to go with the following: the beefy computer will be the media computer and stay in the living room for now where we have wired internet; the new computer will be my desktop computer and run off the wifi. I like this because it means that the computer that I built for gaming will be dedicated to the gaming exclusively with Windows and the most stable internet connection, and the desktop computer will run Linux, which I prefer for everyday things.

The new computer is not as powerful my gaming rig, but it is still fast enough for everyday things. And I did spend a little more to buy it new, but I think that I saved plenty of hours by ending my search for a deal I probably won\'t find.
