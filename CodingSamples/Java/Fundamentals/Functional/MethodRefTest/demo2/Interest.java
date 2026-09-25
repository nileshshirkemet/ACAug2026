//a functional interface with exactly one abstract method
//supports implicit conversion from a class which 
//implements it or from a method reference which is 
//compatible with its abstract method
interface Interest {
    float forPeriod(int time);
}
