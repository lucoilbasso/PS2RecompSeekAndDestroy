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

// Function: setDMAscTag
// Address: 0x1743b0 - 0x174404
void setDMAscTag_0x1743b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setDMAscTag_0x1743b0");
#endif

    ctx->pc = 0x1743b0u;

    // 0x1743b0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1743b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1743b4: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x1743b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1743b8: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x1743b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1743bc: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1743bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1743c0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1743c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1743c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1743c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1743c8: 0x52ffc  dsll32      $a1, $a1, 31
    ctx->pc = 0x1743c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 31));
    // 0x1743cc: 0xa503e  dsrl32      $t2, $t2, 0
    ctx->pc = 0x1743ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> (32 + 0));
    // 0x1743d0: 0x8413a  dsrl        $t0, $t0, 4
    ctx->pc = 0x1743d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 4);
    // 0x1743d4: 0x7387a  dsrl        $a3, $a3, 1
    ctx->pc = 0x1743d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 1);
    // 0x1743d8: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x1743d8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1743dc: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x1743dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x1743e0: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x1743e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x1743e4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1743e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1743e8: 0x949ba  dsrl        $t1, $t1, 6
    ctx->pc = 0x1743e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 6);
    // 0x1743ec: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x1743ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x1743f0: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x1743f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x1743f4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1743f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1743f8: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x1743f8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x1743fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1743FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1743FCu;
        // 0x174400: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1743FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174404u;
}
