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

// Function: ApCRefWorkRotXAbs__FP10ApCRefWorkiP9DVAngle32
// Address: 0x142998 - 0x1429d4
void ApCRefWorkRotXAbs__FP10ApCRefWorkiP9DVAngle32_0x142998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCRefWorkRotXAbs__FP10ApCRefWorkiP9DVAngle32_0x142998");
#endif

    ctx->pc = 0x142998u;

    // 0x142998: 0x24870030  addiu       $a3, $a0, 0x30
    ctx->pc = 0x142998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x14299c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x14299Cu;
    {
        const bool branch_taken_0x14299c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1429A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14299Cu;
        // 0x1429a0: 0x34a53000  ori         $a1, $a1, 0x3000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12288);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14299c) {
            ctx->pc = 0x1429C0u;
            goto label_1429c0;
        }
    }
    ctx->pc = 0x1429A4u;
    // 0x1429a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1429a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1429a8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1429a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1429ac: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1429acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1429b0: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1429b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1429b4: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x1429b4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x1429b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1429B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1429B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1429C0u;
label_1429c0:
    // 0x1429c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1429c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1429c4: 0x2403cfff  addiu       $v1, $zero, -0x3001
    ctx->pc = 0x1429c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294955007));
    // 0x1429c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1429c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1429cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1429CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1429D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1429CCu;
        // 0x1429d0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1429CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1429D4u;
}
