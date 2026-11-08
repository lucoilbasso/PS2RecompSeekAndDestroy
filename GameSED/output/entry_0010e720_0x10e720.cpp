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

// Function: entry_0010e720
// Address: 0x10e720 - 0x10e76c
void entry_0010e720_0x10e720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e720_0x10e720");
#endif

    switch (ctx->pc) {
        case 0x10e738u: goto label_10e738;
        case 0x10e754u: goto label_10e754;
        default: break;
    }

    ctx->pc = 0x10e720u;

    // 0x10e720: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10e720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10e724: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10e724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e728: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10e728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e72c: 0x8c520044  lw          $s2, 0x44($v0)
    ctx->pc = 0x10e72cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10e730: 0xc04110c  jal         func_104430
    ctx->pc = 0x10E730u;
    SET_GPR_U32(ctx, 31, 0x10E738u);
    ctx->pc = 0x10E734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E730u;
    // 0x10e734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10E730u, 0x10E738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E738u;
label_10e738:
    // 0x10e738: 0x24031846  addiu       $v1, $zero, 0x1846
    ctx->pc = 0x10e738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
    // 0x10e73c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10e73cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e740: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x10e740u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10e744: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x10E744u;
    {
        const bool branch_taken_0x10e744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10e744) {
            ctx->pc = 0x10E76Cu;
            return;
        }
    }
    ctx->pc = 0x10E74Cu;
    // 0x10e74c: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10E74Cu;
    SET_GPR_U32(ctx, 31, 0x10E754u);
    ctx->pc = 0x10E750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E74Cu;
    // 0x10e750: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10E74Cu, 0x10E754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E754u;
label_10e754:
    // 0x10e754: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10e754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10e758: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10e758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e75c: 0x24a53d80  addiu       $a1, $a1, 0x3D80
    ctx->pc = 0x10e75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15744));
    // 0x10e760: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10e760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10e764: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10E764u;
    SET_GPR_U32(ctx, 31, 0x10E76Cu);
    ctx->pc = 0x10E768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E764u;
    // 0x10e768: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10E764u, 0x10E76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E76Cu;
}
