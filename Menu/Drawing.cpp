#include "Overlay.h"
#include <imgui.h>

void Overlay::Drawing()
{
	ImGuiStyle& style = ImGui::GetStyle();

	ImGui::SetNextWindowSize(ImVec2(600, 400));

	ImGui::Begin("Menu", nullptr, ImGuiWindowFlags_NoDecoration);
	{
		ImGui::Text("external overlay by noahswtf");
	}
	ImGui::End();
}