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

// Function: entry_0016d2b4
// Address: 0x16d2b4 - 0x16d2d0
void entry_0016d2b4_0x16d2b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d2b4_0x16d2b4");
#endif

    switch (ctx->pc) {
        case 0x16d2c0u: goto label_16d2c0;
        default: break;
    }

    ctx->pc = 0x16d2b4u;

    // 0x16d2b4: 0xae2202b8  sw          $v0, 0x2B8($s1)
    ctx->pc = 0x16d2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 696), GPR_U32(ctx, 2));
    // 0x16d2b8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16D2B8u;
    SET_GPR_U32(ctx, 31, 0x16D2C0u);
    ctx->pc = 0x16D2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D2B8u;
    // 0x16d2bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16D2B8u, 0x16D2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D2C0u;
label_16d2c0:
    // 0x16d2c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16D2C0u;
    {
        const bool branch_taken_0x16d2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d2c0) {
            ctx->pc = 0x16D2D0u;
            return;
        }
    }
    ctx->pc = 0x16D2C8u;
    // 0x16d2c8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16D2C8u;
    {
        const bool branch_taken_0x16d2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2C8u;
        // 0x16d2cc: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d2c8) {
            ctx->pc = 0x16D30Cu;
            return;
        }
    }
    ctx->pc = 0x16D2D0u;
}
