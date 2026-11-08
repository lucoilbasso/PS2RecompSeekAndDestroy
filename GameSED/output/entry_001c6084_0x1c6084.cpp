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

// Function: entry_001c6084
// Address: 0x1c6084 - 0x1c60cc
void entry_001c6084_0x1c6084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6084_0x1c6084");
#endif

    switch (ctx->pc) {
        case 0x1c60b4u: goto label_1c60b4;
        default: break;
    }

    ctx->pc = 0x1c6084u;

    // 0x1c6084: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x1c6084u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x1c6088: 0xacf0eec0  sw          $s0, -0x1140($a3)
    ctx->pc = 0x1c6088u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294962880), GPR_U32(ctx, 16));
    // 0x1c608c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c608cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6090: 0x24e7eec0  addiu       $a3, $a3, -0x1140
    ctx->pc = 0x1c6090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962880));
    // 0x1c6094: 0x25290400  addiu       $t1, $t1, 0x400
    ctx->pc = 0x1c6094u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
    // 0x1c6098: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c6098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c609c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1c609cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c60a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c60a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c60a4: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1c60a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c60a8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1c60a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c60ac: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1C60ACu;
    SET_GPR_U32(ctx, 31, 0x1C60B4u);
    ctx->pc = 0x1C60B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C60ACu;
    // 0x1c60b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1C60ACu, 0x1C60B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60B4u;
label_1c60b4:
    // 0x1c60b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c60b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60b8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C60B8u;
    {
        const bool branch_taken_0x1c60b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C60BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60B8u;
        // 0x1c60bc: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c60b8) {
            ctx->pc = 0x1C60CCu;
            return;
        }
    }
    ctx->pc = 0x1C60C0u;
    // 0x1c60c0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c60c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c60c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C60C4u;
    {
        const bool branch_taken_0x1c60c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C60C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60C4u;
        // 0x1c60c8: 0xac62ddf8  sw          $v0, -0x2208($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294958584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c60c4) {
            ctx->pc = 0x1C60D4u;
            return;
        }
    }
    ctx->pc = 0x1C60CCu;
}
