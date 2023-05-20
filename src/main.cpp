#include <iostream>
#include "convertToAscii.h"
#include "presentResults.h"
#include "readConfig.h"
#include <vector>

int main(int argc, char *argv[])
{
    // Initialize a storage
    std::vector<CImage> images;

    try
    {
        //Read configuration
        readConfig(images);

        //Convert images
        convertToAscii( images );

        //Present converted images
        presentResults( images );
    }
    //Catches all possible errors the program  may throw
    catch (std::exception & e )
    {
        std::cout << "ERROR: " << e.what() << std::endl;
    }

    return EXIT_SUCCESS;
}