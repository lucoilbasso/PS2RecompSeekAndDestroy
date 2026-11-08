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

// Function: caseD_e
// Address: 0x12fe58 - 0x12fe70
void caseD_e_0x12fe58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_e_0x12fe58");
#endif

    switch (ctx->pc) {
        case 0x12fe68u: goto label_12fe68;
        default: break;
    }

    ctx->pc = 0x12fe58u;

    // 0x12fe58: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fe58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fe5c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fe5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe60: 0xc048550  jal         func_121540
    ctx->pc = 0x12FE60u;
    SET_GPR_U32(ctx, 31, 0x12FE68u);
    ctx->pc = 0x12FE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE60u;
    // 0x12fe64: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121540u, 0x12FE60u, 0x12FE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE68u;
label_12fe68:
    // 0x12fe68: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x12FE68u;
    {
        const bool branch_taken_0x12fe68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE68u;
        // 0x12fe6c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe68) {
            ctx->pc = 0x12FEB4u;
            return;
        }
    }
    ctx->pc = 0x12FE70u;
}
