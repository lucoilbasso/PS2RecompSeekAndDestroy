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

// Function: __make_fp
// Address: 0x1ce510 - 0x1ce53c
void ps2___make_fp_0x1ce510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___make_fp_0x1ce510");
#endif

    switch (ctx->pc) {
        case 0x1ce530u: goto label_1ce530;
        default: break;
    }

    ctx->pc = 0x1ce510u;

    // 0x1ce510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ce510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ce514: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1ce514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1ce518: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ce518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce51c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ce51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ce520: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1ce520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1ce524: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x1ce524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x1ce528: 0xc073cec  jal         func_1CF3B0
    ctx->pc = 0x1CE528u;
    SET_GPR_U32(ctx, 31, 0x1CE530u);
    ctx->pc = 0x1CE52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE528u;
    // 0x1ce52c: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF3B0u, 0x1CE528u, 0x1CE530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE530u;
label_1ce530:
    // 0x1ce530: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ce530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce534: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE534u;
        // 0x1ce538: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE53Cu;
}
