#include "SamsungPhone.hpp"
#include "SamsungTablet.hpp"
#include "SamsungToolFactory.hpp"
#include "ApplePhone.hpp"
#include "AppleTablet.hpp"
#include "AppleToolFactory.hpp"


int main(){
    SamsungToolFactory *samsungToolFactory = new SamsungToolFactory();
    SamsungPhone *samsungPhone = dynamic_cast<SamsungPhone*>(samsungToolFactory->CreatePhone());
    SamsungTablet *samsungTablet = dynamic_cast<SamsungTablet*>(samsungToolFactory->CreateTablet());
    std::cout << samsungPhone->phoneAction() << std::endl;
    std::cout << samsungTablet->tabletAction() << std::endl;

    delete samsungToolFactory;
    delete samsungPhone;
    delete samsungTablet;

    AppleToolFactory *appleToolFactory = new AppleToolFactory();
    ApplePhone *applePhone = dynamic_cast<ApplePhone*>(appleToolFactory->CreatePhone());
    AppleTablet *appleTablet = dynamic_cast<AppleTablet*>(appleToolFactory->CreateTablet());
    std::cout << applePhone->phoneAction() << std::endl;
    std::cout << appleTablet->tabletAction() << std::endl;

    delete appleToolFactory;
    delete applePhone;
    delete appleTablet;

    return 0;
}
