#pragma once
#include "shComponent.h"
#include "shMesh.h"
#include "shMaterial.h"
#include "shShader.h"

namespace sh
{
	class MeshRenderer : public Component
	{
	public:
		MeshRenderer();
		~MeshRenderer();

		virtual void Initialize() override;
		virtual void Update() override;
		virtual void LateUpdate() override;
		virtual void Render() override;

		void SetMesh(std::shared_ptr<Mesh> mesh) { mMesh = mesh; }
		void SetMaterial(std::shared_ptr<Material> material) { mMaterial = material; }
		
		std::shared_ptr<Material> GetMaterial() { return mMaterial; }

		Vector2 GetTextureSize()
		{
			return mMaterial->GetTextureSize();
		}

		void BindConstantBuffer();
		void SetEnd(Vector2 point)
		{
			endPoint = point;
		}
	private:
		Vector2 endPoint;

		std::shared_ptr<Mesh> mMesh;
		std::shared_ptr<Material> mMaterial;
	};
}
