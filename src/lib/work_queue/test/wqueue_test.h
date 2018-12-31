
#pragma once

#include <px4_app.h>
#include <lib/work_queue/WorkItem.hpp>
#include <string.h>

using namespace px4;

class WQueueTest : public px4::WorkItem
{
public:
	WQueueTest() = default;
	~WQueueTest() = default;

	int main();

	void Run() override;

	static px4::AppState appState; /* track requests to terminate app */

private:
	int _iter{0};
};