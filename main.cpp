#include<iostream>
#include<cstring>

int main(int argc, char *argv[]) {
    std::cout << "this is the Checkpointer project." << '\n';
    const char* const init = "init";
    while (argc > 1) {
        if (!strcmp(argv[1], init)){
            std::cout << "this is the place holder for init tag" << '\n';
            break;
        }else {
            break;
        }
    }
    return 0;

}