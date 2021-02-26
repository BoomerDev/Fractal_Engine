<p align="left">
  <img src="res/Graphics/Logo.png" size=1>
</p>

Fractal Engine its 3D Game Engine with Editor

Not Finished

Features to do:

* Editor
* Launcher
* C# and Lua Support
* loading 3D models

Done :
* Component System
* Entities System

# exemple

```cpp
#include "fractal.hpp"

int main(int argc, char** argv) {

	ECS::EntityManager mgr;


	mgr.RegisterSystem<TestSystem1>();
	mgr.RegisterSystem<TestSystem2>();
	mgr.RegisterSystem<TestSystem3>();

	auto entity1 = mgr.AddNewEntity();
	ECS::Entity ent(entity1, &mgr);

	ent.AddComponent<TestComp1>();

	auto entity2 = mgr.AddNewEntity();
	mgr.AddComponent<TestComp2>(entity2);

	auto entity3 = mgr.AddNewEntity();
	mgr.AddComponent<TestComp1>(entity3);
	mgr.AddComponent<TestComp2>(entity3);

	mgr.Update();

	fr::Core.Initialize();
	fr::Timer.Initialize();
	fr::Events.Initialiaze();

	while (fr::Core.Run()) {
		fr::Timer.Tick();
		fr::Events.Poll();
		fr::Core.Update();
	}

	return EXIT_SUCCESS;
}
```
# Bulid

To bulid you need :

* GLM
* SFML
* Glew
* GLFW
* Cmake or visual studio 2019

To install this libaries on linux type

        sh lib.sh
