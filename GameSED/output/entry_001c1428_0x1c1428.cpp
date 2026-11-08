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

// Function: entry_001c1428
// Address: 0x1c1428 - 0x1c1460
void entry_001c1428_0x1c1428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1428_0x1c1428");
#endif

    switch (ctx->pc) {
        case 0x1c1458u: goto label_1c1458;
        default: break;
    }

    ctx->pc = 0x1c1428u;

    // 0x1c1428: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c1428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c142c: 0x14c2000d  bne         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C142Cu;
    {
        const bool branch_taken_0x1c142c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C1430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C142Cu;
        // 0x1c1430: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c142c) {
            ctx->pc = 0x1C1464u;
            return;
        }
    }
    ctx->pc = 0x1C1434u;
    // 0x1c1434: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x1c1434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x1c1438: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C1438u;
    {
        const bool branch_taken_0x1c1438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1438u;
        // 0x1c143c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1438) {
            ctx->pc = 0x1C1464u;
            return;
        }
    }
    ctx->pc = 0x1C1440u;
    // 0x1c1440: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c1440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c1444: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1c1444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1c1448: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1448u;
    {
        const bool branch_taken_0x1c1448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1448u;
        // 0x1c144c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1448) {
            ctx->pc = 0x1C1460u;
            return;
        }
    }
    ctx->pc = 0x1C1450u;
    // 0x1c1450: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C1450u;
    SET_GPR_U32(ctx, 31, 0x1C1458u);
    ctx->pc = 0x1C1454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1450u;
    // 0x1c1454: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C1450u, 0x1C1458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1458u;
label_1c1458:
    // 0x1c1458: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1458u;
    {
        const bool branch_taken_0x1c1458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1458u;
        // 0x1c145c: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1458) {
            ctx->pc = 0x1C1468u;
            return;
        }
    }
    ctx->pc = 0x1C1460u;
}
