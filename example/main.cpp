#include <iostream>
#include <memory>
#include "../nutclient.h"
using namespace nut;
using namespace std;

int main()
{
    std::unique_ptr<Client> client(new TcpClient("192.168.1.8", 3493));
    auto devices = client->getDeviceNames();
    for(const auto & d : devices)
        cout << d << endl;
    if (!devices.empty()) {
        auto cmds = client->getDeviceCommandNames(*devices.begin());
        for(const auto & c : cmds)
            cout << c << endl;
    }
    return 0;
}
