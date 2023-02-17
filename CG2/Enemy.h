#pragma once
#include "GameObject3D.h"

class Enemy {
public:

	//�R���X�g���N�^
	Enemy();
	//�f�X�g���N�^
	~Enemy();

	void Initialize(ViewProjection* viewProjection, XMMATRIX* matProjection);

	void Update();

	void Draw();

	WorldTransform GetWorldTransform();

private:
	GameObject3D* gameObject = nullptr; // ���W��傫�����������Ă���

	float moveSpeed = 0; //�ړ����x

};


