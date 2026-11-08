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

// Function: entry_001b1530
// Address: 0x1b1530 - 0x1b156c
void entry_001b1530_0x1b1530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1530_0x1b1530");
#endif

    switch (ctx->pc) {
        case 0x1b1558u: goto label_1b1558;
        case 0x1b1568u: goto label_1b1568;
        default: break;
    }

    ctx->pc = 0x1b1530u;

    // 0x1b1530: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b1530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b1534: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b1534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b1538: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1b1538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1b153c: 0x3484000c  ori         $a0, $a0, 0xC
    ctx->pc = 0x1b153cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    // 0x1b1540: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b1540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1544: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1b1544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b1548: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b1548u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b154c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b154cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1550: 0xc06df7e  jal         func_1B7DF8
    ctx->pc = 0x1B1550u;
    SET_GPR_U32(ctx, 31, 0x1B1558u);
    ctx->pc = 0x1B1554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1550u;
    // 0x1b1554: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7DF8u, 0x1B1550u, 0x1B1558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1558u;
label_1b1558:
    // 0x1b1558: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1558u;
    {
        const bool branch_taken_0x1b1558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1558u;
        // 0x1b155c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1558) {
            ctx->pc = 0x1B156Cu;
            return;
        }
    }
    ctx->pc = 0x1B1560u;
    // 0x1b1560: 0xc06c4a4  jal         func_1B1290
    ctx->pc = 0x1B1560u;
    SET_GPR_U32(ctx, 31, 0x1B1568u);
    ctx->pc = 0x1B1564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1560u;
    // 0x1b1564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1290u, 0x1B1560u, 0x1B1568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1568u;
label_1b1568:
    // 0x1b1568: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1b1568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->pc = 0x1b156cu;
}
