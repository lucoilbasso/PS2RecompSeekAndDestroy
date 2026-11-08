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

// Function: entry_0016db54
// Address: 0x16db54 - 0x16db70
void entry_0016db54_0x16db54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016db54_0x16db54");
#endif

    switch (ctx->pc) {
        case 0x16db60u: goto label_16db60;
        default: break;
    }

    ctx->pc = 0x16db54u;

    // 0x16db54: 0xae0202b8  sw          $v0, 0x2B8($s0)
    ctx->pc = 0x16db54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 2));
    // 0x16db58: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16DB58u;
    SET_GPR_U32(ctx, 31, 0x16DB60u);
    ctx->pc = 0x16DB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DB58u;
    // 0x16db5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16DB58u, 0x16DB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DB60u;
label_16db60:
    // 0x16db60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16DB60u;
    {
        const bool branch_taken_0x16db60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16db60) {
            ctx->pc = 0x16DB70u;
            return;
        }
    }
    ctx->pc = 0x16DB68u;
    // 0x16db68: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16DB68u;
    {
        const bool branch_taken_0x16db68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB68u;
        // 0x16db6c: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db68) {
            ctx->pc = 0x16DBACu;
            return;
        }
    }
    ctx->pc = 0x16DB70u;
}
