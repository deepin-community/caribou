/* display-adapter.c generated by valac 0.32.0.49-00a57, the Vala compiler
 * generated from display-adapter.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gdk/gdk.h>
#include <gee.h>
#include <gdk/gdkx.h>


#define CARIBOU_TYPE_DISPLAY_ADAPTER (caribou_display_adapter_get_type ())
#define CARIBOU_DISPLAY_ADAPTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CARIBOU_TYPE_DISPLAY_ADAPTER, CaribouDisplayAdapter))
#define CARIBOU_DISPLAY_ADAPTER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CARIBOU_TYPE_DISPLAY_ADAPTER, CaribouDisplayAdapterClass))
#define CARIBOU_IS_DISPLAY_ADAPTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CARIBOU_TYPE_DISPLAY_ADAPTER))
#define CARIBOU_IS_DISPLAY_ADAPTER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CARIBOU_TYPE_DISPLAY_ADAPTER))
#define CARIBOU_DISPLAY_ADAPTER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CARIBOU_TYPE_DISPLAY_ADAPTER, CaribouDisplayAdapterClass))

typedef struct _CaribouDisplayAdapter CaribouDisplayAdapter;
typedef struct _CaribouDisplayAdapterClass CaribouDisplayAdapterClass;
typedef struct _CaribouDisplayAdapterPrivate CaribouDisplayAdapterPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define CARIBOU_TYPE_NULL_ADAPTER (caribou_null_adapter_get_type ())
#define CARIBOU_NULL_ADAPTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CARIBOU_TYPE_NULL_ADAPTER, CaribouNullAdapter))
#define CARIBOU_NULL_ADAPTER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CARIBOU_TYPE_NULL_ADAPTER, CaribouNullAdapterClass))
#define CARIBOU_IS_NULL_ADAPTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CARIBOU_TYPE_NULL_ADAPTER))
#define CARIBOU_IS_NULL_ADAPTER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CARIBOU_TYPE_NULL_ADAPTER))
#define CARIBOU_NULL_ADAPTER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CARIBOU_TYPE_NULL_ADAPTER, CaribouNullAdapterClass))

typedef struct _CaribouNullAdapter CaribouNullAdapter;
typedef struct _CaribouNullAdapterClass CaribouNullAdapterClass;

#define CARIBOU_TYPE_XADAPTER (caribou_xadapter_get_type ())
#define CARIBOU_XADAPTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CARIBOU_TYPE_XADAPTER, CaribouXAdapter))
#define CARIBOU_XADAPTER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CARIBOU_TYPE_XADAPTER, CaribouXAdapterClass))
#define CARIBOU_IS_XADAPTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CARIBOU_TYPE_XADAPTER))
#define CARIBOU_IS_XADAPTER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CARIBOU_TYPE_XADAPTER))
#define CARIBOU_XADAPTER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CARIBOU_TYPE_XADAPTER, CaribouXAdapterClass))

typedef struct _CaribouXAdapter CaribouXAdapter;
typedef struct _CaribouXAdapterClass CaribouXAdapterClass;
typedef struct _CaribouNullAdapterPrivate CaribouNullAdapterPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))

typedef void (*CaribouKeyButtonCallback) (guint keybuttoncode, gboolean pressed, void* user_data);
struct _CaribouDisplayAdapter {
	GObject parent_instance;
	CaribouDisplayAdapterPrivate * priv;
};

struct _CaribouDisplayAdapterClass {
	GObjectClass parent_class;
	void (*keyval_press) (CaribouDisplayAdapter* self, guint keyval);
	void (*keyval_release) (CaribouDisplayAdapter* self, guint keyval);
	void (*mod_lock) (CaribouDisplayAdapter* self, guint mask);
	void (*mod_unlock) (CaribouDisplayAdapter* self, guint mask);
	void (*mod_latch) (CaribouDisplayAdapter* self, guint mask);
	void (*mod_unlatch) (CaribouDisplayAdapter* self, guint mask);
	guint (*get_current_group) (CaribouDisplayAdapter* self, gchar** group_name, gchar** variant_name);
	void (*get_groups) (CaribouDisplayAdapter* self, gchar*** group_names, int* group_names_length1, gchar*** variant_names, int* variant_names_length1);
	void (*register_key_func) (CaribouDisplayAdapter* self, guint keyval, CaribouKeyButtonCallback func, void* func_target);
	void (*register_button_func) (CaribouDisplayAdapter* self, guint button, CaribouKeyButtonCallback func, void* func_target);
};

struct _CaribouDisplayAdapterPrivate {
	GdkDisplay* _display;
};

struct _CaribouNullAdapter {
	CaribouDisplayAdapter parent_instance;
	CaribouNullAdapterPrivate * priv;
};

struct _CaribouNullAdapterClass {
	CaribouDisplayAdapterClass parent_class;
};


static gpointer caribou_display_adapter_parent_class = NULL;
static CaribouDisplayAdapter* caribou_display_adapter_instance;
static CaribouDisplayAdapter* caribou_display_adapter_instance = NULL;
static gpointer caribou_null_adapter_parent_class = NULL;

GType caribou_display_adapter_get_type (void) G_GNUC_CONST;
#define CARIBOU_DISPLAY_ADAPTER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), CARIBOU_TYPE_DISPLAY_ADAPTER, CaribouDisplayAdapterPrivate))
enum  {
	CARIBOU_DISPLAY_ADAPTER_DUMMY_PROPERTY,
	CARIBOU_DISPLAY_ADAPTER_DISPLAY
};
void caribou_display_adapter_keyval_press (CaribouDisplayAdapter* self, guint keyval);
static void caribou_display_adapter_real_keyval_press (CaribouDisplayAdapter* self, guint keyval);
void caribou_display_adapter_keyval_release (CaribouDisplayAdapter* self, guint keyval);
static void caribou_display_adapter_real_keyval_release (CaribouDisplayAdapter* self, guint keyval);
void caribou_display_adapter_mod_lock (CaribouDisplayAdapter* self, guint mask);
static void caribou_display_adapter_real_mod_lock (CaribouDisplayAdapter* self, guint mask);
void caribou_display_adapter_mod_unlock (CaribouDisplayAdapter* self, guint mask);
static void caribou_display_adapter_real_mod_unlock (CaribouDisplayAdapter* self, guint mask);
void caribou_display_adapter_mod_latch (CaribouDisplayAdapter* self, guint mask);
static void caribou_display_adapter_real_mod_latch (CaribouDisplayAdapter* self, guint mask);
void caribou_display_adapter_mod_unlatch (CaribouDisplayAdapter* self, guint mask);
static void caribou_display_adapter_real_mod_unlatch (CaribouDisplayAdapter* self, guint mask);
guint caribou_display_adapter_get_current_group (CaribouDisplayAdapter* self, gchar** group_name, gchar** variant_name);
static guint caribou_display_adapter_real_get_current_group (CaribouDisplayAdapter* self, gchar** group_name, gchar** variant_name);
void caribou_display_adapter_get_groups (CaribouDisplayAdapter* self, gchar*** group_names, int* group_names_length1, gchar*** variant_names, int* variant_names_length1);
static void caribou_display_adapter_real_get_groups (CaribouDisplayAdapter* self, gchar*** group_names, int* group_names_length1, gchar*** variant_names, int* variant_names_length1);
void caribou_display_adapter_register_key_func (CaribouDisplayAdapter* self, guint keyval, CaribouKeyButtonCallback func, void* func_target);
static void caribou_display_adapter_real_register_key_func (CaribouDisplayAdapter* self, guint keyval, CaribouKeyButtonCallback func, void* func_target);
void caribou_display_adapter_register_button_func (CaribouDisplayAdapter* self, guint button, CaribouKeyButtonCallback func, void* func_target);
static void caribou_display_adapter_real_register_button_func (CaribouDisplayAdapter* self, guint button, CaribouKeyButtonCallback func, void* func_target);
gboolean caribou_display_adapter_set_default (CaribouDisplayAdapter* adapter);
CaribouDisplayAdapter* caribou_display_adapter_get_default (void);
GType caribou_null_adapter_get_type (void) G_GNUC_CONST;
GType caribou_xadapter_get_type (void) G_GNUC_CONST;
CaribouDisplayAdapter* caribou_display_adapter_construct (GType object_type);
GdkDisplay* caribou_display_adapter_get_display (CaribouDisplayAdapter* self);
static void caribou_display_adapter_set_display (CaribouDisplayAdapter* self, GdkDisplay* value);
static void g_cclosure_user_marshal_VOID__UINT_STRING_STRING (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
static void caribou_display_adapter_finalize (GObject* obj);
static void _vala_caribou_display_adapter_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_caribou_display_adapter_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);
enum  {
	CARIBOU_NULL_ADAPTER_DUMMY_PROPERTY
};
static void caribou_null_adapter_real_keyval_press (CaribouDisplayAdapter* base, guint keyval);
static void caribou_null_adapter_real_keyval_release (CaribouDisplayAdapter* base, guint keyval);
static void caribou_null_adapter_real_mod_lock (CaribouDisplayAdapter* base, guint mask);
static void caribou_null_adapter_real_mod_unlock (CaribouDisplayAdapter* base, guint mask);
static void caribou_null_adapter_real_mod_latch (CaribouDisplayAdapter* base, guint mask);
static void caribou_null_adapter_real_mod_unlatch (CaribouDisplayAdapter* base, guint mask);
static guint caribou_null_adapter_real_get_current_group (CaribouDisplayAdapter* base, gchar** group_name, gchar** variant_name);
static void caribou_null_adapter_real_get_groups (CaribouDisplayAdapter* base, gchar*** group_names, int* group_names_length1, gchar*** variant_names, int* variant_names_length1);
static void caribou_null_adapter_real_register_key_func (CaribouDisplayAdapter* base, guint keyval, CaribouKeyButtonCallback func, void* func_target);
static void caribou_null_adapter_real_register_button_func (CaribouDisplayAdapter* base, guint button, CaribouKeyButtonCallback func, void* func_target);
CaribouNullAdapter* caribou_null_adapter_new (void);
CaribouNullAdapter* caribou_null_adapter_construct (GType object_type);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


/**
         * Send key press event.
         *
         * @param keyval keyval
         */
static void caribou_display_adapter_real_keyval_press (CaribouDisplayAdapter* self, guint keyval) {
	g_critical ("Type `%s' does not implement abstract method `caribou_display_adapter_keyval_press'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}


void caribou_display_adapter_keyval_press (CaribouDisplayAdapter* self, guint keyval) {
	g_return_if_fail (self != NULL);
	CARIBOU_DISPLAY_ADAPTER_GET_CLASS (self)->keyval_press (self, keyval);
}


/**
         * Send key release event.
         *
         * @param keyval keyval
         */
static void caribou_display_adapter_real_keyval_release (CaribouDisplayAdapter* self, guint keyval) {
	g_critical ("Type `%s' does not implement abstract method `caribou_display_adapter_keyval_release'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}


void caribou_display_adapter_keyval_release (CaribouDisplayAdapter* self, guint keyval) {
	g_return_if_fail (self != NULL);
	CARIBOU_DISPLAY_ADAPTER_GET_CLASS (self)->keyval_release (self, keyval);
}


/**
         * Lock modifiers.
         *
         * @param mask modifiers
         */
static void caribou_display_adapter_real_mod_lock (CaribouDisplayAdapter* self, guint mask) {
	g_critical ("Type `%s' does not implement abstract method `caribou_display_adapter_mod_lock'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}


void caribou_display_adapter_mod_lock (CaribouDisplayAdapter* self, guint mask) {
	g_return_if_fail (self != NULL);
	CARIBOU_DISPLAY_ADAPTER_GET_CLASS (self)->mod_lock (self, mask);
}


/**
         * Unlock modifiers.
         *
         * @param mask modifiers
         */
static void caribou_display_adapter_real_mod_unlock (CaribouDisplayAdapter* self, guint mask) {
	g_critical ("Type `%s' does not implement abstract method `caribou_display_adapter_mod_unlock'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}


void caribou_display_adapter_mod_unlock (CaribouDisplayAdapter* self, guint mask) {
	g_return_if_fail (self != NULL);
	CARIBOU_DISPLAY_ADAPTER_GET_CLASS (self)->mod_unlock (self, mask);
}


/**
         * Latch modifiers.
         *
         * @param mask modifiers
         */
static void caribou_display_adapter_real_mod_latch (CaribouDisplayAdapter* self, guint mask) {
	g_critical ("Type `%s' does not implement abstract method `caribou_display_adapter_mod_latch'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}


void caribou_display_adapter_mod_latch (CaribouDisplayAdapter* self, guint mask) {
	g_return_if_fail (self != NULL);
	CARIBOU_DISPLAY_ADAPTER_GET_CLASS (self)->mod_latch (self, mask);
}


/**
         * Unlatch modifiers.
         *
         * @param mask modifiers
         */
static void caribou_display_adapter_real_mod_unlatch (CaribouDisplayAdapter* self, guint mask) {
	g_critical ("Type `%s' does not implement abstract method `caribou_display_adapter_mod_unlatch'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}


void caribou_display_adapter_mod_unlatch (CaribouDisplayAdapter* self, guint mask) {
	g_return_if_fail (self != NULL);
	CARIBOU_DISPLAY_ADAPTER_GET_CLASS (self)->mod_unlatch (self, mask);
}


/**
         * Get the current group.
         *
         * @param group_name group name
         * @param variant_name variant name
         */
static guint caribou_display_adapter_real_get_current_group (CaribouDisplayAdapter* self, gchar** group_name, gchar** variant_name) {
	g_critical ("Type `%s' does not implement abstract method `caribou_display_adapter_get_current_group'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return 0U;
}


guint caribou_display_adapter_get_current_group (CaribouDisplayAdapter* self, gchar** group_name, gchar** variant_name) {
	g_return_val_if_fail (self != NULL, 0U);
	return CARIBOU_DISPLAY_ADAPTER_GET_CLASS (self)->get_current_group (self, group_name, variant_name);
}


/**
         * Get available groups.
         *
         * @param group_names list of groups
         * @param variant_names list of variants, indexed same as group_names
         */
static void caribou_display_adapter_real_get_groups (CaribouDisplayAdapter* self, gchar*** group_names, int* group_names_length1, gchar*** variant_names, int* variant_names_length1) {
	g_critical ("Type `%s' does not implement abstract method `caribou_display_adapter_get_groups'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}


void caribou_display_adapter_get_groups (CaribouDisplayAdapter* self, gchar*** group_names, int* group_names_length1, gchar*** variant_names, int* variant_names_length1) {
	g_return_if_fail (self != NULL);
	CARIBOU_DISPLAY_ADAPTER_GET_CLASS (self)->get_groups (self, group_names, group_names_length1, variant_names, variant_names_length1);
}


/**
         * Register key callback.
         *
         * @param keyval keyval
         * @param func callback
         */
static void caribou_display_adapter_real_register_key_func (CaribouDisplayAdapter* self, guint keyval, CaribouKeyButtonCallback func, void* func_target) {
	g_critical ("Type `%s' does not implement abstract method `caribou_display_adapter_register_key_func'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}


void caribou_display_adapter_register_key_func (CaribouDisplayAdapter* self, guint keyval, CaribouKeyButtonCallback func, void* func_target) {
	g_return_if_fail (self != NULL);
	CARIBOU_DISPLAY_ADAPTER_GET_CLASS (self)->register_key_func (self, keyval, func, func_target);
}


/**
         * Register button callback.
         *
         * @param button button
         * @param func callback
         */
static void caribou_display_adapter_real_register_button_func (CaribouDisplayAdapter* self, guint button, CaribouKeyButtonCallback func, void* func_target) {
	g_critical ("Type `%s' does not implement abstract method `caribou_display_adapter_register_button_func'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}


void caribou_display_adapter_register_button_func (CaribouDisplayAdapter* self, guint button, CaribouKeyButtonCallback func, void* func_target) {
	g_return_if_fail (self != NULL);
	CARIBOU_DISPLAY_ADAPTER_GET_CLASS (self)->register_button_func (self, button, func, func_target);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


gboolean caribou_display_adapter_set_default (CaribouDisplayAdapter* adapter) {
	gboolean result = FALSE;
	CaribouDisplayAdapter* _tmp0_ = NULL;
	CaribouDisplayAdapter* _tmp1_ = NULL;
	CaribouDisplayAdapter* _tmp2_ = NULL;
	g_return_val_if_fail (adapter != NULL, FALSE);
	_tmp0_ = caribou_display_adapter_instance;
	if (_tmp0_ != NULL) {
		result = FALSE;
		return result;
	}
	_tmp1_ = adapter;
	_tmp2_ = _g_object_ref0 (_tmp1_);
	_g_object_unref0 (caribou_display_adapter_instance);
	caribou_display_adapter_instance = _tmp2_;
	result = TRUE;
	return result;
}


CaribouDisplayAdapter* caribou_display_adapter_get_default (void) {
	CaribouDisplayAdapter* result = NULL;
	CaribouDisplayAdapter* _tmp0_ = NULL;
	CaribouDisplayAdapter* _tmp19_ = NULL;
	CaribouDisplayAdapter* _tmp20_ = NULL;
	_tmp0_ = caribou_display_adapter_instance;
	if (_tmp0_ == NULL) {
		GdkDisplay* display = NULL;
		GdkDisplayManager* _tmp1_ = NULL;
		GdkDisplay* _tmp2_ = NULL;
		GdkDisplay* _tmp3_ = NULL;
		GType adapter_type = 0UL;
		GdkDisplay* _tmp4_ = NULL;
		GType _tmp15_ = 0UL;
		GdkDisplay* _tmp16_ = NULL;
		GObject* _tmp17_ = NULL;
		GObject* _tmp18_ = NULL;
		_tmp1_ = gdk_display_manager_get ();
		_tmp2_ = gdk_display_manager_get_default_display (_tmp1_);
		_tmp3_ = _g_object_ref0 (_tmp2_);
		display = _tmp3_;
		adapter_type = CARIBOU_TYPE_NULL_ADAPTER;
		_tmp4_ = display;
		if (_tmp4_ != NULL) {
			GeeHashMap* adapters = NULL;
			GeeHashMap* _tmp5_ = NULL;
			GeeHashMap* _tmp6_ = NULL;
			GType display_type = 0UL;
			GdkDisplay* _tmp7_ = NULL;
			GType _tmp8_ = 0UL;
			GeeHashMap* _tmp9_ = NULL;
			GType _tmp10_ = 0UL;
			gboolean _tmp11_ = FALSE;
			_tmp5_ = gee_hash_map_new (G_TYPE_GTYPE, NULL, NULL, G_TYPE_GTYPE, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
			adapters = _tmp5_;
			_tmp6_ = adapters;
			gee_abstract_map_set ((GeeAbstractMap*) _tmp6_, (gpointer) ((gintptr) GDK_TYPE_X11_DISPLAY), (gpointer) ((gintptr) CARIBOU_TYPE_XADAPTER));
			_tmp7_ = display;
			_tmp8_ = G_TYPE_FROM_INSTANCE ((GObject*) _tmp7_);
			display_type = _tmp8_;
			_tmp9_ = adapters;
			_tmp10_ = display_type;
			_tmp11_ = gee_abstract_map_has_key ((GeeAbstractMap*) _tmp9_, (gpointer) ((gintptr) _tmp10_));
			if (_tmp11_) {
				GeeHashMap* _tmp12_ = NULL;
				GType _tmp13_ = 0UL;
				gpointer _tmp14_ = NULL;
				_tmp12_ = adapters;
				_tmp13_ = display_type;
				_tmp14_ = gee_abstract_map_get ((GeeAbstractMap*) _tmp12_, (gpointer) ((gintptr) _tmp13_));
				adapter_type = (GType) ((gintptr) _tmp14_);
			}
			_g_object_unref0 (adapters);
		}
		_tmp15_ = adapter_type;
		_tmp16_ = display;
		_tmp17_ = g_object_new (_tmp15_, "display", _tmp16_, NULL);
		_tmp18_ = G_IS_INITIALLY_UNOWNED (_tmp17_) ? g_object_ref_sink (_tmp17_) : _tmp17_;
		_g_object_unref0 (caribou_display_adapter_instance);
		caribou_display_adapter_instance = G_TYPE_CHECK_INSTANCE_CAST (_tmp18_, CARIBOU_TYPE_DISPLAY_ADAPTER, CaribouDisplayAdapter);
		_g_object_unref0 (display);
	}
	_tmp19_ = caribou_display_adapter_instance;
	_tmp20_ = _g_object_ref0 (_tmp19_);
	result = _tmp20_;
	return result;
}


CaribouDisplayAdapter* caribou_display_adapter_construct (GType object_type) {
	CaribouDisplayAdapter * self = NULL;
	self = (CaribouDisplayAdapter*) g_object_new (object_type, NULL);
	return self;
}


GdkDisplay* caribou_display_adapter_get_display (CaribouDisplayAdapter* self) {
	GdkDisplay* result;
	GdkDisplay* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_display;
	result = _tmp0_;
	return result;
}


static void caribou_display_adapter_set_display (CaribouDisplayAdapter* self, GdkDisplay* value) {
	GdkDisplay* _tmp0_ = NULL;
	GdkDisplay* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->_display);
	self->priv->_display = _tmp1_;
	g_object_notify ((GObject *) self, "display");
}


static void g_cclosure_user_marshal_VOID__UINT_STRING_STRING (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) {
	typedef void (*GMarshalFunc_VOID__UINT_STRING_STRING) (gpointer data1, guint arg_1, const char* arg_2, const char* arg_3, gpointer data2);
	register GMarshalFunc_VOID__UINT_STRING_STRING callback;
	register GCClosure * cc;
	register gpointer data1;
	register gpointer data2;
	cc = (GCClosure *) closure;
	g_return_if_fail (n_param_values == 4);
	if (G_CCLOSURE_SWAP_DATA (closure)) {
		data1 = closure->data;
		data2 = param_values->data[0].v_pointer;
	} else {
		data1 = param_values->data[0].v_pointer;
		data2 = closure->data;
	}
	callback = (GMarshalFunc_VOID__UINT_STRING_STRING) (marshal_data ? marshal_data : cc->callback);
	callback (data1, g_value_get_uint (param_values + 1), g_value_get_string (param_values + 2), g_value_get_string (param_values + 3), data2);
}


static void caribou_display_adapter_class_init (CaribouDisplayAdapterClass * klass) {
	caribou_display_adapter_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (CaribouDisplayAdapterPrivate));
	((CaribouDisplayAdapterClass *) klass)->keyval_press = caribou_display_adapter_real_keyval_press;
	((CaribouDisplayAdapterClass *) klass)->keyval_release = caribou_display_adapter_real_keyval_release;
	((CaribouDisplayAdapterClass *) klass)->mod_lock = caribou_display_adapter_real_mod_lock;
	((CaribouDisplayAdapterClass *) klass)->mod_unlock = caribou_display_adapter_real_mod_unlock;
	((CaribouDisplayAdapterClass *) klass)->mod_latch = caribou_display_adapter_real_mod_latch;
	((CaribouDisplayAdapterClass *) klass)->mod_unlatch = caribou_display_adapter_real_mod_unlatch;
	((CaribouDisplayAdapterClass *) klass)->get_current_group = caribou_display_adapter_real_get_current_group;
	((CaribouDisplayAdapterClass *) klass)->get_groups = caribou_display_adapter_real_get_groups;
	((CaribouDisplayAdapterClass *) klass)->register_key_func = caribou_display_adapter_real_register_key_func;
	((CaribouDisplayAdapterClass *) klass)->register_button_func = caribou_display_adapter_real_register_button_func;
	G_OBJECT_CLASS (klass)->get_property = _vala_caribou_display_adapter_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_caribou_display_adapter_set_property;
	G_OBJECT_CLASS (klass)->finalize = caribou_display_adapter_finalize;
	/**
	         * Display instance.
	         */
	g_object_class_install_property (G_OBJECT_CLASS (klass), CARIBOU_DISPLAY_ADAPTER_DISPLAY, g_param_spec_object ("display", "display", "display", gdk_display_get_type (), G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	/**
	         * Signal emitted when modifiers have changed.
	         */
	g_signal_new ("modifiers_changed", CARIBOU_TYPE_DISPLAY_ADAPTER, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__UINT, G_TYPE_NONE, 1, G_TYPE_UINT);
	/**
	         * Signal emitted when the current group has changed.
	         *
	         * @param gid group index
	         * @param group group name
	         * @param variant variant name
	         */
	g_signal_new ("group_changed", CARIBOU_TYPE_DISPLAY_ADAPTER, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_user_marshal_VOID__UINT_STRING_STRING, G_TYPE_NONE, 3, G_TYPE_UINT, G_TYPE_STRING, G_TYPE_STRING);
	/**
	         * Signal emitted when the group configuration has changed.
	         */
	g_signal_new ("config_changed", CARIBOU_TYPE_DISPLAY_ADAPTER, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
}


static void caribou_display_adapter_instance_init (CaribouDisplayAdapter * self) {
	self->priv = CARIBOU_DISPLAY_ADAPTER_GET_PRIVATE (self);
}


static void caribou_display_adapter_finalize (GObject* obj) {
	CaribouDisplayAdapter * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, CARIBOU_TYPE_DISPLAY_ADAPTER, CaribouDisplayAdapter);
	_g_object_unref0 (self->priv->_display);
	G_OBJECT_CLASS (caribou_display_adapter_parent_class)->finalize (obj);
}


/**
     * Base class of singleton object providing access to the display server.
     */
GType caribou_display_adapter_get_type (void) {
	static volatile gsize caribou_display_adapter_type_id__volatile = 0;
	if (g_once_init_enter (&caribou_display_adapter_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (CaribouDisplayAdapterClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) caribou_display_adapter_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (CaribouDisplayAdapter), 0, (GInstanceInitFunc) caribou_display_adapter_instance_init, NULL };
		GType caribou_display_adapter_type_id;
		caribou_display_adapter_type_id = g_type_register_static (G_TYPE_OBJECT, "CaribouDisplayAdapter", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&caribou_display_adapter_type_id__volatile, caribou_display_adapter_type_id);
	}
	return caribou_display_adapter_type_id__volatile;
}


static void _vala_caribou_display_adapter_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	CaribouDisplayAdapter * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, CARIBOU_TYPE_DISPLAY_ADAPTER, CaribouDisplayAdapter);
	switch (property_id) {
		case CARIBOU_DISPLAY_ADAPTER_DISPLAY:
		g_value_set_object (value, caribou_display_adapter_get_display (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_caribou_display_adapter_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	CaribouDisplayAdapter * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, CARIBOU_TYPE_DISPLAY_ADAPTER, CaribouDisplayAdapter);
	switch (property_id) {
		case CARIBOU_DISPLAY_ADAPTER_DISPLAY:
		caribou_display_adapter_set_display (self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void caribou_null_adapter_real_keyval_press (CaribouDisplayAdapter* base, guint keyval) {
	CaribouNullAdapter * self;
	self = (CaribouNullAdapter*) base;
}


static void caribou_null_adapter_real_keyval_release (CaribouDisplayAdapter* base, guint keyval) {
	CaribouNullAdapter * self;
	self = (CaribouNullAdapter*) base;
}


static void caribou_null_adapter_real_mod_lock (CaribouDisplayAdapter* base, guint mask) {
	CaribouNullAdapter * self;
	self = (CaribouNullAdapter*) base;
}


static void caribou_null_adapter_real_mod_unlock (CaribouDisplayAdapter* base, guint mask) {
	CaribouNullAdapter * self;
	self = (CaribouNullAdapter*) base;
}


static void caribou_null_adapter_real_mod_latch (CaribouDisplayAdapter* base, guint mask) {
	CaribouNullAdapter * self;
	self = (CaribouNullAdapter*) base;
}


static void caribou_null_adapter_real_mod_unlatch (CaribouDisplayAdapter* base, guint mask) {
	CaribouNullAdapter * self;
	self = (CaribouNullAdapter*) base;
}


static guint caribou_null_adapter_real_get_current_group (CaribouDisplayAdapter* base, gchar** group_name, gchar** variant_name) {
	CaribouNullAdapter * self;
	gchar* _vala_group_name = NULL;
	gchar* _vala_variant_name = NULL;
	guint result = 0U;
	gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	self = (CaribouNullAdapter*) base;
	_tmp0_ = g_strdup ("us");
	_g_free0 (_vala_group_name);
	_vala_group_name = _tmp0_;
	_tmp1_ = g_strdup ("");
	_g_free0 (_vala_variant_name);
	_vala_variant_name = _tmp1_;
	result = (guint) 0;
	if (group_name) {
		*group_name = _vala_group_name;
	} else {
		_g_free0 (_vala_group_name);
	}
	if (variant_name) {
		*variant_name = _vala_variant_name;
	} else {
		_g_free0 (_vala_variant_name);
	}
	return result;
}


static void caribou_null_adapter_real_get_groups (CaribouDisplayAdapter* base, gchar*** group_names, int* group_names_length1, gchar*** variant_names, int* variant_names_length1) {
	CaribouNullAdapter * self;
	gchar** _vala_group_names = NULL;
	int _vala_group_names_length1 = 0;
	gchar** _vala_variant_names = NULL;
	int _vala_variant_names_length1 = 0;
	gchar* _tmp0_ = NULL;
	gchar** _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	gchar** _tmp3_ = NULL;
	self = (CaribouNullAdapter*) base;
	_tmp0_ = g_strdup ("us");
	_tmp1_ = g_new0 (gchar*, 1 + 1);
	_tmp1_[0] = _tmp0_;
	_vala_group_names = (_vala_array_free (_vala_group_names, _vala_group_names_length1, (GDestroyNotify) g_free), NULL);
	_vala_group_names = _tmp1_;
	_vala_group_names_length1 = 1;
	_tmp2_ = g_strdup ("");
	_tmp3_ = g_new0 (gchar*, 1 + 1);
	_tmp3_[0] = _tmp2_;
	_vala_variant_names = (_vala_array_free (_vala_variant_names, _vala_variant_names_length1, (GDestroyNotify) g_free), NULL);
	_vala_variant_names = _tmp3_;
	_vala_variant_names_length1 = 1;
	if (group_names) {
		*group_names = _vala_group_names;
	} else {
		_vala_group_names = (_vala_array_free (_vala_group_names, _vala_group_names_length1, (GDestroyNotify) g_free), NULL);
	}
	if (group_names_length1) {
		*group_names_length1 = _vala_group_names_length1;
	}
	if (variant_names) {
		*variant_names = _vala_variant_names;
	} else {
		_vala_variant_names = (_vala_array_free (_vala_variant_names, _vala_variant_names_length1, (GDestroyNotify) g_free), NULL);
	}
	if (variant_names_length1) {
		*variant_names_length1 = _vala_variant_names_length1;
	}
}


static void caribou_null_adapter_real_register_key_func (CaribouDisplayAdapter* base, guint keyval, CaribouKeyButtonCallback func, void* func_target) {
	CaribouNullAdapter * self;
	self = (CaribouNullAdapter*) base;
}


static void caribou_null_adapter_real_register_button_func (CaribouDisplayAdapter* base, guint button, CaribouKeyButtonCallback func, void* func_target) {
	CaribouNullAdapter * self;
	self = (CaribouNullAdapter*) base;
}


CaribouNullAdapter* caribou_null_adapter_construct (GType object_type) {
	CaribouNullAdapter * self = NULL;
	self = (CaribouNullAdapter*) caribou_display_adapter_construct (object_type);
	return self;
}


CaribouNullAdapter* caribou_null_adapter_new (void) {
	return caribou_null_adapter_construct (CARIBOU_TYPE_NULL_ADAPTER);
}


static void caribou_null_adapter_class_init (CaribouNullAdapterClass * klass) {
	caribou_null_adapter_parent_class = g_type_class_peek_parent (klass);
	((CaribouDisplayAdapterClass *) klass)->keyval_press = caribou_null_adapter_real_keyval_press;
	((CaribouDisplayAdapterClass *) klass)->keyval_release = caribou_null_adapter_real_keyval_release;
	((CaribouDisplayAdapterClass *) klass)->mod_lock = caribou_null_adapter_real_mod_lock;
	((CaribouDisplayAdapterClass *) klass)->mod_unlock = caribou_null_adapter_real_mod_unlock;
	((CaribouDisplayAdapterClass *) klass)->mod_latch = caribou_null_adapter_real_mod_latch;
	((CaribouDisplayAdapterClass *) klass)->mod_unlatch = caribou_null_adapter_real_mod_unlatch;
	((CaribouDisplayAdapterClass *) klass)->get_current_group = caribou_null_adapter_real_get_current_group;
	((CaribouDisplayAdapterClass *) klass)->get_groups = caribou_null_adapter_real_get_groups;
	((CaribouDisplayAdapterClass *) klass)->register_key_func = caribou_null_adapter_real_register_key_func;
	((CaribouDisplayAdapterClass *) klass)->register_button_func = caribou_null_adapter_real_register_button_func;
}


static void caribou_null_adapter_instance_init (CaribouNullAdapter * self) {
}


GType caribou_null_adapter_get_type (void) {
	static volatile gsize caribou_null_adapter_type_id__volatile = 0;
	if (g_once_init_enter (&caribou_null_adapter_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (CaribouNullAdapterClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) caribou_null_adapter_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (CaribouNullAdapter), 0, (GInstanceInitFunc) caribou_null_adapter_instance_init, NULL };
		GType caribou_null_adapter_type_id;
		caribou_null_adapter_type_id = g_type_register_static (CARIBOU_TYPE_DISPLAY_ADAPTER, "CaribouNullAdapter", &g_define_type_info, 0);
		g_once_init_leave (&caribou_null_adapter_type_id__volatile, caribou_null_adapter_type_id);
	}
	return caribou_null_adapter_type_id__volatile;
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



