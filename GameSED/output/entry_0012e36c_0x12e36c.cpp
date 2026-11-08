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

// Function: entry_0012e36c
// Address: 0x12e36c - 0x12e388
void entry_0012e36c_0x12e36c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e36c_0x12e36c");
#endif

    switch (ctx->pc) {
        case 0x12e380u: goto label_12e380;
        default: break;
    }

    ctx->pc = 0x12e36cu;

    // 0x12e36c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x12e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x12e370: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E370u;
    {
        const bool branch_taken_0x12e370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E370u;
        // 0x12e374: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e370) {
            ctx->pc = 0x12E388u;
            return;
        }
    }
    ctx->pc = 0x12E378u;
    // 0x12e378: 0xc04857a  jal         func_1215E8
    ctx->pc = 0x12E378u;
    SET_GPR_U32(ctx, 31, 0x12E380u);
    ctx->pc = 0x12E37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E378u;
    // 0x12e37c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1215E8u, 0x12E378u, 0x12E380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E380u;
label_12e380:
    // 0x12e380: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12E380u;
    {
        const bool branch_taken_0x12e380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E380u;
        // 0x12e384: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e380) {
            ctx->pc = 0x12E39Cu;
            return;
        }
    }
    ctx->pc = 0x12E388u;
}
