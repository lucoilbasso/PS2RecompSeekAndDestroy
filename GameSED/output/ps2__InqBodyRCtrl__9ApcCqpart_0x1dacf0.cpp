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

// Function: _InqBodyRCtrl__9ApcCqpart
// Address: 0x1dacf0 - 0x1dad18
void ps2__InqBodyRCtrl__9ApcCqpart_0x1dacf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InqBodyRCtrl__9ApcCqpart_0x1dacf0");
#endif

    ctx->pc = 0x1dacf0u;

    // 0x1dacf0: 0x8c820c9c  lw          $v0, 0xC9C($a0)
    ctx->pc = 0x1dacf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3228)));
    // 0x1dacf4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1dacf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dacf8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DACF8u;
    {
        const bool branch_taken_0x1dacf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DACF8u;
        // 0x1dacfc: 0x22980  sll         $a1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dacf8) {
            ctx->pc = 0x1DAD10u;
            goto label_1dad10;
        }
    }
    ctx->pc = 0x1DAD00u;
    // 0x1dad00: 0x8c8201b4  lw          $v0, 0x1B4($a0)
    ctx->pc = 0x1dad00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x1dad04: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD04u;
        // 0x1dad08: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAD0Cu;
    // 0x1dad0c: 0x0  nop
    ctx->pc = 0x1dad0cu;
    // NOP
label_1dad10:
    // 0x1dad10: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD10u;
        // 0x1dad14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAD18u;
}
