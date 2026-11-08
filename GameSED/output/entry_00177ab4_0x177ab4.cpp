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

// Function: entry_00177ab4
// Address: 0x177ab4 - 0x177ad4
void entry_00177ab4_0x177ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177ab4_0x177ab4");
#endif

    switch (ctx->pc) {
        case 0x177ac4u: goto label_177ac4;
        default: break;
    }

    ctx->pc = 0x177ab4u;

    // 0x177ab4: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x177ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x177ab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177abc: 0xc067294  jal         func_19CA50
    ctx->pc = 0x177ABCu;
    SET_GPR_U32(ctx, 31, 0x177AC4u);
    ctx->pc = 0x177AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177ABCu;
    // 0x177ac0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CA50u, 0x177ABCu, 0x177AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177AC4u;
label_177ac4:
    // 0x177ac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177ac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177ac8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x177ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177acc: 0x3e00008  jr          $ra
    ctx->pc = 0x177ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177ACCu;
        // 0x177ad0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177AD4u;
}
