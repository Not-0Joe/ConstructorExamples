#ifndef CONSTRUCTOR_EXAMPLES_H
#define CONSTRUCTOR_EXAMPLES_H

// header files only purpose is to demonstrate ways of defining a defualt constructor this would not complie
// due to defualt constructor abiguity

class ConstructorExamples
{
public:

	// all default constructors called when no arguments passed via
	// ConstructorExamples constructorExamples; or ConstructorExamples constructorExamples{};

	ConstructorExamples() {}

	ConstructorExamples() = default;

	ConstructorExamples(int x = 5, int y = 6) {}


private:
	// default Member Initializers(int x = 5;) are used every time any constructor is called, 
	// unless that constructor explicitly overrides them in its Member Initializer List.
	int x = 5;
	int y = 6;
};




#endif // !CONSTRUCTOR_EXAMPLES_H

