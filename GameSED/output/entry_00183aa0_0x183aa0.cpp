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

// Function: entry_00183aa0
// Address: 0x183aa0 - 0x183ac0
void entry_00183aa0_0x183aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183aa0_0x183aa0");
#endif

    switch (ctx->pc) {
        case 0x183aa8u: goto label_183aa8;
        default: break;
    }

    ctx->pc = 0x183aa0u;

    // 0x183aa0: 0xc069626  jal         func_1A5898
    ctx->pc = 0x183AA0u;
    SET_GPR_U32(ctx, 31, 0x183AA8u);
    ctx->pc = 0x183AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183AA0u;
    // 0x183aa4: 0xafa70020  sw          $a3, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5898u, 0x183AA0u, 0x183AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183AA8u;
label_183aa8:
    // 0x183aa8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x183aa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x183aac: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x183aacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x183ab0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x183ab0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x183ab4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x183ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x183ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x183AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183AB8u;
        // 0x183abc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183AC0u;
}
