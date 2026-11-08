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

// Function: caseD_8
// Address: 0x1350d0 - 0x1350e0
void caseD_8_0x1350d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1350d0");
#endif

    switch (ctx->pc) {
        case 0x1350d8u: goto label_1350d8;
        default: break;
    }

    ctx->pc = 0x1350d0u;

    // 0x1350d0: 0xc055666  jal         func_155998
    ctx->pc = 0x1350D0u;
    SET_GPR_U32(ctx, 31, 0x1350D8u);
    ctx->pc = 0x1350D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1350D0u;
    // 0x1350d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155998u, 0x1350D0u, 0x1350D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1350D8u;
label_1350d8:
    // 0x1350d8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1350D8u;
    {
        const bool branch_taken_0x1350d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1350DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350D8u;
        // 0x1350dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1350d8) {
            ctx->pc = 0x135200u;
            return;
        }
    }
    ctx->pc = 0x1350E0u;
}
