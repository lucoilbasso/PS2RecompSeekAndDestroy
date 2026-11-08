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
// Address: 0x178e78 - 0x178e90
void caseD_2_0x178e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x178e78");
#endif

    switch (ctx->pc) {
        case 0x178e84u: goto label_178e84;
        default: break;
    }

    ctx->pc = 0x178e78u;

    // 0x178e78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178e7c: 0xc05e5b8  jal         func_1796E0
    ctx->pc = 0x178E7Cu;
    SET_GPR_U32(ctx, 31, 0x178E84u);
    ctx->pc = 0x178E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178E7Cu;
    // 0x178e80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1796E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1796E0u, 0x178E7Cu, 0x178E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E84u;
label_178e84:
    // 0x178e84: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x178E84u;
    {
        const bool branch_taken_0x178e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E84u;
        // 0x178e88: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e84) {
            ctx->pc = 0x178ED0u;
            return;
        }
    }
    ctx->pc = 0x178E8Cu;
    // 0x178e8c: 0x0  nop
    ctx->pc = 0x178e8cu;
    // NOP
    ctx->pc = 0x178e90u;
}
