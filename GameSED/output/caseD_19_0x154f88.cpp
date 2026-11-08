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

// Function: caseD_19
// Address: 0x154f88 - 0x154f9c
void caseD_19_0x154f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_19_0x154f88");
#endif

    switch (ctx->pc) {
        case 0x154f90u: goto label_154f90;
        default: break;
    }

    ctx->pc = 0x154f88u;

    // 0x154f88: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x154F88u;
    SET_GPR_U32(ctx, 31, 0x154F90u);
    ctx->pc = 0x154F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F88u;
    // 0x154f8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154F88u, 0x154F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F90u;
label_154f90:
    // 0x154f90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x154F90u;
    {
        const bool branch_taken_0x154f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F90u;
        // 0x154f94: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f90) {
            ctx->pc = 0x154FA8u;
            return;
        }
    }
    ctx->pc = 0x154F98u;
    // 0x154f98: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x154f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    ctx->pc = 0x154f9cu;
}
