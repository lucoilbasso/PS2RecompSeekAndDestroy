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

// Function: BMemPMgrInitial__Fv
// Address: 0x19fed0 - 0x19ff00
void BMemPMgrInitial__Fv_0x19fed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMemPMgrInitial__Fv_0x19fed0");
#endif

    switch (ctx->pc) {
        case 0x19fef0u: goto label_19fef0;
        default: break;
    }

    ctx->pc = 0x19fed0u;

    // 0x19fed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19fed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19fed4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19fed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fed8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19fed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fedc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19fedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19fee0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x19fee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x19fee4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x19fee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x19fee8: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x19FEE8u;
    SET_GPR_U32(ctx, 31, 0x19FEF0u);
    ctx->pc = 0x19FEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FEE8u;
    // 0x19feec: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x19FEE8u, 0x19FEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FEF0u;
label_19fef0:
    // 0x19fef0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19fef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fef4: 0xaf828e08  sw          $v0, -0x71F8($gp)
    ctx->pc = 0x19fef4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938120), GPR_U32(ctx, 2));
    // 0x19fef8: 0x3e00008  jr          $ra
    ctx->pc = 0x19FEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEF8u;
        // 0x19fefc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FF00u;
}
