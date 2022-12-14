/* keyboard-model.c generated by valac 0.32.0.49-00a57, the Vala compiler
 * generated from keyboard-model.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>


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

#define CARIBOU_TYPE_KEYBOARD_MODEL (caribou_keyboard_model_get_type ())
#define CARIBOU_KEYBOARD_MODEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CARIBOU_TYPE_KEYBOARD_MODEL, CaribouKeyboardModel))
#define CARIBOU_KEYBOARD_MODEL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CARIBOU_TYPE_KEYBOARD_MODEL, CaribouKeyboardModelClass))
#define CARIBOU_IS_KEYBOARD_MODEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CARIBOU_TYPE_KEYBOARD_MODEL))
#define CARIBOU_IS_KEYBOARD_MODEL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CARIBOU_TYPE_KEYBOARD_MODEL))
#define CARIBOU_KEYBOARD_MODEL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CARIBOU_TYPE_KEYBOARD_MODEL, CaribouKeyboardModelClass))

typedef struct _CaribouKeyboardModel CaribouKeyboardModel;
typedef struct _CaribouKeyboardModelClass CaribouKeyboardModelClass;
typedef struct _CaribouKeyboardModelPrivate CaribouKeyboardModelPrivate;

#define CARIBOU_TYPE_DISPLAY_ADAPTER (caribou_display_adapter_get_type ())
#define CARIBOU_DISPLAY_ADAPTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CARIBOU_TYPE_DISPLAY_ADAPTER, CaribouDisplayAdapter))
#define CARIBOU_DISPLAY_ADAPTER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CARIBOU_TYPE_DISPLAY_ADAPTER, CaribouDisplayAdapterClass))
#define CARIBOU_IS_DISPLAY_ADAPTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CARIBOU_TYPE_DISPLAY_ADAPTER))
#define CARIBOU_IS_DISPLAY_ADAPTER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CARIBOU_TYPE_DISPLAY_ADAPTER))
#define CARIBOU_DISPLAY_ADAPTER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CARIBOU_TYPE_DISPLAY_ADAPTER, CaribouDisplayAdapterClass))

typedef struct _CaribouDisplayAdapter CaribouDisplayAdapter;
typedef struct _CaribouDisplayAdapterClass CaribouDisplayAdapterClass;

#define CARIBOU_TYPE_GROUP_MODEL (caribou_group_model_get_type ())
#define CARIBOU_GROUP_MODEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CARIBOU_TYPE_GROUP_MODEL, CaribouGroupModel))
#define CARIBOU_GROUP_MODEL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CARIBOU_TYPE_GROUP_MODEL, CaribouGroupModelClass))
#define CARIBOU_IS_GROUP_MODEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CARIBOU_TYPE_GROUP_MODEL))
#define CARIBOU_IS_GROUP_MODEL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CARIBOU_TYPE_GROUP_MODEL))
#define CARIBOU_GROUP_MODEL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CARIBOU_TYPE_GROUP_MODEL, CaribouGroupModelClass))

typedef struct _CaribouGroupModel CaribouGroupModel;
typedef struct _CaribouGroupModelClass CaribouGroupModelClass;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define CARIBOU_TYPE_ISCANNABLE_ITEM (caribou_iscannable_item_get_type ())
#define CARIBOU_ISCANNABLE_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CARIBOU_TYPE_ISCANNABLE_ITEM, CaribouIScannableItem))
#define CARIBOU_IS_ISCANNABLE_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CARIBOU_TYPE_ISCANNABLE_ITEM))
#define CARIBOU_ISCANNABLE_ITEM_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), CARIBOU_TYPE_ISCANNABLE_ITEM, CaribouIScannableItemIface))

typedef struct _CaribouIScannableItem CaribouIScannableItem;
typedef struct _CaribouIScannableItemIface CaribouIScannableItemIface;
typedef struct _CaribouKeyModelPrivate CaribouKeyModelPrivate;

#define CARIBOU_TYPE_MODIFIER_STATE (caribou_modifier_state_get_type ())
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);
#define _vala_return_if_fail(expr, msg) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return; }
#define _vala_return_val_if_fail(expr, msg, val) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return val; }
#define _vala_warn_if_fail(expr, msg) if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _CaribouIKeyboardObjectIface {
	GTypeInterface parent_iface;
	CaribouIKeyboardObject** (*get_children) (CaribouIKeyboardObject* self, int* result_length1);
	CaribouKeyModel** (*get_keys) (CaribouIKeyboardObject* self, int* result_length1);
};

struct _CaribouKeyboardModel {
	GObject parent_instance;
	CaribouKeyboardModelPrivate * priv;
};

struct _CaribouKeyboardModelClass {
	GObjectClass parent_class;
};

struct _CaribouKeyboardModelPrivate {
	gchar* _active_group;
	gchar* _keyboard_type;
	gchar* _keyboard_file;
	CaribouDisplayAdapter* xadapter;
	GeeHashMap* groups;
	CaribouKeyModel* last_activated_key;
	GeeHashSet* active_mod_keys;
};

struct _CaribouIScannableItemIface {
	GTypeInterface parent_iface;
	gboolean (*get_scan_stepping) (CaribouIScannableItem* self);
	void (*set_scan_stepping) (CaribouIScannableItem* self, gboolean value);
	gboolean (*get_scan_selected) (CaribouIScannableItem* self);
	void (*set_scan_selected) (CaribouIScannableItem* self, gboolean value);
};

typedef enum  {
	CARIBOU_MODIFIER_STATE_NONE,
	CARIBOU_MODIFIER_STATE_LATCHED,
	CARIBOU_MODIFIER_STATE_LOCKED
} CaribouModifierState;

struct _CaribouKeyModel {
	GObject parent_instance;
	CaribouKeyModelPrivate * priv;
	CaribouModifierState modifier_state;
};

struct _CaribouKeyModelClass {
	GObjectClass parent_class;
};


static gpointer caribou_keyboard_model_parent_class = NULL;
static CaribouIKeyboardObjectIface* caribou_keyboard_model_caribou_ikeyboard_object_parent_iface = NULL;

GType caribou_key_model_get_type (void) G_GNUC_CONST;
GType caribou_ikeyboard_object_get_type (void) G_GNUC_CONST;
GType caribou_keyboard_model_get_type (void) G_GNUC_CONST;
GType caribou_display_adapter_get_type (void) G_GNUC_CONST;
GType caribou_group_model_get_type (void) G_GNUC_CONST;
#define CARIBOU_KEYBOARD_MODEL_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), CARIBOU_TYPE_KEYBOARD_MODEL, CaribouKeyboardModelPrivate))
enum  {
	CARIBOU_KEYBOARD_MODEL_DUMMY_PROPERTY,
	CARIBOU_KEYBOARD_MODEL_ACTIVE_GROUP,
	CARIBOU_KEYBOARD_MODEL_KEYBOARD_TYPE,
	CARIBOU_KEYBOARD_MODEL_KEYBOARD_FILE
};
static void caribou_keyboard_model_on_config_changed (CaribouKeyboardModel* self);
void caribou_display_adapter_get_groups (CaribouDisplayAdapter* self, gchar*** group_names, int* group_names_length1, gchar*** variant_names, int* variant_names_length1);
gchar* caribou_group_model_create_group_name (const gchar* group, const gchar* variant);
static CaribouGroupModel* caribou_keyboard_model_populate_group (CaribouKeyboardModel* self, const gchar* group, const gchar* variant);
guint caribou_display_adapter_get_current_group (CaribouDisplayAdapter* self, gchar** group_name, gchar** variant_name);
static void caribou_keyboard_model_on_group_changed (CaribouKeyboardModel* self, guint grpid, const gchar* group, const gchar* variant);
CaribouGroupModel* caribou_xml_deserializer_load_group (const gchar* keyboard_type, const gchar* group, const gchar* variant);
const gchar* caribou_keyboard_model_get_keyboard_type (CaribouKeyboardModel* self);
static void caribou_keyboard_model_on_key_clicked (CaribouKeyboardModel* self, CaribouKeyModel* key);
static void _caribou_keyboard_model_on_key_clicked_caribou_ikeyboard_object_key_clicked (CaribouIKeyboardObject* _sender, CaribouKeyModel* key, gpointer self);
static void caribou_keyboard_model_on_key_pressed (CaribouKeyboardModel* self, CaribouKeyModel* key);
static void _caribou_keyboard_model_on_key_pressed_caribou_ikeyboard_object_key_pressed (CaribouIKeyboardObject* _sender, CaribouKeyModel* key, gpointer self);
static void caribou_keyboard_model_on_key_released (CaribouKeyboardModel* self, CaribouKeyModel* key);
static void _caribou_keyboard_model_on_key_released_caribou_ikeyboard_object_key_released (CaribouIKeyboardObject* _sender, CaribouKeyModel* key, gpointer self);
const gchar* caribou_key_model_get_name (CaribouKeyModel* self);
void caribou_key_model_activate (CaribouKeyModel* self);
gboolean caribou_key_model_get_is_modifier (CaribouKeyModel* self);
GType caribou_iscannable_item_get_type (void) G_GNUC_CONST;
GType caribou_modifier_state_get_type (void) G_GNUC_CONST;
void caribou_key_model_release (CaribouKeyModel* self);
gchar** caribou_keyboard_model_get_groups (CaribouKeyboardModel* self, int* result_length1);
CaribouGroupModel* caribou_keyboard_model_get_group (CaribouKeyboardModel* self, const gchar* group_name);
static void caribou_keyboard_model_set_active_group (CaribouKeyboardModel* self, const gchar* value);
static CaribouIKeyboardObject** caribou_keyboard_model_real_get_children (CaribouIKeyboardObject* base, int* result_length1);
CaribouKeyboardModel* caribou_keyboard_model_new (void);
CaribouKeyboardModel* caribou_keyboard_model_construct (GType object_type);
const gchar* caribou_keyboard_model_get_active_group (CaribouKeyboardModel* self);
static void caribou_keyboard_model_set_keyboard_type (CaribouKeyboardModel* self, const gchar* value);
const gchar* caribou_keyboard_model_get_keyboard_file (CaribouKeyboardModel* self);
static void caribou_keyboard_model_set_keyboard_file (CaribouKeyboardModel* self, const gchar* value);
static GObject * caribou_keyboard_model_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
CaribouDisplayAdapter* caribou_display_adapter_get_default (void);
CaribouGroupModel* caribou_xml_deserializer_load_group_from_file (const gchar* filename);
static void _caribou_keyboard_model_on_group_changed_caribou_display_adapter_group_changed (CaribouDisplayAdapter* _sender, guint gid, const gchar* group, const gchar* variant, gpointer self);
static void _caribou_keyboard_model_on_config_changed_caribou_display_adapter_config_changed (CaribouDisplayAdapter* _sender, gpointer self);
static void caribou_keyboard_model_finalize (GObject* obj);
static void _vala_caribou_keyboard_model_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_caribou_keyboard_model_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


static void caribou_keyboard_model_on_config_changed (CaribouKeyboardModel* self) {
	gchar** grps = NULL;
	gint grps_length1 = 0;
	gint _grps_size_ = 0;
	gchar** variants = NULL;
	gint variants_length1 = 0;
	gint _variants_size_ = 0;
	CaribouDisplayAdapter* _tmp0_ = NULL;
	gchar** _tmp1_ = NULL;
	gint _tmp2_ = 0;
	gchar** _tmp3_ = NULL;
	gint _tmp4_ = 0;
	GeeHashSet* group_names = NULL;
	GeeHashSet* _tmp5_ = NULL;
	GeeMapIterator* iter = NULL;
	GeeHashMap* _tmp34_ = NULL;
	GeeMapIterator* _tmp35_ = NULL;
	gchar* group = NULL;
	gchar* variant = NULL;
	guint grpid = 0U;
	CaribouDisplayAdapter* _tmp45_ = NULL;
	gchar* _tmp46_ = NULL;
	gchar* _tmp47_ = NULL;
	guint _tmp48_ = 0U;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->xadapter;
	caribou_display_adapter_get_groups (_tmp0_, &_tmp1_, &_tmp2_, &_tmp3_, &_tmp4_);
	grps = (_vala_array_free (grps, grps_length1, (GDestroyNotify) g_free), NULL);
	grps = _tmp1_;
	grps_length1 = _tmp2_;
	_grps_size_ = grps_length1;
	variants = (_vala_array_free (variants, variants_length1, (GDestroyNotify) g_free), NULL);
	variants = _tmp3_;
	variants_length1 = _tmp4_;
	_variants_size_ = variants_length1;
	_tmp5_ = gee_hash_set_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL, NULL, NULL, NULL, NULL);
	group_names = _tmp5_;
	{
		gint i = 0;
		i = 0;
		{
			gboolean _tmp6_ = FALSE;
			_tmp6_ = TRUE;
			while (TRUE) {
				gint _tmp8_ = 0;
				gchar** _tmp9_ = NULL;
				gint _tmp9__length1 = 0;
				gchar* group_name = NULL;
				gchar** _tmp10_ = NULL;
				gint _tmp10__length1 = 0;
				gint _tmp11_ = 0;
				const gchar* _tmp12_ = NULL;
				gchar** _tmp13_ = NULL;
				gint _tmp13__length1 = 0;
				gint _tmp14_ = 0;
				const gchar* _tmp15_ = NULL;
				gchar* _tmp16_ = NULL;
				GeeHashSet* _tmp17_ = NULL;
				const gchar* _tmp18_ = NULL;
				GeeHashMap* _tmp19_ = NULL;
				const gchar* _tmp20_ = NULL;
				gboolean _tmp21_ = FALSE;
				if (!_tmp6_) {
					gint _tmp7_ = 0;
					_tmp7_ = i;
					i = _tmp7_ + 1;
				}
				_tmp6_ = FALSE;
				_tmp8_ = i;
				_tmp9_ = grps;
				_tmp9__length1 = grps_length1;
				if (!(_tmp8_ < _tmp9__length1)) {
					break;
				}
				_tmp10_ = grps;
				_tmp10__length1 = grps_length1;
				_tmp11_ = i;
				_tmp12_ = _tmp10_[_tmp11_];
				_tmp13_ = variants;
				_tmp13__length1 = variants_length1;
				_tmp14_ = i;
				_tmp15_ = _tmp13_[_tmp14_];
				_tmp16_ = caribou_group_model_create_group_name (_tmp12_, _tmp15_);
				group_name = _tmp16_;
				_tmp17_ = group_names;
				_tmp18_ = group_name;
				gee_abstract_collection_add ((GeeAbstractCollection*) _tmp17_, _tmp18_);
				_tmp19_ = self->priv->groups;
				_tmp20_ = group_name;
				_tmp21_ = gee_abstract_map_has_key ((GeeAbstractMap*) _tmp19_, _tmp20_);
				if (!_tmp21_) {
					CaribouGroupModel* grp = NULL;
					gchar** _tmp22_ = NULL;
					gint _tmp22__length1 = 0;
					gint _tmp23_ = 0;
					const gchar* _tmp24_ = NULL;
					gchar** _tmp25_ = NULL;
					gint _tmp25__length1 = 0;
					gint _tmp26_ = 0;
					const gchar* _tmp27_ = NULL;
					CaribouGroupModel* _tmp28_ = NULL;
					CaribouGroupModel* _tmp29_ = NULL;
					_tmp22_ = grps;
					_tmp22__length1 = grps_length1;
					_tmp23_ = i;
					_tmp24_ = _tmp22_[_tmp23_];
					_tmp25_ = variants;
					_tmp25__length1 = variants_length1;
					_tmp26_ = i;
					_tmp27_ = _tmp25_[_tmp26_];
					_tmp28_ = caribou_keyboard_model_populate_group (self, _tmp24_, _tmp27_);
					grp = _tmp28_;
					_tmp29_ = grp;
					if (_tmp29_ != NULL) {
						GeeHashMap* _tmp30_ = NULL;
						const gchar* _tmp31_ = NULL;
						CaribouGroupModel* _tmp32_ = NULL;
						const gchar* _tmp33_ = NULL;
						_tmp30_ = self->priv->groups;
						_tmp31_ = group_name;
						_tmp32_ = grp;
						gee_abstract_map_set ((GeeAbstractMap*) _tmp30_, _tmp31_, _tmp32_);
						_tmp33_ = group_name;
						g_signal_emit_by_name (self, "group-added", _tmp33_);
					}
					_g_object_unref0 (grp);
				}
				_g_free0 (group_name);
			}
		}
	}
	_tmp34_ = self->priv->groups;
	_tmp35_ = gee_abstract_map_map_iterator ((GeeAbstractMap*) _tmp34_);
	iter = _tmp35_;
	while (TRUE) {
		GeeMapIterator* _tmp36_ = NULL;
		gboolean _tmp37_ = FALSE;
		gchar* group_name = NULL;
		GeeMapIterator* _tmp38_ = NULL;
		gpointer _tmp39_ = NULL;
		GeeHashSet* _tmp40_ = NULL;
		const gchar* _tmp41_ = NULL;
		gboolean _tmp42_ = FALSE;
		_tmp36_ = iter;
		_tmp37_ = gee_map_iterator_next (_tmp36_);
		if (!_tmp37_) {
			break;
		}
		_tmp38_ = iter;
		_tmp39_ = gee_map_iterator_get_key (_tmp38_);
		group_name = (gchar*) _tmp39_;
		_tmp40_ = group_names;
		_tmp41_ = group_name;
		_tmp42_ = gee_abstract_collection_contains ((GeeAbstractCollection*) _tmp40_, _tmp41_);
		if (!_tmp42_) {
			GeeMapIterator* _tmp43_ = NULL;
			const gchar* _tmp44_ = NULL;
			_tmp43_ = iter;
			gee_map_iterator_unset (_tmp43_);
			_tmp44_ = group_name;
			g_signal_emit_by_name (self, "group-removed", _tmp44_);
		}
		_g_free0 (group_name);
	}
	_tmp45_ = self->priv->xadapter;
	_tmp48_ = caribou_display_adapter_get_current_group (_tmp45_, &_tmp46_, &_tmp47_);
	_g_free0 (group);
	group = _tmp46_;
	_g_free0 (variant);
	variant = _tmp47_;
	grpid = _tmp48_;
	caribou_keyboard_model_on_group_changed (self, grpid, group, variant);
	_g_free0 (variant);
	_g_free0 (group);
	_g_object_unref0 (iter);
	_g_object_unref0 (group_names);
	variants = (_vala_array_free (variants, variants_length1, (GDestroyNotify) g_free), NULL);
	grps = (_vala_array_free (grps, grps_length1, (GDestroyNotify) g_free), NULL);
}


static void _caribou_keyboard_model_on_key_clicked_caribou_ikeyboard_object_key_clicked (CaribouIKeyboardObject* _sender, CaribouKeyModel* key, gpointer self) {
	caribou_keyboard_model_on_key_clicked ((CaribouKeyboardModel*) self, key);
}


static void _caribou_keyboard_model_on_key_pressed_caribou_ikeyboard_object_key_pressed (CaribouIKeyboardObject* _sender, CaribouKeyModel* key, gpointer self) {
	caribou_keyboard_model_on_key_pressed ((CaribouKeyboardModel*) self, key);
}


static void _caribou_keyboard_model_on_key_released_caribou_ikeyboard_object_key_released (CaribouIKeyboardObject* _sender, CaribouKeyModel* key, gpointer self) {
	caribou_keyboard_model_on_key_released ((CaribouKeyboardModel*) self, key);
}


static CaribouGroupModel* caribou_keyboard_model_populate_group (CaribouKeyboardModel* self, const gchar* group, const gchar* variant) {
	CaribouGroupModel* result = NULL;
	CaribouGroupModel* grp = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	CaribouGroupModel* _tmp3_ = NULL;
	CaribouGroupModel* _tmp4_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (group != NULL, NULL);
	g_return_val_if_fail (variant != NULL, NULL);
	_tmp0_ = self->priv->_keyboard_type;
	_tmp1_ = group;
	_tmp2_ = variant;
	_tmp3_ = caribou_xml_deserializer_load_group (_tmp0_, _tmp1_, _tmp2_);
	grp = _tmp3_;
	_tmp4_ = grp;
	if (_tmp4_ != NULL) {
		CaribouGroupModel* _tmp5_ = NULL;
		CaribouGroupModel* _tmp6_ = NULL;
		CaribouGroupModel* _tmp7_ = NULL;
		_tmp5_ = grp;
		g_signal_connect_object ((CaribouIKeyboardObject*) _tmp5_, "key-clicked", (GCallback) _caribou_keyboard_model_on_key_clicked_caribou_ikeyboard_object_key_clicked, self, 0);
		_tmp6_ = grp;
		g_signal_connect_object ((CaribouIKeyboardObject*) _tmp6_, "key-pressed", (GCallback) _caribou_keyboard_model_on_key_pressed_caribou_ikeyboard_object_key_pressed, self, 0);
		_tmp7_ = grp;
		g_signal_connect_object ((CaribouIKeyboardObject*) _tmp7_, "key-released", (GCallback) _caribou_keyboard_model_on_key_released_caribou_ikeyboard_object_key_released, self, 0);
	}
	result = grp;
	return result;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void caribou_keyboard_model_on_key_clicked (CaribouKeyboardModel* self, CaribouKeyModel* key) {
	CaribouKeyModel* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	CaribouKeyModel* _tmp6_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (key != NULL);
	_tmp0_ = key;
	_tmp1_ = caribou_key_model_get_name (_tmp0_);
	_tmp2_ = _tmp1_;
	if (g_strcmp0 (_tmp2_, "Caribou_Repeat") == 0) {
		CaribouKeyModel* _tmp3_ = NULL;
		_tmp3_ = self->priv->last_activated_key;
		caribou_key_model_activate (_tmp3_);
	} else {
		CaribouKeyModel* _tmp4_ = NULL;
		CaribouKeyModel* _tmp5_ = NULL;
		_tmp4_ = key;
		_tmp5_ = _g_object_ref0 (_tmp4_);
		_g_object_unref0 (self->priv->last_activated_key);
		self->priv->last_activated_key = _tmp5_;
	}
	_tmp6_ = key;
	g_signal_emit_by_name ((CaribouIKeyboardObject*) self, "key-clicked", _tmp6_);
}


static void caribou_keyboard_model_on_key_pressed (CaribouKeyboardModel* self, CaribouKeyModel* key) {
	gboolean _tmp0_ = FALSE;
	CaribouKeyModel* _tmp1_ = NULL;
	gboolean _tmp2_ = FALSE;
	gboolean _tmp3_ = FALSE;
	g_return_if_fail (self != NULL);
	g_return_if_fail (key != NULL);
	_tmp1_ = key;
	_tmp2_ = caribou_key_model_get_is_modifier (_tmp1_);
	_tmp3_ = _tmp2_;
	if (_tmp3_) {
		CaribouKeyModel* _tmp4_ = NULL;
		CaribouModifierState _tmp5_ = 0;
		_tmp4_ = key;
		_tmp5_ = _tmp4_->modifier_state;
		_tmp0_ = _tmp5_ == CARIBOU_MODIFIER_STATE_LATCHED;
	} else {
		_tmp0_ = FALSE;
	}
	if (_tmp0_) {
		GeeHashSet* _tmp6_ = NULL;
		CaribouKeyModel* _tmp7_ = NULL;
		_tmp6_ = self->priv->active_mod_keys;
		_tmp7_ = key;
		gee_abstract_collection_add ((GeeAbstractCollection*) _tmp6_, _tmp7_);
	}
}


static void caribou_keyboard_model_on_key_released (CaribouKeyboardModel* self, CaribouKeyModel* key) {
	CaribouKeyModel* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	gboolean _tmp2_ = FALSE;
	g_return_if_fail (self != NULL);
	g_return_if_fail (key != NULL);
	_tmp0_ = key;
	_tmp1_ = caribou_key_model_get_is_modifier (_tmp0_);
	_tmp2_ = _tmp1_;
	if (!_tmp2_) {
		CaribouKeyModel** modifiers = NULL;
		GeeHashSet* _tmp3_ = NULL;
		gint _tmp4_ = 0;
		gpointer* _tmp5_ = NULL;
		gint modifiers_length1 = 0;
		gint _modifiers_size_ = 0;
		CaribouKeyModel** _tmp6_ = NULL;
		gint _tmp6__length1 = 0;
		_tmp3_ = self->priv->active_mod_keys;
		_tmp5_ = gee_collection_to_array ((GeeCollection*) _tmp3_, &_tmp4_);
		modifiers = (CaribouKeyModel**) _tmp5_;
		modifiers_length1 = (_tmp4_ * sizeof (CaribouKeyModel*)) / sizeof (CaribouKeyModel*);
		_modifiers_size_ = modifiers_length1;
		_tmp6_ = modifiers;
		_tmp6__length1 = modifiers_length1;
		{
			CaribouKeyModel** modifier_collection = NULL;
			gint modifier_collection_length1 = 0;
			gint _modifier_collection_size_ = 0;
			gint modifier_it = 0;
			modifier_collection = _tmp6_;
			modifier_collection_length1 = _tmp6__length1;
			for (modifier_it = 0; modifier_it < _tmp6__length1; modifier_it = modifier_it + 1) {
				CaribouKeyModel* _tmp7_ = NULL;
				CaribouKeyModel* modifier = NULL;
				_tmp7_ = _g_object_ref0 (modifier_collection[modifier_it]);
				modifier = _tmp7_;
				{
					CaribouKeyModel* _tmp8_ = NULL;
					CaribouModifierState _tmp9_ = 0;
					_tmp8_ = modifier;
					_tmp9_ = _tmp8_->modifier_state;
					if (_tmp9_ == CARIBOU_MODIFIER_STATE_LATCHED) {
						CaribouKeyModel* _tmp10_ = NULL;
						CaribouKeyModel* _tmp11_ = NULL;
						_tmp10_ = modifier;
						_tmp10_->modifier_state = CARIBOU_MODIFIER_STATE_NONE;
						_tmp11_ = modifier;
						caribou_key_model_release (_tmp11_);
					}
					_g_object_unref0 (modifier);
				}
			}
		}
		modifiers = (_vala_array_free (modifiers, modifiers_length1, (GDestroyNotify) g_object_unref), NULL);
	}
}


gchar** caribou_keyboard_model_get_groups (CaribouKeyboardModel* self, int* result_length1) {
	gchar** result = NULL;
	GeeHashMap* _tmp0_ = NULL;
	GeeSet* _tmp1_ = NULL;
	GeeSet* _tmp2_ = NULL;
	GeeSet* _tmp3_ = NULL;
	gint _tmp4_ = 0;
	gpointer* _tmp5_ = NULL;
	gchar** _tmp6_ = NULL;
	gint _tmp6__length1 = 0;
	gchar** _tmp7_ = NULL;
	gint _tmp7__length1 = 0;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->groups;
	_tmp1_ = gee_abstract_map_get_keys ((GeeMap*) _tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = _tmp2_;
	_tmp5_ = gee_collection_to_array ((GeeCollection*) _tmp3_, &_tmp4_);
	_tmp6_ = (gchar**) _tmp5_;
	_tmp6__length1 = (_tmp4_ * sizeof (gchar*)) / sizeof (gchar*);
	_g_object_unref0 (_tmp3_);
	_tmp7_ = _tmp6_;
	_tmp7__length1 = _tmp6__length1;
	if (result_length1) {
		*result_length1 = _tmp7__length1;
	}
	result = _tmp7_;
	return result;
}


CaribouGroupModel* caribou_keyboard_model_get_group (CaribouKeyboardModel* self, const gchar* group_name) {
	CaribouGroupModel* result = NULL;
	GeeHashMap* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gpointer _tmp2_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (group_name != NULL, NULL);
	_tmp0_ = self->priv->groups;
	_tmp1_ = group_name;
	_tmp2_ = gee_abstract_map_get ((GeeAbstractMap*) _tmp0_, _tmp1_);
	result = (CaribouGroupModel*) _tmp2_;
	return result;
}


static void caribou_keyboard_model_on_group_changed (CaribouKeyboardModel* self, guint grpid, const gchar* group, const gchar* variant) {
	gchar* group_name = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	GeeHashMap* _tmp3_ = NULL;
	const gchar* _tmp4_ = NULL;
	gpointer _tmp5_ = NULL;
	CaribouGroupModel* _tmp6_ = NULL;
	gboolean _tmp7_ = FALSE;
	g_return_if_fail (self != NULL);
	g_return_if_fail (group != NULL);
	g_return_if_fail (variant != NULL);
	_tmp0_ = group;
	_tmp1_ = variant;
	_tmp2_ = caribou_group_model_create_group_name (_tmp0_, _tmp1_);
	group_name = _tmp2_;
	_tmp3_ = self->priv->groups;
	_tmp4_ = group_name;
	_tmp5_ = gee_abstract_map_get ((GeeAbstractMap*) _tmp3_, _tmp4_);
	_tmp6_ = (CaribouGroupModel*) _tmp5_;
	_tmp7_ = _tmp6_ != NULL;
	_g_object_unref0 (_tmp6_);
	if (_tmp7_) {
		const gchar* _tmp8_ = NULL;
		_tmp8_ = group_name;
		caribou_keyboard_model_set_active_group (self, _tmp8_);
	} else {
		gint _tmp9_ = 0;
		gchar** _tmp10_ = NULL;
		gchar** _tmp11_ = NULL;
		gint _tmp11__length1 = 0;
		const gchar* _tmp12_ = NULL;
		_tmp10_ = caribou_keyboard_model_get_groups (self, &_tmp9_);
		_tmp11_ = _tmp10_;
		_tmp11__length1 = _tmp9_;
		_tmp12_ = _tmp11_[0];
		caribou_keyboard_model_set_active_group (self, _tmp12_);
		_tmp11_ = (_vala_array_free (_tmp11_, _tmp11__length1, (GDestroyNotify) g_free), NULL);
	}
	_g_free0 (group_name);
}


static CaribouIKeyboardObject** caribou_keyboard_model_real_get_children (CaribouIKeyboardObject* base, int* result_length1) {
	CaribouKeyboardModel * self;
	CaribouIKeyboardObject** result = NULL;
	GeeHashMap* _tmp0_ = NULL;
	GeeCollection* _tmp1_ = NULL;
	GeeCollection* _tmp2_ = NULL;
	GeeCollection* _tmp3_ = NULL;
	gint _tmp4_ = 0;
	gpointer* _tmp5_ = NULL;
	CaribouIKeyboardObject** _tmp6_ = NULL;
	gint _tmp6__length1 = 0;
	CaribouIKeyboardObject** _tmp7_ = NULL;
	gint _tmp7__length1 = 0;
	self = (CaribouKeyboardModel*) base;
	_tmp0_ = self->priv->groups;
	_tmp1_ = gee_abstract_map_get_values ((GeeMap*) _tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = _tmp2_;
	_tmp5_ = gee_collection_to_array (_tmp3_, &_tmp4_);
	_tmp6_ = (CaribouIKeyboardObject**) _tmp5_;
	_tmp6__length1 = (_tmp4_ * sizeof (CaribouGroupModel*)) / sizeof (CaribouIKeyboardObject*);
	_g_object_unref0 (_tmp3_);
	_tmp7_ = _tmp6_;
	_tmp7__length1 = _tmp6__length1;
	if (result_length1) {
		*result_length1 = _tmp7__length1;
	}
	result = _tmp7_;
	return result;
}


CaribouKeyboardModel* caribou_keyboard_model_construct (GType object_type) {
	CaribouKeyboardModel * self = NULL;
	self = (CaribouKeyboardModel*) g_object_new (object_type, NULL);
	return self;
}


CaribouKeyboardModel* caribou_keyboard_model_new (void) {
	return caribou_keyboard_model_construct (CARIBOU_TYPE_KEYBOARD_MODEL);
}


const gchar* caribou_keyboard_model_get_active_group (CaribouKeyboardModel* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_active_group;
	result = _tmp0_;
	return result;
}


static void caribou_keyboard_model_set_active_group (CaribouKeyboardModel* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_active_group);
	self->priv->_active_group = _tmp1_;
	g_object_notify ((GObject *) self, "active-group");
}


const gchar* caribou_keyboard_model_get_keyboard_type (CaribouKeyboardModel* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_keyboard_type;
	result = _tmp0_;
	return result;
}


static void caribou_keyboard_model_set_keyboard_type (CaribouKeyboardModel* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_keyboard_type);
	self->priv->_keyboard_type = _tmp1_;
	g_object_notify ((GObject *) self, "keyboard-type");
}


const gchar* caribou_keyboard_model_get_keyboard_file (CaribouKeyboardModel* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_keyboard_file;
	result = _tmp0_;
	return result;
}


static void caribou_keyboard_model_set_keyboard_file (CaribouKeyboardModel* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_keyboard_file);
	self->priv->_keyboard_file = _tmp1_;
	g_object_notify ((GObject *) self, "keyboard-file");
}


static void _caribou_keyboard_model_on_group_changed_caribou_display_adapter_group_changed (CaribouDisplayAdapter* _sender, guint gid, const gchar* group, const gchar* variant, gpointer self) {
	caribou_keyboard_model_on_group_changed ((CaribouKeyboardModel*) self, gid, group, variant);
}


static void _caribou_keyboard_model_on_config_changed_caribou_display_adapter_config_changed (CaribouDisplayAdapter* _sender, gpointer self) {
	caribou_keyboard_model_on_config_changed ((CaribouKeyboardModel*) self);
}


static GObject * caribou_keyboard_model_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	CaribouKeyboardModel * self;
	CaribouDisplayAdapter* _tmp0_ = NULL;
	GeeHashMap* _tmp1_ = NULL;
	GeeHashSet* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	parent_class = G_OBJECT_CLASS (caribou_keyboard_model_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, CARIBOU_TYPE_KEYBOARD_MODEL, CaribouKeyboardModel);
	_tmp0_ = caribou_display_adapter_get_default ();
	_g_object_unref0 (self->priv->xadapter);
	self->priv->xadapter = _tmp0_;
	_tmp1_ = gee_hash_map_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, CARIBOU_TYPE_GROUP_MODEL, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	_g_object_unref0 (self->priv->groups);
	self->priv->groups = _tmp1_;
	_tmp2_ = gee_hash_set_new (CARIBOU_TYPE_KEY_MODEL, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL, NULL, NULL, NULL, NULL, NULL);
	_g_object_unref0 (self->priv->active_mod_keys);
	self->priv->active_mod_keys = _tmp2_;
	_tmp3_ = self->priv->_keyboard_file;
	if (_tmp3_ != NULL) {
		CaribouGroupModel* grp = NULL;
		const gchar* _tmp4_ = NULL;
		CaribouGroupModel* _tmp5_ = NULL;
		CaribouGroupModel* _tmp6_ = NULL;
		GeeHashMap* _tmp10_ = NULL;
		CaribouGroupModel* _tmp11_ = NULL;
		gchar* _tmp12_ = NULL;
		gchar* _tmp13_ = NULL;
		_tmp4_ = self->priv->_keyboard_file;
		_tmp5_ = caribou_xml_deserializer_load_group_from_file (_tmp4_);
		grp = _tmp5_;
		_tmp6_ = grp;
		if (_tmp6_ != NULL) {
			CaribouGroupModel* _tmp7_ = NULL;
			CaribouGroupModel* _tmp8_ = NULL;
			CaribouGroupModel* _tmp9_ = NULL;
			_tmp7_ = grp;
			g_signal_connect_object ((CaribouIKeyboardObject*) _tmp7_, "key-clicked", (GCallback) _caribou_keyboard_model_on_key_clicked_caribou_ikeyboard_object_key_clicked, self, 0);
			_tmp8_ = grp;
			g_signal_connect_object ((CaribouIKeyboardObject*) _tmp8_, "key-pressed", (GCallback) _caribou_keyboard_model_on_key_pressed_caribou_ikeyboard_object_key_pressed, self, 0);
			_tmp9_ = grp;
			g_signal_connect_object ((CaribouIKeyboardObject*) _tmp9_, "key-released", (GCallback) _caribou_keyboard_model_on_key_released_caribou_ikeyboard_object_key_released, self, 0);
		}
		_tmp10_ = self->priv->groups;
		_tmp11_ = grp;
		gee_abstract_map_set ((GeeAbstractMap*) _tmp10_, "us", _tmp11_);
		g_signal_emit_by_name (self, "group-added", "us");
		_tmp12_ = caribou_group_model_create_group_name ("us", "");
		_tmp13_ = _tmp12_;
		caribou_keyboard_model_set_active_group (self, _tmp13_);
		_g_free0 (_tmp13_);
		_g_object_unref0 (grp);
	} else {
		const gchar* _tmp14_ = NULL;
		CaribouDisplayAdapter* _tmp15_ = NULL;
		CaribouDisplayAdapter* _tmp16_ = NULL;
		_tmp14_ = self->priv->_keyboard_type;
		_vala_assert (_tmp14_ != NULL, "keyboard_type != null");
		_tmp15_ = self->priv->xadapter;
		g_signal_connect_object (_tmp15_, "group-changed", (GCallback) _caribou_keyboard_model_on_group_changed_caribou_display_adapter_group_changed, self, 0);
		_tmp16_ = self->priv->xadapter;
		g_signal_connect_object (_tmp16_, "config-changed", (GCallback) _caribou_keyboard_model_on_config_changed_caribou_display_adapter_config_changed, self, 0);
		caribou_keyboard_model_on_config_changed (self);
	}
	return obj;
}


static void caribou_keyboard_model_class_init (CaribouKeyboardModelClass * klass) {
	caribou_keyboard_model_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (CaribouKeyboardModelPrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_caribou_keyboard_model_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_caribou_keyboard_model_set_property;
	G_OBJECT_CLASS (klass)->constructor = caribou_keyboard_model_constructor;
	G_OBJECT_CLASS (klass)->finalize = caribou_keyboard_model_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), CARIBOU_KEYBOARD_MODEL_ACTIVE_GROUP, g_param_spec_string ("active-group", "active-group", "active-group", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), CARIBOU_KEYBOARD_MODEL_KEYBOARD_TYPE, g_param_spec_string ("keyboard-type", "keyboard-type", "keyboard-type", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), CARIBOU_KEYBOARD_MODEL_KEYBOARD_FILE, g_param_spec_string ("keyboard-file", "keyboard-file", "keyboard-file", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_signal_new ("group_added", CARIBOU_TYPE_KEYBOARD_MODEL, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__STRING, G_TYPE_NONE, 1, G_TYPE_STRING);
	g_signal_new ("group_removed", CARIBOU_TYPE_KEYBOARD_MODEL, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__STRING, G_TYPE_NONE, 1, G_TYPE_STRING);
}


static void caribou_keyboard_model_caribou_ikeyboard_object_interface_init (CaribouIKeyboardObjectIface * iface) {
	caribou_keyboard_model_caribou_ikeyboard_object_parent_iface = g_type_interface_peek_parent (iface);
	iface->get_children = (CaribouIKeyboardObject** (*)(CaribouIKeyboardObject*, int*)) caribou_keyboard_model_real_get_children;
}


static void caribou_keyboard_model_instance_init (CaribouKeyboardModel * self) {
	gchar* _tmp0_ = NULL;
	self->priv = CARIBOU_KEYBOARD_MODEL_GET_PRIVATE (self);
	_tmp0_ = g_strdup ("");
	self->priv->_active_group = _tmp0_;
}


static void caribou_keyboard_model_finalize (GObject* obj) {
	CaribouKeyboardModel * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, CARIBOU_TYPE_KEYBOARD_MODEL, CaribouKeyboardModel);
	_g_free0 (self->priv->_active_group);
	_g_free0 (self->priv->_keyboard_type);
	_g_free0 (self->priv->_keyboard_file);
	_g_object_unref0 (self->priv->xadapter);
	_g_object_unref0 (self->priv->groups);
	_g_object_unref0 (self->priv->last_activated_key);
	_g_object_unref0 (self->priv->active_mod_keys);
	G_OBJECT_CLASS (caribou_keyboard_model_parent_class)->finalize (obj);
}


/**
     * Object representing a whole keyboard.
     *
     * This is used for implementing custom keyboard service.
     *
     * A keyboard object consists of {@link GroupModel} objects.
     */
GType caribou_keyboard_model_get_type (void) {
	static volatile gsize caribou_keyboard_model_type_id__volatile = 0;
	if (g_once_init_enter (&caribou_keyboard_model_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (CaribouKeyboardModelClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) caribou_keyboard_model_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (CaribouKeyboardModel), 0, (GInstanceInitFunc) caribou_keyboard_model_instance_init, NULL };
		static const GInterfaceInfo caribou_ikeyboard_object_info = { (GInterfaceInitFunc) caribou_keyboard_model_caribou_ikeyboard_object_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType caribou_keyboard_model_type_id;
		caribou_keyboard_model_type_id = g_type_register_static (G_TYPE_OBJECT, "CaribouKeyboardModel", &g_define_type_info, 0);
		g_type_add_interface_static (caribou_keyboard_model_type_id, CARIBOU_TYPE_IKEYBOARD_OBJECT, &caribou_ikeyboard_object_info);
		g_once_init_leave (&caribou_keyboard_model_type_id__volatile, caribou_keyboard_model_type_id);
	}
	return caribou_keyboard_model_type_id__volatile;
}


static void _vala_caribou_keyboard_model_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	CaribouKeyboardModel * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, CARIBOU_TYPE_KEYBOARD_MODEL, CaribouKeyboardModel);
	switch (property_id) {
		case CARIBOU_KEYBOARD_MODEL_ACTIVE_GROUP:
		g_value_set_string (value, caribou_keyboard_model_get_active_group (self));
		break;
		case CARIBOU_KEYBOARD_MODEL_KEYBOARD_TYPE:
		g_value_set_string (value, caribou_keyboard_model_get_keyboard_type (self));
		break;
		case CARIBOU_KEYBOARD_MODEL_KEYBOARD_FILE:
		g_value_set_string (value, caribou_keyboard_model_get_keyboard_file (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_caribou_keyboard_model_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	CaribouKeyboardModel * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, CARIBOU_TYPE_KEYBOARD_MODEL, CaribouKeyboardModel);
	switch (property_id) {
		case CARIBOU_KEYBOARD_MODEL_ACTIVE_GROUP:
		caribou_keyboard_model_set_active_group (self, g_value_get_string (value));
		break;
		case CARIBOU_KEYBOARD_MODEL_KEYBOARD_TYPE:
		caribou_keyboard_model_set_keyboard_type (self, g_value_get_string (value));
		break;
		case CARIBOU_KEYBOARD_MODEL_KEYBOARD_FILE:
		caribou_keyboard_model_set_keyboard_file (self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}



