#pragma once
#define d_toggle_bind 0x2D /* VK_INSERT */

namespace overlay
{
	void draw_gui();
	void render();

	inline bool enabled = true;
}
