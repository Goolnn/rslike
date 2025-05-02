add_rules("mode.debug", "mode.release")

includes("packages/xmacros.lua")

add_requires("xmacros")

target("rslike")
    set_kind("headeronly")
    set_languages("clatest")
    add_packages("xmacros")
    add_headerfiles("include/(**.h)")
