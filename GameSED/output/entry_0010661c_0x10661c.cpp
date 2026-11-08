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

// Function: entry_0010661c
// Address: 0x10661c - 0x10663c
void entry_0010661c_0x10661c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010661c_0x10661c");
#endif

    switch (ctx->pc) {
        case 0x106624u: goto label_106624;
        default: break;
    }

    ctx->pc = 0x10661cu;

    // 0x10661c: 0xc069626  jal         func_1A5898
    ctx->pc = 0x10661Cu;
    SET_GPR_U32(ctx, 31, 0x106624u);
    ctx->pc = 0x106620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10661Cu;
    // 0x106620: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5898u, 0x10661Cu, 0x106624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106624u;
label_106624:
    // 0x106624: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x106624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106628: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x106628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x10662c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x10662cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x106630: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x106630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x106634: 0x3e00008  jr          $ra
    ctx->pc = 0x106634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106634u;
        // 0x106638: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10663Cu;
}
