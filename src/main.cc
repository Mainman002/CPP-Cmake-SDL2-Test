#include "app.hpp"

int main() {
    App app;
    app.init();
    app.run();
    app.clean();
    return 0;
}