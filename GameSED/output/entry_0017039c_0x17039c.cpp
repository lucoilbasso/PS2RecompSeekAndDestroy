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

// Function: entry_0017039c
// Address: 0x17039c - 0x1703c0
void entry_0017039c_0x17039c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017039c_0x17039c");
#endif

    switch (ctx->pc) {
        case 0x1703acu: goto label_1703ac;
        default: break;
    }

    ctx->pc = 0x17039cu;

    // 0x17039c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17039Cu;
    {
        const bool branch_taken_0x17039c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17039c) {
            ctx->pc = 0x1703C8u;
            return;
        }
    }
    ctx->pc = 0x1703A4u;
    // 0x1703a4: 0xc05c5fe  jal         func_1717F8
    ctx->pc = 0x1703A4u;
    SET_GPR_U32(ctx, 31, 0x1703ACu);
    ctx->pc = 0x1703A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1703A4u;
    // 0x1703a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1717F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717F8u, 0x1703A4u, 0x1703ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1703ACu;
label_1703ac:
    // 0x1703ac: 0x545eff78  bnel        $v0, $fp, . + 4 + (-0x88 << 2)
    ctx->pc = 0x1703ACu;
    {
        const bool branch_taken_0x1703ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x1703ac) {
            ctx->pc = 0x1703B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1703ACu;
            // 0x1703b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170190u;
            return;
        }
    }
    ctx->pc = 0x1703B4u;
    // 0x1703b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1703B4u;
    {
        const bool branch_taken_0x1703b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1703b4) {
            ctx->pc = 0x1703C8u;
            return;
        }
    }
    ctx->pc = 0x1703BCu;
    // 0x1703bc: 0x0  nop
    ctx->pc = 0x1703bcu;
    // NOP
    ctx->pc = 0x1703c0u;
}
