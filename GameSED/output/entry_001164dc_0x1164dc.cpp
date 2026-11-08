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

// Function: entry_001164dc
// Address: 0x1164dc - 0x116500
void entry_001164dc_0x1164dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001164dc_0x1164dc");
#endif

    switch (ctx->pc) {
        case 0x1164fcu: goto label_1164fc;
        default: break;
    }

    ctx->pc = 0x1164dcu;

    // 0x1164dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1164dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1164e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1164e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1164e4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1164e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1164e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1164e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1164ec: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1164ECu;
    {
        const bool branch_taken_0x1164ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1164F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1164ECu;
        // 0x1164f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1164ec) {
            ctx->pc = 0x116500u;
            return;
        }
    }
    ctx->pc = 0x1164F4u;
    // 0x1164f4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1164F4u;
    SET_GPR_U32(ctx, 31, 0x1164FCu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1164F4u, 0x1164FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1164FCu;
label_1164fc:
    // 0x1164fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1164fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116500u;
}
