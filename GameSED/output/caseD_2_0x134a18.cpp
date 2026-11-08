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

// Function: caseD_2
// Address: 0x134a18 - 0x134a28
void caseD_2_0x134a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x134a18");
#endif

    switch (ctx->pc) {
        case 0x134a20u: goto label_134a20;
        default: break;
    }

    ctx->pc = 0x134a18u;

    // 0x134a18: 0xc04e626  jal         func_139898
    ctx->pc = 0x134A18u;
    SET_GPR_U32(ctx, 31, 0x134A20u);
    ctx->pc = 0x134A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A18u;
    // 0x134a1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139898u, 0x134A18u, 0x134A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A20u;
label_134a20:
    // 0x134a20: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x134A20u;
    {
        const bool branch_taken_0x134a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A20u;
        // 0x134a24: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a20) {
            ctx->pc = 0x134E48u;
            return;
        }
    }
    ctx->pc = 0x134A28u;
}
