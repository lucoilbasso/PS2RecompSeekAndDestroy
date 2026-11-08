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

// Function: ResetTankOptionParts__7ApcTankii
// Address: 0x155730 - 0x155744
void ResetTankOptionParts__7ApcTankii_0x155730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetTankOptionParts__7ApcTankii_0x155730");
#endif

    ctx->pc = 0x155730u;

    // 0x155730: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x155730u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x155734: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x155734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x155738: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x155738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x15573c: 0x3e00008  jr          $ra
    ctx->pc = 0x15573Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15573Cu;
        // 0x155740: 0xacc206a8  sw          $v0, 0x6A8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15573Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155744u;
}
