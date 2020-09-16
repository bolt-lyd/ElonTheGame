#include "player.h"


//DEFAULT CONSTRUCTOR
player::player(){
    location = {1,1};
}


/*--------------MEMBER FUNCTIONS------------*/

//Gets the direction the player wants to move and checks to be sure they aren't
//trying to move off the board or move onto an object
void player::getDirection(){
    string dir;
    //system ("CLS");
    cout << "What direction?" << endl;
    cin >> dir;
    if((dir == "a") || (dir == "w") || (dir == "s") || (dir == "d") || (dir == "help")){
        if(dir == "w"){
            if(((uX - 1 ) > 15) || ((uX - 1 ) < 0)){
                cout << "You cannot move off the board" << endl;
            }
            else{
                if(iBoard[location.at(0) - 1][location.at(1)] == 'X'){
                    location.at(0) = location.at(0) - 1;
                }
                else{
                    cout << "You cannot move this way as there is something in the way" << endl;
                }
            }


        }
        else if(dir == "d"){
            if(((location.at(1) + 1 ) > 15) || ((location.at(1) + 1 ) < 0)){
                cout << "You cannot move off the board" << endl;
            }
            else{
                if(iBoard[location.at(0)][location.at(1) + 1] == 'X'){
                    location.at(1) = location.at(1) + 1;
                }
                else{
                    cout << "You cannot move this way as there is something in the way" << endl;
                }
             }
        }
        else if(dir == "a"){
            if(((location.at(1) - 1 ) > 15) || ((location.at(1) - 1 ) < 0)){
                cout << "You cannot move off the board" << endl;
            }
            else{
                if(iBoard[location.at(0)][location.at(1) - 1] == 'X'){
                    location.at(1) = location.at(1) - 1;
                }
                else{
                    cout << "You cannot move this way as there is something in the way" << endl;
                }
            }
        }
        else if(dir == "s"){
            if(((uX + 1 ) > 14) || ((uX + 1 ) < 1)){
                cout << "You cannot move off the board" << endl;
            }
            else{
                if(iBoard[location.at(0) + 1][location.at(1)] == 'X'){
                    location.at(0) = location.at(0) + 1;
                }
                else{
                    cout << "You cannot move this way as there is something in the way" << endl;
                }
            }
        }
        else{
            cout << "Print instructions" << endl;
        }
    }
    else if(dir == "obama"){
        cout << "........,%#&%%%#(//***///***,,,,,*,,,*,*,**,********/**//**/**////////////(/((((((((/(((((#%%%&%%&@(#((((#%&%#..  ..............   .............  ...............  ....................................." << endl;
        cout << "........./#%%#%%((////*//******,,,******************/*/*******//*//////////////(((((((((((((#%%&&&%(//#%#((#%##*................ ......................................................................." << endl;
        cout << ".........*##(%%#%#(////////***************************************///////////(((((((((((((((((%&&#(//(%#(//(####,............... ......................................................................." << endl;
        cout << ".........,#%%%%%%#((//////////////***************/***,*********//////*///////(/(/(((((((((/((((%&%(((##(/////###*............... ......................................................................." << endl;
        cout << "..........#%&%#%%#((((//(///////**********,***,*****,,******/////((##%%%&&&&&&&&&%%#((((((/((/((%%(##&&##(((//#(,............... ......................................................................." << endl;
        cout << "..........*&%##%####((/(////////****,*****,*,,,**,****//////((#%&&&&&@&@&&&&%#%#%%#####((/((((((((/(#&&#(((((/(#,............... ......................................................................." << endl;
        cout << "...........((%#%%#(#(/(////////******************///(//(((#%&&@@@&@@&&%##((((##%%%%%#((((/(//(((((//((%#(((((((#,............... ......................................................................." << endl;
        cout << "............(%%####((((////////************////////(((((#%%&&&&&%%%&&&##%&&&&&@&#%(((((////(/(((((///(((#((//(((,............... ......................................................................." << endl;
        cout << ".............(%%%#((((/(////*******/////(((##((((/(/(/(((((##%%&%%&&#&@@@@%%%%((((((/(/////(((((//////(/%#((/(#(................ ............... ......................................................." << endl;
        cout << "............../&&#((((///******//((##&&&&&&&&&&&%(///*////((##((%%#(####%%###((((/((/(/////(((/(((///(##((//#(/................. ......................................................................." << endl;
        cout << "................%%#(/(///*//##%&&&%&@&@@@@@&&&&&%#/******//((((((((((((((/(((((/////////////((((((((/(##(((///.................. ......................................................................." << endl;
        cout << ".............***,*&#//////#&&@@&&&%%%##%&%%%%%%%#%//****///(((////(((((((((((////////(////((((/(((/((/(%(////*.................. ......................................................................." << endl;
        cout << "...........*%%(////%(///*(%%&&%%##%#(#@@@@&#%%%#(((//****////////////*///((//*//////////((((((///(/(///#%#((/................... ................................****///*..............................." << endl;
        cout << "............*%#%(((*((////(###%&%%&&&&@@&#(%##(////*******//////////////////////////////(/(((((//(///((......................... ..............................,*******//,.............................." << endl;
        cout << ".............*###////(////((###%&&%%%%%%####((//***/****,**/////////////(////////((/(//(/(((/((//(/(/((,........................ ..............................**,****///*.............................." << endl;
        cout << "..............*#((////#/////(((((((((((((/////****/*/**,***///((((((#%#((//*///////((///(////(///((////,........................  ............................**,,********.............................." << endl;
        cout << ".................*/(((((////////////////////******///*******/////((((((#(##(///////////////(/(//((((///,........ ............... ............... .............*,****//////.............................." << endl;
        cout << ".................../(((((//////****//*/*///*******////*,,,,**/////(/////(%(###((//////////(////(///////*........................ .............................*****//(#((/.............................." << endl;
        cout << "....................*(/**////////***//**********//((//*.,****///(((((#%%%%((((##(((((((/(//////////(/((,........................ ................ ............,****//#%%#(,..................... ......." << endl;
        cout << "......................//**////////////(//*******/(**///////(((###&&&&%%((((/(//(#(((((((((/((//(((((((/,........................ .............................,,,**//#%%%##(*..........................." << endl;
        cout << "........................*/,**////(/////(///****//////(#%#####%%%&&((((((((((/(//((##(((((((((((((((((((,........................ ............................*////(#(#%%%%###/.........................." << endl;
        cout << "..........................*//////(((((///(///*///(*%%&%%%%(#%%%##(((((((((((((((((((##((((((/((((#(((((*........................ ............................,/(#%%%%%##%%%%%#(,........................" << endl;
        cout << "............................//////((((/////////////***/////////(////((((((((((((((((((#((((((((((#(###(/*/...................... ...........................,***/#&&%%###(#%%%#(,............... ......." << endl;
        cout << "..............................**../((((((//////////****////////(((/((##%%%%%%##(%%%%##((((((((((((###((///*. .,................. ..........................,,,**/(%&&%####(##%%##*,....................." << endl;
        cout << "...................................,((((/(/////////***/////////(#(%%%&&@@@@@@&&&%%%%#############(((##((///.   (&&#............. ............... .........,*////(#%&&&%%#####(#%##(*...................." << endl;
        cout << ".....................................*((((((((((((/////////#%%%&&&&%&&&&#%%%%%%%%%#######%%%%####(####(((%*.    ,@@&%,.......... ........................../(##%%%###&&%%#%%###(#%##/,.................." << endl;
        cout << ".......................................(((((((#(###/((((/#%%&&&@@@&&&&#%#(#%##%%%###%###%%#####((###%##(%*..     *&@&%#*........ .........................../%%&%%%#((#%&%%######(/((/,................." << endl;
        cout << "........................................,(((((((((((((#(#&&@@%###%%#%##//(#%%&&%####%%%%##((((#####%###%*...    .,&@&%%%%(...... ............................*%%%%%#((####%%%%%###(///,................." << endl;
        cout << "..........................................,((((((((((###%##((#(#((#######%%&&%%#%%%#######((((###%%%%%(,...     ./@@&&&&&%%%/... ............................,/#%%%%%#######%%%####((//,................" << endl;
        cout << ".............................................(((##(((########%%%%%%%%%%&&@@&%%%%#####((#((((((#%%%%%#,....    ..,&@@@&&&&&&&%&%#,......................,**,..,,*(#%%%%%%#####(########(*................" << endl;
        cout << "...............................................*(((##(#######(####%&&&&&%%%%#%########((#(#((#%&&&#*,...........(@@@@@&&&&&&&&&&&&&&#*................,***//((/**/##%%%%%###(**########(,..............." << endl;
        cout << "................................................../#((((######%%%%%%%%##((((/(/((((#(((#((#(#%&&/*,,,..........*&@@@@@&&&&&&&&&&@@&@@@@@&&&&&@&&%(/*,,*/((((//((((*/#%%%%%#//#%#(####%%%*..............." << endl;
        cout << "..................................................  ,(((((((((((((((((///((((((((((((((##%%#&&/*,,,,...  .....*&@@@@@@@@&&&&&&@&@@@@@@@@@@@@@@@@@@@@@&&%#%%%###(((((((#(//#%%%%########%(,.............." << endl;
        cout << "..................................................    *((((((//((/////////////(((((((##%%%%(***,,,,....  ....*%@@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&%%%%%%%##(((((##%%##########%##(#(/,,........." << endl;
        cout << ".................................................#      *//((((((((/////(((((######%%%%%#/****,,,,,...   ...*#@@@@@@@@@@&@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&%%#########%##(######(####&&&&&&&&&&&&%" << endl;
        cout << "................................................%&        .//((###(#(######%%%%&%%%%%%#////***,,,,...   ...,/@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#/(&&&%%%%#%##(#######%%%#(#(#@@@@@@@@@@&&" << endl;
        cout << "...............................................#&&.          .//((#%#%%%&&&&&&&%%%&&((/////***,,....   ...,*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/*/#%&&&&&%%%#########%%%###(&@@@@@@@@@@@" << endl;
        cout << "............................................/%%&&&.              ,((((((##%%&&%&@%(((//(//**,,...     ...,*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&/**(%&&&&%%%%%%%%%%%%##%%(###@@@@@@@@@@@" << endl;
        cout << "........................................*#&%%%&&&&/                  ./(%&&&&%*.......,,,,,...        ...,%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&/**/#%%%%%%%%%%%%%%%%##%####(&@@@@@@@@@" << endl;
        cout << "....................................*%&&&&%%%%&&@&@                     .,,,.....                     ..,(@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@(*/(##%%%%%%%%%%%%%%%%%#%###//#@@@@@@@" << endl;
        cout << "................................*#&&&&&&%%%%%&&&&@@*                 *####%%#%#(#.                    ..*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#/(##%%%%%%&&%&%%%##%%%#####(**/@@@@@" << endl;
        cout << "............................*#&&&&&&&&&%%%%&&&&@&@@%              ,*///##((#((#((#(%#                 ..%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@%/(##%&&&%%%%%%%%%%%%%###(####(/(&%#(" << endl;
        cout << "........................*%&&&&&&&&&&&%%%%&&&&&&&@@@%            *#***//(#((#((%((#((%&%%.            ..*&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@(/(##%&%%%%%%%%%%%%%%%###%###((#%&&%" << endl;
        cout << "....................*#&&&&&&&&&&&&&&%%%&&&&&&&@&@@@%.         ,(//*,*/**#//%(#%#(##(%%#(,...         ..&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&((#%%&&&&%%%%%%%%%%%#######((#%%%&&" << endl;
        cout << "................*#&&&&&&&@&&&&&&&&&%&%&&&&&&&&@@@@@%.       .###(*/****(#/(#((######%(/..,,,,..     ..(@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&(#%%&&&&&&%%%%%%#########((((##%&&" << endl;
        cout << "............*#&&&&&&&@&@@@@&&&&&&%%&&&&&@&&&&&@@@&@#.      ,((/*,,/,**(##/((((#######*,,,,,,       ..,&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%##%%&&&&&&%%######(((#(((((###&&" << endl;
        cout << ".......,/%&&&&&&@@@@&@@@@&@&@&&&%&&&&&&&&&&&&@@@@&&#.     */*.....,*,,#(/((((((((##/,,,..,,        ..&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&%&&&&&&&&%%%%#####((#((((((#%@" << endl;
        cout << "...*(%&&&&&&&@@@@@@@@@&&&&&@@&&&&&&&&&&&&&&&@@@@@&@#,   ./*.....   *,*#//(((#(###/,,,,.,...      ...(@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&%%%%%#######((((%%" << endl;
        cout << "%&&&&&&&@&@@@@@@@@@@@@@@@&&@&&&&&&&@&&&&&&&&&@&@&@&#*   /,...      **/((%%#%%##(,,,.........   ....,&@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@#*(#####################%&" << endl;
        cout << "&&&&&@@@@@@@@@&@@@@@@@@@@@@&&&&@@@@@&&&&&&&&@@&@@@@#*..*..        *(/,/&@,,((#(,.....          ....%@@@@@@@@@@@@@@@@@@@@@@@@@@&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@,*//##(((###(((((((####%%%" << endl;
        cout << "@&&&@@@@@@@@@&@@@@@@@@@@@@@&&@@@@@@@&&&&&&&&@@@@@@@#,,,.         .(**/%@@//**//(/....         ....*@@@@@@@@@@@@@@@@*///.,,...@@@@@&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@**///%@#((((((((((#######," << endl;
        cout << "@@@@@@@&@@@@@@@&@@@@@@@@@&@@@@@@@@@@@@&&&&&&@@@@@@@(*,,..       /(**/#&&&(*/*///(/...         ...,&&@@@@@@@@@@@@@@@,..   .,,,@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@,.((&&@@#((((((#((##%%%.." << endl;
        cout << "@@@@@@@@@@&@@@@@@@@@@@&&@@@@@@@&@@@&@@@&&&&&@@@@@@@&/*,,....../#(/*/(%&/%&//***//(//...       .../@@@@@@@@@@@@@@@@@@&@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/.       .......,,*/.,*" << endl;
        cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&@&@@@@@%*,.......##(//*/#&%/%&(*//(//////....      ..&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%/,..,,,,,,,,,,,.,**" << endl;
        cout << "@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@@@@&@@@@&&@@@@@@@(,.     /###/*/(#&&((%(#////*/(((((,...     .*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@@%##(*,,,,,,,,..***" << endl << endl << endl;
    }
    else{
        cout << "That is not a valid direction. Please use WASD" << endl;
    }


}

//Returns the location to make it public
vector <int> player::returnLocation(){
    return(location);
}

//Updates the invisible board. Called by gameBoard to update from the current actual board
void player::setIboard(vector<vector<char>> board){
    iBoard = board;
}

//Updates the visible board. Called by gameBoard to update from the current actual board
void player::setVboard(vector<vector<char>> board){
    vBoard = board;
}


/*--------------MEMBER FUNCTIONS------------*/
