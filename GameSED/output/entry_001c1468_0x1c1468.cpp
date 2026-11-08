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

// Function: entry_001c1468
// Address: 0x1c1468 - 0x1c148c
void entry_001c1468_0x1c1468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1468_0x1c1468");
#endif

    switch (ctx->pc) {
        case 0x1c1484u: goto label_1c1484;
        default: break;
    }

    ctx->pc = 0x1c1468u;

    // 0x1c1468: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1c1468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1c146c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1c146cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c1470: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1c1470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1c1474: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1474u;
    {
        const bool branch_taken_0x1c1474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1474u;
        // 0x1c1478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1474) {
            ctx->pc = 0x1C148Cu;
            return;
        }
    }
    ctx->pc = 0x1C147Cu;
    // 0x1c147c: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C147Cu;
    SET_GPR_U32(ctx, 31, 0x1C1484u);
    ctx->pc = 0x1C1480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C147Cu;
    // 0x1c1480: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C147Cu, 0x1C1484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1484u;
label_1c1484:
    // 0x1c1484: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x1c1484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
    // 0x1c1488: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1c1488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x1c148cu;
}
