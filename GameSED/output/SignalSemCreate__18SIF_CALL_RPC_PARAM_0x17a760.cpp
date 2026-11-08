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

// Function: SignalSemCreate__18SIF_CALL_RPC_PARAM
// Address: 0x17a760 - 0x17a798
void SignalSemCreate__18SIF_CALL_RPC_PARAM_0x17a760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SignalSemCreate__18SIF_CALL_RPC_PARAM_0x17a760");
#endif

    switch (ctx->pc) {
        case 0x17a784u: goto label_17a784;
        default: break;
    }

    ctx->pc = 0x17a760u;

    // 0x17a760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17a760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17a764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a768: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x17a768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x17a76c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17a76cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a770: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17a770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a774: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17a774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x17a778: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x17a778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x17a77c: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x17A77Cu;
    SET_GPR_U32(ctx, 31, 0x17A784u);
    ctx->pc = 0x17A780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A77Cu;
    // 0x17a780: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x17A77Cu, 0x17A784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A784u;
label_17a784:
    // 0x17a784: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x17a784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x17a788: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17a788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17a78c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x17a78cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a790: 0x3e00008  jr          $ra
    ctx->pc = 0x17A790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A790u;
        // 0x17a794: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A798u;
}
