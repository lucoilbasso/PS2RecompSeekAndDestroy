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

// Function: entry_001a0e40
// Address: 0x1a0e40 - 0x1a0e54
void entry_001a0e40_0x1a0e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0e40_0x1a0e40");
#endif

    switch (ctx->pc) {
        case 0x1a0e48u: goto label_1a0e48;
        default: break;
    }

    ctx->pc = 0x1a0e40u;

    // 0x1a0e40: 0xc068436  jal         func_1A10D8
    ctx->pc = 0x1A0E40u;
    SET_GPR_U32(ctx, 31, 0x1A0E48u);
    ctx->pc = 0x1A0E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0E40u;
    // 0x1a0e44: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x1A0E40u, 0x1A0E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0E48u;
label_1a0e48:
    // 0x1a0e48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E4Cu;
        // 0x1a0e50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0E54u;
}
