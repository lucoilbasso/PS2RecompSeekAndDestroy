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

// Function: __tfd
// Address: 0x1cf180 - 0x1cf1b4
void ps2___tfd_0x1cf180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tfd_0x1cf180");
#endif

    ctx->pc = 0x1cf180u;

    // 0x1cf180: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cf180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1cf184: 0x2445de70  addiu       $a1, $v0, -0x2190
    ctx->pc = 0x1cf184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958704));
    // 0x1cf188: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1cf188u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24DE70u));
    // 0x1cf18c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF18Cu;
    {
        const bool branch_taken_0x1cf18c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF18Cu;
        // 0x1cf190: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf18c) {
            ctx->pc = 0x1CF1ACu;
            goto label_1cf1ac;
        }
    }
    ctx->pc = 0x1CF194u;
    // 0x1cf194: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1cf194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1cf198: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1cf198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1cf19c: 0x2463c1b0  addiu       $v1, $v1, -0x3E50
    ctx->pc = 0x1cf19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951344));
    // 0x1cf1a0: 0x24840d70  addiu       $a0, $a0, 0xD70
    ctx->pc = 0x1cf1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3440));
    // 0x1cf1a4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1cf1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1cf1a8: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1cf1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_1cf1ac:
    // 0x1cf1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF1B4u;
}
