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

// Function: caseD_3
// Address: 0x178e90 - 0x178ea8
void caseD_3_0x178e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x178e90");
#endif

    switch (ctx->pc) {
        case 0x178e9cu: goto label_178e9c;
        default: break;
    }

    ctx->pc = 0x178e90u;

    // 0x178e90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178e94: 0xc05e5e0  jal         func_179780
    ctx->pc = 0x178E94u;
    SET_GPR_U32(ctx, 31, 0x178E9Cu);
    ctx->pc = 0x178E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178E94u;
    // 0x178e98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179780u, 0x178E94u, 0x178E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E9Cu;
label_178e9c:
    // 0x178e9c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x178E9Cu;
    {
        const bool branch_taken_0x178e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E9Cu;
        // 0x178ea0: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e9c) {
            ctx->pc = 0x178ED0u;
            return;
        }
    }
    ctx->pc = 0x178EA4u;
    // 0x178ea4: 0x0  nop
    ctx->pc = 0x178ea4u;
    // NOP
    ctx->pc = 0x178ea8u;
}
