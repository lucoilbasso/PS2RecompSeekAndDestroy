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

// Function: entry_0016aa4c
// Address: 0x16aa4c - 0x16aa98
void entry_0016aa4c_0x16aa4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016aa4c_0x16aa4c");
#endif

    switch (ctx->pc) {
        case 0x16aa7cu: goto label_16aa7c;
        default: break;
    }

    ctx->pc = 0x16aa4cu;

    // 0x16aa4c: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x16AA4Cu;
    {
        const bool branch_taken_0x16aa4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA4Cu;
        // 0x16aa50: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa4c) {
            ctx->pc = 0x16AADCu;
            return;
        }
    }
    ctx->pc = 0x16AA54u;
    // 0x16aa54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16aa58: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x16aa58u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x16aa5c: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x16AA5Cu;
    {
        const bool branch_taken_0x16aa5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA5Cu;
        // 0x16aa60: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa5c) {
            ctx->pc = 0x16AAD8u;
            return;
        }
    }
    ctx->pc = 0x16AA64u;
    // 0x16aa64: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x16aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x16aa68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16aa6c: 0x10640013  beq         $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x16AA6Cu;
    {
        const bool branch_taken_0x16aa6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x16AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA6Cu;
        // 0x16aa70: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa6c) {
            ctx->pc = 0x16AABCu;
            return;
        }
    }
    ctx->pc = 0x16AA74u;
    // 0x16aa74: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16AA74u;
    SET_GPR_U32(ctx, 31, 0x16AA7Cu);
    ctx->pc = 0x16AA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AA74u;
    // 0x16aa78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16AA74u, 0x16AA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AA7Cu;
label_16aa7c:
    // 0x16aa7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16aa7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16aa84: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x16aa84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16aa88: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16AA88u;
    {
        const bool branch_taken_0x16aa88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA88u;
        // 0x16aa8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa88) {
            ctx->pc = 0x16AAB8u;
            return;
        }
    }
    ctx->pc = 0x16AA90u;
    // 0x16aa90: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16AA90u;
    {
        const bool branch_taken_0x16aa90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA90u;
        // 0x16aa94: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa90) {
            ctx->pc = 0x16AAB4u;
            return;
        }
    }
    ctx->pc = 0x16AA98u;
}
