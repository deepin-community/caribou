/* ikeyboard-object.c generated by valac 0.32.0.49-00a57, the Vala compiler
 * generated from ikeyboard-object.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
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
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _CaribouIKeyboardObjectIface {
	GTypeInterface parent_iface;
	CaribouIKeyboardObject** (*get_children) (CaribouIKeyboardObject* self, int* result_length1);
	CaribouKeyModel** (*get_keys) (CaribouIKeyboardObject* self, int* result_length1);
};



GType caribou_key_model_get_type (void) G_GNUC_CONST;
GType caribou_ikeyboard_object_get_type (void) G_GNUC_CONST;
CaribouIKeyboardObject** caribou_ikeyboard_object_get_children (CaribouIKeyboardObject* self, int* result_length1);
CaribouKeyModel** caribou_ikeyboard_object_get_keys (CaribouIKeyboardObject* self, int* result_length1);
static CaribouKeyModel** caribou_ikeyboard_object_real_get_keys (CaribouIKeyboardObject* self, int* result_length1);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


CaribouIKeyboardObject** caribou_ikeyboard_object_get_children (CaribouIKeyboardObject* self, int* result_length1) {
	g_return_val_if_fail (self != NULL, NULL);
	return CARIBOU_IKEYBOARD_OBJECT_GET_INTERFACE (self)->get_children (self, result_length1);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static CaribouKeyModel** caribou_ikeyboard_object_real_get_keys (CaribouIKeyboardObject* self, int* result_length1) {
	CaribouKeyModel** result = NULL;
	GeeArrayList* keys = NULL;
	GeeArrayList* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	CaribouIKeyboardObject** _tmp2_ = NULL;
	GeeArrayList* _tmp11_ = NULL;
	gint _tmp12_ = 0;
	gpointer* _tmp13_ = NULL;
	CaribouKeyModel** _tmp14_ = NULL;
	gint _tmp14__length1 = 0;
	_tmp0_ = gee_array_list_new (CARIBOU_TYPE_KEY_MODEL, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL, NULL, NULL);
	keys = _tmp0_;
	_tmp2_ = caribou_ikeyboard_object_get_children (self, &_tmp1_);
	{
		CaribouIKeyboardObject** obj_collection = NULL;
		gint obj_collection_length1 = 0;
		gint _obj_collection_size_ = 0;
		gint obj_it = 0;
		obj_collection = _tmp2_;
		obj_collection_length1 = _tmp1_;
		for (obj_it = 0; obj_it < _tmp1_; obj_it = obj_it + 1) {
			CaribouIKeyboardObject* _tmp3_ = NULL;
			CaribouIKeyboardObject* obj = NULL;
			_tmp3_ = _g_object_ref0 (obj_collection[obj_it]);
			obj = _tmp3_;
			{
				CaribouKeyModel** obj_keys = NULL;
				CaribouIKeyboardObject* _tmp4_ = NULL;
				gint _tmp5_ = 0;
				CaribouKeyModel** _tmp6_ = NULL;
				gint obj_keys_length1 = 0;
				gint _obj_keys_size_ = 0;
				CaribouKeyModel** _tmp7_ = NULL;
				gint _tmp7__length1 = 0;
				_tmp4_ = obj;
				_tmp6_ = caribou_ikeyboard_object_get_keys (_tmp4_, &_tmp5_);
				obj_keys = _tmp6_;
				obj_keys_length1 = _tmp5_;
				_obj_keys_size_ = obj_keys_length1;
				_tmp7_ = obj_keys;
				_tmp7__length1 = obj_keys_length1;
				{
					CaribouKeyModel** key_collection = NULL;
					gint key_collection_length1 = 0;
					gint _key_collection_size_ = 0;
					gint key_it = 0;
					key_collection = _tmp7_;
					key_collection_length1 = _tmp7__length1;
					for (key_it = 0; key_it < _tmp7__length1; key_it = key_it + 1) {
						CaribouKeyModel* _tmp8_ = NULL;
						CaribouKeyModel* key = NULL;
						_tmp8_ = _g_object_ref0 (key_collection[key_it]);
						key = _tmp8_;
						{
							GeeArrayList* _tmp9_ = NULL;
							CaribouKeyModel* _tmp10_ = NULL;
							_tmp9_ = keys;
							_tmp10_ = key;
							gee_abstract_collection_add ((GeeAbstractCollection*) _tmp9_, _tmp10_);
							_g_object_unref0 (key);
						}
					}
				}
				obj_keys = (_vala_array_free (obj_keys, obj_keys_length1, (GDestroyNotify) g_object_unref), NULL);
				_g_object_unref0 (obj);
			}
		}
		obj_collection = (_vala_array_free (obj_collection, obj_collection_length1, (GDestroyNotify) g_object_unref), NULL);
	}
	_tmp11_ = keys;
	_tmp13_ = gee_collection_to_array ((GeeCollection*) _tmp11_, &_tmp12_);
	_tmp14_ = (CaribouKeyModel**) _tmp13_;
	_tmp14__length1 = (_tmp12_ * sizeof (CaribouKeyModel*)) / sizeof (CaribouKeyModel*);
	if (result_length1) {
		*result_length1 = _tmp14__length1;
	}
	result = _tmp14_;
	_g_object_unref0 (keys);
	return result;
}


CaribouKeyModel** caribou_ikeyboard_object_get_keys (CaribouIKeyboardObject* self, int* result_length1) {
	g_return_val_if_fail (self != NULL, NULL);
	return CARIBOU_IKEYBOARD_OBJECT_GET_INTERFACE (self)->get_keys (self, result_length1);
}


static void caribou_ikeyboard_object_base_init (CaribouIKeyboardObjectIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
		g_signal_new ("key_clicked", CARIBOU_TYPE_IKEYBOARD_OBJECT, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__OBJECT, G_TYPE_NONE, 1, CARIBOU_TYPE_KEY_MODEL);
		g_signal_new ("key_pressed", CARIBOU_TYPE_IKEYBOARD_OBJECT, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__OBJECT, G_TYPE_NONE, 1, CARIBOU_TYPE_KEY_MODEL);
		g_signal_new ("key_released", CARIBOU_TYPE_IKEYBOARD_OBJECT, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__OBJECT, G_TYPE_NONE, 1, CARIBOU_TYPE_KEY_MODEL);
		iface->get_keys = caribou_ikeyboard_object_real_get_keys;
	}
}


/**
 * Common interface providing access to keys.
 *
 * This is implemented by all the keyboard components.
 */
GType caribou_ikeyboard_object_get_type (void) {
	static volatile gsize caribou_ikeyboard_object_type_id__volatile = 0;
	if (g_once_init_enter (&caribou_ikeyboard_object_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (CaribouIKeyboardObjectIface), (GBaseInitFunc) caribou_ikeyboard_object_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType caribou_ikeyboard_object_type_id;
		caribou_ikeyboard_object_type_id = g_type_register_static (G_TYPE_INTERFACE, "CaribouIKeyboardObject", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (caribou_ikeyboard_object_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&caribou_ikeyboard_object_type_id__volatile, caribou_ikeyboard_object_type_id);
	}
	return caribou_ikeyboard_object_type_id__volatile;
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



