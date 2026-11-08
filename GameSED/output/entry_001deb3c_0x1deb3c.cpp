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

// Function: entry_001deb3c
// Address: 0x1deb3c - 0x1deb68
void entry_001deb3c_0x1deb3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001deb3c_0x1deb3c");
#endif

    switch (ctx->pc) {
        case 0x1deb48u: goto label_1deb48;
        default: break;
    }

    ctx->pc = 0x1deb3cu;

    // 0x1deb3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1deb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deb40: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1DEB40u;
    SET_GPR_U32(ctx, 31, 0x1DEB48u);
    ctx->pc = 0x1DEB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB40u;
    // 0x1deb44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1DEB40u, 0x1DEB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB48u;
label_1deb48:
    // 0x1deb48: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1deb48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deb4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1deb4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1deb50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1deb50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1deb54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1deb54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1deb58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1deb58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1deb5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1deb5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1deb60: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB60u;
        // 0x1deb64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEB68u;
}
