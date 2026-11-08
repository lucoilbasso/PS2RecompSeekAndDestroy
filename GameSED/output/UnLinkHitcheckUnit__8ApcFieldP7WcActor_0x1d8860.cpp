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

// Function: UnLinkHitcheckUnit__8ApcFieldP7WcActor
// Address: 0x1d8860 - 0x1d88b0
void UnLinkHitcheckUnit__8ApcFieldP7WcActor_0x1d8860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UnLinkHitcheckUnit__8ApcFieldP7WcActor_0x1d8860");
#endif

    switch (ctx->pc) {
        case 0x1d888cu: goto label_1d888c;
        default: break;
    }

    ctx->pc = 0x1d8860u;

    // 0x1d8860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8864: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1d8864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1d8868: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d886c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d886cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8870: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d8870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d8874: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1d8874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d8878: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d8878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d887c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D887Cu;
    {
        const bool branch_taken_0x1d887c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D887Cu;
        // 0x1d8880: 0x24840200  addiu       $a0, $a0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d887c) {
            ctx->pc = 0x1D88A0u;
            goto label_1d88a0;
        }
    }
    ctx->pc = 0x1D8884u;
    // 0x1d8884: 0xc068436  jal         func_1A10D8
    ctx->pc = 0x1D8884u;
    SET_GPR_U32(ctx, 31, 0x1D888Cu);
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x1D8884u, 0x1D888Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D888Cu;
label_1d888c:
    // 0x1d888c: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x1d888cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
    // 0x1d8890: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1d8890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d8894: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d8894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d8898: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d8898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d889c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1d889cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_1d88a0:
    // 0x1d88a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d88a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d88a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d88a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d88a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D88A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D88ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D88A8u;
        // 0x1d88ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D88A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D88B0u;
}
