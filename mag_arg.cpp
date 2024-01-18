#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;
using std::cout;

int main(int argc, char *argv[]){
    if (argc < 2) return -1;
    
    string input(argv[1]);
    int build = atoi(input.c_str());

    vector<int> re = {
        20472, 
        1,
        13117, 
        31492, 
        5,
        (19867/2),
        43,
        382,
        6120,
        37762,
        25896,
        1305,
        313,
        34528,
        49544,
        (4116/2),
        21056,
        36999,
        110,
        16691,
        21653,
        38983,
        (26919/2),
        2818,
        9224,
        };
    
        

    unordered_map<int,char> mapperoni;
    
    mapperoni[0] = '2';
    mapperoni[1] = 'a';
    mapperoni[2] = 'n';
    mapperoni[3] = 'e';
    mapperoni[4] = 'k';
    mapperoni[5] = 'p';
    mapperoni[6] = 'l';
    mapperoni[7] = '0';
    mapperoni[8] = 'u';
    mapperoni[9] = 'z';
    mapperoni[10] = '5';
    mapperoni[11] = 'l';
    mapperoni[12] = 'e';
    mapperoni[13] = 'n';
    mapperoni[14] = 'm';
    mapperoni[15] = 'i';
    mapperoni[16] = 'u';
    mapperoni[17] = 'r';
    mapperoni[18] = 't';
    mapperoni[19] = 'z';
    mapperoni[20] = 'm';
    mapperoni[22] = 'j';
    mapperoni[22] = 'x';
    mapperoni[23] = 'y';
    mapperoni[24] = 'c';


    for (int n = 0; n < re.size(); n++) if (!(build%re[n])) cout << mapperoni[n];
    cout << " | ";
    cout << char(input[0]+49) << char(input[1]+57) << char(input[0]+48) << char(input[2]+47) << char(input[0]+58) << char(input[3]+45) << char(input[0]+52) << char(input[4]+57) << char(input[0]+65) << char(input[1]+70);
    cout << endl;

    return 0;
}