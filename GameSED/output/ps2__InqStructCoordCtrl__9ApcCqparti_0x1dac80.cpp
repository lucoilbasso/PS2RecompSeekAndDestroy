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

// Function: _InqStructCoordCtrl__9ApcCqparti
// Address: 0x1dac80 - 0x1dacb0
void ps2__InqStructCoordCtrl__9ApcCqparti_0x1dac80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InqStructCoordCtrl__9ApcCqparti_0x1dac80");
#endif

    ctx->pc = 0x1dac80u;

    // 0x1dac80: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1dac80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac84: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1dac84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1dac88: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1dac88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1dac8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1dac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dac90: 0x8ca20c0c  lw          $v0, 0xC0C($a1)
    ctx->pc = 0x1dac90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3084)));
    // 0x1dac94: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DAC94u;
    {
        const bool branch_taken_0x1dac94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DAC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC94u;
        // 0x1dac98: 0x22180  sll         $a0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dac94) {
            ctx->pc = 0x1DACA8u;
            goto label_1daca8;
        }
    }
    ctx->pc = 0x1DAC9Cu;
    // 0x1dac9c: 0x8cc201b4  lw          $v0, 0x1B4($a2)
    ctx->pc = 0x1dac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 436)));
    // 0x1daca0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DACA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DACA0u;
        // 0x1daca4: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DACA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DACA8u;
label_1daca8:
    // 0x1daca8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DACA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DACA8u;
        // 0x1dacac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DACA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DACB0u;
}
