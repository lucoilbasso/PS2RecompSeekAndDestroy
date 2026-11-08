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

// Function: entry_0012e93c
// Address: 0x12e93c - 0x12e950
void entry_0012e93c_0x12e93c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e93c_0x12e93c");
#endif

    switch (ctx->pc) {
        case 0x12e944u: goto label_12e944;
        default: break;
    }

    ctx->pc = 0x12e93cu;

    // 0x12e93c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x12E93Cu;
    SET_GPR_U32(ctx, 31, 0x12E944u);
    ctx->pc = 0x12E940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E93Cu;
    // 0x12e940: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x12E93Cu, 0x12E944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E944u;
label_12e944:
    // 0x12e944: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x12E944u;
    {
        const bool branch_taken_0x12e944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E944u;
        // 0x12e948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e944) {
            ctx->pc = 0x12E9E0u;
            return;
        }
    }
    ctx->pc = 0x12E94Cu;
    // 0x12e94c: 0x0  nop
    ctx->pc = 0x12e94cu;
    // NOP
    ctx->pc = 0x12e950u;
}
