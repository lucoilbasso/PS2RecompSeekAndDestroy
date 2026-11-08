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

// Function: entry_001c5120
// Address: 0x1c5120 - 0x1c516c
void entry_001c5120_0x1c5120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5120_0x1c5120");
#endif

    switch (ctx->pc) {
        case 0x1c5150u: goto label_1c5150;
        case 0x1c5164u: goto label_1c5164;
        default: break;
    }

    ctx->pc = 0x1c5120u;

    // 0x1c5120: 0x3c130041  lui         $s3, 0x41
    ctx->pc = 0x1c5120u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
    // 0x1c5124: 0x24e7eec0  addiu       $a3, $a3, -0x1140
    ctx->pc = 0x1c5124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962880));
    // 0x1c5128: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c5128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c512c: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x1c512cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
    // 0x1c5130: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1c5130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1c5134: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c5134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c5138: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c5138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c513c: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1c513cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c5140: 0x26690400  addiu       $t1, $s3, 0x400
    ctx->pc = 0x1c5140u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 1024));
    // 0x1c5144: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1c5144u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c5148: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1C5148u;
    SET_GPR_U32(ctx, 31, 0x1C5150u);
    ctx->pc = 0x1C514Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5148u;
    // 0x1c514c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1C5148u, 0x1C5150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5150u;
label_1c5150:
    // 0x1c5150: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c5150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5154: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5154u;
    {
        const bool branch_taken_0x1c5154 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5154) {
            ctx->pc = 0x1C516Cu;
            return;
        }
    }
    ctx->pc = 0x1C515Cu;
    // 0x1c515c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1C515Cu;
    SET_GPR_U32(ctx, 31, 0x1C5164u);
    ctx->pc = 0x1C5160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C515Cu;
    // 0x1c5160: 0x8e24ddfc  lw          $a0, -0x2204($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1C515Cu, 0x1C5164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5164u;
label_1c5164:
    // 0x1c5164: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5164u;
    {
        const bool branch_taken_0x1c5164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5164u;
        // 0x1c5168: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5164) {
            ctx->pc = 0x1C5178u;
            return;
        }
    }
    ctx->pc = 0x1C516Cu;
}
