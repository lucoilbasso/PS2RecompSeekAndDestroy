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

// Function: entry_001d6d98
// Address: 0x1d6d98 - 0x1d6dbc
void entry_001d6d98_0x1d6d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6d98_0x1d6d98");
#endif

    switch (ctx->pc) {
        case 0x1d6da4u: goto label_1d6da4;
        default: break;
    }

    ctx->pc = 0x1d6d98u;

    // 0x1d6d98: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1d6d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1d6d9c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1D6D9Cu;
    SET_GPR_U32(ctx, 31, 0x1D6DA4u);
    ctx->pc = 0x1D6DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6D9Cu;
    // 0x1d6da0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D6D9Cu, 0x1D6DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6DA4u;
label_1d6da4:
    // 0x1d6da4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d6da4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6da8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d6da8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d6dac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d6dacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6db0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d6db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d6db4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DB4u;
        // 0x1d6db8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6DBCu;
}
