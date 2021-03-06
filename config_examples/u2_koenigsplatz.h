static const Config configs[] = {
    {
        /* wifi_name           */ "wifi_name",
        /* wifi_pass           */ "wifi_pw",
        /* type                */ mvg_api,
        /* url                 */ "de:09162:110",
	      /* include_type        */ {"*" },
        /* include_line        */ { "U2", "U8" },
        /* exclude_destination */ {},
    },

//Credentials am Smartphone-Hotspot entsprechend neu einstellen
//Mit Powerbank/LiPo-Akku Anzeige unterwegs (auf dem Weg zur Haltestelle nutzen)  
//Für wifi-Verbindungswechsel Controller per reset-button neu powern
    {
        /* wifi_name           */ "test_hotspot",
        /* wifi_pass           */ "pw_test_hotspot",
        /* type                */ mvg_api,
        /* url                 */ "de:09162:110",
	      /* include_type        */ {"*" },
        /* include_line        */ { "U2", "U8" },
        /* exclude_destination */ {},
    },
};
