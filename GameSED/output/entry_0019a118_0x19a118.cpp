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

// Function: entry_0019a118
// Address: 0x19a118 - 0x19a12c
void entry_0019a118_0x19a118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a118_0x19a118");
#endif

    switch (ctx->pc) {
        case 0x19a120u: goto label_19a120;
        default: break;
    }

    ctx->pc = 0x19a118u;

    // 0x19a118: 0xc068436  jal         func_1A10D8
    ctx->pc = 0x19A118u;
    SET_GPR_U32(ctx, 31, 0x19A120u);
    ctx->pc = 0x19A11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A118u;
    // 0x19a11c: 0x24840078  addiu       $a0, $a0, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x19A118u, 0x19A120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A120u;
label_19a120:
    // 0x19a120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19a120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a124: 0x3e00008  jr          $ra
    ctx->pc = 0x19A124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A124u;
        // 0x19a128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A12Cu;
}
