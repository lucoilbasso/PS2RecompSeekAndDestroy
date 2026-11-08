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

// Function: entry_001bdf60
// Address: 0x1bdf60 - 0x1bdfa8
void entry_001bdf60_0x1bdf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdf60_0x1bdf60");
#endif

    switch (ctx->pc) {
        case 0x1bdf84u: goto label_1bdf84;
        case 0x1bdfa4u: goto label_1bdfa4;
        default: break;
    }

    ctx->pc = 0x1bdf60u;

    // 0x1bdf60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bdf60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bdf64: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x1bdf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1bdf68: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1bdf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1bdf6c: 0x222180b  movn        $v1, $s1, $v0
    ctx->pc = 0x1bdf6cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
    // 0x1bdf70: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1BDF70u;
    {
        const bool branch_taken_0x1bdf70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BDF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF70u;
        // 0x1bdf74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf70) {
            ctx->pc = 0x1BDFF4u;
            return;
        }
    }
    ctx->pc = 0x1BDF78u;
    // 0x1bdf78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bdf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf7c: 0xc070b04  jal         func_1C2C10
    ctx->pc = 0x1BDF7Cu;
    SET_GPR_U32(ctx, 31, 0x1BDF84u);
    ctx->pc = 0x1BDF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF7Cu;
    // 0x1bdf80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2C10u, 0x1BDF7Cu, 0x1BDF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF84u;
label_1bdf84:
    // 0x1bdf84: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1bdf84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf88: 0x222180b  movn        $v1, $s1, $v0
    ctx->pc = 0x1bdf88u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
    // 0x1bdf8c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BDF8Cu;
    {
        const bool branch_taken_0x1bdf8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF8Cu;
        // 0x1bdf90: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf8c) {
            ctx->pc = 0x1BDFA8u;
            return;
        }
    }
    ctx->pc = 0x1BDF94u;
    // 0x1bdf94: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BDF94u;
    {
        const bool branch_taken_0x1bdf94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdf94) {
            ctx->pc = 0x1BDF98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDF94u;
            // 0x1bdf98: 0x8e050118  lw          $a1, 0x118($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDFACu;
            return;
        }
    }
    ctx->pc = 0x1BDF9Cu;
    // 0x1bdf9c: 0xc070aac  jal         func_1C2AB0
    ctx->pc = 0x1BDF9Cu;
    SET_GPR_U32(ctx, 31, 0x1BDFA4u);
    ctx->pc = 0x1BDFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF9Cu;
    // 0x1bdfa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2AB0u, 0x1BDF9Cu, 0x1BDFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFA4u;
label_1bdfa4:
    // 0x1bdfa4: 0x222a00b  movn        $s4, $s1, $v0
    ctx->pc = 0x1bdfa4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 17));
    ctx->pc = 0x1bdfa8u;
}
