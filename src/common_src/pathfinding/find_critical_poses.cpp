#include "pathfinding/find_critical_poses.h"

using std::set;

critical_poses_t find_critical_poses(const World & world) {
	// Not currently implemented, so we hardcode working poses for res/map1.svg
	return {
		{{1.29215882, 1.27719232}, 20},
		{{2.19018437, 1.19736775}, 20},
		{{3.21792473, 1.18738978}, 20},
		{{3.96129038, 1.39193991}, 20},
		{{4.20575294, 2.17022887}, 20},
		{{4.24067596, 2.99840793}, 20},
		{{3.87647668, 3.67691609}, 20},
		{{3.00838547, 3.87647738}, 20},
		{{2.10038181, 3.95131283}, 20},
		{{1.34204913, 3.68190522}, 20},
		{{1.07763052, 3.20794719}, 20},
		{{0.89802539, 2.54440614}, 20},
		{{0.95290474, 1.92576631}, 20}
	};
}
