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

// Function: entry_0016d25c
// Address: 0x16d25c - 0x16d278
void entry_0016d25c_0x16d25c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d25c_0x16d25c");
#endif

    switch (ctx->pc) {
        case 0x16d268u: goto label_16d268;
        default: break;
    }

    ctx->pc = 0x16d25cu;

    // 0x16d25c: 0xae2202b4  sw          $v0, 0x2B4($s1)
    ctx->pc = 0x16d25cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 2));
    // 0x16d260: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16D260u;
    SET_GPR_U32(ctx, 31, 0x16D268u);
    ctx->pc = 0x16D264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D260u;
    // 0x16d264: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16D260u, 0x16D268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D268u;
label_16d268:
    // 0x16d268: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16D268u;
    {
        const bool branch_taken_0x16d268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d268) {
            ctx->pc = 0x16D278u;
            return;
        }
    }
    ctx->pc = 0x16D270u;
    // 0x16d270: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16D270u;
    {
        const bool branch_taken_0x16d270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D270u;
        // 0x16d274: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d270) {
            ctx->pc = 0x16D2B4u;
            return;
        }
    }
    ctx->pc = 0x16D278u;
}
