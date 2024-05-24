#ifndef INIT_WINDOWS_H
#define INIT_WINDOWS_H

#include "content.h"
#include "baseinfo.h"
#include "detail.h"
#include "contact.h"
#include "login.h"
#include "login_register.h"
#include "splash_screen.h"

class init_windows
{
public:
    init_windows();
    bool init_content();
    bool init_splash();
    bool init_login();
};

#endif // INIT_WINDOWS_H
