/* state-toggle.c generated by valac 0.24.0, the Vala compiler
 * generated from state-toggle.vala, do not modify */

/* 
 * SmartSim - Digital Logic Circuit Designer and Simulator
 *   
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *   
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *   
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *   
 *   Filename: componentstate/state-toggle.vala
 *   
 *   Copyright Ashley Newson 2013
 */

#include <glib.h>
#include <glib-object.h>
#include <cairo.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>


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

#define TYPE_TOGGLE_COMPONENT_STATE (toggle_component_state_get_type ())
#define TOGGLE_COMPONENT_STATE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_TOGGLE_COMPONENT_STATE, ToggleComponentState))
#define TOGGLE_COMPONENT_STATE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_TOGGLE_COMPONENT_STATE, ToggleComponentStateClass))
#define IS_TOGGLE_COMPONENT_STATE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_TOGGLE_COMPONENT_STATE))
#define IS_TOGGLE_COMPONENT_STATE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_TOGGLE_COMPONENT_STATE))
#define TOGGLE_COMPONENT_STATE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_TOGGLE_COMPONENT_STATE, ToggleComponentStateClass))

typedef struct _ToggleComponentState ToggleComponentState;
typedef struct _ToggleComponentStateClass ToggleComponentStateClass;
typedef struct _ToggleComponentStatePrivate ToggleComponentStatePrivate;

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
typedef struct _CompiledCircuitPrivate CompiledCircuitPrivate;

#define TYPE_COMPONENT_DEF (component_def_get_type ())
#define COMPONENT_DEF(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_COMPONENT_DEF, ComponentDef))
#define COMPONENT_DEF_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_COMPONENT_DEF, ComponentDefClass))
#define IS_COMPONENT_DEF(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_COMPONENT_DEF))
#define IS_COMPONENT_DEF_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_COMPONENT_DEF))
#define COMPONENT_DEF_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_COMPONENT_DEF, ComponentDefClass))

typedef struct _ComponentDef ComponentDef;
typedef struct _ComponentDefClass ComponentDefClass;

#define TYPE_CUSTOM_COMPONENT_DEF (custom_component_def_get_type ())
#define CUSTOM_COMPONENT_DEF(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_CUSTOM_COMPONENT_DEF, CustomComponentDef))
#define CUSTOM_COMPONENT_DEF_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_CUSTOM_COMPONENT_DEF, CustomComponentDefClass))
#define IS_CUSTOM_COMPONENT_DEF(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_CUSTOM_COMPONENT_DEF))
#define IS_CUSTOM_COMPONENT_DEF_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_CUSTOM_COMPONENT_DEF))
#define CUSTOM_COMPONENT_DEF_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_CUSTOM_COMPONENT_DEF, CustomComponentDefClass))

typedef struct _CustomComponentDef CustomComponentDef;
typedef struct _CustomComponentDefClass CustomComponentDefClass;

#define TYPE_PROJECT (project_get_type ())
#define PROJECT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PROJECT, Project))
#define PROJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PROJECT, ProjectClass))
#define IS_PROJECT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PROJECT))
#define IS_PROJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PROJECT))
#define PROJECT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PROJECT, ProjectClass))

typedef struct _Project Project;
typedef struct _ProjectClass ProjectClass;

#define TYPE_UPDATE_QUEUE (update_queue_get_type ())
#define UPDATE_QUEUE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_UPDATE_QUEUE, UpdateQueue))
#define UPDATE_QUEUE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_UPDATE_QUEUE, UpdateQueueClass))
#define IS_UPDATE_QUEUE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_UPDATE_QUEUE))
#define IS_UPDATE_QUEUE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_UPDATE_QUEUE))
#define UPDATE_QUEUE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_UPDATE_QUEUE, UpdateQueueClass))

typedef struct _UpdateQueue UpdateQueue;
typedef struct _UpdateQueueClass UpdateQueueClass;

#define TYPE_WIRE_STATE (wire_state_get_type ())
#define WIRE_STATE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_WIRE_STATE, WireState))
#define WIRE_STATE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_WIRE_STATE, WireStateClass))
#define IS_WIRE_STATE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_WIRE_STATE))
#define IS_WIRE_STATE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_WIRE_STATE))
#define WIRE_STATE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_WIRE_STATE, WireStateClass))

typedef struct _WireState WireState;
typedef struct _WireStateClass WireStateClass;
typedef struct _ComponentInstPrivate ComponentInstPrivate;

#define TYPE_DIRECTION (direction_get_type ())

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

#define TYPE_PIN_INST (pin_inst_get_type ())
#define PIN_INST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PIN_INST, PinInst))
#define PIN_INST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PIN_INST, PinInstClass))
#define IS_PIN_INST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PIN_INST))
#define IS_PIN_INST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PIN_INST))
#define PIN_INST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PIN_INST, PinInstClass))

typedef struct _PinInst PinInst;
typedef struct _PinInstClass PinInstClass;
#define _g_free0(var) (var = (g_free (var), NULL))

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

struct _ToggleComponentState {
	ComponentState parent_instance;
	ToggleComponentStatePrivate * priv;
};

struct _ToggleComponentStateClass {
	ComponentStateClass parent_class;
};

struct _ToggleComponentStatePrivate {
	gboolean output;
	Connection* outputWire;
};

struct _CompiledCircuit {
	GTypeInstance parent_instance;
	volatile int ref_count;
	CompiledCircuitPrivate * priv;
	CustomComponentDef* rootComponent;
	Project* project;
	UpdateQueue* renderWireStates;
	UpdateQueue* renderComponentStates;
	UpdateQueue* processWireStates;
	UpdateQueue* processComponentStates;
	CustomComponentDef* viewedComponent;
	gint iterationCount;
};

struct _CompiledCircuitClass {
	GTypeClass parent_class;
	void (*finalize) (CompiledCircuit *self);
};

typedef enum  {
	DIRECTION_NONE,
	DIRECTION_RIGHT,
	DIRECTION_DOWN,
	DIRECTION_LEFT,
	DIRECTION_UP,
	DIRECTION_HORIZONTAL,
	DIRECTION_VERTICAL,
	DIRECTION_DIAGONAL
} Direction;

struct _ComponentInst {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ComponentInstPrivate * priv;
	ComponentDef* componentDef;
	gint myID;
	gint xPosition;
	gint yPosition;
	Direction direction;
	gboolean flipped;
	gint rightBound;
	gint downBound;
	gint leftBound;
	gint upBound;
	PropertySet* configuration;
	gboolean selected;
	gboolean errorMark;
	PinInst** pinInsts;
	gint pinInsts_length1;
};

struct _ComponentInstClass {
	GTypeClass parent_class;
	void (*finalize) (ComponentInst *self);
};


static gpointer toggle_component_state_parent_class = NULL;

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
GType toggle_component_state_get_type (void) G_GNUC_CONST;
gpointer connection_ref (gpointer instance);
void connection_unref (gpointer instance);
GParamSpec* param_spec_connection (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_connection (GValue* value, gpointer v_object);
void value_take_connection (GValue* value, gpointer v_object);
gpointer value_get_connection (const GValue* value);
GType connection_get_type (void) G_GNUC_CONST;
#define TOGGLE_COMPONENT_STATE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_TOGGLE_COMPONENT_STATE, ToggleComponentStatePrivate))
enum  {
	TOGGLE_COMPONENT_STATE_DUMMY_PROPERTY
};
ToggleComponentState* toggle_component_state_new (Connection* outputWire, ComponentInst** ancestry, int ancestry_length1, ComponentInst* componentInst);
ToggleComponentState* toggle_component_state_construct (GType object_type, Connection* outputWire, ComponentInst** ancestry, int ancestry_length1, ComponentInst* componentInst);
ComponentState* component_state_construct (GType object_type);
static ComponentInst** _vala_array_dup37 (ComponentInst** self, int length);
static void toggle_component_state_real_click (ComponentState* base);
gpointer component_def_ref (gpointer instance);
void component_def_unref (gpointer instance);
GParamSpec* param_spec_component_def (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_component_def (GValue* value, gpointer v_object);
void value_take_component_def (GValue* value, gpointer v_object);
gpointer value_get_component_def (const GValue* value);
GType component_def_get_type (void) G_GNUC_CONST;
GType custom_component_def_get_type (void) G_GNUC_CONST;
gpointer project_ref (gpointer instance);
void project_unref (gpointer instance);
GParamSpec* param_spec_project (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_project (GValue* value, gpointer v_object);
void value_take_project (GValue* value, gpointer v_object);
gpointer value_get_project (const GValue* value);
GType project_get_type (void) G_GNUC_CONST;
gpointer update_queue_ref (gpointer instance);
void update_queue_unref (gpointer instance);
GParamSpec* param_spec_update_queue (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_update_queue (GValue* value, gpointer v_object);
void value_take_update_queue (GValue* value, gpointer v_object);
gpointer value_get_update_queue (const GValue* value);
GType update_queue_get_type (void) G_GNUC_CONST;
gpointer wire_state_ref (gpointer instance);
void wire_state_unref (gpointer instance);
GParamSpec* param_spec_wire_state (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_wire_state (GValue* value, gpointer v_object);
void value_take_wire_state (GValue* value, gpointer v_object);
gpointer value_get_wire_state (const GValue* value);
GType wire_state_get_type (void) G_GNUC_CONST;
void update_queue_add_element (UpdateQueue* self, gint elementNumber);
static void toggle_component_state_real_render (ComponentState* base, cairo_t* context);
GType direction_get_type (void) G_GNUC_CONST;
gpointer property_item_ref (gpointer instance);
void property_item_unref (gpointer instance);
GParamSpec* param_spec_property_item (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_property_item (GValue* value, gpointer v_object);
void value_take_property_item (GValue* value, gpointer v_object);
gpointer value_get_property_item (const GValue* value);
GType property_item_get_type (void) G_GNUC_CONST;
GType property_set_get_type (void) G_GNUC_CONST;
gpointer pin_inst_ref (gpointer instance);
void pin_inst_unref (gpointer instance);
GParamSpec* param_spec_pin_inst (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_pin_inst (GValue* value, gpointer v_object);
void value_take_pin_inst (GValue* value, gpointer v_object);
gpointer value_get_pin_inst (const GValue* value);
GType pin_inst_get_type (void) G_GNUC_CONST;
static void toggle_component_state_real_update (ComponentState* base);
void connection_set_signalState (Connection* self, gboolean value);
static void toggle_component_state_finalize (ComponentState* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


static gpointer _connection_ref0 (gpointer self) {
	return self ? connection_ref (self) : NULL;
}


static gpointer _component_inst_ref0 (gpointer self) {
	return self ? component_inst_ref (self) : NULL;
}


static ComponentInst** _vala_array_dup37 (ComponentInst** self, int length) {
	ComponentInst** result;
	int i;
	result = g_new0 (ComponentInst*, length + 1);
	for (i = 0; i < length; i++) {
		ComponentInst* _tmp0_ = NULL;
		_tmp0_ = _component_inst_ref0 (self[i]);
		result[i] = _tmp0_;
	}
	return result;
}


ToggleComponentState* toggle_component_state_construct (GType object_type, Connection* outputWire, ComponentInst** ancestry, int ancestry_length1, ComponentInst* componentInst) {
	ToggleComponentState* self = NULL;
	Connection* _tmp0_ = NULL;
	Connection* _tmp1_ = NULL;
	ComponentInst** _tmp2_ = NULL;
	gint _tmp2__length1 = 0;
	ComponentInst** _tmp3_ = NULL;
	gint _tmp3__length1 = 0;
	ComponentInst* _tmp4_ = NULL;
	ComponentInst* _tmp5_ = NULL;
	g_return_val_if_fail (outputWire != NULL, NULL);
	g_return_val_if_fail (componentInst != NULL, NULL);
	self = (ToggleComponentState*) component_state_construct (object_type);
	_tmp0_ = outputWire;
	_tmp1_ = _connection_ref0 (_tmp0_);
	_connection_unref0 (self->priv->outputWire);
	self->priv->outputWire = _tmp1_;
	self->priv->output = FALSE;
	_tmp2_ = ancestry;
	_tmp2__length1 = ancestry_length1;
	_tmp3_ = (_tmp2_ != NULL) ? _vala_array_dup37 (_tmp2_, _tmp2__length1) : ((gpointer) _tmp2_);
	_tmp3__length1 = _tmp2__length1;
	((ComponentState*) self)->ancestry = (_vala_array_free (((ComponentState*) self)->ancestry, ((ComponentState*) self)->ancestry_length1, (GDestroyNotify) component_inst_unref), NULL);
	((ComponentState*) self)->ancestry = _tmp3_;
	((ComponentState*) self)->ancestry_length1 = _tmp3__length1;
	_tmp4_ = componentInst;
	_tmp5_ = _component_inst_ref0 (_tmp4_);
	_component_inst_unref0 (((ComponentState*) self)->componentInst);
	((ComponentState*) self)->componentInst = _tmp5_;
	return self;
}


ToggleComponentState* toggle_component_state_new (Connection* outputWire, ComponentInst** ancestry, int ancestry_length1, ComponentInst* componentInst) {
	return toggle_component_state_construct (TYPE_TOGGLE_COMPONENT_STATE, outputWire, ancestry, ancestry_length1, componentInst);
}


static void toggle_component_state_real_click (ComponentState* base) {
	ToggleComponentState * self;
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	gboolean _tmp2_ = FALSE;
	CompiledCircuit* _tmp6_ = NULL;
	UpdateQueue* _tmp7_ = NULL;
	gint _tmp8_ = 0;
	self = (ToggleComponentState*) base;
	_tmp1_ = self->priv->output;
	if (_tmp1_) {
		_tmp0_ = FALSE;
	} else {
		_tmp0_ = TRUE;
	}
	self->priv->output = _tmp0_;
	_tmp2_ = ((ComponentState*) self)->display;
	if (_tmp2_) {
		CompiledCircuit* _tmp3_ = NULL;
		UpdateQueue* _tmp4_ = NULL;
		gint _tmp5_ = 0;
		_tmp3_ = ((ComponentState*) self)->compiledCircuit;
		_tmp4_ = _tmp3_->renderComponentStates;
		_tmp5_ = ((ComponentState*) self)->renderQueueID;
		update_queue_add_element (_tmp4_, _tmp5_);
	}
	_tmp6_ = ((ComponentState*) self)->compiledCircuit;
	_tmp7_ = _tmp6_->processComponentStates;
	_tmp8_ = ((ComponentState*) self)->processQueueID;
	update_queue_add_element (_tmp7_, _tmp8_);
}


static void toggle_component_state_real_render (ComponentState* base, cairo_t* context) {
	ToggleComponentState * self;
	gchar* text = NULL;
	cairo_matrix_t oldMatrix = {0};
	cairo_t* _tmp0_ = NULL;
	cairo_matrix_t _tmp1_ = {0};
	cairo_t* _tmp2_ = NULL;
	ComponentInst* _tmp3_ = NULL;
	gint _tmp4_ = 0;
	ComponentInst* _tmp5_ = NULL;
	gint _tmp6_ = 0;
	cairo_t* _tmp7_ = NULL;
	cairo_t* _tmp8_ = NULL;
	cairo_t* _tmp9_ = NULL;
	cairo_t* _tmp10_ = NULL;
	cairo_t* _tmp11_ = NULL;
	cairo_t* _tmp12_ = NULL;
	cairo_t* _tmp13_ = NULL;
	cairo_t* _tmp14_ = NULL;
	cairo_text_extents_t textExtents = {0};
	gboolean _tmp15_ = FALSE;
	cairo_t* _tmp20_ = NULL;
	cairo_t* _tmp21_ = NULL;
	const gchar* _tmp22_ = NULL;
	cairo_text_extents_t _tmp23_ = {0};
	cairo_t* _tmp24_ = NULL;
	cairo_text_extents_t _tmp25_ = {0};
	gdouble _tmp26_ = 0.0;
	cairo_text_extents_t _tmp27_ = {0};
	gdouble _tmp28_ = 0.0;
	cairo_t* _tmp29_ = NULL;
	const gchar* _tmp30_ = NULL;
	cairo_t* _tmp31_ = NULL;
	cairo_matrix_t _tmp32_ = {0};
	self = (ToggleComponentState*) base;
	g_return_if_fail (context != NULL);
	_tmp0_ = context;
	cairo_get_matrix (_tmp0_, &_tmp1_);
	oldMatrix = _tmp1_;
	_tmp2_ = context;
	_tmp3_ = ((ComponentState*) self)->componentInst;
	_tmp4_ = _tmp3_->xPosition;
	_tmp5_ = ((ComponentState*) self)->componentInst;
	_tmp6_ = _tmp5_->yPosition;
	cairo_translate (_tmp2_, (gdouble) _tmp4_, (gdouble) _tmp6_);
	_tmp7_ = context;
	cairo_set_source_rgb (_tmp7_, 1.0, 1.0, 1.0);
	_tmp8_ = context;
	cairo_move_to (_tmp8_, (gdouble) (-10), (gdouble) (+10));
	_tmp9_ = context;
	cairo_line_to (_tmp9_, (gdouble) (+10), (gdouble) (+10));
	_tmp10_ = context;
	cairo_line_to (_tmp10_, (gdouble) (+10), (gdouble) (-10));
	_tmp11_ = context;
	cairo_line_to (_tmp11_, (gdouble) (-10), (gdouble) (-10));
	_tmp12_ = context;
	cairo_line_to (_tmp12_, (gdouble) (-10), (gdouble) (+10));
	_tmp13_ = context;
	cairo_fill (_tmp13_);
	_tmp14_ = context;
	cairo_stroke (_tmp14_);
	_tmp15_ = self->priv->output;
	if (_tmp15_) {
		cairo_t* _tmp16_ = NULL;
		gchar* _tmp17_ = NULL;
		_tmp16_ = context;
		cairo_set_source_rgb (_tmp16_, 1.0, (gdouble) 0, (gdouble) 0);
		_tmp17_ = g_strdup ("1");
		_g_free0 (text);
		text = _tmp17_;
	} else {
		cairo_t* _tmp18_ = NULL;
		gchar* _tmp19_ = NULL;
		_tmp18_ = context;
		cairo_set_source_rgb (_tmp18_, (gdouble) 0, (gdouble) 0, 1.0);
		_tmp19_ = g_strdup ("0");
		_g_free0 (text);
		text = _tmp19_;
	}
	_tmp20_ = context;
	cairo_set_font_size (_tmp20_, (gdouble) 16);
	_tmp21_ = context;
	_tmp22_ = text;
	cairo_text_extents (_tmp21_, _tmp22_, &_tmp23_);
	textExtents = _tmp23_;
	_tmp24_ = context;
	_tmp25_ = textExtents;
	_tmp26_ = _tmp25_.width;
	_tmp27_ = textExtents;
	_tmp28_ = _tmp27_.height;
	cairo_move_to (_tmp24_, (-_tmp26_) / 2, (+_tmp28_) / 2);
	_tmp29_ = context;
	_tmp30_ = text;
	cairo_show_text (_tmp29_, _tmp30_);
	_tmp31_ = context;
	_tmp32_ = oldMatrix;
	cairo_set_matrix (_tmp31_, &_tmp32_);
	_g_free0 (text);
}


static void toggle_component_state_real_update (ComponentState* base) {
	ToggleComponentState * self;
	Connection* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	self = (ToggleComponentState*) base;
	_tmp0_ = self->priv->outputWire;
	_tmp1_ = self->priv->output;
	connection_set_signalState (_tmp0_, _tmp1_);
}


static void toggle_component_state_class_init (ToggleComponentStateClass * klass) {
	toggle_component_state_parent_class = g_type_class_peek_parent (klass);
	COMPONENT_STATE_CLASS (klass)->finalize = toggle_component_state_finalize;
	g_type_class_add_private (klass, sizeof (ToggleComponentStatePrivate));
	COMPONENT_STATE_CLASS (klass)->click = toggle_component_state_real_click;
	COMPONENT_STATE_CLASS (klass)->render = toggle_component_state_real_render;
	COMPONENT_STATE_CLASS (klass)->update = toggle_component_state_real_update;
}


static void toggle_component_state_instance_init (ToggleComponentState * self) {
	self->priv = TOGGLE_COMPONENT_STATE_GET_PRIVATE (self);
}


static void toggle_component_state_finalize (ComponentState* obj) {
	ToggleComponentState * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_TOGGLE_COMPONENT_STATE, ToggleComponentState);
	_connection_unref0 (self->priv->outputWire);
	COMPONENT_STATE_CLASS (toggle_component_state_parent_class)->finalize (obj);
}


GType toggle_component_state_get_type (void) {
	static volatile gsize toggle_component_state_type_id__volatile = 0;
	if (g_once_init_enter (&toggle_component_state_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ToggleComponentStateClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) toggle_component_state_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ToggleComponentState), 0, (GInstanceInitFunc) toggle_component_state_instance_init, NULL };
		GType toggle_component_state_type_id;
		toggle_component_state_type_id = g_type_register_static (TYPE_COMPONENT_STATE, "ToggleComponentState", &g_define_type_info, 0);
		g_once_init_leave (&toggle_component_state_type_id__volatile, toggle_component_state_type_id);
	}
	return toggle_component_state_type_id__volatile;
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


