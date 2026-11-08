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

// Function: entry_001b6520
// Address: 0x1b6520 - 0x1b6560
void entry_001b6520_0x1b6520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6520_0x1b6520");
#endif

    switch (ctx->pc) {
        case 0x1b654cu: goto label_1b654c;
        default: break;
    }

    ctx->pc = 0x1b6520u;

    // 0x1b6520: 0x26b0b400  addiu       $s0, $s5, -0x4C00
    ctx->pc = 0x1b6520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947840));
    // 0x1b6524: 0x24a4b600  addiu       $a0, $a1, -0x4A00
    ctx->pc = 0x1b6524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948352));
    // 0x1b6528: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b6528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b652c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b652cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b6530: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b6530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6534: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b6534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6538: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1b6538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b653c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b653cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6540: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1b6540u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b6544: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B6544u;
    SET_GPR_U32(ctx, 31, 0x1B654Cu);
    ctx->pc = 0x1B6548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6544u;
    // 0x1b6548: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B6544u, 0x1B654Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B654Cu;
label_1b654c:
    // 0x1b654c: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B654Cu;
    {
        const bool branch_taken_0x1b654c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b654c) {
            ctx->pc = 0x1B6550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B654Cu;
            // 0x1b6550: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6560u;
            return;
        }
    }
    ctx->pc = 0x1B6554u;
    // 0x1b6554: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1b6554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1b6558: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6558u;
    {
        const bool branch_taken_0x1b6558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6558u;
        // 0x1b655c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6558) {
            ctx->pc = 0x1B6568u;
            return;
        }
    }
    ctx->pc = 0x1B6560u;
}
