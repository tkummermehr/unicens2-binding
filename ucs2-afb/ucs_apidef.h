
static const char _afb_description_v2_UNICENS[] =
    "{\"openapi\":\"3.0.0\",\"$schema\":\"http:iot.bzh/download/openapi/schem"
    "a-3.0/default-schema.json\",\"info\":{\"description\":\"\",\"title\":\"u"
    "cs2\",\"version\":\"1.0\",\"x-binding-c-generator\":{\"api\":\"UNICENS\""
    ",\"version\":2,\"prefix\":\"ucs2_\",\"postfix\":\"\",\"start\":null,\"on"
    "event\":null,\"init\":null,\"scope\":\"\",\"private\":false}},\"servers\""
    ":[{\"url\":\"ws://{host}:{port}/api/monitor\",\"description\":\"Unicens2"
    " API.\",\"variables\":{\"host\":{\"default\":\"localhost\"},\"port\":{\""
    "default\":\"1234\"}},\"x-afb-events\":[{\"$ref\":\"#/components/schemas/"
    "afb-event\"}]}],\"components\":{\"schemas\":{\"afb-reply\":{\"$ref\":\"#"
    "/components/schemas/afb-reply-v2\"},\"afb-event\":{\"$ref\":\"#/componen"
    "ts/schemas/afb-event-v2\"},\"afb-reply-v2\":{\"title\":\"Generic respons"
    "e.\",\"type\":\"object\",\"required\":[\"jtype\",\"request\"],\"properti"
    "es\":{\"jtype\":{\"type\":\"string\",\"const\":\"afb-reply\"},\"request\""
    ":{\"type\":\"object\",\"required\":[\"status\"],\"properties\":{\"status"
    "\":{\"type\":\"string\"},\"info\":{\"type\":\"string\"},\"token\":{\"typ"
    "e\":\"string\"},\"uuid\":{\"type\":\"string\"},\"reqid\":{\"type\":\"str"
    "ing\"}}},\"response\":{\"type\":\"object\"}}},\"afb-event-v2\":{\"type\""
    ":\"object\",\"required\":[\"jtype\",\"event\"],\"properties\":{\"jtype\""
    ":{\"type\":\"string\",\"const\":\"afb-event\"},\"event\":{\"type\":\"str"
    "ing\"},\"data\":{\"type\":\"object\"}}}},\"x-permissions\":{\"config\":{"
    "\"permission\":\"urn:AGL:permission:UNICENS:public:initialise\"},\"monit"
    "or\":{\"permission\":\"urn:AGL:permission:UNICENS:public:monitor\"}},\"r"
    "esponses\":{\"200\":{\"description\":\"A complex object array response\""
    ",\"content\":{\"application/json\":{\"schema\":{\"$ref\":\"#/components/"
    "schemas/afb-reply\"}}}}}},\"paths\":{\"/configure\":{\"description\":\"c"
    "onfigure Unicens2 lib from NetworkConfig.XML.\",\"get\":{\"x-permissions"
    "\":{\"$ref\":\"#/components/x-permissions/config\"},\"parameters\":[{\"i"
    "n\":\"query\",\"name\":\"filename\",\"required\":true,\"schema\":{\"type"
    "\":\"string\"}}],\"responses\":{\"200\":{\"$ref\":\"#/components/respons"
    "es/200\"}}}},\"/volume\":{\"description\":\"Set Master Volume.\",\"get\""
    ":{\"x-permissions\":{\"$ref\":\"#/components/x-permissions/monitor\"},\""
    "parameters\":[{\"in\":\"query\",\"name\":\"value\",\"required\":true,\"s"
    "chema\":{\"type\":\"integer\"}}],\"responses\":{\"200\":{\"$ref\":\"#/co"
    "mponents/responses/200\"}}}},\"/monitor\":{\"description\":\"Subscribe t"
    "o Unicens Event.\",\"get\":{\"x-permissions\":{\"$ref\":\"#/components/x"
    "-permissions/monitor\"},\"responses\":{\"200\":{\"$ref\":\"#/components/"
    "responses/200\"}}}}}}"
;

static const struct afb_auth _afb_auths_v2_UNICENS[] = {
	{ .type = afb_auth_Permission, .text = "urn:AGL:permission:UNICENS:public:initialise" },
	{ .type = afb_auth_Permission, .text = "urn:AGL:permission:UNICENS:public:monitor" }
};

 void ucs2_configure(struct afb_req req);
 void ucs2_volume(struct afb_req req);
 void ucs2_monitor(struct afb_req req);

static const struct afb_verb_v2 _afb_verbs_v2_UNICENS[] = {
    {
        .verb = "configure",
        .callback = ucs2_configure,
        .auth = &_afb_auths_v2_UNICENS[0],
        .info = NULL,
        .session = AFB_SESSION_NONE_V2
    },
    {
        .verb = "volume",
        .callback = ucs2_volume,
        .auth = &_afb_auths_v2_UNICENS[1],
        .info = NULL,
        .session = AFB_SESSION_NONE_V2
    },
    {
        .verb = "monitor",
        .callback = ucs2_monitor,
        .auth = &_afb_auths_v2_UNICENS[1],
        .info = NULL,
        .session = AFB_SESSION_NONE_V2
    },
    { .verb = NULL }
};

const struct afb_binding_v2 afbBindingV2 = {
    .api = "UNICENS",
    .specification = _afb_description_v2_UNICENS,
    .info = NULL,
    .verbs = _afb_verbs_v2_UNICENS,
    .preinit = NULL,
    .init = NULL,
    .onevent = NULL,
    .noconcurrency = 0
};
