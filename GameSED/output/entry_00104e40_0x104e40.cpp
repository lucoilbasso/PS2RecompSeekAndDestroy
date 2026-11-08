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

// Function: entry_00104e40
// Address: 0x104e40 - 0x104ea0
void entry_00104e40_0x104e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104e40_0x104e40");
#endif

    switch (ctx->pc) {
        case 0x104e58u: goto label_104e58;
        case 0x104e94u: goto label_104e94;
        default: break;
    }

    ctx->pc = 0x104e40u;

    // 0x104e40: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x104e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x104e44: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x104E44u;
    {
        const bool branch_taken_0x104e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E44u;
        // 0x104e48: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e44) {
            ctx->pc = 0x104ED8u;
            return;
        }
    }
    ctx->pc = 0x104E4Cu;
    // 0x104e4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e50: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x104E50u;
    SET_GPR_U32(ctx, 31, 0x104E58u);
    ctx->pc = 0x104E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104E50u;
    // 0x104e54: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x104E50u, 0x104E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104E58u;
label_104e58:
    // 0x104e58: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x104e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x104e5c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x104e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x104e60: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x104e60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e64: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x104e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x104e68: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x104e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x104e6c: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x104e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x104e70: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x104e70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x104e74: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x104e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x104e78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x104e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x104e7c: 0xae260004  sw          $a2, 0x4($s1)
    ctx->pc = 0x104e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 6));
    // 0x104e80: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x104e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
    // 0x104e84: 0x10530006  beq         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x104E84u;
    {
        const bool branch_taken_0x104e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x104E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E84u;
        // 0x104e88: 0xae230018  sw          $v1, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e84) {
            ctx->pc = 0x104EA0u;
            return;
        }
    }
    ctx->pc = 0x104E8Cu;
    // 0x104e8c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x104E8Cu;
    SET_GPR_U32(ctx, 31, 0x104E94u);
    ctx->pc = 0x104E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104E8Cu;
    // 0x104e90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x104E8Cu, 0x104E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104E94u;
label_104e94:
    // 0x104e94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x104E94u;
    {
        const bool branch_taken_0x104e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E94u;
        // 0x104e98: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e94) {
            ctx->pc = 0x104EA8u;
            return;
        }
    }
    ctx->pc = 0x104E9Cu;
    // 0x104e9c: 0x0  nop
    ctx->pc = 0x104e9cu;
    // NOP
    ctx->pc = 0x104ea0u;
}
