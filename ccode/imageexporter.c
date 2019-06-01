/* imageexporter.c generated by valac 0.24.0, the Vala compiler
 * generated from imageexporter.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>
#include <gtk/gtk.h>
#include <stdio.h>
#include <glib/gstdio.h>
#include <gobject/gvaluecollector.h>


#define TYPE_IMAGE_EXPORTER (image_exporter_get_type ())
#define IMAGE_EXPORTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_IMAGE_EXPORTER, ImageExporter))
#define IMAGE_EXPORTER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_IMAGE_EXPORTER, ImageExporterClass))
#define IS_IMAGE_EXPORTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_IMAGE_EXPORTER))
#define IS_IMAGE_EXPORTER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_IMAGE_EXPORTER))
#define IMAGE_EXPORTER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_IMAGE_EXPORTER, ImageExporterClass))

typedef struct _ImageExporter ImageExporter;
typedef struct _ImageExporterClass ImageExporterClass;
typedef struct _ImageExporterPrivate ImageExporterPrivate;

#define IMAGE_EXPORTER_TYPE_IMAGE_FORMAT (image_exporter_image_format_get_type ())

#define TYPE_PROPERTY_ITEM (property_item_get_type ())
#define PROPERTY_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PROPERTY_ITEM, PropertyItem))
#define PROPERTY_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PROPERTY_ITEM, PropertyItemClass))
#define IS_PROPERTY_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PROPERTY_ITEM))
#define IS_PROPERTY_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PROPERTY_ITEM))
#define PROPERTY_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PROPERTY_ITEM, PropertyItemClass))

typedef struct _PropertyItem PropertyItem;
typedef struct _PropertyItemClass PropertyItemClass;

#define TYPE_PROPERTY_SET (property_set_get_type ())
#define PROPERTY_SET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PROPERTY_SET, PropertySet))
#define PROPERTY_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PROPERTY_SET, PropertySetClass))
#define IS_PROPERTY_SET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PROPERTY_SET))
#define IS_PROPERTY_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PROPERTY_SET))
#define PROPERTY_SET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PROPERTY_SET, PropertySetClass))

typedef struct _PropertySet PropertySet;
typedef struct _PropertySetClass PropertySetClass;

#define TYPE_PROPERTY_ITEM_SELECTION (property_item_selection_get_type ())
#define PROPERTY_ITEM_SELECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PROPERTY_ITEM_SELECTION, PropertyItemSelection))
#define PROPERTY_ITEM_SELECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PROPERTY_ITEM_SELECTION, PropertyItemSelectionClass))
#define IS_PROPERTY_ITEM_SELECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PROPERTY_ITEM_SELECTION))
#define IS_PROPERTY_ITEM_SELECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PROPERTY_ITEM_SELECTION))
#define PROPERTY_ITEM_SELECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PROPERTY_ITEM_SELECTION, PropertyItemSelectionClass))

typedef struct _PropertyItemSelection PropertyItemSelection;
typedef struct _PropertyItemSelectionClass PropertyItemSelectionClass;

#define TYPE_PROPERTY_ITEM_DOUBLE (property_item_double_get_type ())
#define PROPERTY_ITEM_DOUBLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PROPERTY_ITEM_DOUBLE, PropertyItemDouble))
#define PROPERTY_ITEM_DOUBLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PROPERTY_ITEM_DOUBLE, PropertyItemDoubleClass))
#define IS_PROPERTY_ITEM_DOUBLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PROPERTY_ITEM_DOUBLE))
#define IS_PROPERTY_ITEM_DOUBLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PROPERTY_ITEM_DOUBLE))
#define PROPERTY_ITEM_DOUBLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PROPERTY_ITEM_DOUBLE, PropertyItemDoubleClass))

typedef struct _PropertyItemDouble PropertyItemDouble;
typedef struct _PropertyItemDoubleClass PropertyItemDoubleClass;

#define TYPE_PROPERTIES_QUERY (properties_query_get_type ())
#define PROPERTIES_QUERY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PROPERTIES_QUERY, PropertiesQuery))
#define PROPERTIES_QUERY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PROPERTIES_QUERY, PropertiesQueryClass))
#define IS_PROPERTIES_QUERY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PROPERTIES_QUERY))
#define IS_PROPERTIES_QUERY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PROPERTIES_QUERY))
#define PROPERTIES_QUERY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PROPERTIES_QUERY, PropertiesQueryClass))

typedef struct _PropertiesQuery PropertiesQuery;
typedef struct _PropertiesQueryClass PropertiesQueryClass;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _properties_query_unref0(var) ((var == NULL) ? NULL : (var = (properties_query_unref (var), NULL)))
#define _property_item_unref0(var) ((var == NULL) ? NULL : (var = (property_item_unref (var), NULL)))
typedef struct _ParamSpecImageExporter ParamSpecImageExporter;

struct _ImageExporter {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ImageExporterPrivate * priv;
};

struct _ImageExporterClass {
	GTypeClass parent_class;
	void (*finalize) (ImageExporter *self);
};

typedef enum  {
	IMAGE_EXPORTER_IMAGE_FORMAT_PNG_RGB,
	IMAGE_EXPORTER_IMAGE_FORMAT_PNG_ARGB,
	IMAGE_EXPORTER_IMAGE_FORMAT_PDF,
	IMAGE_EXPORTER_IMAGE_FORMAT_SVG,
	IMAGE_EXPORTER_IMAGE_FORMAT_SVG_CLEAR
} ImageExporterImageFormat;

typedef void (*ImageExporterRenderer) (const gchar* filename, ImageExporterImageFormat imageFormat, gdouble resolution, void* user_data);
struct _ParamSpecImageExporter {
	GParamSpec parent_instance;
};


static gpointer image_exporter_parent_class = NULL;

gpointer image_exporter_ref (gpointer instance);
void image_exporter_unref (gpointer instance);
GParamSpec* param_spec_image_exporter (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_image_exporter (GValue* value, gpointer v_object);
void value_take_image_exporter (GValue* value, gpointer v_object);
gpointer value_get_image_exporter (const GValue* value);
GType image_exporter_get_type (void) G_GNUC_CONST;
enum  {
	IMAGE_EXPORTER_DUMMY_PROPERTY
};
GType image_exporter_image_format_get_type (void) G_GNUC_CONST;
void image_exporter_export_png (ImageExporterRenderer renderer, void* renderer_target);
gpointer property_item_ref (gpointer instance);
void property_item_unref (gpointer instance);
GParamSpec* param_spec_property_item (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_property_item (GValue* value, gpointer v_object);
void value_take_property_item (GValue* value, gpointer v_object);
gpointer value_get_property_item (const GValue* value);
GType property_item_get_type (void) G_GNUC_CONST;
GType property_set_get_type (void) G_GNUC_CONST;
PropertySet* property_set_new (const gchar* name, const gchar* description);
PropertySet* property_set_construct (GType object_type, const gchar* name, const gchar* description);
GType property_item_selection_get_type (void) G_GNUC_CONST;
PropertyItemSelection* property_item_selection_new (const gchar* name, const gchar* description);
PropertyItemSelection* property_item_selection_construct (GType object_type, const gchar* name, const gchar* description);
void property_item_selection_add_option (PropertyItemSelection* self, const gchar* value, const gchar* text);
gint property_item_selection_set_option (PropertyItemSelection* self, const gchar* value);
gint property_set_add_item (PropertySet* self, PropertyItem* propertyItem);
GType property_item_double_get_type (void) G_GNUC_CONST;
PropertyItemDouble* property_item_double_new (const gchar* name, const gchar* description, gdouble data, gdouble min, gdouble max);
PropertyItemDouble* property_item_double_construct (GType object_type, const gchar* name, const gchar* description, gdouble data, gdouble min, gdouble max);
gpointer properties_query_ref (gpointer instance);
void properties_query_unref (gpointer instance);
GParamSpec* param_spec_properties_query (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_properties_query (GValue* value, gpointer v_object);
void value_take_properties_query (GValue* value, gpointer v_object);
gpointer value_get_properties_query (const GValue* value);
GType properties_query_get_type (void) G_GNUC_CONST;
PropertiesQuery* properties_query_new (const gchar* title, GtkWindow* parent, PropertySet* propertySet);
PropertiesQuery* properties_query_construct (GType object_type, const gchar* title, GtkWindow* parent, PropertySet* propertySet);
gint properties_query_run (PropertiesQuery* self);
gint basic_dialog_ask_overwrite (GtkWindow* window, const gchar* filename);
gchar* property_item_selection_get_data (PropertySet* propertySet, const gchar* name);
gdouble property_item_double_get_data (PropertySet* propertySet, const gchar* name);
void image_exporter_export_pdf (ImageExporterRenderer renderer, void* renderer_target);
void image_exporter_export_svg (ImageExporterRenderer renderer, void* renderer_target);
ImageExporter* image_exporter_new (void);
ImageExporter* image_exporter_construct (GType object_type);
static void image_exporter_finalize (ImageExporter* obj);


GType image_exporter_image_format_get_type (void) {
	static volatile gsize image_exporter_image_format_type_id__volatile = 0;
	if (g_once_init_enter (&image_exporter_image_format_type_id__volatile)) {
		static const GEnumValue values[] = {{IMAGE_EXPORTER_IMAGE_FORMAT_PNG_RGB, "IMAGE_EXPORTER_IMAGE_FORMAT_PNG_RGB", "png-rgb"}, {IMAGE_EXPORTER_IMAGE_FORMAT_PNG_ARGB, "IMAGE_EXPORTER_IMAGE_FORMAT_PNG_ARGB", "png-argb"}, {IMAGE_EXPORTER_IMAGE_FORMAT_PDF, "IMAGE_EXPORTER_IMAGE_FORMAT_PDF", "pdf"}, {IMAGE_EXPORTER_IMAGE_FORMAT_SVG, "IMAGE_EXPORTER_IMAGE_FORMAT_SVG", "svg"}, {IMAGE_EXPORTER_IMAGE_FORMAT_SVG_CLEAR, "IMAGE_EXPORTER_IMAGE_FORMAT_SVG_CLEAR", "svg-clear"}, {0, NULL, NULL}};
		GType image_exporter_image_format_type_id;
		image_exporter_image_format_type_id = g_enum_register_static ("ImageExporterImageFormat", values);
		g_once_init_leave (&image_exporter_image_format_type_id__volatile, image_exporter_image_format_type_id);
	}
	return image_exporter_image_format_type_id__volatile;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static gboolean string_contains (const gchar* self, const gchar* needle) {
	gboolean result = FALSE;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (needle != NULL, FALSE);
	_tmp0_ = needle;
	_tmp1_ = strstr ((gchar*) self, (gchar*) _tmp0_);
	result = _tmp1_ != NULL;
	return result;
}


void image_exporter_export_png (ImageExporterRenderer renderer, void* renderer_target) {
	gchar* filename = NULL;
	gchar* _tmp0_ = NULL;
	ImageExporterImageFormat imageFormat = 0;
	gdouble resolution = 0.0;
	PropertySet* propertySet = NULL;
	PropertySet* _tmp1_ = NULL;
	PropertyItemSelection* formatProperty = NULL;
	PropertyItemSelection* _tmp2_ = NULL;
	PropertyItemSelection* _tmp3_ = NULL;
	PropertyItemSelection* _tmp4_ = NULL;
	PropertyItemSelection* _tmp5_ = NULL;
	PropertySet* _tmp6_ = NULL;
	PropertyItemSelection* _tmp7_ = NULL;
	PropertyItemDouble* resolutionProperty = NULL;
	PropertyItemDouble* _tmp8_ = NULL;
	PropertySet* _tmp9_ = NULL;
	PropertyItemDouble* _tmp10_ = NULL;
	PropertiesQuery* propertiesQuery = NULL;
	PropertySet* _tmp11_ = NULL;
	PropertiesQuery* _tmp12_ = NULL;
	PropertiesQuery* _tmp13_ = NULL;
	gint _tmp14_ = 0;
	const gchar* _tmp50_ = NULL;
	_tmp0_ = g_strdup ("");
	filename = _tmp0_;
	imageFormat = IMAGE_EXPORTER_IMAGE_FORMAT_PNG_RGB;
	_tmp1_ = property_set_new ("PNG Export", "PNG image export options.");
	propertySet = _tmp1_;
	_tmp2_ = property_item_selection_new ("Format", "PNG colour format to use.");
	formatProperty = _tmp2_;
	_tmp3_ = formatProperty;
	property_item_selection_add_option (_tmp3_, "RGB (White Background)", NULL);
	_tmp4_ = formatProperty;
	property_item_selection_add_option (_tmp4_, "ARGB (Transparent Background)", NULL);
	_tmp5_ = formatProperty;
	property_item_selection_set_option (_tmp5_, "RGB (White Background)");
	_tmp6_ = propertySet;
	_tmp7_ = formatProperty;
	property_set_add_item (_tmp6_, (PropertyItem*) _tmp7_);
	_tmp8_ = property_item_double_new ("Resolution", "Pixel density multiplier.", (gdouble) 1, (gdouble) 0, (gdouble) 100);
	resolutionProperty = _tmp8_;
	_tmp9_ = propertySet;
	_tmp10_ = resolutionProperty;
	property_set_add_item (_tmp9_, (PropertyItem*) _tmp10_);
	_tmp11_ = propertySet;
	_tmp12_ = properties_query_new ("Export PNG Options", NULL, _tmp11_);
	propertiesQuery = _tmp12_;
	_tmp13_ = propertiesQuery;
	_tmp14_ = properties_query_run (_tmp13_);
	if (_tmp14_ == ((gint) GTK_RESPONSE_APPLY)) {
		GtkFileFilter* pngFileFilter = NULL;
		GtkFileFilter* _tmp15_ = NULL;
		GtkFileFilter* _tmp16_ = NULL;
		GtkFileFilter* _tmp17_ = NULL;
		GtkFileFilter* anyFileFilter = NULL;
		GtkFileFilter* _tmp18_ = NULL;
		GtkFileFilter* _tmp19_ = NULL;
		GtkFileFilter* _tmp20_ = NULL;
		GtkFileChooserDialog* fileChooser = NULL;
		GtkFileChooserDialog* _tmp21_ = NULL;
		GtkFileChooserDialog* _tmp22_ = NULL;
		GtkFileFilter* _tmp23_ = NULL;
		GtkFileFilter* _tmp24_ = NULL;
		GtkFileChooserDialog* _tmp25_ = NULL;
		GtkFileFilter* _tmp26_ = NULL;
		GtkFileFilter* _tmp27_ = NULL;
		GtkFileChooserDialog* _tmp28_ = NULL;
		gboolean stillChoosing = FALSE;
		GtkFileChooserDialog* _tmp49_ = NULL;
		_tmp15_ = gtk_file_filter_new ();
		g_object_ref_sink (_tmp15_);
		pngFileFilter = _tmp15_;
		_tmp16_ = pngFileFilter;
		gtk_file_filter_set_name (_tmp16_, "Portable Network Graphic (.png)");
		_tmp17_ = pngFileFilter;
		gtk_file_filter_add_pattern (_tmp17_, "*.png");
		_tmp18_ = gtk_file_filter_new ();
		g_object_ref_sink (_tmp18_);
		anyFileFilter = _tmp18_;
		_tmp19_ = anyFileFilter;
		gtk_file_filter_set_name (_tmp19_, "Any File");
		_tmp20_ = anyFileFilter;
		gtk_file_filter_add_pattern (_tmp20_, "*");
		_tmp21_ = (GtkFileChooserDialog*) gtk_file_chooser_dialog_new ("Export to PNG", NULL, GTK_FILE_CHOOSER_ACTION_SAVE, GTK_STOCK_CANCEL, GTK_RESPONSE_CANCEL, GTK_STOCK_SAVE, GTK_RESPONSE_ACCEPT, NULL);
		g_object_ref_sink (_tmp21_);
		fileChooser = _tmp21_;
		_tmp22_ = fileChooser;
		_tmp23_ = pngFileFilter;
		_tmp24_ = _g_object_ref0 (_tmp23_);
		gtk_file_chooser_add_filter ((GtkFileChooser*) _tmp22_, _tmp24_);
		_tmp25_ = fileChooser;
		_tmp26_ = anyFileFilter;
		_tmp27_ = _g_object_ref0 (_tmp26_);
		gtk_file_chooser_add_filter ((GtkFileChooser*) _tmp25_, _tmp27_);
		_tmp28_ = fileChooser;
		gtk_file_chooser_set_do_overwrite_confirmation ((GtkFileChooser*) _tmp28_, TRUE);
		stillChoosing = TRUE;
		while (TRUE) {
			gboolean _tmp29_ = FALSE;
			GtkFileChooserDialog* _tmp30_ = NULL;
			gint _tmp31_ = 0;
			_tmp29_ = stillChoosing;
			if (!_tmp29_) {
				break;
			}
			_tmp30_ = fileChooser;
			_tmp31_ = gtk_dialog_run ((GtkDialog*) _tmp30_);
			if (_tmp31_ == ((gint) GTK_RESPONSE_ACCEPT)) {
				GtkFileChooserDialog* _tmp32_ = NULL;
				gchar* _tmp33_ = NULL;
				const gchar* _tmp34_ = NULL;
				gboolean _tmp35_ = FALSE;
				const gchar* _tmp43_ = NULL;
				gboolean _tmp44_ = FALSE;
				_tmp32_ = fileChooser;
				_tmp33_ = gtk_file_chooser_get_filename ((GtkFileChooser*) _tmp32_);
				_g_free0 (filename);
				filename = _tmp33_;
				_tmp34_ = filename;
				_tmp35_ = string_contains (_tmp34_, ".");
				if (_tmp35_) {
					FILE* _tmp36_ = NULL;
					_tmp36_ = stdout;
					fprintf (_tmp36_, "File extension already given\n");
				} else {
					GtkFileChooserDialog* _tmp37_ = NULL;
					GtkFileFilter* _tmp38_ = NULL;
					GtkFileFilter* _tmp39_ = NULL;
					GtkFileFilter* _tmp40_ = NULL;
					_tmp37_ = fileChooser;
					_tmp38_ = gtk_file_chooser_get_filter ((GtkFileChooser*) _tmp37_);
					_tmp39_ = _tmp38_;
					_tmp40_ = pngFileFilter;
					if (_tmp39_ == _tmp40_) {
						const gchar* _tmp41_ = NULL;
						gchar* _tmp42_ = NULL;
						_tmp41_ = filename;
						_tmp42_ = g_strconcat (_tmp41_, ".png", NULL);
						_g_free0 (filename);
						filename = _tmp42_;
					}
				}
				_tmp43_ = filename;
				_tmp44_ = g_file_test (_tmp43_, G_FILE_TEST_EXISTS);
				if (_tmp44_) {
					GtkFileChooserDialog* _tmp45_ = NULL;
					const gchar* _tmp46_ = NULL;
					gint _tmp47_ = 0;
					_tmp45_ = fileChooser;
					_tmp46_ = filename;
					_tmp47_ = basic_dialog_ask_overwrite ((GtkWindow*) _tmp45_, _tmp46_);
					if (_tmp47_ == ((gint) GTK_RESPONSE_YES)) {
						stillChoosing = FALSE;
					}
				} else {
					stillChoosing = FALSE;
				}
			} else {
				GtkFileChooserDialog* _tmp48_ = NULL;
				_tmp48_ = fileChooser;
				gtk_widget_destroy ((GtkWidget*) _tmp48_);
				_g_object_unref0 (fileChooser);
				_g_object_unref0 (anyFileFilter);
				_g_object_unref0 (pngFileFilter);
				_properties_query_unref0 (propertiesQuery);
				_property_item_unref0 (resolutionProperty);
				_property_item_unref0 (formatProperty);
				_property_item_unref0 (propertySet);
				_g_free0 (filename);
				return;
			}
		}
		_tmp49_ = fileChooser;
		gtk_widget_destroy ((GtkWidget*) _tmp49_);
		_g_object_unref0 (fileChooser);
		_g_object_unref0 (anyFileFilter);
		_g_object_unref0 (pngFileFilter);
	}
	_tmp50_ = filename;
	if (g_strcmp0 (_tmp50_, "") != 0) {
		PropertySet* _tmp51_ = NULL;
		gchar* _tmp52_ = NULL;
		gchar* _tmp53_ = NULL;
		GQuark _tmp55_ = 0U;
		static GQuark _tmp54_label0 = 0;
		static GQuark _tmp54_label1 = 0;
		PropertySet* _tmp56_ = NULL;
		gdouble _tmp57_ = 0.0;
		ImageExporterRenderer _tmp58_ = NULL;
		void* _tmp58__target = NULL;
		const gchar* _tmp59_ = NULL;
		ImageExporterImageFormat _tmp60_ = 0;
		gdouble _tmp61_ = 0.0;
		_tmp51_ = propertySet;
		_tmp52_ = property_item_selection_get_data (_tmp51_, "Format");
		_tmp53_ = _tmp52_;
		_tmp55_ = (NULL == _tmp53_) ? 0 : g_quark_from_string (_tmp53_);
		g_free (_tmp53_);
		if (_tmp55_ == ((0 != _tmp54_label0) ? _tmp54_label0 : (_tmp54_label0 = g_quark_from_static_string ("RGB (White Background)")))) {
			switch (0) {
				default:
				{
					imageFormat = IMAGE_EXPORTER_IMAGE_FORMAT_PNG_RGB;
					break;
				}
			}
		} else if (_tmp55_ == ((0 != _tmp54_label1) ? _tmp54_label1 : (_tmp54_label1 = g_quark_from_static_string ("ARGB (Transparent Background)")))) {
			switch (0) {
				default:
				{
					imageFormat = IMAGE_EXPORTER_IMAGE_FORMAT_PNG_ARGB;
					break;
				}
			}
		}
		_tmp56_ = propertySet;
		_tmp57_ = property_item_double_get_data (_tmp56_, "Resolution");
		resolution = _tmp57_;
		_tmp58_ = renderer;
		_tmp58__target = renderer_target;
		_tmp59_ = filename;
		_tmp60_ = imageFormat;
		_tmp61_ = resolution;
		_tmp58_ (_tmp59_, _tmp60_, _tmp61_, _tmp58__target);
	}
	_properties_query_unref0 (propertiesQuery);
	_property_item_unref0 (resolutionProperty);
	_property_item_unref0 (formatProperty);
	_property_item_unref0 (propertySet);
	_g_free0 (filename);
}


void image_exporter_export_pdf (ImageExporterRenderer renderer, void* renderer_target) {
	gchar* filename = NULL;
	gchar* _tmp0_ = NULL;
	GtkFileFilter* pdfFileFilter = NULL;
	GtkFileFilter* _tmp1_ = NULL;
	GtkFileFilter* _tmp2_ = NULL;
	GtkFileFilter* _tmp3_ = NULL;
	GtkFileFilter* anyFileFilter = NULL;
	GtkFileFilter* _tmp4_ = NULL;
	GtkFileFilter* _tmp5_ = NULL;
	GtkFileFilter* _tmp6_ = NULL;
	GtkFileChooserDialog* fileChooser = NULL;
	GtkFileChooserDialog* _tmp7_ = NULL;
	GtkFileChooserDialog* _tmp8_ = NULL;
	GtkFileFilter* _tmp9_ = NULL;
	GtkFileFilter* _tmp10_ = NULL;
	GtkFileChooserDialog* _tmp11_ = NULL;
	GtkFileFilter* _tmp12_ = NULL;
	GtkFileFilter* _tmp13_ = NULL;
	GtkFileChooserDialog* _tmp14_ = NULL;
	gboolean stillChoosing = FALSE;
	GtkFileChooserDialog* _tmp35_ = NULL;
	const gchar* _tmp36_ = NULL;
	_tmp0_ = g_strdup ("");
	filename = _tmp0_;
	_tmp1_ = gtk_file_filter_new ();
	g_object_ref_sink (_tmp1_);
	pdfFileFilter = _tmp1_;
	_tmp2_ = pdfFileFilter;
	gtk_file_filter_set_name (_tmp2_, "Portable Document Format (.pdf)");
	_tmp3_ = pdfFileFilter;
	gtk_file_filter_add_pattern (_tmp3_, "*.pdf");
	_tmp4_ = gtk_file_filter_new ();
	g_object_ref_sink (_tmp4_);
	anyFileFilter = _tmp4_;
	_tmp5_ = anyFileFilter;
	gtk_file_filter_set_name (_tmp5_, "Any File");
	_tmp6_ = anyFileFilter;
	gtk_file_filter_add_pattern (_tmp6_, "*");
	_tmp7_ = (GtkFileChooserDialog*) gtk_file_chooser_dialog_new ("Export to PDF", NULL, GTK_FILE_CHOOSER_ACTION_SAVE, GTK_STOCK_CANCEL, GTK_RESPONSE_CANCEL, GTK_STOCK_SAVE, GTK_RESPONSE_ACCEPT, NULL);
	g_object_ref_sink (_tmp7_);
	fileChooser = _tmp7_;
	_tmp8_ = fileChooser;
	_tmp9_ = pdfFileFilter;
	_tmp10_ = _g_object_ref0 (_tmp9_);
	gtk_file_chooser_add_filter ((GtkFileChooser*) _tmp8_, _tmp10_);
	_tmp11_ = fileChooser;
	_tmp12_ = anyFileFilter;
	_tmp13_ = _g_object_ref0 (_tmp12_);
	gtk_file_chooser_add_filter ((GtkFileChooser*) _tmp11_, _tmp13_);
	_tmp14_ = fileChooser;
	gtk_file_chooser_set_do_overwrite_confirmation ((GtkFileChooser*) _tmp14_, TRUE);
	stillChoosing = TRUE;
	while (TRUE) {
		gboolean _tmp15_ = FALSE;
		GtkFileChooserDialog* _tmp16_ = NULL;
		gint _tmp17_ = 0;
		_tmp15_ = stillChoosing;
		if (!_tmp15_) {
			break;
		}
		_tmp16_ = fileChooser;
		_tmp17_ = gtk_dialog_run ((GtkDialog*) _tmp16_);
		if (_tmp17_ == ((gint) GTK_RESPONSE_ACCEPT)) {
			GtkFileChooserDialog* _tmp18_ = NULL;
			gchar* _tmp19_ = NULL;
			const gchar* _tmp20_ = NULL;
			gboolean _tmp21_ = FALSE;
			const gchar* _tmp29_ = NULL;
			gboolean _tmp30_ = FALSE;
			_tmp18_ = fileChooser;
			_tmp19_ = gtk_file_chooser_get_filename ((GtkFileChooser*) _tmp18_);
			_g_free0 (filename);
			filename = _tmp19_;
			_tmp20_ = filename;
			_tmp21_ = string_contains (_tmp20_, ".");
			if (_tmp21_) {
				FILE* _tmp22_ = NULL;
				_tmp22_ = stdout;
				fprintf (_tmp22_, "File extension already given\n");
			} else {
				GtkFileChooserDialog* _tmp23_ = NULL;
				GtkFileFilter* _tmp24_ = NULL;
				GtkFileFilter* _tmp25_ = NULL;
				GtkFileFilter* _tmp26_ = NULL;
				_tmp23_ = fileChooser;
				_tmp24_ = gtk_file_chooser_get_filter ((GtkFileChooser*) _tmp23_);
				_tmp25_ = _tmp24_;
				_tmp26_ = pdfFileFilter;
				if (_tmp25_ == _tmp26_) {
					const gchar* _tmp27_ = NULL;
					gchar* _tmp28_ = NULL;
					_tmp27_ = filename;
					_tmp28_ = g_strconcat (_tmp27_, ".pdf", NULL);
					_g_free0 (filename);
					filename = _tmp28_;
				}
			}
			_tmp29_ = filename;
			_tmp30_ = g_file_test (_tmp29_, G_FILE_TEST_EXISTS);
			if (_tmp30_) {
				GtkFileChooserDialog* _tmp31_ = NULL;
				const gchar* _tmp32_ = NULL;
				gint _tmp33_ = 0;
				_tmp31_ = fileChooser;
				_tmp32_ = filename;
				_tmp33_ = basic_dialog_ask_overwrite ((GtkWindow*) _tmp31_, _tmp32_);
				if (_tmp33_ == ((gint) GTK_RESPONSE_YES)) {
					stillChoosing = FALSE;
				}
			} else {
				stillChoosing = FALSE;
			}
		} else {
			GtkFileChooserDialog* _tmp34_ = NULL;
			_tmp34_ = fileChooser;
			gtk_widget_destroy ((GtkWidget*) _tmp34_);
			_g_object_unref0 (fileChooser);
			_g_object_unref0 (anyFileFilter);
			_g_object_unref0 (pdfFileFilter);
			_g_free0 (filename);
			return;
		}
	}
	_tmp35_ = fileChooser;
	gtk_widget_destroy ((GtkWidget*) _tmp35_);
	_tmp36_ = filename;
	if (g_strcmp0 (_tmp36_, "") != 0) {
		ImageExporterRenderer _tmp37_ = NULL;
		void* _tmp37__target = NULL;
		const gchar* _tmp38_ = NULL;
		_tmp37_ = renderer;
		_tmp37__target = renderer_target;
		_tmp38_ = filename;
		_tmp37_ (_tmp38_, IMAGE_EXPORTER_IMAGE_FORMAT_PDF, (gdouble) 1, _tmp37__target);
	}
	_g_object_unref0 (fileChooser);
	_g_object_unref0 (anyFileFilter);
	_g_object_unref0 (pdfFileFilter);
	_g_free0 (filename);
}


void image_exporter_export_svg (ImageExporterRenderer renderer, void* renderer_target) {
	gchar* filename = NULL;
	gchar* _tmp0_ = NULL;
	ImageExporterImageFormat imageFormat = 0;
	PropertySet* propertySet = NULL;
	PropertySet* _tmp1_ = NULL;
	PropertyItemSelection* formatProperty = NULL;
	PropertyItemSelection* _tmp2_ = NULL;
	PropertyItemSelection* _tmp3_ = NULL;
	PropertyItemSelection* _tmp4_ = NULL;
	PropertyItemSelection* _tmp5_ = NULL;
	PropertySet* _tmp6_ = NULL;
	PropertyItemSelection* _tmp7_ = NULL;
	PropertiesQuery* propertiesQuery = NULL;
	PropertySet* _tmp8_ = NULL;
	PropertiesQuery* _tmp9_ = NULL;
	PropertiesQuery* _tmp10_ = NULL;
	gint _tmp11_ = 0;
	const gchar* _tmp47_ = NULL;
	_tmp0_ = g_strdup ("");
	filename = _tmp0_;
	imageFormat = IMAGE_EXPORTER_IMAGE_FORMAT_SVG;
	_tmp1_ = property_set_new ("SVG Export", "SVG image export options.");
	propertySet = _tmp1_;
	_tmp2_ = property_item_selection_new ("Background", "The background for the SVG to use.");
	formatProperty = _tmp2_;
	_tmp3_ = formatProperty;
	property_item_selection_add_option (_tmp3_, "White Background", NULL);
	_tmp4_ = formatProperty;
	property_item_selection_add_option (_tmp4_, "Transparent Background", NULL);
	_tmp5_ = formatProperty;
	property_item_selection_set_option (_tmp5_, "White Background");
	_tmp6_ = propertySet;
	_tmp7_ = formatProperty;
	property_set_add_item (_tmp6_, (PropertyItem*) _tmp7_);
	_tmp8_ = propertySet;
	_tmp9_ = properties_query_new ("Export SVG Options", NULL, _tmp8_);
	propertiesQuery = _tmp9_;
	_tmp10_ = propertiesQuery;
	_tmp11_ = properties_query_run (_tmp10_);
	if (_tmp11_ == ((gint) GTK_RESPONSE_APPLY)) {
		GtkFileFilter* svgFileFilter = NULL;
		GtkFileFilter* _tmp12_ = NULL;
		GtkFileFilter* _tmp13_ = NULL;
		GtkFileFilter* _tmp14_ = NULL;
		GtkFileFilter* anyFileFilter = NULL;
		GtkFileFilter* _tmp15_ = NULL;
		GtkFileFilter* _tmp16_ = NULL;
		GtkFileFilter* _tmp17_ = NULL;
		GtkFileChooserDialog* fileChooser = NULL;
		GtkFileChooserDialog* _tmp18_ = NULL;
		GtkFileChooserDialog* _tmp19_ = NULL;
		GtkFileFilter* _tmp20_ = NULL;
		GtkFileFilter* _tmp21_ = NULL;
		GtkFileChooserDialog* _tmp22_ = NULL;
		GtkFileFilter* _tmp23_ = NULL;
		GtkFileFilter* _tmp24_ = NULL;
		GtkFileChooserDialog* _tmp25_ = NULL;
		gboolean stillChoosing = FALSE;
		GtkFileChooserDialog* _tmp46_ = NULL;
		_tmp12_ = gtk_file_filter_new ();
		g_object_ref_sink (_tmp12_);
		svgFileFilter = _tmp12_;
		_tmp13_ = svgFileFilter;
		gtk_file_filter_set_name (_tmp13_, "Scalable Vector Graphic (.svg)");
		_tmp14_ = svgFileFilter;
		gtk_file_filter_add_pattern (_tmp14_, "*.svg");
		_tmp15_ = gtk_file_filter_new ();
		g_object_ref_sink (_tmp15_);
		anyFileFilter = _tmp15_;
		_tmp16_ = anyFileFilter;
		gtk_file_filter_set_name (_tmp16_, "Any File");
		_tmp17_ = anyFileFilter;
		gtk_file_filter_add_pattern (_tmp17_, "*");
		_tmp18_ = (GtkFileChooserDialog*) gtk_file_chooser_dialog_new ("Export to SVG", NULL, GTK_FILE_CHOOSER_ACTION_SAVE, GTK_STOCK_CANCEL, GTK_RESPONSE_CANCEL, GTK_STOCK_SAVE, GTK_RESPONSE_ACCEPT, NULL);
		g_object_ref_sink (_tmp18_);
		fileChooser = _tmp18_;
		_tmp19_ = fileChooser;
		_tmp20_ = svgFileFilter;
		_tmp21_ = _g_object_ref0 (_tmp20_);
		gtk_file_chooser_add_filter ((GtkFileChooser*) _tmp19_, _tmp21_);
		_tmp22_ = fileChooser;
		_tmp23_ = anyFileFilter;
		_tmp24_ = _g_object_ref0 (_tmp23_);
		gtk_file_chooser_add_filter ((GtkFileChooser*) _tmp22_, _tmp24_);
		_tmp25_ = fileChooser;
		gtk_file_chooser_set_do_overwrite_confirmation ((GtkFileChooser*) _tmp25_, TRUE);
		stillChoosing = TRUE;
		while (TRUE) {
			gboolean _tmp26_ = FALSE;
			GtkFileChooserDialog* _tmp27_ = NULL;
			gint _tmp28_ = 0;
			_tmp26_ = stillChoosing;
			if (!_tmp26_) {
				break;
			}
			_tmp27_ = fileChooser;
			_tmp28_ = gtk_dialog_run ((GtkDialog*) _tmp27_);
			if (_tmp28_ == ((gint) GTK_RESPONSE_ACCEPT)) {
				GtkFileChooserDialog* _tmp29_ = NULL;
				gchar* _tmp30_ = NULL;
				const gchar* _tmp31_ = NULL;
				gboolean _tmp32_ = FALSE;
				const gchar* _tmp40_ = NULL;
				gboolean _tmp41_ = FALSE;
				_tmp29_ = fileChooser;
				_tmp30_ = gtk_file_chooser_get_filename ((GtkFileChooser*) _tmp29_);
				_g_free0 (filename);
				filename = _tmp30_;
				_tmp31_ = filename;
				_tmp32_ = string_contains (_tmp31_, ".");
				if (_tmp32_) {
					FILE* _tmp33_ = NULL;
					_tmp33_ = stdout;
					fprintf (_tmp33_, "File extension already given\n");
				} else {
					GtkFileChooserDialog* _tmp34_ = NULL;
					GtkFileFilter* _tmp35_ = NULL;
					GtkFileFilter* _tmp36_ = NULL;
					GtkFileFilter* _tmp37_ = NULL;
					_tmp34_ = fileChooser;
					_tmp35_ = gtk_file_chooser_get_filter ((GtkFileChooser*) _tmp34_);
					_tmp36_ = _tmp35_;
					_tmp37_ = svgFileFilter;
					if (_tmp36_ == _tmp37_) {
						const gchar* _tmp38_ = NULL;
						gchar* _tmp39_ = NULL;
						_tmp38_ = filename;
						_tmp39_ = g_strconcat (_tmp38_, ".svg", NULL);
						_g_free0 (filename);
						filename = _tmp39_;
					}
				}
				_tmp40_ = filename;
				_tmp41_ = g_file_test (_tmp40_, G_FILE_TEST_EXISTS);
				if (_tmp41_) {
					GtkFileChooserDialog* _tmp42_ = NULL;
					const gchar* _tmp43_ = NULL;
					gint _tmp44_ = 0;
					_tmp42_ = fileChooser;
					_tmp43_ = filename;
					_tmp44_ = basic_dialog_ask_overwrite ((GtkWindow*) _tmp42_, _tmp43_);
					if (_tmp44_ == ((gint) GTK_RESPONSE_YES)) {
						stillChoosing = FALSE;
					}
				} else {
					stillChoosing = FALSE;
				}
			} else {
				GtkFileChooserDialog* _tmp45_ = NULL;
				_tmp45_ = fileChooser;
				gtk_widget_destroy ((GtkWidget*) _tmp45_);
				_g_object_unref0 (fileChooser);
				_g_object_unref0 (anyFileFilter);
				_g_object_unref0 (svgFileFilter);
				_properties_query_unref0 (propertiesQuery);
				_property_item_unref0 (formatProperty);
				_property_item_unref0 (propertySet);
				_g_free0 (filename);
				return;
			}
		}
		_tmp46_ = fileChooser;
		gtk_widget_destroy ((GtkWidget*) _tmp46_);
		_g_object_unref0 (fileChooser);
		_g_object_unref0 (anyFileFilter);
		_g_object_unref0 (svgFileFilter);
	}
	_tmp47_ = filename;
	if (g_strcmp0 (_tmp47_, "") != 0) {
		PropertySet* _tmp48_ = NULL;
		gchar* _tmp49_ = NULL;
		gchar* _tmp50_ = NULL;
		GQuark _tmp52_ = 0U;
		static GQuark _tmp51_label0 = 0;
		static GQuark _tmp51_label1 = 0;
		ImageExporterRenderer _tmp53_ = NULL;
		void* _tmp53__target = NULL;
		const gchar* _tmp54_ = NULL;
		ImageExporterImageFormat _tmp55_ = 0;
		_tmp48_ = propertySet;
		_tmp49_ = property_item_selection_get_data (_tmp48_, "Background");
		_tmp50_ = _tmp49_;
		_tmp52_ = (NULL == _tmp50_) ? 0 : g_quark_from_string (_tmp50_);
		g_free (_tmp50_);
		if (_tmp52_ == ((0 != _tmp51_label0) ? _tmp51_label0 : (_tmp51_label0 = g_quark_from_static_string ("White Background")))) {
			switch (0) {
				default:
				{
					imageFormat = IMAGE_EXPORTER_IMAGE_FORMAT_SVG;
					break;
				}
			}
		} else if (_tmp52_ == ((0 != _tmp51_label1) ? _tmp51_label1 : (_tmp51_label1 = g_quark_from_static_string ("Transparent Background")))) {
			switch (0) {
				default:
				{
					imageFormat = IMAGE_EXPORTER_IMAGE_FORMAT_SVG_CLEAR;
					break;
				}
			}
		}
		_tmp53_ = renderer;
		_tmp53__target = renderer_target;
		_tmp54_ = filename;
		_tmp55_ = imageFormat;
		_tmp53_ (_tmp54_, _tmp55_, (gdouble) 1, _tmp53__target);
	}
	_properties_query_unref0 (propertiesQuery);
	_property_item_unref0 (formatProperty);
	_property_item_unref0 (propertySet);
	_g_free0 (filename);
}


ImageExporter* image_exporter_construct (GType object_type) {
	ImageExporter* self = NULL;
	self = (ImageExporter*) g_type_create_instance (object_type);
	return self;
}


ImageExporter* image_exporter_new (void) {
	return image_exporter_construct (TYPE_IMAGE_EXPORTER);
}


static void value_image_exporter_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void value_image_exporter_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		image_exporter_unref (value->data[0].v_pointer);
	}
}


static void value_image_exporter_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = image_exporter_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer value_image_exporter_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* value_image_exporter_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		ImageExporter* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = image_exporter_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* value_image_exporter_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	ImageExporter** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = image_exporter_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* param_spec_image_exporter (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	ParamSpecImageExporter* spec;
	g_return_val_if_fail (g_type_is_a (object_type, TYPE_IMAGE_EXPORTER), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer value_get_image_exporter (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_IMAGE_EXPORTER), NULL);
	return value->data[0].v_pointer;
}


void value_set_image_exporter (GValue* value, gpointer v_object) {
	ImageExporter* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_IMAGE_EXPORTER));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_IMAGE_EXPORTER));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		image_exporter_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		image_exporter_unref (old);
	}
}


void value_take_image_exporter (GValue* value, gpointer v_object) {
	ImageExporter* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_IMAGE_EXPORTER));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_IMAGE_EXPORTER));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		image_exporter_unref (old);
	}
}


static void image_exporter_class_init (ImageExporterClass * klass) {
	image_exporter_parent_class = g_type_class_peek_parent (klass);
	IMAGE_EXPORTER_CLASS (klass)->finalize = image_exporter_finalize;
}


static void image_exporter_instance_init (ImageExporter * self) {
	self->ref_count = 1;
}


static void image_exporter_finalize (ImageExporter* obj) {
	ImageExporter * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_IMAGE_EXPORTER, ImageExporter);
}


GType image_exporter_get_type (void) {
	static volatile gsize image_exporter_type_id__volatile = 0;
	if (g_once_init_enter (&image_exporter_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { value_image_exporter_init, value_image_exporter_free_value, value_image_exporter_copy_value, value_image_exporter_peek_pointer, "p", value_image_exporter_collect_value, "p", value_image_exporter_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (ImageExporterClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) image_exporter_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ImageExporter), 0, (GInstanceInitFunc) image_exporter_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType image_exporter_type_id;
		image_exporter_type_id = g_type_register_fundamental (g_type_fundamental_next (), "ImageExporter", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&image_exporter_type_id__volatile, image_exporter_type_id);
	}
	return image_exporter_type_id__volatile;
}


gpointer image_exporter_ref (gpointer instance) {
	ImageExporter* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void image_exporter_unref (gpointer instance) {
	ImageExporter* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		IMAGE_EXPORTER_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}


