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

// Function: entry_001b4784
// Address: 0x1b4784 - 0x1b47a8
void entry_001b4784_0x1b4784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4784_0x1b4784");
#endif

    switch (ctx->pc) {
        case 0x1b4790u: goto label_1b4790;
        case 0x1b47a0u: goto label_1b47a0;
        default: break;
    }

    ctx->pc = 0x1b4784u;

    // 0x1b4784: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x1b4784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x1b4788: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4788u;
    SET_GPR_U32(ctx, 31, 0x1B4790u);
    ctx->pc = 0x1B478Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4788u;
    // 0x1b478c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4788u, 0x1B4790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4790u;
label_1b4790:
    // 0x1b4790: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4790u;
    {
        const bool branch_taken_0x1b4790 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4790) {
            ctx->pc = 0x1B47A8u;
            return;
        }
    }
    ctx->pc = 0x1B4798u;
    // 0x1b4798: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4798u;
    SET_GPR_U32(ctx, 31, 0x1B47A0u);
    ctx->pc = 0x1B479Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4798u;
    // 0x1b479c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4798u, 0x1B47A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B47A0u;
label_1b47a0:
    // 0x1b47a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B47A0u;
    {
        const bool branch_taken_0x1b47a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B47A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47A0u;
        // 0x1b47a4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b47a0) {
            ctx->pc = 0x1B47BCu;
            return;
        }
    }
    ctx->pc = 0x1B47A8u;
}
