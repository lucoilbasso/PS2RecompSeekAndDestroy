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

// Function: entry_0018147c
// Address: 0x18147c - 0x1814a4
void entry_0018147c_0x18147c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018147c_0x18147c");
#endif

    switch (ctx->pc) {
        case 0x181484u: goto label_181484;
        default: break;
    }

    ctx->pc = 0x18147cu;

    // 0x18147c: 0xc060300  jal         func_180C00
    ctx->pc = 0x18147Cu;
    SET_GPR_U32(ctx, 31, 0x181484u);
    ctx->pc = 0x181480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18147Cu;
    // 0x181480: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180C00u, 0x18147Cu, 0x181484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181484u;
label_181484:
    // 0x181484: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x181484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181488: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x181488u;
    {
        const bool branch_taken_0x181488 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181488u;
        // 0x18148c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181488) {
            ctx->pc = 0x1814A4u;
            return;
        }
    }
    ctx->pc = 0x181490u;
    // 0x181490: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x181490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x181494: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x181494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x181498: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x181498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18149c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18149cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1814a0: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x1814a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    ctx->pc = 0x1814a4u;
}
