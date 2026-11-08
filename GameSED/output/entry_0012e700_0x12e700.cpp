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

// Function: entry_0012e700
// Address: 0x12e700 - 0x12e724
void entry_0012e700_0x12e700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e700_0x12e700");
#endif

    ctx->pc = 0x12e700u;

    // 0x12e700: 0x0  nop
    ctx->pc = 0x12e700u;
    // NOP
    // 0x12e704: 0x0  nop
    ctx->pc = 0x12e704u;
    // NOP
    // 0x12e708: 0x0  nop
    ctx->pc = 0x12e708u;
    // NOP
    // 0x12e70c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12E70Cu;
    {
        const bool branch_taken_0x12e70c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E70Cu;
        // 0x12e710: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e70c) {
            ctx->pc = 0x12E6F8u;
            return;
        }
    }
    ctx->pc = 0x12E714u;
    // 0x12e714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12e714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e718: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12e718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e71c: 0x3e00008  jr          $ra
    ctx->pc = 0x12E71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E71Cu;
        // 0x12e720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E724u;
}
