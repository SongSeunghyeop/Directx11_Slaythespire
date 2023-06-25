#pragma once
#include "shGameObject.h"

namespace sh
{
	class Layer
	{
	public:
		Layer();
		~Layer();

		virtual void Initialize();
		virtual void Update();
		virtual void LateUpdate();
		virtual void Render();
		virtual void Release();

		void AddGameObject(GameObject* gameObj);
		
	private:
		std::vector<GameObject*> mGameObjects;
	};
}
