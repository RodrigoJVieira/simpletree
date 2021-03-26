<h1 align="center">
Mario Pyramid
<br>
  <img src="https://raw.githubusercontent.com/draumzinho/mario-pyramid/main/assets/mario.png" alt="Mario Pyramid" style="height="200"">
<br>
<br>
</h1>

<p align="center">Building pyramids automatically using C!</p>

<hr />

## About Mario Pyramid
Toward the beginning of World 1-1 in Nintendo’s Super Mario Brothers, Mario must hop over adjacent pyramids of blocks. This simple C program uses "for loops" to 
create automatic pyramids drawings as we see in mario's games.

## How it works

To recreate those pyramids in C we will be using hashes (#) for bricks. Each hash is a bit taller than it is wide, so the pyramids themselves 
are also be taller than they are wide.

## Using Mario Pyramid

This program allows the user to decide just how tall the pyramids should be by first prompting them for a positive integer between 1 and 8, inclusive.

Here’s how the program might work if the user inputs 8 when prompted:

```
$ ./mario
Height: 8
       #  #
      ##  ##
     ###  ###
    ####  ####
   #####  #####
  ######  ######
 #######  #######
########  ########
```
Here’s how the program might work if the user inputs 4 when prompted:

```
$ ./mario
Height: 4
   #  #
  ##  ##
 ###  ###
####  ####
```

<hr />
<h1 align="center">
Thank you!
</h1>
