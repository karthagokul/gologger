#include <iostream>
#include "gologger.h"
using namespace std;

structlog GologgerConfiguration = {};

int main()
{
    GologgerConfiguration.headers = true;
    GologgerConfiguration.level = ALL_LOG_LEVEL;

    LOG_FUNCTION_NAME;
    LOG(DEBUG) << "Hello Debug!";
    LOG(WARN) << "Hello Warning!";
    LOG(INFO) << "Hello Info!";
    LOG(ERROR) << "Hello Error!";
    return 0;
}

