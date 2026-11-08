#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: WeaponGaugeVisible__8ApcPanelb
// Address: 0x15c970 - 0x15cf88
void WeaponGaugeVisible__8ApcPanelb_0x15c970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WeaponGaugeVisible__8ApcPanelb_0x15c970");
#endif

    switch (ctx->pc) {
        case 0x15c970u: goto label_15c970;
        case 0x15c974u: goto label_15c974;
        case 0x15c978u: goto label_15c978;
        case 0x15c97cu: goto label_15c97c;
        case 0x15c980u: goto label_15c980;
        case 0x15c984u: goto label_15c984;
        case 0x15c988u: goto label_15c988;
        case 0x15c98cu: goto label_15c98c;
        case 0x15c990u: goto label_15c990;
        case 0x15c994u: goto label_15c994;
        case 0x15c998u: goto label_15c998;
        case 0x15c99cu: goto label_15c99c;
        case 0x15c9a0u: goto label_15c9a0;
        case 0x15c9a4u: goto label_15c9a4;
        case 0x15c9a8u: goto label_15c9a8;
        case 0x15c9acu: goto label_15c9ac;
        case 0x15c9b0u: goto label_15c9b0;
        case 0x15c9b4u: goto label_15c9b4;
        case 0x15c9b8u: goto label_15c9b8;
        case 0x15c9bcu: goto label_15c9bc;
        case 0x15c9c0u: goto label_15c9c0;
        case 0x15c9c4u: goto label_15c9c4;
        case 0x15c9c8u: goto label_15c9c8;
        case 0x15c9ccu: goto label_15c9cc;
        case 0x15c9d0u: goto label_15c9d0;
        case 0x15c9d4u: goto label_15c9d4;
        case 0x15c9d8u: goto label_15c9d8;
        case 0x15c9dcu: goto label_15c9dc;
        case 0x15c9e0u: goto label_15c9e0;
        case 0x15c9e4u: goto label_15c9e4;
        case 0x15c9e8u: goto label_15c9e8;
        case 0x15c9ecu: goto label_15c9ec;
        case 0x15c9f0u: goto label_15c9f0;
        case 0x15c9f4u: goto label_15c9f4;
        case 0x15c9f8u: goto label_15c9f8;
        case 0x15c9fcu: goto label_15c9fc;
        case 0x15ca00u: goto label_15ca00;
        case 0x15ca04u: goto label_15ca04;
        case 0x15ca08u: goto label_15ca08;
        case 0x15ca0cu: goto label_15ca0c;
        case 0x15ca10u: goto label_15ca10;
        case 0x15ca14u: goto label_15ca14;
        case 0x15ca18u: goto label_15ca18;
        case 0x15ca1cu: goto label_15ca1c;
        case 0x15ca20u: goto label_15ca20;
        case 0x15ca24u: goto label_15ca24;
        case 0x15ca28u: goto label_15ca28;
        case 0x15ca2cu: goto label_15ca2c;
        case 0x15ca30u: goto label_15ca30;
        case 0x15ca34u: goto label_15ca34;
        case 0x15ca38u: goto label_15ca38;
        case 0x15ca3cu: goto label_15ca3c;
        case 0x15ca40u: goto label_15ca40;
        case 0x15ca44u: goto label_15ca44;
        case 0x15ca48u: goto label_15ca48;
        case 0x15ca4cu: goto label_15ca4c;
        case 0x15ca50u: goto label_15ca50;
        case 0x15ca54u: goto label_15ca54;
        case 0x15ca58u: goto label_15ca58;
        case 0x15ca5cu: goto label_15ca5c;
        case 0x15ca60u: goto label_15ca60;
        case 0x15ca64u: goto label_15ca64;
        case 0x15ca68u: goto label_15ca68;
        case 0x15ca6cu: goto label_15ca6c;
        case 0x15ca70u: goto label_15ca70;
        case 0x15ca74u: goto label_15ca74;
        case 0x15ca78u: goto label_15ca78;
        case 0x15ca7cu: goto label_15ca7c;
        case 0x15ca80u: goto label_15ca80;
        case 0x15ca84u: goto label_15ca84;
        case 0x15ca88u: goto label_15ca88;
        case 0x15ca8cu: goto label_15ca8c;
        case 0x15ca90u: goto label_15ca90;
        case 0x15ca94u: goto label_15ca94;
        case 0x15ca98u: goto label_15ca98;
        case 0x15ca9cu: goto label_15ca9c;
        case 0x15caa0u: goto label_15caa0;
        case 0x15caa4u: goto label_15caa4;
        case 0x15caa8u: goto label_15caa8;
        case 0x15caacu: goto label_15caac;
        case 0x15cab0u: goto label_15cab0;
        case 0x15cab4u: goto label_15cab4;
        case 0x15cab8u: goto label_15cab8;
        case 0x15cabcu: goto label_15cabc;
        case 0x15cac0u: goto label_15cac0;
        case 0x15cac4u: goto label_15cac4;
        case 0x15cac8u: goto label_15cac8;
        case 0x15caccu: goto label_15cacc;
        case 0x15cad0u: goto label_15cad0;
        case 0x15cad4u: goto label_15cad4;
        case 0x15cad8u: goto label_15cad8;
        case 0x15cadcu: goto label_15cadc;
        case 0x15cae0u: goto label_15cae0;
        case 0x15cae4u: goto label_15cae4;
        case 0x15cae8u: goto label_15cae8;
        case 0x15caecu: goto label_15caec;
        case 0x15caf0u: goto label_15caf0;
        case 0x15caf4u: goto label_15caf4;
        case 0x15caf8u: goto label_15caf8;
        case 0x15cafcu: goto label_15cafc;
        case 0x15cb00u: goto label_15cb00;
        case 0x15cb04u: goto label_15cb04;
        case 0x15cb08u: goto label_15cb08;
        case 0x15cb0cu: goto label_15cb0c;
        case 0x15cb10u: goto label_15cb10;
        case 0x15cb14u: goto label_15cb14;
        case 0x15cb18u: goto label_15cb18;
        case 0x15cb1cu: goto label_15cb1c;
        case 0x15cb20u: goto label_15cb20;
        case 0x15cb24u: goto label_15cb24;
        case 0x15cb28u: goto label_15cb28;
        case 0x15cb2cu: goto label_15cb2c;
        case 0x15cb30u: goto label_15cb30;
        case 0x15cb34u: goto label_15cb34;
        case 0x15cb38u: goto label_15cb38;
        case 0x15cb3cu: goto label_15cb3c;
        case 0x15cb40u: goto label_15cb40;
        case 0x15cb44u: goto label_15cb44;
        case 0x15cb48u: goto label_15cb48;
        case 0x15cb4cu: goto label_15cb4c;
        case 0x15cb50u: goto label_15cb50;
        case 0x15cb54u: goto label_15cb54;
        case 0x15cb58u: goto label_15cb58;
        case 0x15cb5cu: goto label_15cb5c;
        case 0x15cb60u: goto label_15cb60;
        case 0x15cb64u: goto label_15cb64;
        case 0x15cb68u: goto label_15cb68;
        case 0x15cb6cu: goto label_15cb6c;
        case 0x15cb70u: goto label_15cb70;
        case 0x15cb74u: goto label_15cb74;
        case 0x15cb78u: goto label_15cb78;
        case 0x15cb7cu: goto label_15cb7c;
        case 0x15cb80u: goto label_15cb80;
        case 0x15cb84u: goto label_15cb84;
        case 0x15cb88u: goto label_15cb88;
        case 0x15cb8cu: goto label_15cb8c;
        case 0x15cb90u: goto label_15cb90;
        case 0x15cb94u: goto label_15cb94;
        case 0x15cb98u: goto label_15cb98;
        case 0x15cb9cu: goto label_15cb9c;
        case 0x15cba0u: goto label_15cba0;
        case 0x15cba4u: goto label_15cba4;
        case 0x15cba8u: goto label_15cba8;
        case 0x15cbacu: goto label_15cbac;
        case 0x15cbb0u: goto label_15cbb0;
        case 0x15cbb4u: goto label_15cbb4;
        case 0x15cbb8u: goto label_15cbb8;
        case 0x15cbbcu: goto label_15cbbc;
        case 0x15cbc0u: goto label_15cbc0;
        case 0x15cbc4u: goto label_15cbc4;
        case 0x15cbc8u: goto label_15cbc8;
        case 0x15cbccu: goto label_15cbcc;
        case 0x15cbd0u: goto label_15cbd0;
        case 0x15cbd4u: goto label_15cbd4;
        case 0x15cbd8u: goto label_15cbd8;
        case 0x15cbdcu: goto label_15cbdc;
        case 0x15cbe0u: goto label_15cbe0;
        case 0x15cbe4u: goto label_15cbe4;
        case 0x15cbe8u: goto label_15cbe8;
        case 0x15cbecu: goto label_15cbec;
        case 0x15cbf0u: goto label_15cbf0;
        case 0x15cbf4u: goto label_15cbf4;
        case 0x15cbf8u: goto label_15cbf8;
        case 0x15cbfcu: goto label_15cbfc;
        case 0x15cc00u: goto label_15cc00;
        case 0x15cc04u: goto label_15cc04;
        case 0x15cc08u: goto label_15cc08;
        case 0x15cc0cu: goto label_15cc0c;
        case 0x15cc10u: goto label_15cc10;
        case 0x15cc14u: goto label_15cc14;
        case 0x15cc18u: goto label_15cc18;
        case 0x15cc1cu: goto label_15cc1c;
        case 0x15cc20u: goto label_15cc20;
        case 0x15cc24u: goto label_15cc24;
        case 0x15cc28u: goto label_15cc28;
        case 0x15cc2cu: goto label_15cc2c;
        case 0x15cc30u: goto label_15cc30;
        case 0x15cc34u: goto label_15cc34;
        case 0x15cc38u: goto label_15cc38;
        case 0x15cc3cu: goto label_15cc3c;
        case 0x15cc40u: goto label_15cc40;
        case 0x15cc44u: goto label_15cc44;
        case 0x15cc48u: goto label_15cc48;
        case 0x15cc4cu: goto label_15cc4c;
        case 0x15cc50u: goto label_15cc50;
        case 0x15cc54u: goto label_15cc54;
        case 0x15cc58u: goto label_15cc58;
        case 0x15cc5cu: goto label_15cc5c;
        case 0x15cc60u: goto label_15cc60;
        case 0x15cc64u: goto label_15cc64;
        case 0x15cc68u: goto label_15cc68;
        case 0x15cc6cu: goto label_15cc6c;
        case 0x15cc70u: goto label_15cc70;
        case 0x15cc74u: goto label_15cc74;
        case 0x15cc78u: goto label_15cc78;
        case 0x15cc7cu: goto label_15cc7c;
        case 0x15cc80u: goto label_15cc80;
        case 0x15cc84u: goto label_15cc84;
        case 0x15cc88u: goto label_15cc88;
        case 0x15cc8cu: goto label_15cc8c;
        case 0x15cc90u: goto label_15cc90;
        case 0x15cc94u: goto label_15cc94;
        case 0x15cc98u: goto label_15cc98;
        case 0x15cc9cu: goto label_15cc9c;
        case 0x15cca0u: goto label_15cca0;
        case 0x15cca4u: goto label_15cca4;
        case 0x15cca8u: goto label_15cca8;
        case 0x15ccacu: goto label_15ccac;
        case 0x15ccb0u: goto label_15ccb0;
        case 0x15ccb4u: goto label_15ccb4;
        case 0x15ccb8u: goto label_15ccb8;
        case 0x15ccbcu: goto label_15ccbc;
        case 0x15ccc0u: goto label_15ccc0;
        case 0x15ccc4u: goto label_15ccc4;
        case 0x15ccc8u: goto label_15ccc8;
        case 0x15ccccu: goto label_15cccc;
        case 0x15ccd0u: goto label_15ccd0;
        case 0x15ccd4u: goto label_15ccd4;
        case 0x15ccd8u: goto label_15ccd8;
        case 0x15ccdcu: goto label_15ccdc;
        case 0x15cce0u: goto label_15cce0;
        case 0x15cce4u: goto label_15cce4;
        case 0x15cce8u: goto label_15cce8;
        case 0x15ccecu: goto label_15ccec;
        case 0x15ccf0u: goto label_15ccf0;
        case 0x15ccf4u: goto label_15ccf4;
        case 0x15ccf8u: goto label_15ccf8;
        case 0x15ccfcu: goto label_15ccfc;
        case 0x15cd00u: goto label_15cd00;
        case 0x15cd04u: goto label_15cd04;
        case 0x15cd08u: goto label_15cd08;
        case 0x15cd0cu: goto label_15cd0c;
        case 0x15cd10u: goto label_15cd10;
        case 0x15cd14u: goto label_15cd14;
        case 0x15cd18u: goto label_15cd18;
        case 0x15cd1cu: goto label_15cd1c;
        case 0x15cd20u: goto label_15cd20;
        case 0x15cd24u: goto label_15cd24;
        case 0x15cd28u: goto label_15cd28;
        case 0x15cd2cu: goto label_15cd2c;
        case 0x15cd30u: goto label_15cd30;
        case 0x15cd34u: goto label_15cd34;
        case 0x15cd38u: goto label_15cd38;
        case 0x15cd3cu: goto label_15cd3c;
        case 0x15cd40u: goto label_15cd40;
        case 0x15cd44u: goto label_15cd44;
        case 0x15cd48u: goto label_15cd48;
        case 0x15cd4cu: goto label_15cd4c;
        case 0x15cd50u: goto label_15cd50;
        case 0x15cd54u: goto label_15cd54;
        case 0x15cd58u: goto label_15cd58;
        case 0x15cd5cu: goto label_15cd5c;
        case 0x15cd60u: goto label_15cd60;
        case 0x15cd64u: goto label_15cd64;
        case 0x15cd68u: goto label_15cd68;
        case 0x15cd6cu: goto label_15cd6c;
        case 0x15cd70u: goto label_15cd70;
        case 0x15cd74u: goto label_15cd74;
        case 0x15cd78u: goto label_15cd78;
        case 0x15cd7cu: goto label_15cd7c;
        case 0x15cd80u: goto label_15cd80;
        case 0x15cd84u: goto label_15cd84;
        case 0x15cd88u: goto label_15cd88;
        case 0x15cd8cu: goto label_15cd8c;
        case 0x15cd90u: goto label_15cd90;
        case 0x15cd94u: goto label_15cd94;
        case 0x15cd98u: goto label_15cd98;
        case 0x15cd9cu: goto label_15cd9c;
        case 0x15cda0u: goto label_15cda0;
        case 0x15cda4u: goto label_15cda4;
        case 0x15cda8u: goto label_15cda8;
        case 0x15cdacu: goto label_15cdac;
        case 0x15cdb0u: goto label_15cdb0;
        case 0x15cdb4u: goto label_15cdb4;
        case 0x15cdb8u: goto label_15cdb8;
        case 0x15cdbcu: goto label_15cdbc;
        case 0x15cdc0u: goto label_15cdc0;
        case 0x15cdc4u: goto label_15cdc4;
        case 0x15cdc8u: goto label_15cdc8;
        case 0x15cdccu: goto label_15cdcc;
        case 0x15cdd0u: goto label_15cdd0;
        case 0x15cdd4u: goto label_15cdd4;
        case 0x15cdd8u: goto label_15cdd8;
        case 0x15cddcu: goto label_15cddc;
        case 0x15cde0u: goto label_15cde0;
        case 0x15cde4u: goto label_15cde4;
        case 0x15cde8u: goto label_15cde8;
        case 0x15cdecu: goto label_15cdec;
        case 0x15cdf0u: goto label_15cdf0;
        case 0x15cdf4u: goto label_15cdf4;
        case 0x15cdf8u: goto label_15cdf8;
        case 0x15cdfcu: goto label_15cdfc;
        case 0x15ce00u: goto label_15ce00;
        case 0x15ce04u: goto label_15ce04;
        case 0x15ce08u: goto label_15ce08;
        case 0x15ce0cu: goto label_15ce0c;
        case 0x15ce10u: goto label_15ce10;
        case 0x15ce14u: goto label_15ce14;
        case 0x15ce18u: goto label_15ce18;
        case 0x15ce1cu: goto label_15ce1c;
        case 0x15ce20u: goto label_15ce20;
        case 0x15ce24u: goto label_15ce24;
        case 0x15ce28u: goto label_15ce28;
        case 0x15ce2cu: goto label_15ce2c;
        case 0x15ce30u: goto label_15ce30;
        case 0x15ce34u: goto label_15ce34;
        case 0x15ce38u: goto label_15ce38;
        case 0x15ce3cu: goto label_15ce3c;
        case 0x15ce40u: goto label_15ce40;
        case 0x15ce44u: goto label_15ce44;
        case 0x15ce48u: goto label_15ce48;
        case 0x15ce4cu: goto label_15ce4c;
        case 0x15ce50u: goto label_15ce50;
        case 0x15ce54u: goto label_15ce54;
        case 0x15ce58u: goto label_15ce58;
        case 0x15ce5cu: goto label_15ce5c;
        case 0x15ce60u: goto label_15ce60;
        case 0x15ce64u: goto label_15ce64;
        case 0x15ce68u: goto label_15ce68;
        case 0x15ce6cu: goto label_15ce6c;
        case 0x15ce70u: goto label_15ce70;
        case 0x15ce74u: goto label_15ce74;
        case 0x15ce78u: goto label_15ce78;
        case 0x15ce7cu: goto label_15ce7c;
        case 0x15ce80u: goto label_15ce80;
        case 0x15ce84u: goto label_15ce84;
        case 0x15ce88u: goto label_15ce88;
        case 0x15ce8cu: goto label_15ce8c;
        case 0x15ce90u: goto label_15ce90;
        case 0x15ce94u: goto label_15ce94;
        case 0x15ce98u: goto label_15ce98;
        case 0x15ce9cu: goto label_15ce9c;
        case 0x15cea0u: goto label_15cea0;
        case 0x15cea4u: goto label_15cea4;
        case 0x15cea8u: goto label_15cea8;
        case 0x15ceacu: goto label_15ceac;
        case 0x15ceb0u: goto label_15ceb0;
        case 0x15ceb4u: goto label_15ceb4;
        case 0x15ceb8u: goto label_15ceb8;
        case 0x15cebcu: goto label_15cebc;
        case 0x15cec0u: goto label_15cec0;
        case 0x15cec4u: goto label_15cec4;
        case 0x15cec8u: goto label_15cec8;
        case 0x15ceccu: goto label_15cecc;
        case 0x15ced0u: goto label_15ced0;
        case 0x15ced4u: goto label_15ced4;
        case 0x15ced8u: goto label_15ced8;
        case 0x15cedcu: goto label_15cedc;
        case 0x15cee0u: goto label_15cee0;
        case 0x15cee4u: goto label_15cee4;
        case 0x15cee8u: goto label_15cee8;
        case 0x15ceecu: goto label_15ceec;
        case 0x15cef0u: goto label_15cef0;
        case 0x15cef4u: goto label_15cef4;
        case 0x15cef8u: goto label_15cef8;
        case 0x15cefcu: goto label_15cefc;
        case 0x15cf00u: goto label_15cf00;
        case 0x15cf04u: goto label_15cf04;
        case 0x15cf08u: goto label_15cf08;
        case 0x15cf0cu: goto label_15cf0c;
        case 0x15cf10u: goto label_15cf10;
        case 0x15cf14u: goto label_15cf14;
        case 0x15cf18u: goto label_15cf18;
        case 0x15cf1cu: goto label_15cf1c;
        case 0x15cf20u: goto label_15cf20;
        case 0x15cf24u: goto label_15cf24;
        case 0x15cf28u: goto label_15cf28;
        case 0x15cf2cu: goto label_15cf2c;
        case 0x15cf30u: goto label_15cf30;
        case 0x15cf34u: goto label_15cf34;
        case 0x15cf38u: goto label_15cf38;
        case 0x15cf3cu: goto label_15cf3c;
        case 0x15cf40u: goto label_15cf40;
        case 0x15cf44u: goto label_15cf44;
        case 0x15cf48u: goto label_15cf48;
        case 0x15cf4cu: goto label_15cf4c;
        case 0x15cf50u: goto label_15cf50;
        case 0x15cf54u: goto label_15cf54;
        case 0x15cf58u: goto label_15cf58;
        case 0x15cf5cu: goto label_15cf5c;
        case 0x15cf60u: goto label_15cf60;
        case 0x15cf64u: goto label_15cf64;
        case 0x15cf68u: goto label_15cf68;
        case 0x15cf6cu: goto label_15cf6c;
        case 0x15cf70u: goto label_15cf70;
        case 0x15cf74u: goto label_15cf74;
        case 0x15cf78u: goto label_15cf78;
        case 0x15cf7cu: goto label_15cf7c;
        case 0x15cf80u: goto label_15cf80;
        case 0x15cf84u: goto label_15cf84;
        default: break;
    }

    ctx->pc = 0x15c970u;

label_15c970:
    // 0x15c970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15c970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_15c974:
    // 0x15c974: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15c974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_15c978:
    // 0x15c978: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15c978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15c97c:
    // 0x15c97c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15c97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_15c980:
    // 0x15c980: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15c980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15c984:
    // 0x15c984: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x15c984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_15c988:
    // 0x15c988: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x15c988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_15c98c:
    // 0x15c98c: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
label_15c990:
    if (ctx->pc == 0x15C990u) {
        ctx->pc = 0x15C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C98Cu;
        // 0x15c990: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C994u;
        goto label_15c994;
    }
    ctx->pc = 0x15C98Cu;
    {
        const bool branch_taken_0x15c98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C98Cu;
        // 0x15c990: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c98c) {
            ctx->pc = 0x15CB80u;
            goto label_15cb80;
        }
    }
    ctx->pc = 0x15C994u;
label_15c994:
    // 0x15c994: 0x1640002a  bnez        $s2, . + 4 + (0x2A << 2)
label_15c998:
    if (ctx->pc == 0x15C998u) {
        ctx->pc = 0x15C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C994u;
        // 0x15c998: 0x263000a0  addiu       $s0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C99Cu;
        goto label_15c99c;
    }
    ctx->pc = 0x15C994u;
    {
        const bool branch_taken_0x15c994 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C994u;
        // 0x15c998: 0x263000a0  addiu       $s0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c994) {
            ctx->pc = 0x15CA40u;
            goto label_15ca40;
        }
    }
    ctx->pc = 0x15C99Cu;
label_15c99c:
    // 0x15c99c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15c9a0:
    // 0x15c9a0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15c9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15c9a4:
    // 0x15c9a4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15c9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_15c9a8:
    // 0x15c9a8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15c9ac:
    if (ctx->pc == 0x15C9ACu) {
        ctx->pc = 0x15C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9A8u;
        // 0x15c9ac: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C9B0u;
        goto label_15c9b0;
    }
    ctx->pc = 0x15C9A8u;
    {
        const bool branch_taken_0x15c9a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9A8u;
        // 0x15c9ac: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c9a8) {
            ctx->pc = 0x15C9C8u;
            goto label_15c9c8;
        }
    }
    ctx->pc = 0x15C9B0u;
label_15c9b0:
    // 0x15c9b0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15c9b4:
    // 0x15c9b4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15c9b8:
    // 0x15c9b8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15c9b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15c9bc:
    // 0x15c9bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15c9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15c9c0:
    // 0x15c9c0: 0x60f809  jalr        $v1
label_15c9c4:
    if (ctx->pc == 0x15C9C4u) {
        ctx->pc = 0x15C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9C0u;
        // 0x15c9c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C9C8u;
        goto label_15c9c8;
    }
    ctx->pc = 0x15C9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C9C8u);
        ctx->pc = 0x15C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9C0u;
        // 0x15c9c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C9C0u, 0x15C9C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C9C8u;
label_15c9c8:
    // 0x15c9c8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15c9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15c9cc:
    // 0x15c9cc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15c9d0:
    if (ctx->pc == 0x15C9D0u) {
        ctx->pc = 0x15C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9CCu;
        // 0x15c9d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C9D4u;
        goto label_15c9d4;
    }
    ctx->pc = 0x15C9CCu;
    {
        const bool branch_taken_0x15c9cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9CCu;
        // 0x15c9d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c9cc) {
            ctx->pc = 0x15C9ECu;
            goto label_15c9ec;
        }
    }
    ctx->pc = 0x15C9D4u;
label_15c9d4:
    // 0x15c9d4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15c9d8:
    // 0x15c9d8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15c9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15c9dc:
    // 0x15c9dc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15c9dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15c9e0:
    // 0x15c9e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15c9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15c9e4:
    // 0x15c9e4: 0x60f809  jalr        $v1
label_15c9e8:
    if (ctx->pc == 0x15C9E8u) {
        ctx->pc = 0x15C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9E4u;
        // 0x15c9e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C9ECu;
        goto label_15c9ec;
    }
    ctx->pc = 0x15C9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C9ECu);
        ctx->pc = 0x15C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9E4u;
        // 0x15c9e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C9E4u, 0x15C9ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C9ECu;
label_15c9ec:
    // 0x15c9ec: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15c9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15c9f0:
    // 0x15c9f0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15c9f4:
    if (ctx->pc == 0x15C9F4u) {
        ctx->pc = 0x15C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9F0u;
        // 0x15c9f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C9F8u;
        goto label_15c9f8;
    }
    ctx->pc = 0x15C9F0u;
    {
        const bool branch_taken_0x15c9f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9F0u;
        // 0x15c9f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c9f0) {
            ctx->pc = 0x15CA10u;
            goto label_15ca10;
        }
    }
    ctx->pc = 0x15C9F8u;
label_15c9f8:
    // 0x15c9f8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15c9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15c9fc:
    // 0x15c9fc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15ca00:
    // 0x15ca00: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ca00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ca04:
    // 0x15ca04: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ca04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ca08:
    // 0x15ca08: 0x60f809  jalr        $v1
label_15ca0c:
    if (ctx->pc == 0x15CA0Cu) {
        ctx->pc = 0x15CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA08u;
        // 0x15ca0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA10u;
        goto label_15ca10;
    }
    ctx->pc = 0x15CA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CA10u);
        ctx->pc = 0x15CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA08u;
        // 0x15ca0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CA08u, 0x15CA10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CA10u;
label_15ca10:
    // 0x15ca10: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15ca10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15ca14:
    // 0x15ca14: 0x10c0005a  beqz        $a2, . + 4 + (0x5A << 2)
label_15ca18:
    if (ctx->pc == 0x15CA18u) {
        ctx->pc = 0x15CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA14u;
        // 0x15ca18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA1Cu;
        goto label_15ca1c;
    }
    ctx->pc = 0x15CA14u;
    {
        const bool branch_taken_0x15ca14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA14u;
        // 0x15ca18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca14) {
            ctx->pc = 0x15CB80u;
            goto label_15cb80;
        }
    }
    ctx->pc = 0x15CA1Cu;
label_15ca1c:
    // 0x15ca1c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15ca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15ca20:
    // 0x15ca20: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15ca24:
    // 0x15ca24: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ca24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ca28:
    // 0x15ca28: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ca28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ca2c:
    // 0x15ca2c: 0x60f809  jalr        $v1
label_15ca30:
    if (ctx->pc == 0x15CA30u) {
        ctx->pc = 0x15CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA2Cu;
        // 0x15ca30: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA34u;
        goto label_15ca34;
    }
    ctx->pc = 0x15CA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CA34u);
        ctx->pc = 0x15CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA2Cu;
        // 0x15ca30: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CA2Cu, 0x15CA34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CA34u;
label_15ca34:
    // 0x15ca34: 0x10000053  b           . + 4 + (0x53 << 2)
label_15ca38:
    if (ctx->pc == 0x15CA38u) {
        ctx->pc = 0x15CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA34u;
        // 0x15ca38: 0x8e2200e4  lw          $v0, 0xE4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA3Cu;
        goto label_15ca3c;
    }
    ctx->pc = 0x15CA34u;
    {
        const bool branch_taken_0x15ca34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA34u;
        // 0x15ca38: 0x8e2200e4  lw          $v0, 0xE4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca34) {
            ctx->pc = 0x15CB84u;
            goto label_15cb84;
        }
    }
    ctx->pc = 0x15CA3Cu;
label_15ca3c:
    // 0x15ca3c: 0x0  nop
    ctx->pc = 0x15ca3cu;
    // NOP
label_15ca40:
    // 0x15ca40: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15ca40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15ca44:
    // 0x15ca44: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x15ca44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_15ca48:
    // 0x15ca48: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15ca48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15ca4c:
    // 0x15ca4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15ca4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_15ca50:
    // 0x15ca50: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15ca54:
    if (ctx->pc == 0x15CA54u) {
        ctx->pc = 0x15CA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA50u;
        // 0x15ca54: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA58u;
        goto label_15ca58;
    }
    ctx->pc = 0x15CA50u;
    {
        const bool branch_taken_0x15ca50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA50u;
        // 0x15ca54: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca50) {
            ctx->pc = 0x15CA74u;
            goto label_15ca74;
        }
    }
    ctx->pc = 0x15CA58u;
label_15ca58:
    // 0x15ca58: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15ca5c:
    // 0x15ca5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15ca5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ca60:
    // 0x15ca60: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15ca64:
    // 0x15ca64: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ca64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ca68:
    // 0x15ca68: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ca68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ca6c:
    // 0x15ca6c: 0x60f809  jalr        $v1
label_15ca70:
    if (ctx->pc == 0x15CA70u) {
        ctx->pc = 0x15CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA6Cu;
        // 0x15ca70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA74u;
        goto label_15ca74;
    }
    ctx->pc = 0x15CA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CA74u);
        ctx->pc = 0x15CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA6Cu;
        // 0x15ca70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CA6Cu, 0x15CA74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CA74u;
label_15ca74:
    // 0x15ca74: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15ca74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15ca78:
    // 0x15ca78: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15ca7c:
    if (ctx->pc == 0x15CA7Cu) {
        ctx->pc = 0x15CA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA78u;
        // 0x15ca7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA80u;
        goto label_15ca80;
    }
    ctx->pc = 0x15CA78u;
    {
        const bool branch_taken_0x15ca78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA78u;
        // 0x15ca7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca78) {
            ctx->pc = 0x15CA98u;
            goto label_15ca98;
        }
    }
    ctx->pc = 0x15CA80u;
label_15ca80:
    // 0x15ca80: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15ca80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15ca84:
    // 0x15ca84: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15ca84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15ca88:
    // 0x15ca88: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ca88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ca8c:
    // 0x15ca8c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ca8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ca90:
    // 0x15ca90: 0x60f809  jalr        $v1
label_15ca94:
    if (ctx->pc == 0x15CA94u) {
        ctx->pc = 0x15CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA90u;
        // 0x15ca94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA98u;
        goto label_15ca98;
    }
    ctx->pc = 0x15CA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CA98u);
        ctx->pc = 0x15CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA90u;
        // 0x15ca94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CA90u, 0x15CA98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CA98u;
label_15ca98:
    // 0x15ca98: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x15ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15ca9c:
    // 0x15ca9c: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_15caa0:
    if (ctx->pc == 0x15CAA0u) {
        ctx->pc = 0x15CAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA9Cu;
        // 0x15caa0: 0x8e2200e4  lw          $v0, 0xE4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CAA4u;
        goto label_15caa4;
    }
    ctx->pc = 0x15CA9Cu;
    {
        const bool branch_taken_0x15ca9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ca9c) {
            ctx->pc = 0x15CAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CA9Cu;
            // 0x15caa0: 0x8e2200e4  lw          $v0, 0xE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CB84u;
            goto label_15cb84;
        }
    }
    ctx->pc = 0x15CAA4u;
label_15caa4:
    // 0x15caa4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15caa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15caa8:
    // 0x15caa8: 0x50c00036  beql        $a2, $zero, . + 4 + (0x36 << 2)
label_15caac:
    if (ctx->pc == 0x15CAACu) {
        ctx->pc = 0x15CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAA8u;
        // 0x15caac: 0x8e2200e4  lw          $v0, 0xE4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CAB0u;
        goto label_15cab0;
    }
    ctx->pc = 0x15CAA8u;
    {
        const bool branch_taken_0x15caa8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15caa8) {
            ctx->pc = 0x15CAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CAA8u;
            // 0x15caac: 0x8e2200e4  lw          $v0, 0xE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CB84u;
            goto label_15cb84;
        }
    }
    ctx->pc = 0x15CAB0u;
label_15cab0:
    // 0x15cab0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15cab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15cab4:
    // 0x15cab4: 0x313c3  sra         $v0, $v1, 15
    ctx->pc = 0x15cab4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 15));
label_15cab8:
    // 0x15cab8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15cab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15cabc:
    // 0x15cabc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_15cac0:
    if (ctx->pc == 0x15CAC0u) {
        ctx->pc = 0x15CAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CABCu;
        // 0x15cac0: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CAC4u;
        goto label_15cac4;
    }
    ctx->pc = 0x15CABCu;
    {
        const bool branch_taken_0x15cabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CABCu;
        // 0x15cac0: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cabc) {
            ctx->pc = 0x15CB20u;
            goto label_15cb20;
        }
    }
    ctx->pc = 0x15CAC4u;
label_15cac4:
    // 0x15cac4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15cac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15cac8:
    // 0x15cac8: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15cacc:
    if (ctx->pc == 0x15CACCu) {
        ctx->pc = 0x15CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAC8u;
        // 0x15cacc: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CAD0u;
        goto label_15cad0;
    }
    ctx->pc = 0x15CAC8u;
    {
        const bool branch_taken_0x15cac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cac8) {
            ctx->pc = 0x15CACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CAC8u;
            // 0x15cacc: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CB14u;
            goto label_15cb14;
        }
    }
    ctx->pc = 0x15CAD0u;
label_15cad0:
    // 0x15cad0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cad4:
    // 0x15cad4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15cad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15cad8:
    // 0x15cad8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cadc:
    // 0x15cadc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cadcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cae0:
    // 0x15cae0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cae4:
    // 0x15cae4: 0x60f809  jalr        $v1
label_15cae8:
    if (ctx->pc == 0x15CAE8u) {
        ctx->pc = 0x15CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAE4u;
        // 0x15cae8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CAECu;
        goto label_15caec;
    }
    ctx->pc = 0x15CAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CAECu);
        ctx->pc = 0x15CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAE4u;
        // 0x15cae8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CAE4u, 0x15CAECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CAECu;
label_15caec:
    // 0x15caec: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15caecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15caf0:
    // 0x15caf0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15caf4:
    if (ctx->pc == 0x15CAF4u) {
        ctx->pc = 0x15CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAF0u;
        // 0x15caf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CAF8u;
        goto label_15caf8;
    }
    ctx->pc = 0x15CAF0u;
    {
        const bool branch_taken_0x15caf0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAF0u;
        // 0x15caf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15caf0) {
            ctx->pc = 0x15CB10u;
            goto label_15cb10;
        }
    }
    ctx->pc = 0x15CAF8u;
label_15caf8:
    // 0x15caf8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cafc:
    // 0x15cafc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cb00:
    // 0x15cb00: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cb00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cb04:
    // 0x15cb04: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cb08:
    // 0x15cb08: 0x60f809  jalr        $v1
label_15cb0c:
    if (ctx->pc == 0x15CB0Cu) {
        ctx->pc = 0x15CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB08u;
        // 0x15cb0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB10u;
        goto label_15cb10;
    }
    ctx->pc = 0x15CB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CB10u);
        ctx->pc = 0x15CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB08u;
        // 0x15cb0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CB08u, 0x15CB10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CB10u;
label_15cb10:
    // 0x15cb10: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15cb14:
    // 0x15cb14: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15cb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_15cb18:
    // 0x15cb18: 0x10000019  b           . + 4 + (0x19 << 2)
label_15cb1c:
    if (ctx->pc == 0x15CB1Cu) {
        ctx->pc = 0x15CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB18u;
        // 0x15cb1c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB20u;
        goto label_15cb20;
    }
    ctx->pc = 0x15CB18u;
    {
        const bool branch_taken_0x15cb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB18u;
        // 0x15cb1c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb18) {
            ctx->pc = 0x15CB80u;
            goto label_15cb80;
        }
    }
    ctx->pc = 0x15CB20u;
label_15cb20:
    // 0x15cb20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15cb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15cb24:
    // 0x15cb24: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15cb28:
    if (ctx->pc == 0x15CB28u) {
        ctx->pc = 0x15CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB24u;
        // 0x15cb28: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB2Cu;
        goto label_15cb2c;
    }
    ctx->pc = 0x15CB24u;
    {
        const bool branch_taken_0x15cb24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cb24) {
            ctx->pc = 0x15CB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CB24u;
            // 0x15cb28: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CB70u;
            goto label_15cb70;
        }
    }
    ctx->pc = 0x15CB2Cu;
label_15cb2c:
    // 0x15cb2c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cb30:
    // 0x15cb30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15cb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cb34:
    // 0x15cb34: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cb38:
    // 0x15cb38: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cb38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cb3c:
    // 0x15cb3c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cb40:
    // 0x15cb40: 0x60f809  jalr        $v1
label_15cb44:
    if (ctx->pc == 0x15CB44u) {
        ctx->pc = 0x15CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB40u;
        // 0x15cb44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB48u;
        goto label_15cb48;
    }
    ctx->pc = 0x15CB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CB48u);
        ctx->pc = 0x15CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB40u;
        // 0x15cb44: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CB40u, 0x15CB48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CB48u;
label_15cb48:
    // 0x15cb48: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15cb48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15cb4c:
    // 0x15cb4c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15cb50:
    if (ctx->pc == 0x15CB50u) {
        ctx->pc = 0x15CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB4Cu;
        // 0x15cb50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB54u;
        goto label_15cb54;
    }
    ctx->pc = 0x15CB4Cu;
    {
        const bool branch_taken_0x15cb4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB4Cu;
        // 0x15cb50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb4c) {
            ctx->pc = 0x15CB6Cu;
            goto label_15cb6c;
        }
    }
    ctx->pc = 0x15CB54u;
label_15cb54:
    // 0x15cb54: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cb58:
    // 0x15cb58: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cb5c:
    // 0x15cb5c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cb5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cb60:
    // 0x15cb60: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cb64:
    // 0x15cb64: 0x60f809  jalr        $v1
label_15cb68:
    if (ctx->pc == 0x15CB68u) {
        ctx->pc = 0x15CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB64u;
        // 0x15cb68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB6Cu;
        goto label_15cb6c;
    }
    ctx->pc = 0x15CB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CB6Cu);
        ctx->pc = 0x15CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB64u;
        // 0x15cb68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CB64u, 0x15CB6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CB6Cu;
label_15cb6c:
    // 0x15cb6c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15cb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15cb70:
    // 0x15cb70: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x15cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_15cb74:
    // 0x15cb74: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x15cb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_15cb78:
    // 0x15cb78: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x15cb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15cb7c:
    // 0x15cb7c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x15cb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_15cb80:
    // 0x15cb80: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x15cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_15cb84:
    // 0x15cb84: 0x5040007d  beql        $v0, $zero, . + 4 + (0x7D << 2)
label_15cb88:
    if (ctx->pc == 0x15CB88u) {
        ctx->pc = 0x15CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB84u;
        // 0x15cb88: 0x8e220124  lw          $v0, 0x124($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB8Cu;
        goto label_15cb8c;
    }
    ctx->pc = 0x15CB84u;
    {
        const bool branch_taken_0x15cb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cb84) {
            ctx->pc = 0x15CB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CB84u;
            // 0x15cb88: 0x8e220124  lw          $v0, 0x124($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CD7Cu;
            goto label_15cd7c;
        }
    }
    ctx->pc = 0x15CB8Cu;
label_15cb8c:
    // 0x15cb8c: 0x1640002a  bnez        $s2, . + 4 + (0x2A << 2)
label_15cb90:
    if (ctx->pc == 0x15CB90u) {
        ctx->pc = 0x15CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB8Cu;
        // 0x15cb90: 0x263000e0  addiu       $s0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB94u;
        goto label_15cb94;
    }
    ctx->pc = 0x15CB8Cu;
    {
        const bool branch_taken_0x15cb8c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB8Cu;
        // 0x15cb90: 0x263000e0  addiu       $s0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb8c) {
            ctx->pc = 0x15CC38u;
            goto label_15cc38;
        }
    }
    ctx->pc = 0x15CB94u;
label_15cb94:
    // 0x15cb94: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15cb98:
    // 0x15cb98: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15cb98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15cb9c:
    // 0x15cb9c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15cb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_15cba0:
    // 0x15cba0: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15cba4:
    if (ctx->pc == 0x15CBA4u) {
        ctx->pc = 0x15CBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBA0u;
        // 0x15cba4: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CBA8u;
        goto label_15cba8;
    }
    ctx->pc = 0x15CBA0u;
    {
        const bool branch_taken_0x15cba0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBA0u;
        // 0x15cba4: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cba0) {
            ctx->pc = 0x15CBC4u;
            goto label_15cbc4;
        }
    }
    ctx->pc = 0x15CBA8u;
label_15cba8:
    // 0x15cba8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cbac:
    // 0x15cbac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15cbacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cbb0:
    // 0x15cbb0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cbb4:
    // 0x15cbb4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cbb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cbb8:
    // 0x15cbb8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cbbc:
    // 0x15cbbc: 0x60f809  jalr        $v1
label_15cbc0:
    if (ctx->pc == 0x15CBC0u) {
        ctx->pc = 0x15CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBBCu;
        // 0x15cbc0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CBC4u;
        goto label_15cbc4;
    }
    ctx->pc = 0x15CBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CBC4u);
        ctx->pc = 0x15CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBBCu;
        // 0x15cbc0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CBBCu, 0x15CBC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CBC4u;
label_15cbc4:
    // 0x15cbc4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15cbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15cbc8:
    // 0x15cbc8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15cbcc:
    if (ctx->pc == 0x15CBCCu) {
        ctx->pc = 0x15CBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBC8u;
        // 0x15cbcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CBD0u;
        goto label_15cbd0;
    }
    ctx->pc = 0x15CBC8u;
    {
        const bool branch_taken_0x15cbc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBC8u;
        // 0x15cbcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cbc8) {
            ctx->pc = 0x15CBE8u;
            goto label_15cbe8;
        }
    }
    ctx->pc = 0x15CBD0u;
label_15cbd0:
    // 0x15cbd0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cbd4:
    // 0x15cbd4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cbd8:
    // 0x15cbd8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cbd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cbdc:
    // 0x15cbdc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cbe0:
    // 0x15cbe0: 0x60f809  jalr        $v1
label_15cbe4:
    if (ctx->pc == 0x15CBE4u) {
        ctx->pc = 0x15CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBE0u;
        // 0x15cbe4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CBE8u;
        goto label_15cbe8;
    }
    ctx->pc = 0x15CBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CBE8u);
        ctx->pc = 0x15CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBE0u;
        // 0x15cbe4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CBE0u, 0x15CBE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CBE8u;
label_15cbe8:
    // 0x15cbe8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15cbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15cbec:
    // 0x15cbec: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15cbf0:
    if (ctx->pc == 0x15CBF0u) {
        ctx->pc = 0x15CBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBECu;
        // 0x15cbf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CBF4u;
        goto label_15cbf4;
    }
    ctx->pc = 0x15CBECu;
    {
        const bool branch_taken_0x15cbec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBECu;
        // 0x15cbf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cbec) {
            ctx->pc = 0x15CC0Cu;
            goto label_15cc0c;
        }
    }
    ctx->pc = 0x15CBF4u;
label_15cbf4:
    // 0x15cbf4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cbf8:
    // 0x15cbf8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cbfc:
    // 0x15cbfc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cbfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cc00:
    // 0x15cc00: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cc04:
    // 0x15cc04: 0x60f809  jalr        $v1
label_15cc08:
    if (ctx->pc == 0x15CC08u) {
        ctx->pc = 0x15CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC04u;
        // 0x15cc08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC0Cu;
        goto label_15cc0c;
    }
    ctx->pc = 0x15CC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CC0Cu);
        ctx->pc = 0x15CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC04u;
        // 0x15cc08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CC04u, 0x15CC0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CC0Cu;
label_15cc0c:
    // 0x15cc0c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15cc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15cc10:
    // 0x15cc10: 0x10c00059  beqz        $a2, . + 4 + (0x59 << 2)
label_15cc14:
    if (ctx->pc == 0x15CC14u) {
        ctx->pc = 0x15CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC10u;
        // 0x15cc14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC18u;
        goto label_15cc18;
    }
    ctx->pc = 0x15CC10u;
    {
        const bool branch_taken_0x15cc10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC10u;
        // 0x15cc14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc10) {
            ctx->pc = 0x15CD78u;
            goto label_15cd78;
        }
    }
    ctx->pc = 0x15CC18u;
label_15cc18:
    // 0x15cc18: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cc1c:
    // 0x15cc1c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cc20:
    // 0x15cc20: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cc20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cc24:
    // 0x15cc24: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cc28:
    // 0x15cc28: 0x60f809  jalr        $v1
label_15cc2c:
    if (ctx->pc == 0x15CC2Cu) {
        ctx->pc = 0x15CC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC28u;
        // 0x15cc2c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC30u;
        goto label_15cc30;
    }
    ctx->pc = 0x15CC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CC30u);
        ctx->pc = 0x15CC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC28u;
        // 0x15cc2c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CC28u, 0x15CC30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CC30u;
label_15cc30:
    // 0x15cc30: 0x10000052  b           . + 4 + (0x52 << 2)
label_15cc34:
    if (ctx->pc == 0x15CC34u) {
        ctx->pc = 0x15CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC30u;
        // 0x15cc34: 0x8e220124  lw          $v0, 0x124($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC38u;
        goto label_15cc38;
    }
    ctx->pc = 0x15CC30u;
    {
        const bool branch_taken_0x15cc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC30u;
        // 0x15cc34: 0x8e220124  lw          $v0, 0x124($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc30) {
            ctx->pc = 0x15CD7Cu;
            goto label_15cd7c;
        }
    }
    ctx->pc = 0x15CC38u;
label_15cc38:
    // 0x15cc38: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15cc3c:
    // 0x15cc3c: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x15cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_15cc40:
    // 0x15cc40: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15cc40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15cc44:
    // 0x15cc44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15cc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_15cc48:
    // 0x15cc48: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15cc4c:
    if (ctx->pc == 0x15CC4Cu) {
        ctx->pc = 0x15CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC48u;
        // 0x15cc4c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC50u;
        goto label_15cc50;
    }
    ctx->pc = 0x15CC48u;
    {
        const bool branch_taken_0x15cc48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC48u;
        // 0x15cc4c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc48) {
            ctx->pc = 0x15CC6Cu;
            goto label_15cc6c;
        }
    }
    ctx->pc = 0x15CC50u;
label_15cc50:
    // 0x15cc50: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cc54:
    // 0x15cc54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15cc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15cc58:
    // 0x15cc58: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cc5c:
    // 0x15cc5c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cc5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cc60:
    // 0x15cc60: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cc64:
    // 0x15cc64: 0x60f809  jalr        $v1
label_15cc68:
    if (ctx->pc == 0x15CC68u) {
        ctx->pc = 0x15CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC64u;
        // 0x15cc68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC6Cu;
        goto label_15cc6c;
    }
    ctx->pc = 0x15CC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CC6Cu);
        ctx->pc = 0x15CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC64u;
        // 0x15cc68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CC64u, 0x15CC6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CC6Cu;
label_15cc6c:
    // 0x15cc6c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15cc6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15cc70:
    // 0x15cc70: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15cc74:
    if (ctx->pc == 0x15CC74u) {
        ctx->pc = 0x15CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC70u;
        // 0x15cc74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC78u;
        goto label_15cc78;
    }
    ctx->pc = 0x15CC70u;
    {
        const bool branch_taken_0x15cc70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC70u;
        // 0x15cc74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc70) {
            ctx->pc = 0x15CC90u;
            goto label_15cc90;
        }
    }
    ctx->pc = 0x15CC78u;
label_15cc78:
    // 0x15cc78: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cc7c:
    // 0x15cc7c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cc80:
    // 0x15cc80: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cc80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cc84:
    // 0x15cc84: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cc88:
    // 0x15cc88: 0x60f809  jalr        $v1
label_15cc8c:
    if (ctx->pc == 0x15CC8Cu) {
        ctx->pc = 0x15CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC88u;
        // 0x15cc8c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC90u;
        goto label_15cc90;
    }
    ctx->pc = 0x15CC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CC90u);
        ctx->pc = 0x15CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC88u;
        // 0x15cc8c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CC88u, 0x15CC90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CC90u;
label_15cc90:
    // 0x15cc90: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x15cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15cc94:
    // 0x15cc94: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_15cc98:
    if (ctx->pc == 0x15CC98u) {
        ctx->pc = 0x15CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC94u;
        // 0x15cc98: 0x8e220124  lw          $v0, 0x124($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC9Cu;
        goto label_15cc9c;
    }
    ctx->pc = 0x15CC94u;
    {
        const bool branch_taken_0x15cc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cc94) {
            ctx->pc = 0x15CC98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CC94u;
            // 0x15cc98: 0x8e220124  lw          $v0, 0x124($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CD7Cu;
            goto label_15cd7c;
        }
    }
    ctx->pc = 0x15CC9Cu;
label_15cc9c:
    // 0x15cc9c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15cc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15cca0:
    // 0x15cca0: 0x50c00036  beql        $a2, $zero, . + 4 + (0x36 << 2)
label_15cca4:
    if (ctx->pc == 0x15CCA4u) {
        ctx->pc = 0x15CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCA0u;
        // 0x15cca4: 0x8e220124  lw          $v0, 0x124($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CCA8u;
        goto label_15cca8;
    }
    ctx->pc = 0x15CCA0u;
    {
        const bool branch_taken_0x15cca0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cca0) {
            ctx->pc = 0x15CCA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CCA0u;
            // 0x15cca4: 0x8e220124  lw          $v0, 0x124($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CD7Cu;
            goto label_15cd7c;
        }
    }
    ctx->pc = 0x15CCA8u;
label_15cca8:
    // 0x15cca8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15cca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15ccac:
    // 0x15ccac: 0x313c3  sra         $v0, $v1, 15
    ctx->pc = 0x15ccacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 15));
label_15ccb0:
    // 0x15ccb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15ccb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15ccb4:
    // 0x15ccb4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_15ccb8:
    if (ctx->pc == 0x15CCB8u) {
        ctx->pc = 0x15CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCB4u;
        // 0x15ccb8: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CCBCu;
        goto label_15ccbc;
    }
    ctx->pc = 0x15CCB4u;
    {
        const bool branch_taken_0x15ccb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCB4u;
        // 0x15ccb8: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ccb4) {
            ctx->pc = 0x15CD18u;
            goto label_15cd18;
        }
    }
    ctx->pc = 0x15CCBCu;
label_15ccbc:
    // 0x15ccbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15ccbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15ccc0:
    // 0x15ccc0: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15ccc4:
    if (ctx->pc == 0x15CCC4u) {
        ctx->pc = 0x15CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCC0u;
        // 0x15ccc4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CCC8u;
        goto label_15ccc8;
    }
    ctx->pc = 0x15CCC0u;
    {
        const bool branch_taken_0x15ccc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ccc0) {
            ctx->pc = 0x15CCC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CCC0u;
            // 0x15ccc4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CD0Cu;
            goto label_15cd0c;
        }
    }
    ctx->pc = 0x15CCC8u;
label_15ccc8:
    // 0x15ccc8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15ccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cccc:
    // 0x15cccc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15ccccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ccd0:
    // 0x15ccd0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15ccd4:
    // 0x15ccd4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ccd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ccd8:
    // 0x15ccd8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ccdc:
    // 0x15ccdc: 0x60f809  jalr        $v1
label_15cce0:
    if (ctx->pc == 0x15CCE0u) {
        ctx->pc = 0x15CCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCDCu;
        // 0x15cce0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CCE4u;
        goto label_15cce4;
    }
    ctx->pc = 0x15CCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CCE4u);
        ctx->pc = 0x15CCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCDCu;
        // 0x15cce0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CCDCu, 0x15CCE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CCE4u;
label_15cce4:
    // 0x15cce4: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15cce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15cce8:
    // 0x15cce8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15ccec:
    if (ctx->pc == 0x15CCECu) {
        ctx->pc = 0x15CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCE8u;
        // 0x15ccec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CCF0u;
        goto label_15ccf0;
    }
    ctx->pc = 0x15CCE8u;
    {
        const bool branch_taken_0x15cce8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCE8u;
        // 0x15ccec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cce8) {
            ctx->pc = 0x15CD08u;
            goto label_15cd08;
        }
    }
    ctx->pc = 0x15CCF0u;
label_15ccf0:
    // 0x15ccf0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15ccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15ccf4:
    // 0x15ccf4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15ccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15ccf8:
    // 0x15ccf8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ccf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ccfc:
    // 0x15ccfc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cd00:
    // 0x15cd00: 0x60f809  jalr        $v1
label_15cd04:
    if (ctx->pc == 0x15CD04u) {
        ctx->pc = 0x15CD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD00u;
        // 0x15cd04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD08u;
        goto label_15cd08;
    }
    ctx->pc = 0x15CD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CD08u);
        ctx->pc = 0x15CD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD00u;
        // 0x15cd04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CD00u, 0x15CD08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CD08u;
label_15cd08:
    // 0x15cd08: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15cd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15cd0c:
    // 0x15cd0c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15cd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_15cd10:
    // 0x15cd10: 0x10000019  b           . + 4 + (0x19 << 2)
label_15cd14:
    if (ctx->pc == 0x15CD14u) {
        ctx->pc = 0x15CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD10u;
        // 0x15cd14: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD18u;
        goto label_15cd18;
    }
    ctx->pc = 0x15CD10u;
    {
        const bool branch_taken_0x15cd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD10u;
        // 0x15cd14: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd10) {
            ctx->pc = 0x15CD78u;
            goto label_15cd78;
        }
    }
    ctx->pc = 0x15CD18u;
label_15cd18:
    // 0x15cd18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15cd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15cd1c:
    // 0x15cd1c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15cd20:
    if (ctx->pc == 0x15CD20u) {
        ctx->pc = 0x15CD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD1Cu;
        // 0x15cd20: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD24u;
        goto label_15cd24;
    }
    ctx->pc = 0x15CD1Cu;
    {
        const bool branch_taken_0x15cd1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cd1c) {
            ctx->pc = 0x15CD20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CD1Cu;
            // 0x15cd20: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CD68u;
            goto label_15cd68;
        }
    }
    ctx->pc = 0x15CD24u;
label_15cd24:
    // 0x15cd24: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cd28:
    // 0x15cd28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15cd28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cd2c:
    // 0x15cd2c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cd30:
    // 0x15cd30: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cd30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cd34:
    // 0x15cd34: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cd38:
    // 0x15cd38: 0x60f809  jalr        $v1
label_15cd3c:
    if (ctx->pc == 0x15CD3Cu) {
        ctx->pc = 0x15CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD38u;
        // 0x15cd3c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD40u;
        goto label_15cd40;
    }
    ctx->pc = 0x15CD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CD40u);
        ctx->pc = 0x15CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD38u;
        // 0x15cd3c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CD38u, 0x15CD40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CD40u;
label_15cd40:
    // 0x15cd40: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15cd40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15cd44:
    // 0x15cd44: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15cd48:
    if (ctx->pc == 0x15CD48u) {
        ctx->pc = 0x15CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD44u;
        // 0x15cd48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD4Cu;
        goto label_15cd4c;
    }
    ctx->pc = 0x15CD44u;
    {
        const bool branch_taken_0x15cd44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD44u;
        // 0x15cd48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd44) {
            ctx->pc = 0x15CD64u;
            goto label_15cd64;
        }
    }
    ctx->pc = 0x15CD4Cu;
label_15cd4c:
    // 0x15cd4c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cd50:
    // 0x15cd50: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cd54:
    // 0x15cd54: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cd54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cd58:
    // 0x15cd58: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cd5c:
    // 0x15cd5c: 0x60f809  jalr        $v1
label_15cd60:
    if (ctx->pc == 0x15CD60u) {
        ctx->pc = 0x15CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD5Cu;
        // 0x15cd60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD64u;
        goto label_15cd64;
    }
    ctx->pc = 0x15CD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CD64u);
        ctx->pc = 0x15CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD5Cu;
        // 0x15cd60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CD5Cu, 0x15CD64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CD64u;
label_15cd64:
    // 0x15cd64: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15cd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15cd68:
    // 0x15cd68: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x15cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_15cd6c:
    // 0x15cd6c: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x15cd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_15cd70:
    // 0x15cd70: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x15cd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15cd74:
    // 0x15cd74: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x15cd74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_15cd78:
    // 0x15cd78: 0x8e220124  lw          $v0, 0x124($s1)
    ctx->pc = 0x15cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_15cd7c:
    // 0x15cd7c: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
label_15cd80:
    if (ctx->pc == 0x15CD80u) {
        ctx->pc = 0x15CD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD7Cu;
        // 0x15cd80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD84u;
        goto label_15cd84;
    }
    ctx->pc = 0x15CD7Cu;
    {
        const bool branch_taken_0x15cd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD7Cu;
        // 0x15cd80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd7c) {
            ctx->pc = 0x15CF74u;
            goto label_15cf74;
        }
    }
    ctx->pc = 0x15CD84u;
label_15cd84:
    // 0x15cd84: 0x1640002a  bnez        $s2, . + 4 + (0x2A << 2)
label_15cd88:
    if (ctx->pc == 0x15CD88u) {
        ctx->pc = 0x15CD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD84u;
        // 0x15cd88: 0x26300120  addiu       $s0, $s1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD8Cu;
        goto label_15cd8c;
    }
    ctx->pc = 0x15CD84u;
    {
        const bool branch_taken_0x15cd84 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD84u;
        // 0x15cd88: 0x26300120  addiu       $s0, $s1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd84) {
            ctx->pc = 0x15CE30u;
            goto label_15ce30;
        }
    }
    ctx->pc = 0x15CD8Cu;
label_15cd8c:
    // 0x15cd8c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15cd90:
    // 0x15cd90: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15cd90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15cd94:
    // 0x15cd94: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15cd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_15cd98:
    // 0x15cd98: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15cd9c:
    if (ctx->pc == 0x15CD9Cu) {
        ctx->pc = 0x15CD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD98u;
        // 0x15cd9c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CDA0u;
        goto label_15cda0;
    }
    ctx->pc = 0x15CD98u;
    {
        const bool branch_taken_0x15cd98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD98u;
        // 0x15cd9c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd98) {
            ctx->pc = 0x15CDBCu;
            goto label_15cdbc;
        }
    }
    ctx->pc = 0x15CDA0u;
label_15cda0:
    // 0x15cda0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cda4:
    // 0x15cda4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15cda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cda8:
    // 0x15cda8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cdac:
    // 0x15cdac: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cdacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cdb0:
    // 0x15cdb0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cdb4:
    // 0x15cdb4: 0x60f809  jalr        $v1
label_15cdb8:
    if (ctx->pc == 0x15CDB8u) {
        ctx->pc = 0x15CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDB4u;
        // 0x15cdb8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CDBCu;
        goto label_15cdbc;
    }
    ctx->pc = 0x15CDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CDBCu);
        ctx->pc = 0x15CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDB4u;
        // 0x15cdb8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CDB4u, 0x15CDBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CDBCu;
label_15cdbc:
    // 0x15cdbc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15cdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15cdc0:
    // 0x15cdc0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15cdc4:
    if (ctx->pc == 0x15CDC4u) {
        ctx->pc = 0x15CDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDC0u;
        // 0x15cdc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CDC8u;
        goto label_15cdc8;
    }
    ctx->pc = 0x15CDC0u;
    {
        const bool branch_taken_0x15cdc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDC0u;
        // 0x15cdc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cdc0) {
            ctx->pc = 0x15CDE0u;
            goto label_15cde0;
        }
    }
    ctx->pc = 0x15CDC8u;
label_15cdc8:
    // 0x15cdc8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cdcc:
    // 0x15cdcc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cdd0:
    // 0x15cdd0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cdd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cdd4:
    // 0x15cdd4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cdd8:
    // 0x15cdd8: 0x60f809  jalr        $v1
label_15cddc:
    if (ctx->pc == 0x15CDDCu) {
        ctx->pc = 0x15CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDD8u;
        // 0x15cddc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CDE0u;
        goto label_15cde0;
    }
    ctx->pc = 0x15CDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CDE0u);
        ctx->pc = 0x15CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDD8u;
        // 0x15cddc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CDD8u, 0x15CDE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CDE0u;
label_15cde0:
    // 0x15cde0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15cde0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15cde4:
    // 0x15cde4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15cde8:
    if (ctx->pc == 0x15CDE8u) {
        ctx->pc = 0x15CDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDE4u;
        // 0x15cde8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CDECu;
        goto label_15cdec;
    }
    ctx->pc = 0x15CDE4u;
    {
        const bool branch_taken_0x15cde4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDE4u;
        // 0x15cde8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cde4) {
            ctx->pc = 0x15CE04u;
            goto label_15ce04;
        }
    }
    ctx->pc = 0x15CDECu;
label_15cdec:
    // 0x15cdec: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cdf0:
    // 0x15cdf0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cdf4:
    // 0x15cdf4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cdf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cdf8:
    // 0x15cdf8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cdfc:
    // 0x15cdfc: 0x60f809  jalr        $v1
label_15ce00:
    if (ctx->pc == 0x15CE00u) {
        ctx->pc = 0x15CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDFCu;
        // 0x15ce00: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE04u;
        goto label_15ce04;
    }
    ctx->pc = 0x15CDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CE04u);
        ctx->pc = 0x15CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDFCu;
        // 0x15ce00: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CDFCu, 0x15CE04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CE04u;
label_15ce04:
    // 0x15ce04: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15ce04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15ce08:
    // 0x15ce08: 0x10c00059  beqz        $a2, . + 4 + (0x59 << 2)
label_15ce0c:
    if (ctx->pc == 0x15CE0Cu) {
        ctx->pc = 0x15CE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE08u;
        // 0x15ce0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE10u;
        goto label_15ce10;
    }
    ctx->pc = 0x15CE08u;
    {
        const bool branch_taken_0x15ce08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE08u;
        // 0x15ce0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce08) {
            ctx->pc = 0x15CF70u;
            goto label_15cf70;
        }
    }
    ctx->pc = 0x15CE10u;
label_15ce10:
    // 0x15ce10: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15ce14:
    // 0x15ce14: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15ce18:
    // 0x15ce18: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ce18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ce1c:
    // 0x15ce1c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ce20:
    // 0x15ce20: 0x60f809  jalr        $v1
label_15ce24:
    if (ctx->pc == 0x15CE24u) {
        ctx->pc = 0x15CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE20u;
        // 0x15ce24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE28u;
        goto label_15ce28;
    }
    ctx->pc = 0x15CE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CE28u);
        ctx->pc = 0x15CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE20u;
        // 0x15ce24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CE20u, 0x15CE28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CE28u;
label_15ce28:
    // 0x15ce28: 0x10000052  b           . + 4 + (0x52 << 2)
label_15ce2c:
    if (ctx->pc == 0x15CE2Cu) {
        ctx->pc = 0x15CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE28u;
        // 0x15ce2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE30u;
        goto label_15ce30;
    }
    ctx->pc = 0x15CE28u;
    {
        const bool branch_taken_0x15ce28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE28u;
        // 0x15ce2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce28) {
            ctx->pc = 0x15CF74u;
            goto label_15cf74;
        }
    }
    ctx->pc = 0x15CE30u;
label_15ce30:
    // 0x15ce30: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15ce34:
    // 0x15ce34: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x15ce34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_15ce38:
    // 0x15ce38: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15ce38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15ce3c:
    // 0x15ce3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15ce3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_15ce40:
    // 0x15ce40: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15ce44:
    if (ctx->pc == 0x15CE44u) {
        ctx->pc = 0x15CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE40u;
        // 0x15ce44: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE48u;
        goto label_15ce48;
    }
    ctx->pc = 0x15CE40u;
    {
        const bool branch_taken_0x15ce40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE40u;
        // 0x15ce44: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce40) {
            ctx->pc = 0x15CE64u;
            goto label_15ce64;
        }
    }
    ctx->pc = 0x15CE48u;
label_15ce48:
    // 0x15ce48: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15ce4c:
    // 0x15ce4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15ce4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ce50:
    // 0x15ce50: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15ce54:
    // 0x15ce54: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ce54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ce58:
    // 0x15ce58: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ce58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ce5c:
    // 0x15ce5c: 0x60f809  jalr        $v1
label_15ce60:
    if (ctx->pc == 0x15CE60u) {
        ctx->pc = 0x15CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE5Cu;
        // 0x15ce60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE64u;
        goto label_15ce64;
    }
    ctx->pc = 0x15CE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CE64u);
        ctx->pc = 0x15CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE5Cu;
        // 0x15ce60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CE5Cu, 0x15CE64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CE64u;
label_15ce64:
    // 0x15ce64: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15ce64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15ce68:
    // 0x15ce68: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15ce6c:
    if (ctx->pc == 0x15CE6Cu) {
        ctx->pc = 0x15CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE68u;
        // 0x15ce6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE70u;
        goto label_15ce70;
    }
    ctx->pc = 0x15CE68u;
    {
        const bool branch_taken_0x15ce68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE68u;
        // 0x15ce6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce68) {
            ctx->pc = 0x15CE88u;
            goto label_15ce88;
        }
    }
    ctx->pc = 0x15CE70u;
label_15ce70:
    // 0x15ce70: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15ce74:
    // 0x15ce74: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15ce78:
    // 0x15ce78: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ce78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ce7c:
    // 0x15ce7c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ce7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ce80:
    // 0x15ce80: 0x60f809  jalr        $v1
label_15ce84:
    if (ctx->pc == 0x15CE84u) {
        ctx->pc = 0x15CE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE80u;
        // 0x15ce84: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE88u;
        goto label_15ce88;
    }
    ctx->pc = 0x15CE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CE88u);
        ctx->pc = 0x15CE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE80u;
        // 0x15ce84: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CE80u, 0x15CE88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CE88u;
label_15ce88:
    // 0x15ce88: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x15ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15ce8c:
    // 0x15ce8c: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_15ce90:
    if (ctx->pc == 0x15CE90u) {
        ctx->pc = 0x15CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE8Cu;
        // 0x15ce90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE94u;
        goto label_15ce94;
    }
    ctx->pc = 0x15CE8Cu;
    {
        const bool branch_taken_0x15ce8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ce8c) {
            ctx->pc = 0x15CE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CE8Cu;
            // 0x15ce90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CF74u;
            goto label_15cf74;
        }
    }
    ctx->pc = 0x15CE94u;
label_15ce94:
    // 0x15ce94: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15ce94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15ce98:
    // 0x15ce98: 0x50c00036  beql        $a2, $zero, . + 4 + (0x36 << 2)
label_15ce9c:
    if (ctx->pc == 0x15CE9Cu) {
        ctx->pc = 0x15CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE98u;
        // 0x15ce9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CEA0u;
        goto label_15cea0;
    }
    ctx->pc = 0x15CE98u;
    {
        const bool branch_taken_0x15ce98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ce98) {
            ctx->pc = 0x15CE9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CE98u;
            // 0x15ce9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CF74u;
            goto label_15cf74;
        }
    }
    ctx->pc = 0x15CEA0u;
label_15cea0:
    // 0x15cea0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15cea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15cea4:
    // 0x15cea4: 0x313c3  sra         $v0, $v1, 15
    ctx->pc = 0x15cea4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 15));
label_15cea8:
    // 0x15cea8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15cea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15ceac:
    // 0x15ceac: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_15ceb0:
    if (ctx->pc == 0x15CEB0u) {
        ctx->pc = 0x15CEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEACu;
        // 0x15ceb0: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CEB4u;
        goto label_15ceb4;
    }
    ctx->pc = 0x15CEACu;
    {
        const bool branch_taken_0x15ceac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEACu;
        // 0x15ceb0: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ceac) {
            ctx->pc = 0x15CF10u;
            goto label_15cf10;
        }
    }
    ctx->pc = 0x15CEB4u;
label_15ceb4:
    // 0x15ceb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15ceb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15ceb8:
    // 0x15ceb8: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15cebc:
    if (ctx->pc == 0x15CEBCu) {
        ctx->pc = 0x15CEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEB8u;
        // 0x15cebc: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CEC0u;
        goto label_15cec0;
    }
    ctx->pc = 0x15CEB8u;
    {
        const bool branch_taken_0x15ceb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ceb8) {
            ctx->pc = 0x15CEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CEB8u;
            // 0x15cebc: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CF04u;
            goto label_15cf04;
        }
    }
    ctx->pc = 0x15CEC0u;
label_15cec0:
    // 0x15cec0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cec4:
    // 0x15cec4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15cec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15cec8:
    // 0x15cec8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cecc:
    // 0x15cecc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ceccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ced0:
    // 0x15ced0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ced0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ced4:
    // 0x15ced4: 0x60f809  jalr        $v1
label_15ced8:
    if (ctx->pc == 0x15CED8u) {
        ctx->pc = 0x15CED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CED4u;
        // 0x15ced8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CEDCu;
        goto label_15cedc;
    }
    ctx->pc = 0x15CED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CEDCu);
        ctx->pc = 0x15CED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CED4u;
        // 0x15ced8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CED4u, 0x15CEDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CEDCu;
label_15cedc:
    // 0x15cedc: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15cedcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15cee0:
    // 0x15cee0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15cee4:
    if (ctx->pc == 0x15CEE4u) {
        ctx->pc = 0x15CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEE0u;
        // 0x15cee4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CEE8u;
        goto label_15cee8;
    }
    ctx->pc = 0x15CEE0u;
    {
        const bool branch_taken_0x15cee0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEE0u;
        // 0x15cee4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cee0) {
            ctx->pc = 0x15CF00u;
            goto label_15cf00;
        }
    }
    ctx->pc = 0x15CEE8u;
label_15cee8:
    // 0x15cee8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15ceec:
    // 0x15ceec: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cef0:
    // 0x15cef0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cef4:
    // 0x15cef4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cef8:
    // 0x15cef8: 0x60f809  jalr        $v1
label_15cefc:
    if (ctx->pc == 0x15CEFCu) {
        ctx->pc = 0x15CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEF8u;
        // 0x15cefc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CF00u;
        goto label_15cf00;
    }
    ctx->pc = 0x15CEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CF00u);
        ctx->pc = 0x15CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEF8u;
        // 0x15cefc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CEF8u, 0x15CF00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CF00u;
label_15cf00:
    // 0x15cf00: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15cf04:
    // 0x15cf04: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15cf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_15cf08:
    // 0x15cf08: 0x10000019  b           . + 4 + (0x19 << 2)
label_15cf0c:
    if (ctx->pc == 0x15CF0Cu) {
        ctx->pc = 0x15CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF08u;
        // 0x15cf0c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CF10u;
        goto label_15cf10;
    }
    ctx->pc = 0x15CF08u;
    {
        const bool branch_taken_0x15cf08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF08u;
        // 0x15cf0c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf08) {
            ctx->pc = 0x15CF70u;
            goto label_15cf70;
        }
    }
    ctx->pc = 0x15CF10u;
label_15cf10:
    // 0x15cf10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15cf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15cf14:
    // 0x15cf14: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15cf18:
    if (ctx->pc == 0x15CF18u) {
        ctx->pc = 0x15CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF14u;
        // 0x15cf18: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CF1Cu;
        goto label_15cf1c;
    }
    ctx->pc = 0x15CF14u;
    {
        const bool branch_taken_0x15cf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cf14) {
            ctx->pc = 0x15CF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CF14u;
            // 0x15cf18: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CF60u;
            goto label_15cf60;
        }
    }
    ctx->pc = 0x15CF1Cu;
label_15cf1c:
    // 0x15cf1c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cf20:
    // 0x15cf20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15cf20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cf24:
    // 0x15cf24: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cf28:
    // 0x15cf28: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cf28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cf2c:
    // 0x15cf2c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cf30:
    // 0x15cf30: 0x60f809  jalr        $v1
label_15cf34:
    if (ctx->pc == 0x15CF34u) {
        ctx->pc = 0x15CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF30u;
        // 0x15cf34: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CF38u;
        goto label_15cf38;
    }
    ctx->pc = 0x15CF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CF38u);
        ctx->pc = 0x15CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF30u;
        // 0x15cf34: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CF30u, 0x15CF38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CF38u;
label_15cf38:
    // 0x15cf38: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15cf38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15cf3c:
    // 0x15cf3c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15cf40:
    if (ctx->pc == 0x15CF40u) {
        ctx->pc = 0x15CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF3Cu;
        // 0x15cf40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CF44u;
        goto label_15cf44;
    }
    ctx->pc = 0x15CF3Cu;
    {
        const bool branch_taken_0x15cf3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF3Cu;
        // 0x15cf40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf3c) {
            ctx->pc = 0x15CF5Cu;
            goto label_15cf5c;
        }
    }
    ctx->pc = 0x15CF44u;
label_15cf44:
    // 0x15cf44: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cf48:
    // 0x15cf48: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cf4c:
    // 0x15cf4c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cf4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cf50:
    // 0x15cf50: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cf54:
    // 0x15cf54: 0x60f809  jalr        $v1
label_15cf58:
    if (ctx->pc == 0x15CF58u) {
        ctx->pc = 0x15CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF54u;
        // 0x15cf58: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CF5Cu;
        goto label_15cf5c;
    }
    ctx->pc = 0x15CF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CF5Cu);
        ctx->pc = 0x15CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF54u;
        // 0x15cf58: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CF54u, 0x15CF5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CF5Cu;
label_15cf5c:
    // 0x15cf5c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15cf60:
    // 0x15cf60: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x15cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_15cf64:
    // 0x15cf64: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x15cf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_15cf68:
    // 0x15cf68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x15cf68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15cf6c:
    // 0x15cf6c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x15cf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_15cf70:
    // 0x15cf70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15cf70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15cf74:
    // 0x15cf74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15cf74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15cf78:
    // 0x15cf78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15cf78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15cf7c:
    // 0x15cf7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x15cf7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15cf80:
    // 0x15cf80: 0x3e00008  jr          $ra
label_15cf84:
    if (ctx->pc == 0x15CF84u) {
        ctx->pc = 0x15CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF80u;
        // 0x15cf84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CF88u;
        goto label_fallthrough_0x15cf80;
    }
    ctx->pc = 0x15CF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF80u;
        // 0x15cf84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15cf80:
    ctx->pc = 0x15CF88u;
}
