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

// Function: setTEX0_1
// Address: 0x174518 - 0x1745b4
void setTEX0_1_0x174518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setTEX0_1_0x174518");
#endif

    ctx->pc = 0x174518u;

    // 0x174518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17451c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x17451cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x174520: 0x9fa20010  lwu         $v0, 0x10($sp)
    ctx->pc = 0x174520u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174524: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x174524u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x174528: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x174528u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x17452c: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x17452cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x174530: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x174530u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x174534: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x174534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x174538: 0xa50bc  dsll32      $t2, $t2, 2
    ctx->pc = 0x174538u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 2));
    // 0x17453c: 0x73b3a  dsrl        $a3, $a3, 12
    ctx->pc = 0x17453cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 12);
    // 0x174540: 0xb58fc  dsll32      $t3, $t3, 3
    ctx->pc = 0x174540u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 3));
    // 0x174544: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x174544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x174548: 0x841ba  dsrl        $t0, $t0, 6
    ctx->pc = 0x174548u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 6);
    // 0x17454c: 0x634ba  dsrl        $a2, $a2, 18
    ctx->pc = 0x17454cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 18);
    // 0x174550: 0x948ba  dsrl        $t1, $t1, 2
    ctx->pc = 0x174550u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 2);
    // 0x174554: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x174554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x174558: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x174558u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x17455c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x17455cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x174560: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x174560u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x174564: 0x9fa30018  lwu         $v1, 0x18($sp)
    ctx->pc = 0x174564u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174568: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x174568u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x17456c: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x17456cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x174570: 0x9fa70020  lwu         $a3, 0x20($sp)
    ctx->pc = 0x174570u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174574: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x174574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x174578: 0x31cfc  dsll32      $v1, $v1, 19
    ctx->pc = 0x174578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 19));
    // 0x17457c: 0x9fa20028  lwu         $v0, 0x28($sp)
    ctx->pc = 0x17457cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x174580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174584: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x174584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x174588: 0x73dfc  dsll32      $a3, $a3, 23
    ctx->pc = 0x174588u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 23));
    // 0x17458c: 0x9fa60030  lwu         $a2, 0x30($sp)
    ctx->pc = 0x17458cu;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174590: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x174590u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x174594: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x174594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x174598: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x174598u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x17459c: 0x6377c  dsll32      $a2, $a2, 29
    ctx->pc = 0x17459cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 29));
    // 0x1745a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1745a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1745a4: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x1745a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1745a8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1745a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1745ac: 0x805d118  j           func_174460
    ctx->pc = 0x1745ACu;
    ctx->pc = 0x1745B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1745ACu;
    // 0x1745b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174460u;
    setGIFad_0x174460(rdram, ctx, runtime); return;
    ctx->pc = 0x1745B4u;
}
