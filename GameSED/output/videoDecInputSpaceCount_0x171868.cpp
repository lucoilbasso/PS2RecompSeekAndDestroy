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

// Function: videoDecInputSpaceCount
// Address: 0x171868 - 0x17189c
void videoDecInputSpaceCount_0x171868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("videoDecInputSpaceCount_0x171868");
#endif

    switch (ctx->pc) {
        case 0x171884u: goto label_171884;
        default: break;
    }

    ctx->pc = 0x171868u;

    // 0x171868: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17186c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17186cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171870: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x171870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x171874: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x171874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x171878: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x171878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17187c: 0xc05c5e0  jal         func_171780
    ctx->pc = 0x17187Cu;
    SET_GPR_U32(ctx, 31, 0x171884u);
    ctx->pc = 0x171880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17187Cu;
    // 0x171880: 0x27a8000c  addiu       $t0, $sp, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171780u, 0x17187Cu, 0x171884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171884u;
label_171884:
    // 0x171884: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x171884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x171888: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x171888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x17188c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17188cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171890: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x171890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x171894: 0x3e00008  jr          $ra
    ctx->pc = 0x171894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171894u;
        // 0x171898: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17189Cu;
}
