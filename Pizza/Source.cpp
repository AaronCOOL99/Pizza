#include <iostream>
#include <windows.h>
#include <conio.h>
#include <mmsystem.h>
#include "resource.h"
#pragma comment (lib, "winmm.lib")
using namespace std;
int main()
{
    system("color EC");
    //This sets the colour to a yellow background with red text.
    PlaySound(MAKEINTRESOURCE(IDR_WAVE1), NULL, SND_RESOURCE | SND_ASYNC | SND_LOOP);
    //This plays music (this was actual hell to do, thank god for all of the great tutorials on youtube).
    int pizzaTime;
    //This is the variable "pizzaTime", which defines the time the pizza is in for.
    cout << "How many minutes do you want to cook this pizza for? " << endl;
    //This asks how long you wish to look the pizza for
    cout << "MINUTES:"; cin >> pizzaTime;
    //This is where you input the value which determines the time of the pizza.
    if (pizzaTime == 15) cout << "Your pizza has been cooked just right..." << endl;
    //You cooked the pizza correctly.
    else if (pizzaTime >= 16 && pizzaTime <= 18) cout << "Your pizza is burnt but thankfully salvageable, but despite this the reviews were not as kind." << endl << "What could only be described as a torrent of one stars has left you out of a job and now you are broke any pennyless, left to die in the cold, remembered as a disappointment by all..." << endl;
    //you inputted a number between 16-18, resulting in an overcooked pizza.
    else if (pizzaTime >= 18 && pizzaTime <= 1440) cout << "Your pizza is more than burnt, and your incompetence has resulted in a fire which has caused the deaths of everybody in the kitchen except you." << endl << "Despite your pleas for forgiveness, you will now spend the rest of your pathetic days behind bars for manslaughter, being remembered as a failure by all..." << endl;
    //you inputted a number which is 19 or greater, resulting in a severely overcooked pizza.
    else if (pizzaTime >= 1 && pizzaTime <= 11) cout << "Your pizza is severely undercooked, and has resulted in the deaths of multiple people due to food poisoning..." << endl;
    //You inputted a number from 1-11, which caused multiple casualties due to the pizza being severely undercooked.
    else if (pizzaTime >= 12 && pizzaTime <= 14) cout << "Your pizza is a little undercooked, due to your incompetence multiple people suffered stomach cramps, fever and a few had to be hospitalised." << endl << "Due to this incident a flood of lawsuits has left you not only out of a job but now you face multiple charges of criminal negligence, your fate is to be left to rot in a cold dark prison cell, remembered a disappointment by all..." << endl;
    //You inputted a number from 12-14, which has resulted in a slightly undercooked pizza.
    else if (pizzaTime == 0) cout << "You never cooked the pizza, you lost the job and now you will die cold and alone like the pizza you never cooked..." << endl;
    //You didn't actually input a number, and thus the pizza never got cooked.
    else if (pizzaTime > 1440) cout << "Your pizza can no longer be identified, same with the people in the kitchen which no longer exists seeing as it has been turned into soot." << endl <<"Turns out if you cook a pizza for more than a day, the pizza and everything in its surrounding area is completely pulverized with no remnant left." << endl;
    {
        system("pause");
    }
}

//Program by: Aaron, 10/11/2022 - Updated: 11/11/2022

//P.S. figuring out how to do a range of numbers, e.g. 1-10 was a pain to do so if I ever have this issue again I should look at this code (I probably won't).