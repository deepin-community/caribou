/* level-model.c generated by valac 0.32.0.49-00a57, the Vala compiler
 * generated from level-model.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>


#define CARIBOU_TYPE_ISCANNABLE_GROUP (caribou_iscannable_group_get_type ())
#define CARIBOU_ISCANNABLE_GROUP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CARIBOU_TYPE_ISCANNABLE_GROUP, CaribouIScannableGroup))
#define CARIBOU_IS_ISCANNABLE_GROUP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CARIBOU_TYPE_ISCANNABLE_GROUP))
#define CARIBOU_ISCANNABLE_GROUP_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), CARIBOU_TYPE_ISCANNABLE_GROUP, CaribouIScannableGroupIface))

typedef struct _CaribouIScannableGroup CaribouIScannableGroup;
typedef struct _CaribouIScannableGroupIface CaribouIScannableGroupIface;

#define CARIBOU_TYPE_ISCANNABLE_ITEM (caribou_iscannable_item_get_type ())
#define CARIBOU_ISCANNABLE_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CARIBOU_TYPE_ISCANNABLE_ITEM, CaribouIScannableItem))
#define CARIBOU_IS_ISCANNABLE_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CARIBOU_TYPE_ISCANNABLE_ITEM))
#define CARIBOU_ISCANNABLE_ITEM_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), CARIBOU_TYPE_ISCANNABLE_ITEM, CaribouIScannableItemIface))

typedef struct _CaribouIScannableItem CaribouIScannableItem;
typedef struct _CaribouIScannableItemIface CaribouIScannableItemIface;

#define CARIBOU_TYPE_SCAN_GROUPING (caribou_scan_grouping_get_type ())

#define CARIBOU_TYPE_SCANNABLE_GROUP (caribou_scannable_group_get_type ())
#define CARIBOU_SCANNABLE_GROUP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CARIBOU_TYPE_SCANNABLE_GROUP, CaribouScannableGroup))
#define CARIBOU_SCANNABLE_GROUP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CARIBOU_TYPE_SCANNABLE_GROUP, CaribouScannableGroupClass))
#define CARIBOU_IS_SCANNABLE_GROUP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CARIBOU_TYPE_SCANNABLE_GROUP))
#define CARIBOU_IS_SCANNABLE_GROUP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CARIBOU_TYPE_SCANNABLE_GROUP))
#define CARIBOU_SCANNABLE_GROUP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CARIBOU_TYPE_SCANNABLE_GROUP, CaribouScannableGroupClass))

typedef struct _CaribouScannableGroup CaribouScannableGroup;
typedef struct _CaribouScannableGroupClass CaribouScannableGroupClass;
typedef struct _CaribouScannableGroupPrivate CaribouScannableGroupPrivate;

#define CARIBOU_TYPE_IKEYBOARD_OBJECT (caribou_ikeyboard_object_get_type ())
#define CARIBOU_IKEYBOARD_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CARIBOU_TYPE_IKEYBOARD_OBJECT, CaribouIKeyboardObject))
#define CARIBOU_IS_IKEYBOARD_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CARIBOU_TYPE_IKEYBOARD_OBJECT))
#define CARIBOU_IKEYBOARD_OBJECT_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), CARIBOU_TYPE_IKEYBOARD_OBJECT, CaribouIKeyboardObjectIface))

typedef struct _CaribouIKeyboardObject CaribouIKeyboardObject;
typedef struct _CaribouIKeyboardObjectIface CaribouIKeyboardObjectIface;

#define CARIBOU_TYPE_KEY_MODEL (caribou_key_model_get_type ())
#define CARIBOU_KEY_MODEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CARIBOU_TYPE_KEY_MODEL, CaribouKeyModel))
#define CARIBOU_KEY_MODEL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CARIBOU_TYPE_KEY_MODEL, CaribouKeyModelClass))
#define CARIBOU_IS_KEY_MODEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CARIBOU_TYPE_KEY_MODEL))
#define CARIBOU_IS_KEY_MODEL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CARIBOU_TYPE_KEY_MODEL))
#define CARIBOU_KEY_MODEL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CARIBOU_TYPE_KEY_MODEL, CaribouKeyModelClass))

typedef struct _CaribouKeyModel CaribouKeyModel;
typedef struct _CaribouKeyModelClass CaribouKeyModelClass;

#define CARIBOU_TYPE_LEVEL_MODEL (caribou_level_model_get_type ())
#define CARIBOU_LEVEL_MODEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CARIBOU_TYPE_LEVEL_MODEL, CaribouLevelModel))
#define CARIBOU_LEVEL_MODEL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CARIBOU_TYPE_LEVEL_MODEL, CaribouLevelModelClass))
#define CARIBOU_IS_LEVEL_MODEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CARIBOU_TYPE_LEVEL_MODEL))
#define CARIBOU_IS_LEVEL_MODEL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CARIBOU_TYPE_LEVEL_MODEL))
#define CARIBOU_LEVEL_MODEL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CARIBOU_TYPE_LEVEL_MODEL, CaribouLevelModelClass))

typedef struct _CaribouLevelModel CaribouLevelModel;
typedef struct _CaribouLevelModelClass CaribouLevelModelClass;
typedef struct _CaribouLevelModelPrivate CaribouLevelModelPrivate;

#define CARIBOU_TYPE_ROW_MODEL (caribou_row_model_get_type ())
#define CARIBOU_ROW_MODEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CARIBOU_TYPE_ROW_MODEL, CaribouRowModel))
#define CARIBOU_ROW_MODEL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CARIBOU_TYPE_ROW_MODEL, CaribouRowModelClass))
#define CARIBOU_IS_ROW_MODEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CARIBOU_TYPE_ROW_MODEL))
#define CARIBOU_IS_ROW_MODEL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CARIBOU_TYPE_ROW_MODEL))
#define CARIBOU_ROW_MODEL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CARIBOU_TYPE_ROW_MODEL, CaribouRowModelClass))

typedef struct _CaribouRowModel CaribouRowModel;
typedef struct _CaribouRowModelClass CaribouRowModelClass;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _CaribouIScannableItemIface {
	GTypeInterface parent_iface;
	gboolean (*get_scan_stepping) (CaribouIScannableItem* self);
	void (*set_scan_stepping) (CaribouIScannableItem* self, gboolean value);
	gboolean (*get_scan_selected) (CaribouIScannableItem* self);
	void (*set_scan_selected) (CaribouIScannableItem* self, gboolean value);
};

typedef enum  {
	CARIBOU_SCAN_GROUPING_NONE,
	CARIBOU_SCAN_GROUPING_SUBGROUPS,
	CARIBOU_SCAN_GROUPING_ROWS,
	CARIBOU_SCAN_GROUPING_LINEAR
} CaribouScanGrouping;

struct _CaribouIScannableGroupIface {
	GTypeInterface parent_iface;
	CaribouIScannableItem* (*child_select) (CaribouIScannableGroup* self);
	void (*scan_reset) (CaribouIScannableGroup* self);
	CaribouIScannableItem** (*get_scan_children) (CaribouIScannableGroup* self, int* result_length1);
	CaribouIScannableItem* (*child_step) (CaribouIScannableGroup* self, gint cycles);
	CaribouIScannableItem** (*get_step_path) (CaribouIScannableGroup* self, int* result_length1);
	CaribouIScannableItem** (*get_selected_path) (CaribouIScannableGroup* self, int* result_length1);
	CaribouScanGrouping (*get_scan_grouping) (CaribouIScannableGroup* self);
	void (*set_scan_grouping) (CaribouIScannableGroup* self, CaribouScanGrouping value);
};

struct _CaribouScannableGroup {
	GObject parent_instance;
	CaribouScannableGroupPrivate * priv;
};

struct _CaribouScannableGroupClass {
	GObjectClass parent_class;
	CaribouIScannableItem** (*get_scan_children) (CaribouScannableGroup* self, int* result_length1);
	CaribouIScannableItem* (*child_select) (CaribouScannableGroup* self);
};

struct _CaribouIKeyboardObjectIface {
	GTypeInterface parent_iface;
	CaribouIKeyboardObject** (*get_children) (CaribouIKeyboardObject* self, int* result_length1);
	CaribouKeyModel** (*get_keys) (CaribouIKeyboardObject* self, int* result_length1);
};

struct _CaribouLevelModel {
	CaribouScannableGroup parent_instance;
	CaribouLevelModelPrivate * priv;
};

struct _CaribouLevelModelClass {
	CaribouScannableGroupClass parent_class;
};

struct _CaribouLevelModelPrivate {
	gchar* _mode;
	GeeArrayList* rows;
};


static gpointer caribou_level_model_parent_class = NULL;
static CaribouIKeyboardObjectIface* caribou_level_model_caribou_ikeyboard_object_parent_iface = NULL;

GType caribou_iscannable_item_get_type (void) G_GNUC_CONST;
GType caribou_scan_grouping_get_type (void) G_GNUC_CONST;
GType caribou_iscannable_group_get_type (void) G_GNUC_CONST;
GType caribou_scannable_group_get_type (void) G_GNUC_CONST;
GType caribou_key_model_get_type (void) G_GNUC_CONST;
GType caribou_ikeyboard_object_get_type (void) G_GNUC_CONST;
GType caribou_level_model_get_type (void) G_GNUC_CONST;
GType caribou_row_model_get_type (void) G_GNUC_CONST;
#define CARIBOU_LEVEL_MODEL_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), CARIBOU_TYPE_LEVEL_MODEL, CaribouLevelModelPrivate))
enum  {
	CARIBOU_LEVEL_MODEL_DUMMY_PROPERTY,
	CARIBOU_LEVEL_MODEL_MODE
};
CaribouLevelModel* caribou_level_model_new (const gchar* mode);
CaribouLevelModel* caribou_level_model_construct (GType object_type, const gchar* mode);
CaribouScannableGroup* caribou_scannable_group_construct (GType object_type);
static void caribou_level_model_set_mode (CaribouLevelModel* self, const gchar* value);
void caribou_level_model_add_row (CaribouLevelModel* self, CaribouRowModel* row);
static void caribou_level_model_on_key_clicked (CaribouLevelModel* self, CaribouKeyModel* key);
static void _caribou_level_model_on_key_clicked_caribou_ikeyboard_object_key_clicked (CaribouIKeyboardObject* _sender, CaribouKeyModel* key, gpointer self);
static void __lambda11_ (CaribouLevelModel* self, CaribouKeyModel* k);
static void ___lambda11__caribou_ikeyboard_object_key_pressed (CaribouIKeyboardObject* _sender, CaribouKeyModel* key, gpointer self);
static void __lambda12_ (CaribouLevelModel* self, CaribouKeyModel* k);
static void ___lambda12__caribou_ikeyboard_object_key_released (CaribouIKeyboardObject* _sender, CaribouKeyModel* key, gpointer self);
CaribouRowModel** caribou_level_model_get_rows (CaribouLevelModel* self, int* result_length1);
const gchar* caribou_key_model_get_toggle (CaribouKeyModel* self);
const gchar* caribou_level_model_get_mode (CaribouLevelModel* self);
static CaribouIScannableItem** caribou_level_model_real_get_scan_children (CaribouScannableGroup* base, int* result_length1);
CaribouScanGrouping caribou_iscannable_group_get_scan_grouping (CaribouIScannableGroup* self);
CaribouKeyModel** caribou_ikeyboard_object_get_keys (CaribouIKeyboardObject* self, int* result_length1);
static CaribouIKeyboardObject** caribou_level_model_real_get_children (CaribouIKeyboardObject* base, int* result_length1);
static void caribou_level_model_finalize (GObject* obj);
static void _vala_caribou_level_model_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_caribou_level_model_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


CaribouLevelModel* caribou_level_model_construct (GType object_type, const gchar* mode) {
	CaribouLevelModel * self = NULL;
	const gchar* _tmp0_ = NULL;
	GeeArrayList* _tmp1_ = NULL;
	g_return_val_if_fail (mode != NULL, NULL);
	self = (CaribouLevelModel*) caribou_scannable_group_construct (object_type);
	_tmp0_ = mode;
	caribou_level_model_set_mode (self, _tmp0_);
	_tmp1_ = gee_array_list_new (CARIBOU_TYPE_ROW_MODEL, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL, NULL, NULL);
	_g_object_unref0 (self->priv->rows);
	self->priv->rows = _tmp1_;
	return self;
}


CaribouLevelModel* caribou_level_model_new (const gchar* mode) {
	return caribou_level_model_construct (CARIBOU_TYPE_LEVEL_MODEL, mode);
}


static void _caribou_level_model_on_key_clicked_caribou_ikeyboard_object_key_clicked (CaribouIKeyboardObject* _sender, CaribouKeyModel* key, gpointer self) {
	caribou_level_model_on_key_clicked ((CaribouLevelModel*) self, key);
}


static void __lambda11_ (CaribouLevelModel* self, CaribouKeyModel* k) {
	CaribouKeyModel* _tmp0_ = NULL;
	g_return_if_fail (k != NULL);
	_tmp0_ = k;
	g_signal_emit_by_name ((CaribouIKeyboardObject*) self, "key-pressed", _tmp0_);
}


static void ___lambda11__caribou_ikeyboard_object_key_pressed (CaribouIKeyboardObject* _sender, CaribouKeyModel* key, gpointer self) {
	__lambda11_ ((CaribouLevelModel*) self, key);
}


static void __lambda12_ (CaribouLevelModel* self, CaribouKeyModel* k) {
	CaribouKeyModel* _tmp0_ = NULL;
	g_return_if_fail (k != NULL);
	_tmp0_ = k;
	g_signal_emit_by_name ((CaribouIKeyboardObject*) self, "key-released", _tmp0_);
}


static void ___lambda12__caribou_ikeyboard_object_key_released (CaribouIKeyboardObject* _sender, CaribouKeyModel* key, gpointer self) {
	__lambda12_ ((CaribouLevelModel*) self, key);
}


void caribou_level_model_add_row (CaribouLevelModel* self, CaribouRowModel* row) {
	CaribouRowModel* _tmp0_ = NULL;
	CaribouRowModel* _tmp1_ = NULL;
	CaribouRowModel* _tmp2_ = NULL;
	GeeArrayList* _tmp3_ = NULL;
	CaribouRowModel* _tmp4_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (row != NULL);
	_tmp0_ = row;
	g_signal_connect_object ((CaribouIKeyboardObject*) _tmp0_, "key-clicked", (GCallback) _caribou_level_model_on_key_clicked_caribou_ikeyboard_object_key_clicked, self, 0);
	_tmp1_ = row;
	g_signal_connect_object ((CaribouIKeyboardObject*) _tmp1_, "key-pressed", (GCallback) ___lambda11__caribou_ikeyboard_object_key_pressed, self, 0);
	_tmp2_ = row;
	g_signal_connect_object ((CaribouIKeyboardObject*) _tmp2_, "key-released", (GCallback) ___lambda12__caribou_ikeyboard_object_key_released, self, 0);
	_tmp3_ = self->priv->rows;
	_tmp4_ = row;
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp3_, _tmp4_);
}


CaribouRowModel** caribou_level_model_get_rows (CaribouLevelModel* self, int* result_length1) {
	CaribouRowModel** result = NULL;
	GeeArrayList* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	gpointer* _tmp2_ = NULL;
	CaribouRowModel** _tmp3_ = NULL;
	gint _tmp3__length1 = 0;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->rows;
	_tmp2_ = gee_collection_to_array ((GeeCollection*) _tmp0_, &_tmp1_);
	_tmp3_ = (CaribouRowModel**) _tmp2_;
	_tmp3__length1 = (_tmp1_ * sizeof (CaribouRowModel*)) / sizeof (CaribouRowModel*);
	if (result_length1) {
		*result_length1 = _tmp3__length1;
	}
	result = _tmp3_;
	return result;
}


static void caribou_level_model_on_key_clicked (CaribouLevelModel* self, CaribouKeyModel* key) {
	CaribouKeyModel* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	CaribouKeyModel* _tmp7_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (key != NULL);
	_tmp0_ = key;
	_tmp1_ = caribou_key_model_get_toggle (_tmp0_);
	_tmp2_ = _tmp1_;
	if (g_strcmp0 (_tmp2_, "") != 0) {
		CaribouKeyModel* _tmp3_ = NULL;
		const gchar* _tmp4_ = NULL;
		const gchar* _tmp5_ = NULL;
		_tmp3_ = key;
		_tmp4_ = caribou_key_model_get_toggle (_tmp3_);
		_tmp5_ = _tmp4_;
		g_signal_emit_by_name (self, "level-toggled", _tmp5_);
	} else {
		const gchar* _tmp6_ = NULL;
		_tmp6_ = self->priv->_mode;
		if (g_strcmp0 (_tmp6_, "latched") == 0) {
			g_signal_emit_by_name (self, "level-toggled", "default");
		}
	}
	_tmp7_ = key;
	g_signal_emit_by_name ((CaribouIKeyboardObject*) self, "key-clicked", _tmp7_);
}


static CaribouIScannableItem** caribou_level_model_real_get_scan_children (CaribouScannableGroup* base, int* result_length1) {
	CaribouLevelModel * self;
	CaribouIScannableItem** result = NULL;
	CaribouScanGrouping _tmp0_ = 0;
	CaribouScanGrouping _tmp1_ = 0;
	self = (CaribouLevelModel*) base;
	_tmp0_ = caribou_iscannable_group_get_scan_grouping ((CaribouIScannableGroup*) self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ == CARIBOU_SCAN_GROUPING_LINEAR) {
		gint _tmp2_ = 0;
		CaribouKeyModel** _tmp3_ = NULL;
		CaribouIScannableItem** _tmp4_ = NULL;
		gint _tmp4__length1 = 0;
		_tmp3_ = caribou_ikeyboard_object_get_keys ((CaribouIKeyboardObject*) self, &_tmp2_);
		_tmp4_ = (CaribouIScannableItem**) _tmp3_;
		_tmp4__length1 = (_tmp2_ * sizeof (CaribouKeyModel*)) / sizeof (CaribouIScannableItem*);
		if (result_length1) {
			*result_length1 = _tmp4__length1;
		}
		result = _tmp4_;
		return result;
	} else {
		GeeArrayList* _tmp5_ = NULL;
		gint _tmp6_ = 0;
		gpointer* _tmp7_ = NULL;
		CaribouIScannableItem** _tmp8_ = NULL;
		gint _tmp8__length1 = 0;
		_tmp5_ = self->priv->rows;
		_tmp7_ = gee_collection_to_array ((GeeCollection*) _tmp5_, &_tmp6_);
		_tmp8_ = (CaribouIScannableItem**) _tmp7_;
		_tmp8__length1 = (_tmp6_ * sizeof (CaribouRowModel*)) / sizeof (CaribouIScannableItem*);
		if (result_length1) {
			*result_length1 = _tmp8__length1;
		}
		result = _tmp8_;
		return result;
	}
}


static CaribouIKeyboardObject** caribou_level_model_real_get_children (CaribouIKeyboardObject* base, int* result_length1) {
	CaribouLevelModel * self;
	CaribouIKeyboardObject** result = NULL;
	gint _tmp0_ = 0;
	CaribouRowModel** _tmp1_ = NULL;
	CaribouIKeyboardObject** _tmp2_ = NULL;
	gint _tmp2__length1 = 0;
	self = (CaribouLevelModel*) base;
	_tmp1_ = caribou_level_model_get_rows (self, &_tmp0_);
	_tmp2_ = (CaribouIKeyboardObject**) _tmp1_;
	_tmp2__length1 = (_tmp0_ * sizeof (CaribouRowModel*)) / sizeof (CaribouIKeyboardObject*);
	if (result_length1) {
		*result_length1 = _tmp2__length1;
	}
	result = _tmp2_;
	return result;
}


const gchar* caribou_level_model_get_mode (CaribouLevelModel* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_mode;
	result = _tmp0_;
	return result;
}


static void caribou_level_model_set_mode (CaribouLevelModel* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_mode);
	self->priv->_mode = _tmp1_;
	g_object_notify ((GObject *) self, "mode");
}


static void caribou_level_model_class_init (CaribouLevelModelClass * klass) {
	caribou_level_model_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (CaribouLevelModelPrivate));
	((CaribouScannableGroupClass *) klass)->get_scan_children = caribou_level_model_real_get_scan_children;
	G_OBJECT_CLASS (klass)->get_property = _vala_caribou_level_model_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_caribou_level_model_set_property;
	G_OBJECT_CLASS (klass)->finalize = caribou_level_model_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), CARIBOU_LEVEL_MODEL_MODE, g_param_spec_string ("mode", "mode", "mode", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	g_signal_new ("level_toggled", CARIBOU_TYPE_LEVEL_MODEL, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__STRING, G_TYPE_NONE, 1, G_TYPE_STRING);
}


static void caribou_level_model_caribou_ikeyboard_object_interface_init (CaribouIKeyboardObjectIface * iface) {
	caribou_level_model_caribou_ikeyboard_object_parent_iface = g_type_interface_peek_parent (iface);
	iface->get_children = (CaribouIKeyboardObject** (*)(CaribouIKeyboardObject*, int*)) caribou_level_model_real_get_children;
}


static void caribou_level_model_instance_init (CaribouLevelModel * self) {
	gchar* _tmp0_ = NULL;
	self->priv = CARIBOU_LEVEL_MODEL_GET_PRIVATE (self);
	_tmp0_ = g_strdup ("");
	self->priv->_mode = _tmp0_;
}


static void caribou_level_model_finalize (GObject* obj) {
	CaribouLevelModel * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, CARIBOU_TYPE_LEVEL_MODEL, CaribouLevelModel);
	_g_free0 (self->priv->_mode);
	_g_object_unref0 (self->priv->rows);
	G_OBJECT_CLASS (caribou_level_model_parent_class)->finalize (obj);
}


/**
     * Object representing a level in a group.
     *
     * This is used for implementing custom keyboard service.
     *
     * A keyboard object consists of {@link RowModel} objects.
     */
GType caribou_level_model_get_type (void) {
	static volatile gsize caribou_level_model_type_id__volatile = 0;
	if (g_once_init_enter (&caribou_level_model_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (CaribouLevelModelClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) caribou_level_model_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (CaribouLevelModel), 0, (GInstanceInitFunc) caribou_level_model_instance_init, NULL };
		static const GInterfaceInfo caribou_ikeyboard_object_info = { (GInterfaceInitFunc) caribou_level_model_caribou_ikeyboard_object_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType caribou_level_model_type_id;
		caribou_level_model_type_id = g_type_register_static (CARIBOU_TYPE_SCANNABLE_GROUP, "CaribouLevelModel", &g_define_type_info, 0);
		g_type_add_interface_static (caribou_level_model_type_id, CARIBOU_TYPE_IKEYBOARD_OBJECT, &caribou_ikeyboard_object_info);
		g_once_init_leave (&caribou_level_model_type_id__volatile, caribou_level_model_type_id);
	}
	return caribou_level_model_type_id__volatile;
}


static void _vala_caribou_level_model_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	CaribouLevelModel * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, CARIBOU_TYPE_LEVEL_MODEL, CaribouLevelModel);
	switch (property_id) {
		case CARIBOU_LEVEL_MODEL_MODE:
		g_value_set_string (value, caribou_level_model_get_mode (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_caribou_level_model_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	CaribouLevelModel * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, CARIBOU_TYPE_LEVEL_MODEL, CaribouLevelModel);
	switch (property_id) {
		case CARIBOU_LEVEL_MODEL_MODE:
		caribou_level_model_set_mode (self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



