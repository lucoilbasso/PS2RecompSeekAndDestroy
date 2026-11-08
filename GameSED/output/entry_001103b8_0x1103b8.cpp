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

// Function: entry_001103b8
// Address: 0x1103b8 - 0x110408
void entry_001103b8_0x1103b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001103b8_0x1103b8");
#endif

    switch (ctx->pc) {
        case 0x1103d0u: goto label_1103d0;
        case 0x1103f0u: goto label_1103f0;
        default: break;
    }

    ctx->pc = 0x1103b8u;

    // 0x1103b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1103b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1103bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1103bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1103c0: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1103c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1103c4: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x1103c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1103c8: 0xc04110c  jal         func_104430
    ctx->pc = 0x1103C8u;
    SET_GPR_U32(ctx, 31, 0x1103D0u);
    ctx->pc = 0x1103CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1103C8u;
    // 0x1103cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x1103C8u, 0x1103D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1103D0u;
label_1103d0:
    // 0x1103d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1103d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1103d4: 0x24030946  addiu       $v1, $zero, 0x946
    ctx->pc = 0x1103d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2374));
    // 0x1103d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1103d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1103dc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1103dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1103e0: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1103E0u;
    {
        const bool branch_taken_0x1103e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1103E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103E0u;
        // 0x1103e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1103e0) {
            ctx->pc = 0x110408u;
            return;
        }
    }
    ctx->pc = 0x1103E8u;
    // 0x1103e8: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x1103E8u;
    SET_GPR_U32(ctx, 31, 0x1103F0u);
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x1103E8u, 0x1103F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1103F0u;
label_1103f0:
    // 0x1103f0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1103f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1103f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1103f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1103f8: 0x24a53cc0  addiu       $a1, $a1, 0x3CC0
    ctx->pc = 0x1103f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15552));
    // 0x1103fc: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x1103fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x110400: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x110400u;
    SET_GPR_U32(ctx, 31, 0x110408u);
    ctx->pc = 0x110404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110400u;
    // 0x110404: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x110400u, 0x110408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110408u;
}
