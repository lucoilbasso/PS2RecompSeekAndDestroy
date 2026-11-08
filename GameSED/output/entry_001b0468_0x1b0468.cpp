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

// Function: entry_001b0468
// Address: 0x1b0468 - 0x1b049c
void entry_001b0468_0x1b0468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0468_0x1b0468");
#endif

    switch (ctx->pc) {
        case 0x1b0484u: goto label_1b0484;
        case 0x1b0494u: goto label_1b0494;
        default: break;
    }

    ctx->pc = 0x1b0468u;

    // 0x1b0468: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x1b0468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1b046c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1b046cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1b0470: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b0470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b0474: 0x80c50007  lb          $a1, 0x7($a2)
    ctx->pc = 0x1b0474u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
    // 0x1b0478: 0x8ea47ed0  lw          $a0, 0x7ED0($s5)
    ctx->pc = 0x1b0478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32464)));
    // 0x1b047c: 0xc06dde6  jal         func_1B7798
    ctx->pc = 0x1B047Cu;
    SET_GPR_U32(ctx, 31, 0x1B0484u);
    ctx->pc = 0x1B0480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B047Cu;
    // 0x1b0480: 0xa4c30000  sh          $v1, 0x0($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7798u, 0x1B047Cu, 0x1B0484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0484u;
label_1b0484:
    // 0x1b0484: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0484u;
    {
        const bool branch_taken_0x1b0484 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b0484) {
            ctx->pc = 0x1B049Cu;
            return;
        }
    }
    ctx->pc = 0x1B048Cu;
    // 0x1b048c: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1B048Cu;
    SET_GPR_U32(ctx, 31, 0x1B0494u);
    ctx->pc = 0x1B0490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B048Cu;
    // 0x1b0490: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1B048Cu, 0x1B0494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0494u;
label_1b0494:
    // 0x1b0494: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B0494u;
    {
        const bool branch_taken_0x1b0494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0494u;
        // 0x1b0498: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0494) {
            ctx->pc = 0x1B04CCu;
            return;
        }
    }
    ctx->pc = 0x1B049Cu;
}
