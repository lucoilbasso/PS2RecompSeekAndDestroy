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

// Function: entry_00178a58
// Address: 0x178a58 - 0x178a78
void entry_00178a58_0x178a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178a58_0x178a58");
#endif

    switch (ctx->pc) {
        case 0x178a60u: goto label_178a60;
        default: break;
    }

    ctx->pc = 0x178a58u;

label_178a58:
    // 0x178a58: 0xc05e2e6  jal         func_178B98
    ctx->pc = 0x178A58u;
    SET_GPR_U32(ctx, 31, 0x178A60u);
    ctx->pc = 0x178B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178B98u, 0x178A58u, 0x178A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178A60u;
label_178a60:
    // 0x178a60: 0x8e021040  lw          $v0, 0x1040($s0)
    ctx->pc = 0x178a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4160)));
    // 0x178a64: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x178a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x178a68: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x178A68u;
    {
        const bool branch_taken_0x178a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178a68) {
            ctx->pc = 0x178A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178a58;
        }
    }
    ctx->pc = 0x178A70u;
    // 0x178a70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x178A70u;
    {
        const bool branch_taken_0x178a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A70u;
        // 0x178a74: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a70) {
            ctx->pc = 0x178A8Cu;
            return;
        }
    }
    ctx->pc = 0x178A78u;
}
