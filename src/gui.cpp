#include "overlay.h"
#include <imgui.h>

void overlay::draw_gui()
{
	ImGui::SetNextWindowSize(ImVec2(600, 400));

	ImGui::Begin("gui", nullptr, ImGuiWindowFlags_NoDecoration);
	{
		ImGui::Text("external overlay by noahswtf");
	}
	ImGui::End();
}