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

// Function: __static_initialization_and_destruction_0
// Address: 0x177208 - 0x177230
void ps2___static_initialization_and_destruction_0_0x177208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___static_initialization_and_destruction_0_0x177208");
#endif

    ctx->pc = 0x177208u;

    // 0x177208: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x177208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17720c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17720Cu;
    {
        const bool branch_taken_0x17720c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x177210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17720Cu;
        // 0x177210: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17720c) {
            ctx->pc = 0x177228u;
            goto label_177228;
        }
    }
    ctx->pc = 0x177214u;
    // 0x177214: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x177214u;
    {
        const bool branch_taken_0x177214 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x177218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177214u;
        // 0x177218: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177214) {
            ctx->pc = 0x177228u;
            goto label_177228;
        }
    }
    ctx->pc = 0x17721Cu;
    // 0x17721c: 0x2442cec0  addiu       $v0, $v0, -0x3140
    ctx->pc = 0x17721cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954688));
    // 0x177220: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x177220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x177224: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x177224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_177228:
    // 0x177228: 0x3e00008  jr          $ra
    ctx->pc = 0x177228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177230u;
}
