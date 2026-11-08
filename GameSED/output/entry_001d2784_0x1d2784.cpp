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

// Function: entry_001d2784
// Address: 0x1d2784 - 0x1d27a8
void entry_001d2784_0x1d2784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2784_0x1d2784");
#endif

    switch (ctx->pc) {
        case 0x1d2798u: goto label_1d2798;
        default: break;
    }

    ctx->pc = 0x1d2784u;

    // 0x1d2784: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D2784u;
    {
        const bool branch_taken_0x1d2784 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2784u;
        // 0x1d2788: 0x32e20004  andi        $v0, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2784) {
            ctx->pc = 0x1D27ACu;
            return;
        }
    }
    ctx->pc = 0x1D278Cu;
    // 0x1d278c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d278cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d2790: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D2790u;
    SET_GPR_U32(ctx, 31, 0x1D2798u);
    ctx->pc = 0x1D2794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2790u;
    // 0x1d2794: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D2790u, 0x1D2798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2798u;
label_1d2798:
    // 0x1d2798: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1D2798u;
    {
        const bool branch_taken_0x1d2798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2798u;
        // 0x1d279c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2798) {
            ctx->pc = 0x1D28F4u;
            return;
        }
    }
    ctx->pc = 0x1D27A0u;
    // 0x1d27a0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1d27a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d27a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d27a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d27a8u;
}
