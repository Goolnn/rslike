add_rules("mode.debug", "mode.release")

includes("packages/xmacros.lua")

add_requires("xmacros")

target("rslike")
    set_kind("headeronly")
    set_languages("clatest")
    set_version("0.1.0")
    add_packages("xmacros")
    add_headerfiles("include/(**.h)")
