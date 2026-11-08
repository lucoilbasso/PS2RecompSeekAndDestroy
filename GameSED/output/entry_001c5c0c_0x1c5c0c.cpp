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

// Function: entry_001c5c0c
// Address: 0x1c5c0c - 0x1c5c50
void entry_001c5c0c_0x1c5c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5c0c_0x1c5c0c");
#endif

    switch (ctx->pc) {
        case 0x1c5c38u: goto label_1c5c38;
        default: break;
    }

    ctx->pc = 0x1c5c0cu;

    // 0x1c5c0c: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x1c5c0cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x1c5c10: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1c5c10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5c14: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1c5c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5c18: 0x25290400  addiu       $t1, $t1, 0x400
    ctx->pc = 0x1c5c18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
    // 0x1c5c1c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c5c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c5c20: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c5c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c5c24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c5c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5c28: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1c5c28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1c5c2c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1c5c2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c5c30: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1C5C30u;
    SET_GPR_U32(ctx, 31, 0x1C5C38u);
    ctx->pc = 0x1C5C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5C30u;
    // 0x1c5c34: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1C5C30u, 0x1C5C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C38u;
label_1c5c38:
    // 0x1c5c38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c5c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5c3c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5C3Cu;
    {
        const bool branch_taken_0x1c5c3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C3Cu;
        // 0x1c5c40: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c3c) {
            ctx->pc = 0x1C5C50u;
            return;
        }
    }
    ctx->pc = 0x1C5C44u;
    // 0x1c5c44: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1c5c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c5c48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5C48u;
    {
        const bool branch_taken_0x1c5c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C48u;
        // 0x1c5c4c: 0xac62ddf8  sw          $v0, -0x2208($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294958584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c48) {
            ctx->pc = 0x1C5C58u;
            return;
        }
    }
    ctx->pc = 0x1C5C50u;
}
