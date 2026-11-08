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

// Function: caseD_15
// Address: 0x110f30 - 0x110f48
void caseD_15_0x110f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_15_0x110f30");
#endif

    switch (ctx->pc) {
        case 0x110f3cu: goto label_110f3c;
        default: break;
    }

    ctx->pc = 0x110f30u;

    // 0x110f30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x110f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f34: 0xc0416dc  jal         func_105B70
    ctx->pc = 0x110F34u;
    SET_GPR_U32(ctx, 31, 0x110F3Cu);
    ctx->pc = 0x110F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110F34u;
    // 0x110f38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B70u, 0x110F34u, 0x110F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F3Cu;
label_110f3c:
    // 0x110f3c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x110F3Cu;
    {
        const bool branch_taken_0x110f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F3Cu;
        // 0x110f40: 0x2683ffff  addiu       $v1, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f3c) {
            ctx->pc = 0x1110B0u;
            return;
        }
    }
    ctx->pc = 0x110F44u;
    // 0x110f44: 0x0  nop
    ctx->pc = 0x110f44u;
    // NOP
    ctx->pc = 0x110f48u;
}
