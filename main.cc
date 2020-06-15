#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <renderer.h>

using namespace std;

int main()
{
  cout << "Hello World!" << endl;
  Renderer * r = new Renderer();
  r->render();
  return 0;
}
