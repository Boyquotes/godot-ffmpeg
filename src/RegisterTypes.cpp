#include "RegisterTypes.h"

#include "FFmpegNode.h"

#include <gdextension_interface.h>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/godot.hpp>

using namespace godot;

void register_scenes_types() {
	ClassDB::register_class<FFmpegNode>();
}

extern "C" {
	GDNativeBool GDN_EXPORT init(const GDNativeInterface *p_interface, const GDNativeExtensionClassLibraryPtr p_library, GDNativeInitialization *r_initialization) {
		godot::GDExtensionBinding::InitObject init_obj(p_interface, p_library, r_initialization);

		init_obj.register_scene_initializer(register_scenes_types);

		return init_obj.init();
	}
}
