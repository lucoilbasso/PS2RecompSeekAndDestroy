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

// Function: entry_0014afa0
// Address: 0x14afa0 - 0x14afb8
void entry_0014afa0_0x14afa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014afa0_0x14afa0");
#endif

    switch (ctx->pc) {
        case 0x14afa8u: goto label_14afa8;
        default: break;
    }

    ctx->pc = 0x14afa0u;

    // 0x14afa0: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x14AFA0u;
    SET_GPR_U32(ctx, 31, 0x14AFA8u);
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x14AFA0u, 0x14AFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AFA8u;
label_14afa8:
    // 0x14afa8: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AFA8u;
    {
        const bool branch_taken_0x14afa8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AFA8u;
        // 0x14afac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14afa8) {
            ctx->pc = 0x14AFB8u;
            return;
        }
    }
    ctx->pc = 0x14AFB0u;
    // 0x14afb0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x14AFB0u;
    {
        const bool branch_taken_0x14afb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AFB0u;
        // 0x14afb4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14afb0) {
            ctx->pc = 0x14B01Cu;
            return;
        }
    }
    ctx->pc = 0x14AFB8u;
}
