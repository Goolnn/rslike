add_rules("mode.debug", "mode.release")

target("rslike")
    set_kind("headeronly")
    set_languages("clatest")
    add_headerfiles("include/(**.h)")
