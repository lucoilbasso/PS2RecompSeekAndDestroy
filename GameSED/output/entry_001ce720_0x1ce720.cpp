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

// Function: entry_001ce720
// Address: 0x1ce720 - 0x1ce740
void entry_001ce720_0x1ce720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce720_0x1ce720");
#endif

    ctx->pc = 0x1ce720u;

    // 0x1ce720: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE720u;
    {
        const bool branch_taken_0x1ce720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce720) {
            ctx->pc = 0x1CE724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE720u;
            // 0x1ce724: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE740u;
            return;
        }
    }
    ctx->pc = 0x1CE728u;
    // 0x1ce728: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1ce728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ce72c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ce72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce734: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE734u;
        // 0x1ce738: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE73Cu;
    // 0x1ce73c: 0x0  nop
    ctx->pc = 0x1ce73cu;
    // NOP
    ctx->pc = 0x1ce740u;
}
