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

// Function: setCLAMP_1
// Address: 0x1748a8 - 0x174900
void setCLAMP_1_0x1748a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setCLAMP_1_0x1748a8");
#endif

    ctx->pc = 0x1748a8u;

    // 0x1748a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1748a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1748ac: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1748acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1748b0: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x1748b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1748b4: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1748b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1748b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1748b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1748bc: 0xa50bc  dsll32      $t2, $t2, 2
    ctx->pc = 0x1748bcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 2));
    // 0x1748c0: 0x73f3a  dsrl        $a3, $a3, 28
    ctx->pc = 0x1748c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 28);
    // 0x1748c4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1748c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1748c8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1748c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1748cc: 0x844ba  dsrl        $t0, $t0, 18
    ctx->pc = 0x1748ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 18);
    // 0x1748d0: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x1748d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1748d4: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x1748d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x1748d8: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x1748d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x1748dc: 0x94a3a  dsrl        $t1, $t1, 8
    ctx->pc = 0x1748dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 8);
    // 0x1748e0: 0x637ba  dsrl        $a2, $a2, 30
    ctx->pc = 0x1748e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 30);
    // 0x1748e4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1748e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1748e8: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x1748e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x1748ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1748ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1748f0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1748f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1748f4: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x1748f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1748f8: 0x805d118  j           func_174460
    ctx->pc = 0x1748F8u;
    ctx->pc = 0x1748FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1748F8u;
    // 0x1748fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174460u;
    setGIFad_0x174460(rdram, ctx, runtime); return;
    ctx->pc = 0x174900u;
}
