#include <iostream>
std::string num(std::string ip,int temp){

}
int main() {
    std::cout << "IP" << std::endl;
    std::string ip;
    std::string ip1;
    std::string ip2;
    std::string ip3;
    std::string ip4;
    std::cout<<"Input IP address\n";
    std::getline(std::cin,ip);
    int temp=0;
    for(int i=0;i<ip.length();i++){
        if(ip[i]=='.')
            temp++;
        else {
            if (temp == 0)
                ip1 += ip[i];
            if (temp == 1)
                ip2 += ip[i];
            if (temp == 2)
                ip3 += ip[i];
            if (temp == 3)
                ip4 += ip[i];
        }
    }
    std::cout<<ip1<<"\n";
    std::cout<<ip2<<"\n";
    std::cout<<ip3<<"\n";
    std::cout<<ip4<<"\n";
    return 0;
}
