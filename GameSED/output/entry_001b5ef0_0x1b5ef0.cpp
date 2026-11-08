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

// Function: entry_001b5ef0
// Address: 0x1b5ef0 - 0x1b5f30
void entry_001b5ef0_0x1b5ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5ef0_0x1b5ef0");
#endif

    switch (ctx->pc) {
        case 0x1b5f1cu: goto label_1b5f1c;
        default: break;
    }

    ctx->pc = 0x1b5ef0u;

    // 0x1b5ef0: 0x26b0b400  addiu       $s0, $s5, -0x4C00
    ctx->pc = 0x1b5ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947840));
    // 0x1b5ef4: 0x24a4b600  addiu       $a0, $a1, -0x4A00
    ctx->pc = 0x1b5ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948352));
    // 0x1b5ef8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b5ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b5efc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b5efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b5f00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b5f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f04: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b5f04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f08: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1b5f08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b5f0c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b5f0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f10: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1b5f10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b5f14: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B5F14u;
    SET_GPR_U32(ctx, 31, 0x1B5F1Cu);
    ctx->pc = 0x1B5F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5F14u;
    // 0x1b5f18: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B5F14u, 0x1B5F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5F1Cu;
label_1b5f1c:
    // 0x1b5f1c: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5F1Cu;
    {
        const bool branch_taken_0x1b5f1c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b5f1c) {
            ctx->pc = 0x1B5F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5F1Cu;
            // 0x1b5f20: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5F30u;
            return;
        }
    }
    ctx->pc = 0x1B5F24u;
    // 0x1b5f24: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1b5f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1b5f28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5F28u;
    {
        const bool branch_taken_0x1b5f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F28u;
        // 0x1b5f2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f28) {
            ctx->pc = 0x1B5F38u;
            return;
        }
    }
    ctx->pc = 0x1B5F30u;
}
