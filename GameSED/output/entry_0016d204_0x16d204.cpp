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

// Function: entry_0016d204
// Address: 0x16d204 - 0x16d220
void entry_0016d204_0x16d204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d204_0x16d204");
#endif

    switch (ctx->pc) {
        case 0x16d210u: goto label_16d210;
        default: break;
    }

    ctx->pc = 0x16d204u;

    // 0x16d204: 0xae2202b0  sw          $v0, 0x2B0($s1)
    ctx->pc = 0x16d204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 2));
    // 0x16d208: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16D208u;
    SET_GPR_U32(ctx, 31, 0x16D210u);
    ctx->pc = 0x16D20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D208u;
    // 0x16d20c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16D208u, 0x16D210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D210u;
label_16d210:
    // 0x16d210: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16D210u;
    {
        const bool branch_taken_0x16d210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d210) {
            ctx->pc = 0x16D220u;
            return;
        }
    }
    ctx->pc = 0x16D218u;
    // 0x16d218: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16D218u;
    {
        const bool branch_taken_0x16d218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D218u;
        // 0x16d21c: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d218) {
            ctx->pc = 0x16D25Cu;
            return;
        }
    }
    ctx->pc = 0x16D220u;
}
