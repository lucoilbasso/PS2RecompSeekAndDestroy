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

// Function: entry_0010685c
// Address: 0x10685c - 0x10687c
void entry_0010685c_0x10685c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010685c_0x10685c");
#endif

    switch (ctx->pc) {
        case 0x106874u: goto label_106874;
        default: break;
    }

    ctx->pc = 0x10685cu;

    // 0x10685c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x10685cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x106860: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106864: 0x50730005  beql        $v1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x106864u;
    {
        const bool branch_taken_0x106864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x106864) {
            ctx->pc = 0x106868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106864u;
            // 0x106868: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10687Cu;
            return;
        }
    }
    ctx->pc = 0x10686Cu;
    // 0x10686c: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x10686Cu;
    SET_GPR_U32(ctx, 31, 0x106874u);
    ctx->pc = 0x106870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10686Cu;
    // 0x106870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x10686Cu, 0x106874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106874u;
label_106874:
    // 0x106874: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x106874u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106878: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x106878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10687cu;
}
