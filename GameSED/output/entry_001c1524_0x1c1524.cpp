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

// Function: entry_001c1524
// Address: 0x1c1524 - 0x1c1588
void entry_001c1524_0x1c1524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1524_0x1c1524");
#endif

    switch (ctx->pc) {
        case 0x1c1580u: goto label_1c1580;
        default: break;
    }

    ctx->pc = 0x1c1524u;

    // 0x1c1524: 0x14600084  bnez        $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x1C1524u;
    {
        const bool branch_taken_0x1c1524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1524u;
        // 0x1c1528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1524) {
            ctx->pc = 0x1C1738u;
            return;
        }
    }
    ctx->pc = 0x1C152Cu;
    // 0x1c152c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c152cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c1530: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c1530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c1534: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C1534u;
    {
        const bool branch_taken_0x1c1534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1534) {
            ctx->pc = 0x1C15B0u;
            return;
        }
    }
    ctx->pc = 0x1C153Cu;
    // 0x1c153c: 0x8e020848  lw          $v0, 0x848($s0)
    ctx->pc = 0x1c153cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
    // 0x1c1540: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C1540u;
    {
        const bool branch_taken_0x1c1540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1540u;
        // 0x1c1544: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1540) {
            ctx->pc = 0x1C1588u;
            return;
        }
    }
    ctx->pc = 0x1C1548u;
    // 0x1c1548: 0x8e020170  lw          $v0, 0x170($s0)
    ctx->pc = 0x1c1548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x1c154c: 0x8e0b016c  lw          $t3, 0x16C($s0)
    ctx->pc = 0x1c154cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 364)));
    // 0x1c1550: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1c1550u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1554: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c1554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c1558: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x1c1558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1c155c: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x1c155cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x1c1560: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x1c1560u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1564: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1c1564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1c1568: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x1c1568u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x1c156c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1c156cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1c1570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1574: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c1574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1578: 0xc0705fc  jal         func_1C17F0
    ctx->pc = 0x1C1578u;
    SET_GPR_U32(ctx, 31, 0x1C1580u);
    ctx->pc = 0x1C157Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1578u;
    // 0x1c157c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17F0u, 0x1C1578u, 0x1C1580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1580u;
label_1c1580:
    // 0x1c1580: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C1580u;
    {
        const bool branch_taken_0x1c1580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1580u;
        // 0x1c1584: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1580) {
            ctx->pc = 0x1C15B0u;
            return;
        }
    }
    ctx->pc = 0x1C1588u;
}
