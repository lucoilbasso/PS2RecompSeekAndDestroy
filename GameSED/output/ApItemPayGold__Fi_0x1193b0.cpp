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

// Function: ApItemPayGold__Fi
// Address: 0x1193b0 - 0x1193e0
void ApItemPayGold__Fi_0x1193b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApItemPayGold__Fi_0x1193b0");
#endif

    ctx->pc = 0x1193b0u;

    // 0x1193b0: 0x8f83896c  lw          $v1, -0x7694($gp)
    ctx->pc = 0x1193b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
    // 0x1193b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1193b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1193b8: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x1193b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1193bc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1193bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1193c0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1193c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1193c4: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1193C4u;
    {
        const bool branch_taken_0x1193c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1193C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1193C4u;
        // 0x1193c8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1193c4) {
            ctx->pc = 0x1193D8u;
            goto label_1193d8;
        }
    }
    ctx->pc = 0x1193CCu;
    // 0x1193cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1193CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1193D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1193CCu;
        // 0x1193d0: 0xaf86896c  sw          $a2, -0x7694($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936940), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1193CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1193D4u;
    // 0x1193d4: 0x0  nop
    ctx->pc = 0x1193d4u;
    // NOP
label_1193d8:
    // 0x1193d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1193D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1193DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1193D8u;
        // 0x1193dc: 0xaf80896c  sw          $zero, -0x7694($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936940), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1193D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1193E0u;
}
