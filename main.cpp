#include <iostream>
bool numCheck(std::string ip)
{
    if(ip.length()==3)
    {
        if(ip[0]>='2')
            if(ip[1]>='5')
                if(ip[2]>'5')
                    return false;
        if(ip[0]=='0')
            return false;
        else
            return true;
    }
    if(ip.length()==2)
    {
        if (ip[0]=='0')
            return false;
        else
            return true;
    }
    else {
        if (ip[0]>='0' && ip[0]<='9')
            return true;
        else
            return false;
    }
}
bool testIp(std::string ip) {
    int temp = 0;
    std::string ip1;
    std::string ip2;
    std::string ip3;
    std::string ip4;
    for (int i = 0; i < ip.length(); i++) {
        if (ip[i] == '.' && ip[i + 1] != '.'){
            temp++;
            i++;
        }
        if(ip[i] == '.' && ip[i + 1] == '.')
            return false;
        if (temp == 0)
            ip1 += ip[i];
        if (temp == 1)
            ip2 += ip[i];
        if (temp == 2)
            ip3 += ip[i];
        if (temp == 3)
            ip4 += ip[i];
        if(temp>3)
            return false;
    }
    bool num1=numCheck(ip1);
    bool num2= numCheck(ip2);
    bool num3= numCheck(ip3);
    bool num4= numCheck(ip4);
    if (num1 && num2 && num3 && num4)
        return true;
    else
        return false;
}
int main() {
    std::cout << "IP" << std::endl;
    std::string ip;
    std::cout<<"Input IP address\n";
    std::getline(std::cin,ip);
    (testIp(ip))? std::cout<<"Yes\n" : std::cout<<"No\n";
    return 0;
}
