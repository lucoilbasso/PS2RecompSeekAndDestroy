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

// Function: caseD_10
// Address: 0x154f58 - 0x154f78
void caseD_10_0x154f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_10_0x154f58");
#endif

    switch (ctx->pc) {
        case 0x154f60u: goto label_154f60;
        default: break;
    }

    ctx->pc = 0x154f58u;

    // 0x154f58: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x154F58u;
    SET_GPR_U32(ctx, 31, 0x154F60u);
    ctx->pc = 0x154F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F58u;
    // 0x154f5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154F58u, 0x154F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F60u;
label_154f60:
    // 0x154f60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x154F60u;
    {
        const bool branch_taken_0x154f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154f60) {
            ctx->pc = 0x154F78u;
            return;
        }
    }
    ctx->pc = 0x154F68u;
    // 0x154f68: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x154f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x154f6c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x154F6Cu;
    {
        const bool branch_taken_0x154f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F6Cu;
        // 0x154f70: 0x3c030200  lui         $v1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f6c) {
            ctx->pc = 0x154F9Cu;
            return;
        }
    }
    ctx->pc = 0x154F74u;
    // 0x154f74: 0x0  nop
    ctx->pc = 0x154f74u;
    // NOP
    ctx->pc = 0x154f78u;
}
