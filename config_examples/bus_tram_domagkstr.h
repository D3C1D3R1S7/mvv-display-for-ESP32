static const Config configs[] = {
    {
        /* wifi_name           */ "wifi_test",
        /* wifi_pass           */ "wifi_pw",
        /* type                */ mvg_api,
        /* url                 */ "de:09162:502",
	    /* include_type        */ {"BUS", "TRAM" },
        /* include_line        */ { "*" },
        /* exclude_destination */ {},
    },
};
