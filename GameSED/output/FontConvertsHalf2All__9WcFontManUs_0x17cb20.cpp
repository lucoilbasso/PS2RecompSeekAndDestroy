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

// Function: FontConvertsHalf2All__9WcFontManUs
// Address: 0x17cb20 - 0x17cb58
void FontConvertsHalf2All__9WcFontManUs_0x17cb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FontConvertsHalf2All__9WcFontManUs_0x17cb20");
#endif

    ctx->pc = 0x17cb20u;

    // 0x17cb20: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x17cb20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x17cb24: 0x3402ffe0  ori         $v0, $zero, 0xFFE0
    ctx->pc = 0x17cb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
    // 0x17cb28: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x17cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17cb2c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17cb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17cb30: 0x2c420060  sltiu       $v0, $v0, 0x60
    ctx->pc = 0x17cb30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)96) ? 1 : 0);
    // 0x17cb34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17CB34u;
    {
        const bool branch_taken_0x17cb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB34u;
        // 0x17cb38: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb34) {
            ctx->pc = 0x17CB50u;
            goto label_17cb50;
        }
    }
    ctx->pc = 0x17CB3Cu;
    // 0x17cb3c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17cb40: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x17cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17cb44: 0x9442e9d0  lhu         $v0, -0x1630($v0)
    ctx->pc = 0x17cb44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961616)));
    // 0x17cb48: 0x3e00008  jr          $ra
    ctx->pc = 0x17CB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CB50u;
label_17cb50:
    // 0x17cb50: 0x3e00008  jr          $ra
    ctx->pc = 0x17CB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB50u;
        // 0x17cb54: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CB58u;
}
