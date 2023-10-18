/*
Text game created fo the CodeCademy project
the story and outcome are from a book I bought for my kids
*/
#include <iostream>

using namespace std;

int main()
{
    //~~~~~~VARIABLES~~~~~~    
    int player;
    int hurt = 0;

    int choice1; //Old Mill, Abandoned Cellar, Map Shop
    int stairs;

    int choice2; //Giant Mushroom, Flooded Path, Path by the River
    int lambBear;

    int choice3; //Dwarves, Cavern, Woods
    int smell;

    int choice4; //Stars, Maze, Walls
    int choice5; //Distract, Jump, Aprouche
    int choice6;


    bool moonStone = false;
    bool map = false;
    bool rope = false;
    bool shoes = false;
    bool rattle = false;
    bool shield = false;
    bool hammer = false;
    bool turkey = false;
    bool grimoire = false;

//~~~~~~HEADER~~~~~~
    cout<<"===================================================================================\n";
    cout<<" _____ _     _ _                _   _             ____                              \n";
    cout<<"|  ___(_) __| (_)_ __   __ _   | |_| |__   ___   |  _   _ __ __ _  __ _  ___  _ __  \n";
    cout<<"| |_  | |/ _` | | '_   / _` |  | __| '_   / _    | | | | '__/ _` |/ _` |/ _  | '_   \n";
    cout<<"|  _| | | (_| | | | | | (_| |  | |_| | | |  __/  | |_| | | | (_| | (_| | (_) | | | |\n";
    cout<<"|_|   |_| __,_|_|_| |_| __, |    __|_| |_| ___|  |____/|_|   __,_| __, | ___/|_| |_|\n";
    cout<<"                       |___/                                      |___/             \n";
    cout<<"===================================================================================\n\n";


//~~~~~~Chacter Choice~~~~~~
    cout<<"Wich character do you want to be?\n";
    cout<<" 1) Lina, the barbarian\n";
    cout<<" 2) Felix, the thief\n";
    cout<<" 3) Thomas, the mage\n";
    cin>>player;
    cout<<"\n\n";

//~~~~~~First Act~~~~~~
    cout<<"You live in a village by the forest, and today is no ordinary day!\n";
    cout<<"Today starts your biggest adventure yet...\n";
    cout<<"Today you're going to find your pet dragon!\n\n";
    cout<<"You start walking aroud town.\n";

    cout<<"What are you going to do?\n";
    cout<<" 1) Visit the old lady at the Wind Mill\n";
    cout<<" 2) Search the Abandoned Cellar\n";
    cout<<" 3) Steal a map from the Map Shop?\n";
    cin>>choice1;
    cout<<"\n\n";

    if (choice1 == 1) //Old Lady and the Moon Stone
    {
        cout<<"As you aprouch the Old Lady eyes you suspecially...\n";
        if (player == 2)
        {
            cout<<"The Old Lady gets really angry when she sees you!\n";
            cout<<"'You are Felix, the thief! You stole from me! GET OUT!'\n";
            cout<<"You flee town as she chases you with the pitchfork!\n\n";
        }
        else
        {
            cout<<"The Old Lady greets you warmly!\n";
            cout<<"You explain you're going to find your pet dragon, and the Old Lady remembers when she went on her own adventures...\n";
            cout<<"She gives you a shimery blue stone and says:\n";
            cout<<"'This is a magic Moon Stone. It will help you find your path when looking at the stars'\n";
            moonStone = true;
            if (moonStone == true){
                cout<<"Moon Stone aquired!\n\n";
            }
        }
    }
    if (choice1 == 2) //Abandoned Cellar and the Rope
    {
        cout<<"You enter the cellar. It smells old and decaying...\n";
        cout<<"You see a ladder that takes you to the top floor.\n";
        cout<<"Will you climb them?\n";
        cout<<" 1)Yes\n";
        cout<<" 2)No\n";
        cin>>stairs;
        cout<<"\n\n";

        if (stairs == 1)
        {
            cout<<"The floor breaks and you fall all the way down.\n";
            cout<<"Luckly there's some hay to ease your fall\n";
            cout<<"Now you learn to be carefull, and leave town\n\n";
        }
        else
        {
            cout<<"You find some ropes at the back of the cellar.\n";
            cout<<"You put them in your bag and leave town\n";
            rope = true;
            if (rope == true){
                cout<<"Rope Acquired!\n\n";
            }
        }
    }    
    if (choice1 == 3) //Map Shop and the Map
    {
        cout<<"You silently aproach the Map Shop, and sees the owner sleeping on his rocking chair\n";
        if (player == 2)
        {
            cout<<"Silent as a mouse you enter the shop and find an old map to the Dragon Maze\n";
            cout<<"You get the map and leave town\n";
            map = true;
            if (map == true){
                cout<<"Map acquired!\n\n";
            }
        }
        else
        {
            cout<<"You try to sneak past the sleeping man, but the front door makes a noise and the man wakes up!\n";
            cout<<"He yells as you run out and leave town!\n\n";
        }
    }

//~~~~~~Second Act~~~~~~

    cout<<"As you leave the village you see how huge the world outside really is.\n";
    cout<<"The fisrt part of your adventure is to cross the Great Marsh,\n";
    cout<<"There are 3 paths, wich one will you choose?\n";
    cout<<" 1) The path through the Giant Mushroom Field\n";
    cout<<" 2) The small trail through the Flooded Path\n";
    cout<<" 3) The Path by the River\n";
    cin>>choice2;
    cout<<"\n\n";

    if (choice2 == 1) //Mushroom and Silent Shoes
    {
        cout<<"Everything is dark and humid. All around you there are small creatures lurking in the shadows...\n";
        if (player == 1)
        {
            cout<<"The small creatures are really afraid of you, Lina!\n";
            cout<<"They hide as you walk on by...\n";
            cout<<"You are able to leave the field without any setbacks\n\n";
        }
        else
        {
            cout<<"The noise you make while walking is making the poor creatures wither in pain...\n";
            cout<<"They give you shoes made of leaves, and as you put them on you notice how silently you walk!\n";
            shoes = true;
            if (shoes == true)
            {
                cout<<"Silent Shoes acquired!\n\n";
            }
        }    
    }
    if (choice2 == 2) // Flooded Area and the Rattle
    {
        cout<<"You are carefully walking throught the Flooded Path and you hear the sound of a rattle.\n";
        cout<<"You turn around and see a giant Lamb-Bear staring right at you!\n";
        cout<<"What will you do?\n";
        cout<<" 1) Scream to scare it\n";
        cout<<" 2) Play dead\n";
        cin>>lambBear;

        if(lambBear == 1)
        {
            cout<<"You scream as loudlly as you can! The poor lamb-bear freaks out and runs for his life!\n";
            cout<<"Having heard the commotion the Pastor runs after his lamb-bear cursing you for scaring it\n";
            cout<<"Shrugging your shoulders you keep on the path screaming at every lamb-bear that appear.\n\n";
        }
        else
        {
            cout<<"Trying not to laugh you fall to the ground.\n";
            cout<<"You hear a voice calling the confused animal back. It's the Pastor\n";
            cout<<"'Here, take this rattle with you. Now my animals wont bother you anymore!' He says.\n";
            rattle = true;
            if (rattle == true)
            {
                cout<<"Rattle acquired!\n\n";
            }
        }
    }
    if (choice2 == 3) // Path by the River and the Shield
    {
        cout<<"After some time on the path you get to a bridge.\n";
        cout<<"A lizzard warrior blocks your path with a grin.\n";
        if (player == 1)
        {
            cout<<"'What bringSSSS you here, inSSSolent child!'\n";
            cout<<"You hesitate but answers: 'I'm Lina, the barbarian! And today is the day i find my pet dragon!'\n";
            cout<<"'Oh yeSSSS!' he answers 'Take thiSSS SSShield with you. It will protect you from hiSSS bad breath'\n";
            shield = true;
            if(shield == true)
            {
                cout<<"Shield acquired\n\n";
            }
        }
        else
        {
            cout<<"He hisses at you and start running you way!\n";
            cout<<"Afraid, you turn back and run.\n";
            cout<<"After a while you find shallow waters and is able to cross the river\n\n";
        }
    }

//~~~~~~Third Act~~~~~~

    cout<<"After a long walk you are able to leave the Great Marsh\n";
    cout<<"As you look up you see dark mountains blocking your path.\n";
    cout<<"How are you going to get through them?\n";
    cout<<" 1) Flaming Furnace of the Dwarves\n";
    cout<<" 2) Dark Caverns under the mountain\n";
    cout<<" 3) Woods of the Witches\n";
    cin>>choice3;
    cout<<"\n\n";

    if (choice3 == 1)
    {
        cout<<"You start up the path and as you get closer to the entrance you can feel the furnace's heat\n";
        cout<<"The dwarves look at you and start mumbling\n";
        if (player == 3)
        {
            cout<<"'You reek of magic! Leave this place at once!'\n";
            cout<<"Disapointed you go on your way...\n";
        }
        else
        {
            cout<<"'I like how you smell! What are you doing here?'\n";
            cout<<"You explain your quest to find tou pet dragon.\n";
            cout<<"The dwarves see the excitment in your eyes and give you a gift!\n";
            cout<<"'Take this hammer with you! If the dragon looks funny in your direction throw this at his head!'\n";
            hammer = true;
            if (hammer == true)
            {
                cout<<"TrueAim Hammer acquired!\n\n";
            }
        }
    }
    if (choice3 == 2)
    {
        cout<<"You get inside the cave. Your path in litten by strange crystals.\n";
        cout<<"Among various smells you are able to identify a particularly good one!\n";
        cout<<"Will you take a detour to find the its source?\n";
        cout<<" 1) Yes\n";
        cout<<" 2) No\n";
        cin>>smell;
        cout<<"\n\n";

        if (smell == 1)
        {
            cout<<"As you follow the smell deeper in the cave you see an ogre cooking a Giant Turkey Leg\n";
            cout<<"Being a coward the ogre sees you and runs away!\n";
            cout<<"You happly go to the fire, pick the food and bolts from the cave before he comes back with reinforcements!\n";
            turkey = true;
            if (turkey == true)
            {
                cout<<"Giant Turkey Leg acquired\n\n";
            }
        }
        else
        {
            cout<<"Knowing the cave is filled with ogres you decide to ignore the smell\n";
            cout<<"After walking some more you find the exit\n\n";
        }

    }
    if (choice3 == 3)
    {
        cout<<"Breathing deeply you go inside the dark woods.\n";
        cout<<"At the heart of the florest you find a witche's hut!\n";
        cout<<"Afraid you approach the door\n";
        if (player == 3)
        {
            cout<<"A strange voice tells you to come inside and when you do all you see is a raven\n";
            cout<<"'It's you Thomas, the mage! I've been wating for you!' Says the raven\n";
            cout<<"Turning to her human form the witch hand you a Screaming Grimoire, full of spells.\n";
            cout<<"You store the loud book in your bag and leave the Woods behind\n";
            grimoire = true;
            if (grimoire == true)
            {
                cout<<"Scandalous Grimoire acquired!\n\n";
            }
        }   
        else
        {
            cout<<"With shaking hands you go for the door\n";
            cout<<"'I know you are out there! Come in and I'll swallow you whole!'\n";
            cout<<"Running for you life you leave the Woods behind!\n\n";
        }
    }

//~~~~~~Act Four~~~~~~

    cout<<"After crossing the Dark Mountains you finally reach the entrance of the Dragon's Maze\n";
    cout<<"Night is starting to fall. You'll need to go in tha maze and find the path!\n";
    cout<<"How are you going to do it?\n";
    cout<<" 1) Find your path with the help of the stars\n";
    cout<<" 2) Enter the maze confidently\n";
    cout<<" 3) Cheat, climbing up tha walls?\n";
    cin>>choice4;
    cout<<"\n\n";

    if (choice4 == 1)
    {
        cout<<"You get in the Maze. The stars shine brightly!\n";
        if (player == 3 || moonStone == true)
        {
            cout<<"You find your path as the stars guide you!\n";
            cout<<"With no incidents you get to the middle of the maze!\n\n";
        }
        else
        {
            cout<<"You look up the stary sky but find no clue whatsowever\n";
            cout<<"After walking all night you find the center of the maze\n";
            cout<<"Being so tired and weak you feel Hurt and in dire need of a rest\n";
            hurt++;
            if (hurt != 0)
            {
                cout<<"You are injured!\n";
                cout<<"Hurt level: "<< hurt <<"\n";
            }
        }
    }
    if (choice4 == 2)
    {
        cout<<"You enter the maze and look around. There are innumerous paths!\n";
        cout<<"It doens't take you long to realize there's a great chance of becoming lost...\n";
        if (map == true)
        {
            cout<<"You reach in your bag and turn the map right side up!\n";
            cout<<"First right, left, second right, straight then leftg again\n";
            cout<<"With no incidents you get to the middle of the maze!\n\n";
        }
        else
        {
            cout<<"It doesn't matter where you look, every path looks the same.\n";
            cout<<"After walking all night you find the center of the maze\n";
            cout<<"Being so tired and weak you feel Hurt and in dire need of a rest\n";
            hurt++;
            if (hurt != 0)
            {
                cout<<"You are injured!\n";
                cout<<"Hurt level: "<< hurt <<"\n";
            }
        }        
    }
    if (choice4 == 3)
    {
        cout<<"You are able to climb the Maze's walls and walks carefully on top of them!\n";
        cout<<"Soon enough you find a wall impossible to climb...\n";
        if (rope == true)
        {
            cout<<"You reach in your bag for the rope and throw it at a hook you see\n";
            cout<<"From up here you can see the whole Maze!\n";
            cout<<"With no incidents you get to the middle of it!\n\n";
        }
        else
        {
            cout<<"You jump and is able to grab the wall's hedge. You thought did it!\n";
            cout<<"but being able to lift yourself up, you fall and hit hte ground, hard...\n";
            cout<<"Even being Hurt, you are able to find the center of the Maze\n";
            hurt++;
            if (hurt != 0)
            {
                cout<<"You are injured!\n";
                cout<<"Hurt level: "<< hurt <<"\n";
            }
        }  
    }

//~~~~~~Act Five~~~~~~

    cout<<"You hear a loud snore! The dragon is asleep!\n";
    cout<<"Blue flames come out of his nostrils every breath he takes\n";
    cout<<"How you are going to get near him without being cooked?\n";
    cout<<" 1) Distract it\n";
    cout<<" 2) Jump on top of it as fast as you can\n";
    cout<<" 3) Approach silently, withou a noise\n";
    cin>>choice5;
    cout<<"\n\n";

    if (choice5 == 1) //Distract
    {
        cout<<"You need something to distract the dragon!\n";
        cout<<"Searching you pockets you come up with ";
        if (rattle == true)
        {
            cout<<"the rattle\n";
            cout<<"Throwing it as far as you can it makes a small sound as it lands\n";
            cout<<"Intrigged tha dragon goes to investigate and you are able to approach it\n";
        }
        else
        {
            cout<<"nothing! Looking around you find a pebble\n";
            cout<<"You throw it, but it's not enough to distract the dragon\n";
            cout<<"It jumps playfully in your direction and you Hurt yourself\n";
            hurt++;
            if (hurt != 0)
            {
                cout<<"You are injured!\n";
                cout<<"Hurt level: "<< hurt <<"\n";
            }

        }
    }
    if (choice5 == 2) //Protect
    {
        cout<<"You prepare and run as fast as you can!\n";
        cout<<"Just as you are about to jump tha dragon wakes!";
        if (shield == true)
        {
            cout<<"He breathes fire your way,\n";
            cout<<"Theres only a little time for you to put your shield up\n";
            cout<<"You keep walking as the shield protects you from the flames and you are able to approach it\n";
        }
        else
        {
            cout<<"You jump left, tumbling out of the fire's path.\n";
            cout<<"Your clothes are on fire, but you manage to extinguish it.\n";
            cout<<"The dragon is looking playfully in your direction and you Hurt yourself\n";
            hurt++;
            if (hurt != 0)
            {
                cout<<"You are injured!\n";
                cout<<"Hurt level: "<< hurt <<"\n";
            }

        }
    }
    if (choice5 == 3) //Approach
    {
        cout<<"Set by set you start getting near the dragon!\n";
        cout<<"With luck you will be able to approach it witht being noticed\n";
        if (shoes == true || player == 2)
        {
            cout<<"You don't make a sound, but the dragon senses you!\n";
            cout<<"Slowly it opens an eye, and you jump behind a rock\n";
            cout<<"You are really near now!\n";
        }
        else
        {
            cout<<"Despite your efforts you trip on a chalice, waking tha dragon\n";
            cout<<"With a playfull roar it swings it's tail at you bringing you closer\n";
            cout<<"With a sore body you approach it but you Hurt yourself\n";
            hurt++;
            if (hurt != 0)
            {
                cout<<"You are injured!\n";
                cout<<"Hurt level: "<< hurt <<"\n";
            }

        }
    }
    
//~~~~~~Act Six~~~~~~    

    cout<<"The dragon looks at you with curiosity\n";
    cout<<"Is it thinking how to cook you before eating??\n";
    cout<<"You don't have long to prove you deserve it. How you are going to do it?\n";
    cout<<" 1) Hitting him in the nose\n";
    cout<<" 2) Feeding him\n";
    cout<<" 3) Screaming to scare him\n";
    cin>>choice6;
    cout<<"\n\n";

    if (choice6 == 1) //Hitting
    {
        cout<<"You jump on his belly. \n";
        cout<<"Flyng through the air you prepare to hit\n";
        if (hammer == true || player == 1)
        {
            cout<<"You hit so hard his nose vibrates\n";
            cout<<"A little shaken the dragon tosses its head\n";
            cout<<"He looks at you in owe, small tears leaves his eyes.\n";
        }
        else
        {
            cout<<"You hit his nose with a wodden stick\n";
            cout<<"Tha dragon laughs as the stick breaks...\n";
            cout<<"You sjake your Hurt hand\n";
            hurt++;
            if (hurt != 0)
            {
                cout<<"You are injured!\n";
                cout<<"Hurt level: "<< hurt <<"\n";
            }

        }
    }
    if (choice6 == 2) //Food
    {
        cout<<"You make a cute face telling him what a good dragon he is!\n";
        cout<<"He looks suprised as you search for food in you bag";
        if (turkey == true)
        {
            cout<<"You fing the Giant Turkey Leg and offers him.\n";
            cout<<"He loves turkey!\n";
            cout<<"He swallows it in one bite, smilling back ai you.\n";
        }
        else
        {
            cout<<"The dragon is wating for you to give him something\n";
            cout<<"but there is nothing in your bag... He licks you.\n";
            cout<<"but his tongue is so hot you get burned and you Hurt yourself\n";
            hurt++;
            if (hurt != 0)
            {
                cout<<"You are injured!\n";
                cout<<"Hurt level: "<< hurt <<"\n";
            }

        }
    }
    if (choice6 == 3) //Screaming
    {
        cout<<"You clear your throat and starts screaming as loud as you can!\n";
        if (grimoire == true)
        {
            cout<<"Suddendly the Scandalous Grimoire jumps out of your bag\n";
            cout<<"And joins you on your merry screaming. Its so loud!\n";
            cout<<"The dragon looks at you in awe!\n\n";
        }
        else
        {
            cout<<"The dragon keeps watching\n";
            cout<<"Suddendly he roars back at you!\n";
            cout<<"Its so loud your ear start ringing and you Hurt yourself\n";
            hurt++;
            if (hurt != 0)
            {
                cout<<"You are injured!\n";
                cout<<"Hurt level: "<< hurt <<"\n";
            }

        }
    }

//~~~~~~Act Seven~~~~~~

    cout<<"As fast as lightning the dragon picks you up using its tail\n";
    cout<<"Turning you upside down, right to left he examines you!\n";
    cout<<"Having taken "<<hurt<<" points in damage throught the quest,\n";
    cout<<"the dragon ";
    if (hurt == 0)
    {
        cout<<" is impressed with your courage! It puts you back to the ground and gives you an egg\n";
        cout<<"Soon it will hatch and you will have your own baby dragon!\n";
    }
    else if (hurt == 3)
    {
        cout<<" swallows you in one huge bite!\n";
        cout<<"Inside its belly you are forced to admit that this quest thing is harder than you expected\n";        
    }
    else
    {
        cout<<" puts you on his back. You fly high in the sky.\n";
        cout<<"Early morning you are back at your village. You didn't get a pet, but it was an wonderfull adventure!\n";
    }

    cout<<" _______ _             ______           _ _ _ \n";
    cout<<"|__   __| |           |  ____|         | | | |\n";    
    cout<<"   | |  | |__   ___   | |__   _ __   __| | | |\n";    
    cout<<"   | |  | '_   / _    |  __| | '_   / _` | | |\n";    
    cout<<"   | |  | | | |  __/  | |____| | | | (_| |_|_|\n";    
    cout<<"   |_|  |_| |_| ___|  |______|_| |_| __,_(_|_)\n";    








//~~~~~~~~RETURN~~~~~~~~    
return 0;
}
