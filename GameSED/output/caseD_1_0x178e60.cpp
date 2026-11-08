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

// Function: caseD_1
// Address: 0x178e60 - 0x178e78
void caseD_1_0x178e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x178e60");
#endif

    switch (ctx->pc) {
        case 0x178e6cu: goto label_178e6c;
        default: break;
    }

    ctx->pc = 0x178e60u;

    // 0x178e60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178e64: 0xc05e58e  jal         func_179638
    ctx->pc = 0x178E64u;
    SET_GPR_U32(ctx, 31, 0x178E6Cu);
    ctx->pc = 0x178E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178E64u;
    // 0x178e68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179638u, 0x178E64u, 0x178E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E6Cu;
label_178e6c:
    // 0x178e6c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x178E6Cu;
    {
        const bool branch_taken_0x178e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E6Cu;
        // 0x178e70: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e6c) {
            ctx->pc = 0x178ED0u;
            return;
        }
    }
    ctx->pc = 0x178E74u;
    // 0x178e74: 0x0  nop
    ctx->pc = 0x178e74u;
    // NOP
    ctx->pc = 0x178e78u;
}
