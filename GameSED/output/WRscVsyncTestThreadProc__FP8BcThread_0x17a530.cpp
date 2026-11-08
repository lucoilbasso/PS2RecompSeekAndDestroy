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

// Function: WRscVsyncTestThreadProc__FP8BcThread
// Address: 0x17a530 - 0x17a550
void WRscVsyncTestThreadProc__FP8BcThread_0x17a530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WRscVsyncTestThreadProc__FP8BcThread_0x17a530");
#endif

    switch (ctx->pc) {
        case 0x17a540u: goto label_17a540;
        case 0x17a548u: goto label_17a548;
        default: break;
    }

    ctx->pc = 0x17a530u;

    // 0x17a530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17a530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17a534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a538: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17a538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17a53c: 0x48000  sll         $s0, $a0, 0
    ctx->pc = 0x17a53cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
label_17a540:
    // 0x17a540: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17A540u;
    SET_GPR_U32(ctx, 31, 0x17A548u);
    ctx->pc = 0x17A544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A540u;
    // 0x17a544: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17A540u, 0x17A548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A548u;
label_17a548:
    // 0x17a548: 0x1000fffd  b           . + 4 + (-0x3 << 2)
    ctx->pc = 0x17A548u;
    {
        const bool branch_taken_0x17a548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a548) {
            ctx->pc = 0x17A540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a540;
        }
    }
    ctx->pc = 0x17A550u;
}
