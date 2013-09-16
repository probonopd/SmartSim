/* propertyitem-string.c generated by valac 0.18.1, the Vala compiler
 * generated from propertyitem-string.vala, do not modify */

/* 
 * SmartSim - Digital Logic Circuit Designer and Simulator
 *   
 *   Expansion Version
 *   
 *   Filename: propertyitem/string.vala
 *   
 *   Copyright Ashley Newson 2012
 */

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_PROPERTY_ITEM (property_item_get_type ())
#define PROPERTY_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PROPERTY_ITEM, PropertyItem))
#define PROPERTY_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PROPERTY_ITEM, PropertyItemClass))
#define IS_PROPERTY_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PROPERTY_ITEM))
#define IS_PROPERTY_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PROPERTY_ITEM))
#define PROPERTY_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PROPERTY_ITEM, PropertyItemClass))

typedef struct _PropertyItem PropertyItem;
typedef struct _PropertyItemClass PropertyItemClass;
typedef struct _PropertyItemPrivate PropertyItemPrivate;

#define TYPE_PROPERTY_ITEM_STRING (property_item_string_get_type ())
#define PROPERTY_ITEM_STRING(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PROPERTY_ITEM_STRING, PropertyItemString))
#define PROPERTY_ITEM_STRING_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PROPERTY_ITEM_STRING, PropertyItemStringClass))
#define IS_PROPERTY_ITEM_STRING(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PROPERTY_ITEM_STRING))
#define IS_PROPERTY_ITEM_STRING_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PROPERTY_ITEM_STRING))
#define PROPERTY_ITEM_STRING_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PROPERTY_ITEM_STRING, PropertyItemStringClass))

typedef struct _PropertyItemString PropertyItemString;
typedef struct _PropertyItemStringClass PropertyItemStringClass;
typedef struct _PropertyItemStringPrivate PropertyItemStringPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))

#define TYPE_PROPERTY_SET (property_set_get_type ())
#define PROPERTY_SET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PROPERTY_SET, PropertySet))
#define PROPERTY_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PROPERTY_SET, PropertySetClass))
#define IS_PROPERTY_SET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PROPERTY_SET))
#define IS_PROPERTY_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PROPERTY_SET))
#define PROPERTY_SET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PROPERTY_SET, PropertySetClass))

typedef struct _PropertySet PropertySet;
typedef struct _PropertySetClass PropertySetClass;
#define _property_item_unref0(var) ((var == NULL) ? NULL : (var = (property_item_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _PropertyItem {
	GTypeInstance parent_instance;
	volatile int ref_count;
	PropertyItemPrivate * priv;
	gchar* name;
	gchar* description;
};

struct _PropertyItemClass {
	GTypeClass parent_class;
	void (*finalize) (PropertyItem *self);
	GtkWidget* (*create_widget) (PropertyItem* self);
	void (*read_widget) (PropertyItem* self, GtkWidget* propertyWidget);
};

struct _PropertyItemString {
	PropertyItem parent_instance;
	PropertyItemStringPrivate * priv;
	gchar* data;
};

struct _PropertyItemStringClass {
	PropertyItemClass parent_class;
};

typedef enum  {
	PROPERTY_ITEM_ERROR_ITEM_NOT_FOUND
} PropertyItemError;
#define PROPERTY_ITEM_ERROR property_item_error_quark ()

static gpointer property_item_string_parent_class = NULL;

gpointer property_item_ref (gpointer instance);
void property_item_unref (gpointer instance);
GParamSpec* param_spec_property_item (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_property_item (GValue* value, gpointer v_object);
void value_take_property_item (GValue* value, gpointer v_object);
gpointer value_get_property_item (const GValue* value);
GType property_item_get_type (void) G_GNUC_CONST;
GType property_item_string_get_type (void) G_GNUC_CONST;
enum  {
	PROPERTY_ITEM_STRING_DUMMY_PROPERTY
};
GType property_set_get_type (void) G_GNUC_CONST;
GQuark property_item_error_quark (void);
gchar* property_item_string_get_data_throw (PropertySet* propertySet, const gchar* name, GError** error);
PropertyItem* property_set_get_item (PropertySet* self, const gchar* name);
void property_item_string_set_data_throw (PropertySet* propertySet, const gchar* name, const gchar* data, GError** error);
gchar* property_item_string_get_data (PropertySet* propertySet, const gchar* name);
void property_item_string_set_data (PropertySet* propertySet, const gchar* name, const gchar* data);
PropertyItemString* property_item_string_new (const gchar* name, const gchar* description, const gchar* data);
PropertyItemString* property_item_string_construct (GType object_type, const gchar* name, const gchar* description, const gchar* data);
PropertyItem* property_item_construct (GType object_type, const gchar* name, const gchar* description);
static GtkWidget* property_item_string_real_create_widget (PropertyItem* base);
static void property_item_string_real_read_widget (PropertyItem* base, GtkWidget* propertyWidget);
static void property_item_string_finalize (PropertyItem* obj);


gchar* property_item_string_get_data_throw (PropertySet* propertySet, const gchar* name, GError** error) {
	gchar* result = NULL;
	PropertySet* _tmp0_;
	const gchar* _tmp1_;
	PropertyItem* _tmp2_ = NULL;
	PropertyItem* propertyItem;
	PropertyItem* _tmp3_;
	PropertySet* _tmp8_;
	const gchar* _tmp9_;
	gchar* _tmp10_;
	gchar* _tmp11_;
	gchar* _tmp12_;
	gchar* _tmp13_;
	const gchar* _tmp14_;
	gchar* _tmp15_;
	gchar* _tmp16_;
	gchar* _tmp17_;
	gchar* _tmp18_;
	GError* _tmp19_;
	GError* _tmp20_;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (propertySet != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	_tmp0_ = propertySet;
	_tmp1_ = name;
	_tmp2_ = property_set_get_item (_tmp0_, _tmp1_);
	propertyItem = _tmp2_;
	_tmp3_ = propertyItem;
	if (_tmp3_ != NULL) {
		PropertyItem* _tmp4_;
		_tmp4_ = propertyItem;
		if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp4_, TYPE_PROPERTY_ITEM_STRING)) {
			PropertyItem* _tmp5_;
			const gchar* _tmp6_;
			gchar* _tmp7_;
			_tmp5_ = propertyItem;
			_tmp6_ = (G_TYPE_CHECK_INSTANCE_TYPE (_tmp5_, TYPE_PROPERTY_ITEM_STRING) ? ((PropertyItemString*) _tmp5_) : NULL)->data;
			_tmp7_ = g_strdup (_tmp6_);
			result = _tmp7_;
			_property_item_unref0 (propertyItem);
			return result;
		}
	}
	_tmp8_ = propertySet;
	_tmp9_ = ((PropertyItem*) _tmp8_)->name;
	_tmp10_ = g_strconcat ("\"", _tmp9_, NULL);
	_tmp11_ = _tmp10_;
	_tmp12_ = g_strconcat (_tmp11_, "\" does not contain a string named \"", NULL);
	_tmp13_ = _tmp12_;
	_tmp14_ = name;
	_tmp15_ = g_strconcat (_tmp13_, _tmp14_, NULL);
	_tmp16_ = _tmp15_;
	_tmp17_ = g_strconcat (_tmp16_, "\"", NULL);
	_tmp18_ = _tmp17_;
	_tmp19_ = g_error_new_literal (PROPERTY_ITEM_ERROR, PROPERTY_ITEM_ERROR_ITEM_NOT_FOUND, _tmp18_);
	_tmp20_ = _tmp19_;
	_g_free0 (_tmp18_);
	_g_free0 (_tmp16_);
	_g_free0 (_tmp13_);
	_g_free0 (_tmp11_);
	_inner_error_ = _tmp20_;
	if (_inner_error_->domain == PROPERTY_ITEM_ERROR) {
		g_propagate_error (error, _inner_error_);
		_property_item_unref0 (propertyItem);
		return NULL;
	} else {
		_property_item_unref0 (propertyItem);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
	_property_item_unref0 (propertyItem);
}


void property_item_string_set_data_throw (PropertySet* propertySet, const gchar* name, const gchar* data, GError** error) {
	PropertySet* _tmp0_;
	const gchar* _tmp1_;
	PropertyItem* _tmp2_ = NULL;
	PropertyItem* propertyItem;
	PropertyItem* _tmp3_;
	PropertySet* _tmp8_;
	const gchar* _tmp9_;
	gchar* _tmp10_;
	gchar* _tmp11_;
	gchar* _tmp12_;
	gchar* _tmp13_;
	const gchar* _tmp14_;
	gchar* _tmp15_;
	gchar* _tmp16_;
	gchar* _tmp17_;
	gchar* _tmp18_;
	GError* _tmp19_;
	GError* _tmp20_;
	GError * _inner_error_ = NULL;
	g_return_if_fail (propertySet != NULL);
	g_return_if_fail (name != NULL);
	g_return_if_fail (data != NULL);
	_tmp0_ = propertySet;
	_tmp1_ = name;
	_tmp2_ = property_set_get_item (_tmp0_, _tmp1_);
	propertyItem = _tmp2_;
	_tmp3_ = propertyItem;
	if (_tmp3_ != NULL) {
		PropertyItem* _tmp4_;
		_tmp4_ = propertyItem;
		if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp4_, TYPE_PROPERTY_ITEM_STRING)) {
			PropertyItem* _tmp5_;
			const gchar* _tmp6_;
			gchar* _tmp7_;
			_tmp5_ = propertyItem;
			_tmp6_ = data;
			_tmp7_ = g_strdup (_tmp6_);
			_g_free0 ((G_TYPE_CHECK_INSTANCE_TYPE (_tmp5_, TYPE_PROPERTY_ITEM_STRING) ? ((PropertyItemString*) _tmp5_) : NULL)->data);
			(G_TYPE_CHECK_INSTANCE_TYPE (_tmp5_, TYPE_PROPERTY_ITEM_STRING) ? ((PropertyItemString*) _tmp5_) : NULL)->data = _tmp7_;
			_property_item_unref0 (propertyItem);
			return;
		}
	}
	_tmp8_ = propertySet;
	_tmp9_ = ((PropertyItem*) _tmp8_)->name;
	_tmp10_ = g_strconcat ("\"", _tmp9_, NULL);
	_tmp11_ = _tmp10_;
	_tmp12_ = g_strconcat (_tmp11_, "\" does not contain a string named \"", NULL);
	_tmp13_ = _tmp12_;
	_tmp14_ = name;
	_tmp15_ = g_strconcat (_tmp13_, _tmp14_, NULL);
	_tmp16_ = _tmp15_;
	_tmp17_ = g_strconcat (_tmp16_, "\"", NULL);
	_tmp18_ = _tmp17_;
	_tmp19_ = g_error_new_literal (PROPERTY_ITEM_ERROR, PROPERTY_ITEM_ERROR_ITEM_NOT_FOUND, _tmp18_);
	_tmp20_ = _tmp19_;
	_g_free0 (_tmp18_);
	_g_free0 (_tmp16_);
	_g_free0 (_tmp13_);
	_g_free0 (_tmp11_);
	_inner_error_ = _tmp20_;
	if (_inner_error_->domain == PROPERTY_ITEM_ERROR) {
		g_propagate_error (error, _inner_error_);
		_property_item_unref0 (propertyItem);
		return;
	} else {
		_property_item_unref0 (propertyItem);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
	_property_item_unref0 (propertyItem);
}


gchar* property_item_string_get_data (PropertySet* propertySet, const gchar* name) {
	gchar* result = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (propertySet != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	{
		PropertySet* _tmp0_;
		const gchar* _tmp1_;
		gchar* _tmp2_ = NULL;
		gchar* _tmp3_;
		_tmp0_ = propertySet;
		_tmp1_ = name;
		_tmp2_ = property_item_string_get_data_throw (_tmp0_, _tmp1_, &_inner_error_);
		_tmp3_ = _tmp2_;
		if (_inner_error_ != NULL) {
			goto __catch65_g_error;
		}
		result = _tmp3_;
		return result;
	}
	goto __finally65;
	__catch65_g_error:
	{
		gchar* _tmp4_;
		g_clear_error (&_inner_error_);
		_inner_error_ = NULL;
		_tmp4_ = g_strdup ("");
		result = _tmp4_;
		return result;
	}
	__finally65:
	g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
	g_clear_error (&_inner_error_);
	return NULL;
}


void property_item_string_set_data (PropertySet* propertySet, const gchar* name, const gchar* data) {
	GError * _inner_error_ = NULL;
	g_return_if_fail (propertySet != NULL);
	g_return_if_fail (name != NULL);
	g_return_if_fail (data != NULL);
	{
		PropertySet* _tmp0_;
		const gchar* _tmp1_;
		const gchar* _tmp2_;
		_tmp0_ = propertySet;
		_tmp1_ = name;
		_tmp2_ = data;
		property_item_string_set_data_throw (_tmp0_, _tmp1_, _tmp2_, &_inner_error_);
		if (_inner_error_ != NULL) {
			goto __catch66_g_error;
		}
	}
	goto __finally66;
	__catch66_g_error:
	{
		g_clear_error (&_inner_error_);
		_inner_error_ = NULL;
	}
	__finally66:
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
}


PropertyItemString* property_item_string_construct (GType object_type, const gchar* name, const gchar* description, const gchar* data) {
	PropertyItemString* self = NULL;
	const gchar* _tmp0_;
	const gchar* _tmp1_;
	const gchar* _tmp2_;
	gchar* _tmp3_;
	g_return_val_if_fail (name != NULL, NULL);
	g_return_val_if_fail (description != NULL, NULL);
	g_return_val_if_fail (data != NULL, NULL);
	_tmp0_ = name;
	_tmp1_ = description;
	self = (PropertyItemString*) property_item_construct (object_type, _tmp0_, _tmp1_);
	_tmp2_ = data;
	_tmp3_ = g_strdup (_tmp2_);
	_g_free0 (self->data);
	self->data = _tmp3_;
	return self;
}


PropertyItemString* property_item_string_new (const gchar* name, const gchar* description, const gchar* data) {
	return property_item_string_construct (TYPE_PROPERTY_ITEM_STRING, name, description, data);
}


static GtkWidget* property_item_string_real_create_widget (PropertyItem* base) {
	PropertyItemString * self;
	GtkWidget* result = NULL;
	GtkEntry* _tmp0_;
	GtkEntry* stringEntry;
	const gchar* _tmp1_;
	self = (PropertyItemString*) base;
	_tmp0_ = (GtkEntry*) gtk_entry_new ();
	g_object_ref_sink (_tmp0_);
	stringEntry = _tmp0_;
	_tmp1_ = self->data;
	gtk_entry_set_text (stringEntry, _tmp1_);
	g_object_set (stringEntry, "editable", TRUE, NULL);
	result = (GtkWidget*) stringEntry;
	return result;
}


static void property_item_string_real_read_widget (PropertyItem* base, GtkWidget* propertyWidget) {
	PropertyItemString * self;
	GtkWidget* _tmp0_;
	self = (PropertyItemString*) base;
	g_return_if_fail (propertyWidget != NULL);
	_tmp0_ = propertyWidget;
	if (_tmp0_ != NULL) {
		GtkWidget* _tmp1_;
		_tmp1_ = propertyWidget;
		if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp1_, GTK_TYPE_ENTRY)) {
			GtkWidget* _tmp2_;
			const gchar* _tmp3_;
			const gchar* _tmp4_;
			gchar* _tmp5_;
			_tmp2_ = propertyWidget;
			_tmp3_ = gtk_entry_get_text (G_TYPE_CHECK_INSTANCE_TYPE (_tmp2_, GTK_TYPE_ENTRY) ? ((GtkEntry*) _tmp2_) : NULL);
			_tmp4_ = _tmp3_;
			_tmp5_ = g_strdup (_tmp4_);
			_g_free0 (self->data);
			self->data = _tmp5_;
		}
	}
}


static void property_item_string_class_init (PropertyItemStringClass * klass) {
	property_item_string_parent_class = g_type_class_peek_parent (klass);
	PROPERTY_ITEM_CLASS (klass)->finalize = property_item_string_finalize;
	PROPERTY_ITEM_CLASS (klass)->create_widget = property_item_string_real_create_widget;
	PROPERTY_ITEM_CLASS (klass)->read_widget = property_item_string_real_read_widget;
}


static void property_item_string_instance_init (PropertyItemString * self) {
}


static void property_item_string_finalize (PropertyItem* obj) {
	PropertyItemString * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_PROPERTY_ITEM_STRING, PropertyItemString);
	_g_free0 (self->data);
	PROPERTY_ITEM_CLASS (property_item_string_parent_class)->finalize (obj);
}


GType property_item_string_get_type (void) {
	static volatile gsize property_item_string_type_id__volatile = 0;
	if (g_once_init_enter (&property_item_string_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (PropertyItemStringClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) property_item_string_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (PropertyItemString), 0, (GInstanceInitFunc) property_item_string_instance_init, NULL };
		GType property_item_string_type_id;
		property_item_string_type_id = g_type_register_static (TYPE_PROPERTY_ITEM, "PropertyItemString", &g_define_type_info, 0);
		g_once_init_leave (&property_item_string_type_id__volatile, property_item_string_type_id);
	}
	return property_item_string_type_id__volatile;
}



