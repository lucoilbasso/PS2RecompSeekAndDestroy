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

// Function: entry_001b1368
// Address: 0x1b1368 - 0x1b1388
void entry_001b1368_0x1b1368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1368_0x1b1368");
#endif

    switch (ctx->pc) {
        case 0x1b1380u: goto label_1b1380;
        default: break;
    }

    ctx->pc = 0x1b1368u;

label_1b1368:
    // 0x1b1368: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x1b1368u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1b136c:
    // 0x1b136c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1b136cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1b1370:
    // 0x1b1370: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1b1374:
    if (ctx->pc == 0x1B1374u) {
        ctx->pc = 0x1B1374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1370u;
        // 0x1b1374: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1378u;
        goto label_1b1378;
    }
    ctx->pc = 0x1B1370u;
    {
        const bool branch_taken_0x1b1370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1370) {
            ctx->pc = 0x1B1374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1370u;
            // 0x1b1374: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B13A4u;
            return;
        }
    }
    ctx->pc = 0x1B1378u;
label_1b1378:
    // 0x1b1378: 0x40f809  jalr        $v0
label_1b137c:
    if (ctx->pc == 0x1B137Cu) {
        ctx->pc = 0x1B137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1378u;
        // 0x1b137c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1380u;
        goto label_1b1380;
    }
    ctx->pc = 0x1B1378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1380u);
        ctx->pc = 0x1B137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1378u;
        // 0x1b137c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1378u, 0x1B1380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1380u;
label_1b1380:
    // 0x1b1380: 0x10000007  b           . + 4 + (0x7 << 2)
label_1b1384:
    if (ctx->pc == 0x1B1384u) {
        ctx->pc = 0x1B1384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1380u;
        // 0x1b1384: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1388u;
        goto label_fallthrough_0x1b1380;
    }
    ctx->pc = 0x1B1380u;
    {
        const bool branch_taken_0x1b1380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1380u;
        // 0x1b1384: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1380) {
            ctx->pc = 0x1B13A0u;
            return;
        }
    }
label_fallthrough_0x1b1380:
    ctx->pc = 0x1B1388u;
}
