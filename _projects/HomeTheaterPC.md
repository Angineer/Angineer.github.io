---
title:  "Home Theater PC"
status: complete
---

For this project, I embarked on building my own PC for gaming in the living room. I had always been a console person when I was younger, but the idea of being able to tweak my computer to do more interesting things became more of a priority as I got older and could afford it.

Related info:

* [Newegg](http://www.newegg.com/)
* [Music Player Daemon](http://www.musicpd.org)
* [Raspberry Pi Relay Board](http://www.robogaia.com/4-relays-raspberry-pi-plateshield.html)

### Design

This project started with my ambition to build a gaming computer for myself. I wanted it to be able to run high end video games with moderately good graphics and fit within a $600-800 budget.

As I spent time thinking about it and working on it, however, it developed into a project about creating a network of computers that would interface with the TV and stereo and provide networked media storage and control.

### Build Log

When I had done a little bit of research, I gradually started buying parts. These were my original specs:

* Rosewill challenger case
* ASRock z68 extreme3 gen3 motherboard
* Intel i5 2500K CPU
* Coolermaster Hyper 212 CPU cooler
* 8 GB GSkill RAM
* NVidia GTX 460 GPU

I had originally gone low-range on the GPU to save money. Eventually, that decision started to feel like it was holding the computer back from doing some of the fancier things I was looking for, so I upgraded to an EVGA GeForce GTX 760. To be honest, it didn\'t make too much of a difference, but it feels a little more future-proof to me.

Once the GPU was upgraded, I felt like the only component that I hadn\'t maxed out was the hard drive. All the cool kids were going solid state, and prices were dropping, so I grabbed one on Newegg when I found a good deal. Under some circumstances, it makes things blazing fast. Under others, it\'s not as noticeable.

#### August 14, 2014
With the main components of the gaming computer completed, I have started to work on the integration into a larger, interconnected home theater system. Currently, the gaming computer is hooked up to the television, and we can use it for gaming and watching content on the internet. With the current work that Valve is putting into making Steam living room-friendly, it works out quite nicely.

I\'m thinking that I want to set up a server to operate as a NAS so that content can be added/removed from anywhere on the network and then also streamed to any devices in the house. I recently switched my website hosting from a raspberry pi to GitHub pages, so I think I may reclaim the little guy for this project.

#### November 4, 2014
I now have the NAS setup on my Raspberry Pi using an external hard drive and a samba share, and it generally works great. In addition, I have a little application running on the Pi that I learned about when I was a member of Solid State Depot, the Boulder hackerspace. It\'s called  [MPD](http://www.musicpd.org/). It allows you to set up a music server that can play music locally or stream it to any other computer on the network, and can be controlled from any computer on the network.

I\'m starting to feel like I want to use my desktop for more things that actually require a desk, so I'm thinking of finding a smaller, less-powerful computer to hook up to the TV. With Steam, I can still stream to the TV for games, but then I\'ll be able to work on spreadsheets in a more comfortable setting. However, it's going to have to wait until I find a really good deal on another computer.

#### November 13, 2014

As a somewhat related project, I just created a webpage-controlled Raspberry Pi relay system, so you can turn things on and off around the house via a simple HTML form. I\'m thinking it could possibly be integrated with the networked media to turn on speakers or lighting to match the music or video that you are watching. Here is my code (based on the Python/Flask example given on the [board creator\'s site](http://www.robogaia.com/4-relays-raspberry-pi-plateshield.html)): [my code](/resources/FlaskSite.tar.gz)

#### May 25, 2015

I\'ve been working on the Raspberry Pi relay a little more and have branched it off into [its own project](UniversalRemote.html).

At the same time, I built a new computer which I was hoping to use as my streaming computer. However, after thinking about the various configurations I could use, I decided to go with the following: the beefy computer will be the media computer and stay in the living room for now where we have wired internet; the new computer will be my desktop computer and run off the wifi. I like this because it means that the computer that I built for gaming will be dedicated to the gaming exclusively with Windows and the most stable internet connection, and the desktop computer will run Linux, which I prefer for everyday things.

The new computer is not as powerful my gaming rig, but it is still fast enough for everyday things. And I did spend a little more to buy it new, but I think that I saved plenty of hours by ending my search for a deal I probably won\'t find.

#### Jan 25, 2020

Where is this project now? It's been a long time since I last updated it. 

This started as a project to define and build a home entertainment system for playing video games and watching TV and movies. Over the course of the project, computers and home entertainment have changed, as have my preferences. Since 2015, there has been a big proliferation of home streaming devices (Amazon Fire, Apple TV, Google Chromecast, etc.). Most TVs nowadays have more built-in streaming options than my computer had when I started this project.

I've also shifted my focus away from video games (although I still like to play them every once in a while) and I spend much more time in front of a computer for work, now that I'm doing software engineering. This means that my passion for debugging obscure computer problems tends to dwindle by the time I get home in the evening. With the new options for streaming videos, it's much easier now to just pull up a movie on your laptop and send it to the TV over wifi, so I'm not as hard-pressed to find a cool solution for that. Maybe I'm getting old, but solutions to these problems that "just work" are more appealing to me now than they used to be.

As mentioned earlier, I also spun off the Universal Remote project into its own thing, since that wasn't really in line with my original goals.

So where does that leave me now? I'd say that, although I still enjoy the challenge of tweaking my setup to derive maximum fun from it, I've fallen behind the market in terms of simple solutions to the key problems. The cloud provides essentially unlimited storage for any media that I own, as well as easy and cheap streaming for anything that I don't. Enjoying media within the home is handled by modern streaming protocols that are supported on everyone's devices, including smartphones. My video game library is big enough now that I don't have to time to play the games that I own, nevermind the hot new releases.

All that being said, I did recently upgrade my gaming computer to bring it up to par with modern rigs. Until a month ago, I was still using the skeleton of that original setup from 2013. Here are the new specs:

* Rosewill challenger case (I kept this around)
* ASRock z390 Pro4 motherboard
* Intel i7-9700K CPU
* Rosewill PB120 Liquid CPU cooler
* 32 GB GSkill Aegis RAM
* Sapphire Nitro+ RX 590 GPU

I still use the computer that I built in 2015; it lives in the basement and I use it when I'm working on projects down there. I think my old gaming computer will be a hand-me-down for someone that's looking to upgrade. It still has a few good years left and I'd be happy see someone else make good use of it.

So I guess I'm ready to close this project out. It was fun to learn some new tricks along the way, but I'm going to save my attention for other things that I'd like to get done (such as my [butler robot](Robot.html)!).