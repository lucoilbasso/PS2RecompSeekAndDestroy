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

// Function: entry_001d9d30
// Address: 0x1d9d30 - 0x1d9d64
void entry_001d9d30_0x1d9d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9d30_0x1d9d30");
#endif

    switch (ctx->pc) {
        case 0x1d9d38u: goto label_1d9d38;
        default: break;
    }

    ctx->pc = 0x1d9d30u;

    // 0x1d9d30: 0xc0682f4  jal         func_1A0BD0
    ctx->pc = 0x1D9D30u;
    SET_GPR_U32(ctx, 31, 0x1D9D38u);
    ctx->pc = 0x1D9D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D30u;
    // 0x1d9d34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0BD0u, 0x1D9D30u, 0x1D9D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D38u;
label_1d9d38:
    // 0x1d9d38: 0x8f828b2c  lw          $v0, -0x74D4($gp)
    ctx->pc = 0x1d9d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x1d9d3c: 0x27848b30  addiu       $a0, $gp, -0x74D0
    ctx->pc = 0x1d9d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937392));
    // 0x1d9d40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d9d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9d44: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d9d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d9d48: 0xae02026c  sw          $v0, 0x26C($s0)
    ctx->pc = 0x1d9d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
    // 0x1d9d4c: 0xaf908b2c  sw          $s0, -0x74D4($gp)
    ctx->pc = 0x1d9d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 16));
    // 0x1d9d50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d9d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d9d54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9d58: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1d9d58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1d9d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D5Cu;
        // 0x1d9d60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9D64u;
}
