#include <iostream>

#include <cpr/cpr.h>
#include <json.hpp>

int main(int argc, char** argv) {
    std::string key = argv[1];
    auto r = cpr::Get(cpr::Url{"http://ec2-34-215-218-52.us-west-2.compute.amazonaws.com/license/api/v1/license/"+key});
    if (r.status_code == 200)
        std::cout << "Valid" << std::endl;
    else
        std::cout << "Not Valid" << std::endl;
}


