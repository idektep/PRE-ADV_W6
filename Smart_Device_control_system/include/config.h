#pragma once

// ─────────────────────────────────────────
//  WiFi
// ─────────────────────────────────────────
#define WIFI_SSID       "IDT_WIFI4"
#define WIFI_PASSWORD   "!00000000!"

// ─────────────────────────────────────────
//  MQTT Broker (EMQX Public)
// ─────────────────────────────────────────
#define MQTT_BROKER     "broker.emqx.io"
#define MQTT_PORT       1883
#define MQTT_CLIENT_ID  "esp32_iot_001"   // เปลี่ยนถ้ามีหลายบอร์ด
#define MQTT_USER       ""
#define MQTT_PASS       ""

// ─────────────────────────────────────────
//  MQTT Topics — Publish
// ─────────────────────────────────────────
#define TOPIC_TEMP          "sensors/dht/temperature"
#define TOPIC_HUMID         "sensors/dht/humidity"
#define TOPIC_LIGHT         "sensors/light/lux"
#define TOPIC_CO2           "sensors/air/co2"
#define TOPIC_SOIL          "sensors/soil/moisture"
#define TOPIC_RAIN_PCT      "sensors/rain/intensity"
#define TOPIC_RAIN_DIG      "sensors/rain/detected"
#define TOPIC_STATUS        "sensors/device/status"
#define TOPIC_FLOOD_ALERT   "sensors/alert/flood_risk"

// ─────────────────────────────────────────
//  MQTT Topics — Subscribe (รับคำสั่ง)
// ─────────────────────────────────────────
#define TOPIC_CMD_LIGHT     "control/light"
#define TOPIC_CMD_FAN       "control/fan"

// ─────────────────────────────────────────
//  Pin Definitions
// ─────────────────────────────────────────






// ─────────────────────────────────────────
//  Sensor Config
// ─────────────────────────────────────────

#define PUBLISH_INTERVAL_MS 1000    // ส่งข้อมูลทุก 3 วินาที

