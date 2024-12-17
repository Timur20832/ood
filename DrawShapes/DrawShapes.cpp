#include <iostream>
#include "Handler.h"
#include "CShape.h"

int main()
{
	std::vector<std::shared_ptr<CShape>> shapes;
	std::shared_ptr<Handler> handler;

	handler->HandleCommands(shapes);

	return 0;
}