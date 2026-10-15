public void LateUpdate()
	{
		if (this.m_camera == null)
		{
			return;
		}
		this.m_camera.rect = new Rect(0f, 0f, 1f, 1f);
		this.m_camera.ResetProjectionMatrix();
		Matrix4x4 mat = this.m_camera.projectionMatrix;
		float targetAspect = 1.777778f;
		float currentAspect = (float)Screen.width / (float)Screen.height;
		if (currentAspect < targetAspect)
		{
			float scale = currentAspect / targetAspect;
			mat.m00 *= scale;
			mat.m11 *= scale;
			this.m_camera.projectionMatrix = mat;
		}
	}


MaintainAspectRatio