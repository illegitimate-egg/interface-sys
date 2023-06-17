#include "interface_sys.h"

int main() {
    DynamicModule module = LoadDynModule("basic_interface");

    if (module == 0) {
        return 1;
    }

    UnloadDynModule(module);

    return 0;
}

START_INTERFACE_EXPORT()
END_INTERFACE_EXPORT()