#ifndef NEDERLANDS_HPP_INCLUDED
#define NEDERLANDS_HPP_INCLUDED

#include <cstddef>
#include <cstdint>
#include <iostream>
#include <string>

#define uitlijnals alignas
#define uitlijnvan alignof
#define en and
#define en_gel and_eq
#define atomisch_annuleer atomic_cancel
#define atomisch_bedijf atomic_commit
#define atomisch_geenexcept atomic_noexcept
#define biten bitand
#define bitof bitor
#define breek break
#define geval case
#define vang catch
#define kar char
#define kar8_t char8_t
#define kar16_t char16_t
#define kar32_t char32_t
#define klas class
#define const_omzet const_cast
#define ga_door continue
#define co_wacht_af co_await
#define co_keer_terug co_return
#define co_lever_op co_yield
#define standaard default
#define wis delete
#define doe do
#define dubbel double
#define dynamische_omzet dynamic_cast
#define anders else
#define opsom enum
#define expliciet explicit
#define onwaar false
#define drijf float
#define voor for
#define vriend friend
#define ga_naar goto
#define als if
#define ingelijnd inline
#define lang long
#define aanpasbaar mutable
#define naamruimte namespace
#define nieuw new
#define geenexcept noexcept
#define niet not
#define niet_gel not_eq
#define nulwzr nullptr
#define of or
#define of_gel or_eq
#define prive private
#define beschermd protected
#define publiek public
#define herinterpreteer_omzet reinterpret_cast
#define vereist requires
#define geef_terug return
#define kort short
#define getekend signed
#define grootevan sizeof
#define statisch static
#define statisch_beweer static_assert
#define statische_omzet static_cast
#define wissel switch
#define gesynchronizeerd synchronized
#define sjabloon template
#define dit this
#define draad_lokaal thread_local
#define gooi throw
#define waar true
#define probeer try
#define typenaam typename
#define unie union
#define ongetekend unsigned
#define gebruikend using
#define virtueel virtual
#define leegte void
#define vluchtig volatile
#define wkar_t wchar_t
#define zolang while
#define xof xor
#define xof_gel xor_eq

#define overschrijf override
#define finaal final
#define luister audit
#define axioma axiom
#define importeer import
#define transactie_veilig transaction_safe
#define transactie_veilig_dynamisch transaction_safe_dynamic

//Aliasses for main
extern "C" int hoofd();

//Stddef alias
#define NUL ((void*)0)
#define afstandvan(t, m) offsetof(t, m)

namespace std
{
    using grootte_t = size_t;
    using wzrverschil_t = ptrdiff_t;
    using nulwzr_t = nullptr_t;
    using max_uitlijn_t = max_align_t;
}

using std::grootte_t;
using std::wzrverschil_t;
using std::nulwzr_t;
using std::max_uitlijn_t;

//Stdint alias
namespace std
{
    using int_snel8_t = int_fast8_t;
    using int_snel16_t = int_fast16_t;
    using int_snel32_t = int_fast32_t;
    using int_snel64_t = int_fast64_t;

    using int_minst8_t = int_least8_t;
    using int_minst16_t = int_least16_t;
    using int_minst32_t = int_least32_t;
    using int_minst64_t = int_least64_t;

    using intwzr_t = intptr_t;

    using ngint8_t = uint8_t;
    using ngint16_t = uint16_t;
    using ngint32_t = uint32_t;
    using ngint64_t = uint64_t;

    using ngint_snel8_t = uint_fast8_t;
    using ngint_snel16_t = uint_fast16_t;
    using ngint_snel32_t = uint_fast32_t;
    using ngint_snel64_t = uint_fast64_t;

    using ngint_minst8_t = uint_least8_t;
    using ngint_minst16_t = uint_least16_t;
    using ngint_minst32_t = uint_least32_t;
    using ngint_minst64_t = uint_least64_t;

    using ngintmax_t = uintmax_t;
    using ngintwzr_t = uintptr_t;
}

using std::int_snel8_t;
using std::int_snel16_t;
using std::int_snel32_t;
using std::int_snel64_t;

using std::int_minst8_t;
using std::int_minst16_t;
using std::int_minst32_t;
using std::int_minst64_t;

using std::intwzr_t;

using std::ngint8_t;
using std::ngint16_t;
using std::ngint32_t;
using std::ngint64_t;

using std::ngint_snel8_t;
using std::ngint_snel16_t;
using std::ngint_snel32_t;
using std::ngint_snel64_t;

using std::ngint_minst8_t;
using std::ngint_minst16_t;
using std::ngint_minst32_t;
using std::ngint_minst64_t;

using std::ngintmax_t;
using std::ngintwzr_t;

//IOstream alias

namespace std
{
    extern std::ostream& cuit;
    
    template <typename CharT, typename Traits>
    std::basic_ostream<CharT, Traits>& eindr(std::basic_ostream<CharT, Traits>& os)
    {
        return endl(os);
    }
}

//String alias
namespace std
{
    using koord = string;
    
    template <typename CharT, typename Traits, typename Allocator>
    std::basic_istream<CharT, Traits>& krijgregel(std::basic_istream<CharT, Traits>& input, std::basic_string<CharT, Traits, Allocator>& str, CharT delim)
    {
        return std::getline(input, str, delim);
    }
    
    template <typename CharT, typename Traits, typename Allocator>
    std::basic_istream<CharT, Traits>& krijgregel(std::basic_istream<CharT, Traits>& input, std::basic_string<CharT, Traits, Allocator>& str)
    {
        return std::getline(input, str);
    }
    
    template <typename CharT, typename Traits, typename Allocator>
    std::basic_istream<CharT, Traits>& krijgregel(std::basic_istream<CharT, Traits>&& input, std::basic_string<CharT, Traits, Allocator>& str, CharT delim)
    {
        return std::getline(input, str, delim);
    }
    
    template <typename CharT, typename Traits, typename Allocator>
    std::basic_istream<CharT, Traits>& krijgregel(std::basic_istream<CharT, Traits>&& input, std::basic_string<CharT, Traits, Allocator>& str)
    {
        return std::getline(input, str);
    }
}

#endif // NEDERLANDS_HPP_INCLUDED
