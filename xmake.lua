add_rules("mode.debug", "mode.release")

target("rslike")
    set_kind("headeronly")
    set_languages("clatest")
    set_version("0.1.0")
    add_headerfiles("include/(**.h)")
