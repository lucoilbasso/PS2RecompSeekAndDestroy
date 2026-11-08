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

// Function: __tfl
// Address: 0x1ceff8 - 0x1cf02c
void ps2___tfl_0x1ceff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tfl_0x1ceff8");
#endif

    ctx->pc = 0x1ceff8u;

    // 0x1ceff8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ceff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1ceffc: 0x2445de38  addiu       $a1, $v0, -0x21C8
    ctx->pc = 0x1ceffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958648));
    // 0x1cf000: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1cf000u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24DE38u));
    // 0x1cf004: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF004u;
    {
        const bool branch_taken_0x1cf004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF004u;
        // 0x1cf008: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf004) {
            ctx->pc = 0x1CF024u;
            goto label_1cf024;
        }
    }
    ctx->pc = 0x1CF00Cu;
    // 0x1cf00c: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1cf00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1cf010: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1cf010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1cf014: 0x2463c178  addiu       $v1, $v1, -0x3E88
    ctx->pc = 0x1cf014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951288));
    // 0x1cf018: 0x24840d70  addiu       $a0, $a0, 0xD70
    ctx->pc = 0x1cf018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3440));
    // 0x1cf01c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1cf01cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1cf020: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1cf020u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_1cf024:
    // 0x1cf024: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF02Cu;
}
