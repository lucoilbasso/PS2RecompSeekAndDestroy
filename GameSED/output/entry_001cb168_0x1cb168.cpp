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

// Function: entry_001cb168
// Address: 0x1cb168 - 0x1cb188
void entry_001cb168_0x1cb168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb168_0x1cb168");
#endif

    switch (ctx->pc) {
        case 0x1cb170u: goto label_1cb170;
        default: break;
    }

    ctx->pc = 0x1cb168u;

label_1cb168:
    // 0x1cb168: 0xc072bfe  jal         func_1CAFF8
    ctx->pc = 0x1CB168u;
    SET_GPR_U32(ctx, 31, 0x1CB170u);
    ctx->pc = 0x1CB16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB168u;
    // 0x1cb16c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAFF8u, 0x1CB168u, 0x1CB170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB170u;
label_1cb170:
    // 0x1cb170: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cb170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb174: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1cb174u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1cb178: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CB178u;
    {
        const bool branch_taken_0x1cb178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB178u;
        // 0x1cb17c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb178) {
            ctx->pc = 0x1CB168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb168;
        }
    }
    ctx->pc = 0x1CB180u;
    // 0x1cb180: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB180u;
    {
        const bool branch_taken_0x1cb180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB180u;
        // 0x1cb184: 0xae510010  sw          $s1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb180) {
            ctx->pc = 0x1CB198u;
            return;
        }
    }
    ctx->pc = 0x1CB188u;
}
