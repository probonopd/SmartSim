/* state-or.c generated by valac 0.18.1, the Vala compiler
 * generated from state-or.vala, do not modify */

/* 
 * SmartSim - Digital Logic Circuit Designer and Simulator
 *   
 *   Expansion Version
 *   
 *   Filename: componentstate/or.vala
 *   
 *   Copyright Ashley Newson 2012
 */

#include <glib.h>
#include <glib-object.h>
#include <cairo.h>


#define TYPE_COMPONENT_STATE (component_state_get_type ())
#define COMPONENT_STATE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_COMPONENT_STATE, ComponentState))
#define COMPONENT_STATE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_COMPONENT_STATE, ComponentStateClass))
#define IS_COMPONENT_STATE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_COMPONENT_STATE))
#define IS_COMPONENT_STATE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_COMPONENT_STATE))
#define COMPONENT_STATE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_COMPONENT_STATE, ComponentStateClass))

typedef struct _ComponentState ComponentState;
typedef struct _ComponentStateClass ComponentStateClass;
typedef struct _ComponentStatePrivate ComponentStatePrivate;

#define TYPE_COMPILED_CIRCUIT (compiled_circuit_get_type ())
#define COMPILED_CIRCUIT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_COMPILED_CIRCUIT, CompiledCircuit))
#define COMPILED_CIRCUIT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_COMPILED_CIRCUIT, CompiledCircuitClass))
#define IS_COMPILED_CIRCUIT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_COMPILED_CIRCUIT))
#define IS_COMPILED_CIRCUIT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_COMPILED_CIRCUIT))
#define COMPILED_CIRCUIT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_COMPILED_CIRCUIT, CompiledCircuitClass))

typedef struct _CompiledCircuit CompiledCircuit;
typedef struct _CompiledCircuitClass CompiledCircuitClass;

#define TYPE_COMPONENT_INST (component_inst_get_type ())
#define COMPONENT_INST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_COMPONENT_INST, ComponentInst))
#define COMPONENT_INST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_COMPONENT_INST, ComponentInstClass))
#define IS_COMPONENT_INST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_COMPONENT_INST))
#define IS_COMPONENT_INST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_COMPONENT_INST))
#define COMPONENT_INST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_COMPONENT_INST, ComponentInstClass))

typedef struct _ComponentInst ComponentInst;
typedef struct _ComponentInstClass ComponentInstClass;

#define TYPE_OR_COMPONENT_STATE (or_component_state_get_type ())
#define OR_COMPONENT_STATE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_OR_COMPONENT_STATE, OrComponentState))
#define OR_COMPONENT_STATE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_OR_COMPONENT_STATE, OrComponentStateClass))
#define IS_OR_COMPONENT_STATE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_OR_COMPONENT_STATE))
#define IS_OR_COMPONENT_STATE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_OR_COMPONENT_STATE))
#define OR_COMPONENT_STATE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_OR_COMPONENT_STATE, OrComponentStateClass))

typedef struct _OrComponentState OrComponentState;
typedef struct _OrComponentStateClass OrComponentStateClass;
typedef struct _OrComponentStatePrivate OrComponentStatePrivate;

#define TYPE_CONNECTION (connection_get_type ())
#define CONNECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_CONNECTION, Connection))
#define CONNECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_CONNECTION, ConnectionClass))
#define IS_CONNECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_CONNECTION))
#define IS_CONNECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_CONNECTION))
#define CONNECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_CONNECTION, ConnectionClass))

typedef struct _Connection Connection;
typedef struct _ConnectionClass ConnectionClass;
#define _connection_unref0(var) ((var == NULL) ? NULL : (var = (connection_unref (var), NULL)))
#define _component_inst_unref0(var) ((var == NULL) ? NULL : (var = (component_inst_unref (var), NULL)))

struct _ComponentState {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ComponentStatePrivate * priv;
	CompiledCircuit* compiledCircuit;
	ComponentInst** ancestry;
	gint ancestry_length1;
	ComponentInst* componentInst;
	gint renderQueueID;
	gint processQueueID;
	gboolean display;
};

struct _ComponentStateClass {
	GTypeClass parent_class;
	void (*finalize) (ComponentState *self);
	void (*update) (ComponentState* self);
	void (*click) (ComponentState* self);
	void (*render) (ComponentState* self, cairo_t* context);
	gboolean (*get_alwaysUpdate) (ComponentState* self);
};

struct _OrComponentState {
	ComponentState parent_instance;
	OrComponentStatePrivate * priv;
};

struct _OrComponentStateClass {
	ComponentStateClass parent_class;
};

struct _OrComponentStatePrivate {
	Connection** inputWires;
	gint inputWires_length1;
	gint _inputWires_size_;
	Connection* outputWire;
};


static gpointer or_component_state_parent_class = NULL;

gpointer component_state_ref (gpointer instance);
void component_state_unref (gpointer instance);
GParamSpec* param_spec_component_state (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_component_state (GValue* value, gpointer v_object);
void value_take_component_state (GValue* value, gpointer v_object);
gpointer value_get_component_state (const GValue* value);
GType component_state_get_type (void) G_GNUC_CONST;
gpointer compiled_circuit_ref (gpointer instance);
void compiled_circuit_unref (gpointer instance);
GParamSpec* param_spec_compiled_circuit (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_compiled_circuit (GValue* value, gpointer v_object);
void value_take_compiled_circuit (GValue* value, gpointer v_object);
gpointer value_get_compiled_circuit (const GValue* value);
GType compiled_circuit_get_type (void) G_GNUC_CONST;
gpointer component_inst_ref (gpointer instance);
void component_inst_unref (gpointer instance);
GParamSpec* param_spec_component_inst (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_component_inst (GValue* value, gpointer v_object);
void value_take_component_inst (GValue* value, gpointer v_object);
gpointer value_get_component_inst (const GValue* value);
GType component_inst_get_type (void) G_GNUC_CONST;
GType or_component_state_get_type (void) G_GNUC_CONST;
gpointer connection_ref (gpointer instance);
void connection_unref (gpointer instance);
GParamSpec* param_spec_connection (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_connection (GValue* value, gpointer v_object);
void value_take_connection (GValue* value, gpointer v_object);
gpointer value_get_connection (const GValue* value);
GType connection_get_type (void) G_GNUC_CONST;
#define OR_COMPONENT_STATE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_OR_COMPONENT_STATE, OrComponentStatePrivate))
enum  {
	OR_COMPONENT_STATE_DUMMY_PROPERTY
};
OrComponentState* or_component_state_new (Connection** inputWires, int inputWires_length1, Connection* outputWire, ComponentInst** ancestry, int ancestry_length1, ComponentInst* componentInst);
OrComponentState* or_component_state_construct (GType object_type, Connection** inputWires, int inputWires_length1, Connection* outputWire, ComponentInst** ancestry, int ancestry_length1, ComponentInst* componentInst);
ComponentState* component_state_construct (GType object_type);
static Connection** _vala_array_dup31 (Connection** self, int length);
void connection_set_affects (Connection* self, ComponentState* componentState);
static ComponentInst** _vala_array_dup32 (ComponentInst** self, int length);
static void or_component_state_real_update (ComponentState* base);
gboolean connection_get_signalState (Connection* self);
void connection_set_signalState (Connection* self, gboolean value);
static void or_component_state_finalize (ComponentState* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


static gpointer _connection_ref0 (gpointer self) {
	return self ? connection_ref (self) : NULL;
}


static Connection** _vala_array_dup31 (Connection** self, int length) {
	Connection** result;
	int i;
	result = g_new0 (Connection*, length + 1);
	for (i = 0; i < length; i++) {
		Connection* _tmp0_;
		_tmp0_ = _connection_ref0 (self[i]);
		result[i] = _tmp0_;
	}
	return result;
}


static gpointer _component_inst_ref0 (gpointer self) {
	return self ? component_inst_ref (self) : NULL;
}


static ComponentInst** _vala_array_dup32 (ComponentInst** self, int length) {
	ComponentInst** result;
	int i;
	result = g_new0 (ComponentInst*, length + 1);
	for (i = 0; i < length; i++) {
		ComponentInst* _tmp0_;
		_tmp0_ = _component_inst_ref0 (self[i]);
		result[i] = _tmp0_;
	}
	return result;
}


OrComponentState* or_component_state_construct (GType object_type, Connection** inputWires, int inputWires_length1, Connection* outputWire, ComponentInst** ancestry, int ancestry_length1, ComponentInst* componentInst) {
	OrComponentState* self = NULL;
	Connection** _tmp0_;
	gint _tmp0__length1;
	Connection** _tmp1_;
	gint _tmp1__length1;
	Connection** _tmp2_;
	gint _tmp2__length1;
	Connection* _tmp5_;
	Connection* _tmp6_;
	ComponentInst** _tmp7_;
	gint _tmp7__length1;
	ComponentInst** _tmp8_;
	gint _tmp8__length1;
	ComponentInst* _tmp9_;
	ComponentInst* _tmp10_;
	g_return_val_if_fail (outputWire != NULL, NULL);
	g_return_val_if_fail (componentInst != NULL, NULL);
	self = (OrComponentState*) component_state_construct (object_type);
	_tmp0_ = inputWires;
	_tmp0__length1 = inputWires_length1;
	_tmp1_ = (_tmp0_ != NULL) ? _vala_array_dup31 (_tmp0_, _tmp0__length1) : ((gpointer) _tmp0_);
	_tmp1__length1 = _tmp0__length1;
	self->priv->inputWires = (_vala_array_free (self->priv->inputWires, self->priv->inputWires_length1, (GDestroyNotify) connection_unref), NULL);
	self->priv->inputWires = _tmp1_;
	self->priv->inputWires_length1 = _tmp1__length1;
	self->priv->_inputWires_size_ = self->priv->inputWires_length1;
	_tmp2_ = inputWires;
	_tmp2__length1 = inputWires_length1;
	{
		Connection** inputWire_collection = NULL;
		gint inputWire_collection_length1 = 0;
		gint _inputWire_collection_size_ = 0;
		gint inputWire_it = 0;
		inputWire_collection = _tmp2_;
		inputWire_collection_length1 = _tmp2__length1;
		for (inputWire_it = 0; inputWire_it < _tmp2__length1; inputWire_it = inputWire_it + 1) {
			Connection* _tmp3_;
			Connection* inputWire = NULL;
			_tmp3_ = _connection_ref0 (inputWire_collection[inputWire_it]);
			inputWire = _tmp3_;
			{
				Connection* _tmp4_;
				_tmp4_ = inputWire;
				connection_set_affects (_tmp4_, (ComponentState*) self);
				_connection_unref0 (inputWire);
			}
		}
	}
	_tmp5_ = outputWire;
	_tmp6_ = _connection_ref0 (_tmp5_);
	_connection_unref0 (self->priv->outputWire);
	self->priv->outputWire = _tmp6_;
	_tmp7_ = ancestry;
	_tmp7__length1 = ancestry_length1;
	_tmp8_ = (_tmp7_ != NULL) ? _vala_array_dup32 (_tmp7_, _tmp7__length1) : ((gpointer) _tmp7_);
	_tmp8__length1 = _tmp7__length1;
	((ComponentState*) self)->ancestry = (_vala_array_free (((ComponentState*) self)->ancestry, ((ComponentState*) self)->ancestry_length1, (GDestroyNotify) component_inst_unref), NULL);
	((ComponentState*) self)->ancestry = _tmp8_;
	((ComponentState*) self)->ancestry_length1 = _tmp8__length1;
	_tmp9_ = componentInst;
	_tmp10_ = _component_inst_ref0 (_tmp9_);
	_component_inst_unref0 (((ComponentState*) self)->componentInst);
	((ComponentState*) self)->componentInst = _tmp10_;
	return self;
}


OrComponentState* or_component_state_new (Connection** inputWires, int inputWires_length1, Connection* outputWire, ComponentInst** ancestry, int ancestry_length1, ComponentInst* componentInst) {
	return or_component_state_construct (TYPE_OR_COMPONENT_STATE, inputWires, inputWires_length1, outputWire, ancestry, ancestry_length1, componentInst);
}


static void or_component_state_real_update (ComponentState* base) {
	OrComponentState * self;
	gboolean output;
	Connection** _tmp0_;
	gint _tmp0__length1;
	Connection* _tmp5_;
	gboolean _tmp6_;
	self = (OrComponentState*) base;
	output = FALSE;
	_tmp0_ = self->priv->inputWires;
	_tmp0__length1 = self->priv->inputWires_length1;
	{
		Connection** inputWire_collection = NULL;
		gint inputWire_collection_length1 = 0;
		gint _inputWire_collection_size_ = 0;
		gint inputWire_it = 0;
		inputWire_collection = _tmp0_;
		inputWire_collection_length1 = _tmp0__length1;
		for (inputWire_it = 0; inputWire_it < _tmp0__length1; inputWire_it = inputWire_it + 1) {
			Connection* _tmp1_;
			Connection* inputWire = NULL;
			_tmp1_ = _connection_ref0 (inputWire_collection[inputWire_it]);
			inputWire = _tmp1_;
			{
				Connection* _tmp2_;
				gboolean _tmp3_;
				gboolean _tmp4_;
				_tmp2_ = inputWire;
				_tmp3_ = connection_get_signalState (_tmp2_);
				_tmp4_ = _tmp3_;
				if (_tmp4_ == TRUE) {
					output = TRUE;
				}
				_connection_unref0 (inputWire);
			}
		}
	}
	_tmp5_ = self->priv->outputWire;
	_tmp6_ = output;
	connection_set_signalState (_tmp5_, _tmp6_);
}


static void or_component_state_class_init (OrComponentStateClass * klass) {
	or_component_state_parent_class = g_type_class_peek_parent (klass);
	COMPONENT_STATE_CLASS (klass)->finalize = or_component_state_finalize;
	g_type_class_add_private (klass, sizeof (OrComponentStatePrivate));
	COMPONENT_STATE_CLASS (klass)->update = or_component_state_real_update;
}


static void or_component_state_instance_init (OrComponentState * self) {
	self->priv = OR_COMPONENT_STATE_GET_PRIVATE (self);
}


static void or_component_state_finalize (ComponentState* obj) {
	OrComponentState * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_OR_COMPONENT_STATE, OrComponentState);
	self->priv->inputWires = (_vala_array_free (self->priv->inputWires, self->priv->inputWires_length1, (GDestroyNotify) connection_unref), NULL);
	_connection_unref0 (self->priv->outputWire);
	COMPONENT_STATE_CLASS (or_component_state_parent_class)->finalize (obj);
}


GType or_component_state_get_type (void) {
	static volatile gsize or_component_state_type_id__volatile = 0;
	if (g_once_init_enter (&or_component_state_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (OrComponentStateClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) or_component_state_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (OrComponentState), 0, (GInstanceInitFunc) or_component_state_instance_init, NULL };
		GType or_component_state_type_id;
		or_component_state_type_id = g_type_register_static (TYPE_COMPONENT_STATE, "OrComponentState", &g_define_type_info, 0);
		g_once_init_leave (&or_component_state_type_id__volatile, or_component_state_type_id);
	}
	return or_component_state_type_id__volatile;
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



