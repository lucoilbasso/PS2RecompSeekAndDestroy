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

// Function: entry_00109a40
// Address: 0x109a40 - 0x109a54
void entry_00109a40_0x109a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109a40_0x109a40");
#endif

    switch (ctx->pc) {
        case 0x109a50u: goto label_109a50;
        default: break;
    }

    ctx->pc = 0x109a40u;

    // 0x109a40: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x109A40u;
    {
        const bool branch_taken_0x109a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x109a40) {
            ctx->pc = 0x109A54u;
            return;
        }
    }
    ctx->pc = 0x109A48u;
    // 0x109a48: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109A48u;
    SET_GPR_U32(ctx, 31, 0x109A50u);
    ctx->pc = 0x109A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109A48u;
    // 0x109a4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109A48u, 0x109A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109A50u;
label_109a50:
    // 0x109a50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x109a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x109a54u;
}
