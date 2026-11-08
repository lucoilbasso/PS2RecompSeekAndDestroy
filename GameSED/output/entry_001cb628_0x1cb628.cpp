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

// Function: entry_001cb628
// Address: 0x1cb628 - 0x1cb640
void entry_001cb628_0x1cb628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb628_0x1cb628");
#endif

    switch (ctx->pc) {
        case 0x1cb630u: goto label_1cb630;
        default: break;
    }

    ctx->pc = 0x1cb628u;

    // 0x1cb628: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CB628u;
    SET_GPR_U32(ctx, 31, 0x1CB630u);
    ctx->pc = 0x1CB62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB628u;
    // 0x1cb62c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CB628u, 0x1CB630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB630u;
label_1cb630:
    // 0x1cb630: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb634: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cb634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb638: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB638u;
    {
        const bool branch_taken_0x1cb638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB638u;
        // 0x1cb63c: 0xfe220008  sd          $v0, 0x8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb638) {
            ctx->pc = 0x1CB648u;
            return;
        }
    }
    ctx->pc = 0x1CB640u;
}
