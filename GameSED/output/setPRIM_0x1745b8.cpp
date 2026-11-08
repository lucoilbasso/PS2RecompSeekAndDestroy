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

// Function: setPRIM
// Address: 0x1745b8 - 0x174638
void setPRIM_0x1745b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setPRIM_0x1745b8");
#endif

    ctx->pc = 0x1745b8u;

    // 0x1745b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1745b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1745bc: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1745bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1745c0: 0x9fac0010  lwu         $t4, 0x10($sp)
    ctx->pc = 0x1745c0u;
    SET_GPR_ZE32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1745c4: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x1745c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1745c8: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x1745c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1745cc: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x1745ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1745d0: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1745d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1745d4: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x1745d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1745d8: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x1745d8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x1745dc: 0xc6278  dsll        $t4, $t4, 9
    ctx->pc = 0x1745dcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 9);
    // 0x1745e0: 0xa567a  dsrl        $t2, $t2, 25
    ctx->pc = 0x1745e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 25);
    // 0x1745e4: 0x73f3a  dsrl        $a3, $a3, 28
    ctx->pc = 0x1745e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 28);
    // 0x1745e8: 0xb5e3a  dsrl        $t3, $t3, 24
    ctx->pc = 0x1745e8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> 24);
    // 0x1745ec: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1745ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1745f0: 0x846fa  dsrl        $t0, $t0, 27
    ctx->pc = 0x1745f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 27);
    // 0x1745f4: 0x31f7a  dsrl        $v1, $v1, 29
    ctx->pc = 0x1745f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 29);
    // 0x1745f8: 0x94eba  dsrl        $t1, $t1, 26
    ctx->pc = 0x1745f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 26);
    // 0x1745fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1745fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174600: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x174600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x174604: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x174604u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x174608: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x174608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x17460c: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x17460cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x174610: 0x9fa60018  lwu         $a2, 0x18($sp)
    ctx->pc = 0x174610u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174614: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x174614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x174618: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x174618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x17461c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17461cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174620: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x174620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x174624: 0x632b8  dsll        $a2, $a2, 10
    ctx->pc = 0x174624u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 10);
    // 0x174628: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17462c: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x17462cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x174630: 0x805d118  j           func_174460
    ctx->pc = 0x174630u;
    ctx->pc = 0x174634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174630u;
    // 0x174634: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174460u;
    setGIFad_0x174460(rdram, ctx, runtime); return;
    ctx->pc = 0x174638u;
}
