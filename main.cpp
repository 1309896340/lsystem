#include <iostream>
#include <string>
#include <map>


typedef std::map<std::string, std::string> LRule;


class LSystem{
    protected:
        std::string axiom;
        LRule rule;
    public:
        LSystem(const std::string& axiom, const LRule& rule){
            this->axiom = axiom;
            this->rule = rule;
        }
        std::string generate(int iteration){
            std::string tmp(this->axiom);
            for(int i=0;i<iteration;i++)
                tmp = this->iterate(tmp);
            return tmp;
        }
        virtual std::string iterate(const std::string &p) = 0; //apply "rule" of "p" for one itration
};

class D0LSystem : public LSystem{
    public:
        D0LSystem(const std::string& axiom, const LRule& rule):LSystem(axiom, rule){}

        virtual std::string iterate(const std::string& p){
            // implementation for D0L-System
        }
};

int main(int argc, char **argv){
    int ac = 1;
    int bd = 2;
    int cd = ac + bd;
    std::printf("Hello world from lsystem %d\n", cd);
}
