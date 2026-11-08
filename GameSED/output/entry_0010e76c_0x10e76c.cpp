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

// Function: entry_0010e76c
// Address: 0x10e76c - 0x10e788
void entry_0010e76c_0x10e76c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e76c_0x10e76c");
#endif

    switch (ctx->pc) {
        case 0x10e774u: goto label_10e774;
        default: break;
    }

    ctx->pc = 0x10e76cu;

    // 0x10e76c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10E76Cu;
    SET_GPR_U32(ctx, 31, 0x10E774u);
    ctx->pc = 0x10E770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E76Cu;
    // 0x10e770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10E76Cu, 0x10E774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E774u;
label_10e774:
    // 0x10e774: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E774u;
    {
        const bool branch_taken_0x10e774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e774) {
            ctx->pc = 0x10E788u;
            return;
        }
    }
    ctx->pc = 0x10E77Cu;
    // 0x10e77c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10E77Cu;
    {
        const bool branch_taken_0x10e77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E77Cu;
        // 0x10e780: 0x8e0201b4  lw          $v0, 0x1B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e77c) {
            ctx->pc = 0x10E7C4u;
            return;
        }
    }
    ctx->pc = 0x10E784u;
    // 0x10e784: 0x0  nop
    ctx->pc = 0x10e784u;
    // NOP
    ctx->pc = 0x10e788u;
}
