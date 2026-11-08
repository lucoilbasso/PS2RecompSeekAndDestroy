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

// Function: entry_0010dd38
// Address: 0x10dd38 - 0x10dd94
void entry_0010dd38_0x10dd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dd38_0x10dd38");
#endif

    switch (ctx->pc) {
        case 0x10dd40u: goto label_10dd40;
        case 0x10dd5cu: goto label_10dd5c;
        case 0x10dd7cu: goto label_10dd7c;
        default: break;
    }

    ctx->pc = 0x10dd38u;

    // 0x10dd38: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10DD38u;
    SET_GPR_U32(ctx, 31, 0x10DD40u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10DD38u, 0x10DD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DD40u;
label_10dd40:
    // 0x10dd40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10dd44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10dd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10dd48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd4c: 0x1443001c  bne         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x10DD4Cu;
    {
        const bool branch_taken_0x10dd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD4Cu;
        // 0x10dd50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd4c) {
            ctx->pc = 0x10DDC0u;
            return;
        }
    }
    ctx->pc = 0x10DD54u;
    // 0x10dd54: 0xc04110c  jal         func_104430
    ctx->pc = 0x10DD54u;
    SET_GPR_U32(ctx, 31, 0x10DD5Cu);
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10DD54u, 0x10DD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DD5Cu;
label_10dd5c:
    // 0x10dd5c: 0x24030846  addiu       $v1, $zero, 0x846
    ctx->pc = 0x10dd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2118));
    // 0x10dd60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10dd60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd64: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10dd68: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10dd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10dd6c: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x10DD6Cu;
    {
        const bool branch_taken_0x10dd6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x10DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD6Cu;
        // 0x10dd70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd6c) {
            ctx->pc = 0x10DD94u;
            return;
        }
    }
    ctx->pc = 0x10DD74u;
    // 0x10dd74: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10DD74u;
    SET_GPR_U32(ctx, 31, 0x10DD7Cu);
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10DD74u, 0x10DD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DD7Cu;
label_10dd7c:
    // 0x10dd7c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10dd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10dd80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10dd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd84: 0x24a53cc0  addiu       $a1, $a1, 0x3CC0
    ctx->pc = 0x10dd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15552));
    // 0x10dd88: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10dd88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10dd8c: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10DD8Cu;
    SET_GPR_U32(ctx, 31, 0x10DD94u);
    ctx->pc = 0x10DD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DD8Cu;
    // 0x10dd90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10DD8Cu, 0x10DD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DD94u;
}
