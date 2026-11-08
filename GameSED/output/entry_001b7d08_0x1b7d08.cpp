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

// Function: entry_001b7d08
// Address: 0x1b7d08 - 0x1b7d50
void entry_001b7d08_0x1b7d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7d08_0x1b7d08");
#endif

    switch (ctx->pc) {
        case 0x1b7d48u: goto label_1b7d48;
        default: break;
    }

    ctx->pc = 0x1b7d08u;

    // 0x1b7d08: 0x18a00011  blez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B7D08u;
    {
        const bool branch_taken_0x1b7d08 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1B7D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D08u;
        // 0x1b7d0c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d08) {
            ctx->pc = 0x1B7D50u;
            return;
        }
    }
    ctx->pc = 0x1B7D10u;
    // 0x1b7d10: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1b7d10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b7d14: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x1b7d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1b7d18: 0xae090004  sw          $t1, 0x4($s0)
    ctx->pc = 0x1b7d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 9));
    // 0x1b7d1c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1b7d1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7d20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b7d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b7d24: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b7d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1b7d28: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b7d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b7d2c: 0x32630004  andi        $v1, $s3, 0x4
    ctx->pc = 0x1b7d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
    // 0x1b7d30: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x1b7d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x1b7d34: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1b7d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1b7d38: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7D38u;
    {
        const bool branch_taken_0x1b7d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D38u;
        // 0x1b7d3c: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d38) {
            ctx->pc = 0x1B7D5Cu;
            return;
        }
    }
    ctx->pc = 0x1B7D40u;
    // 0x1b7d40: 0xc06dfe8  jal         func_1B7FA0
    ctx->pc = 0x1B7D40u;
    SET_GPR_U32(ctx, 31, 0x1B7D48u);
    ctx->pc = 0x1B7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7FA0u, 0x1B7D40u, 0x1B7D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7D48u;
label_1b7d48:
    // 0x1b7d48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7D48u;
    {
        const bool branch_taken_0x1b7d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D48u;
        // 0x1b7d4c: 0x122900  sll         $a1, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d48) {
            ctx->pc = 0x1B7D60u;
            return;
        }
    }
    ctx->pc = 0x1B7D50u;
}
