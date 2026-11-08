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

// Function: entry_001105d0
// Address: 0x1105d0 - 0x11061c
void entry_001105d0_0x1105d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001105d0_0x1105d0");
#endif

    switch (ctx->pc) {
        case 0x1105e8u: goto label_1105e8;
        case 0x110604u: goto label_110604;
        default: break;
    }

    ctx->pc = 0x1105d0u;

    // 0x1105d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1105d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1105d4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1105d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1105d8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1105d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1105dc: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x1105dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1105e0: 0xc04110c  jal         func_104430
    ctx->pc = 0x1105E0u;
    SET_GPR_U32(ctx, 31, 0x1105E8u);
    ctx->pc = 0x1105E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1105E0u;
    // 0x1105e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x1105E0u, 0x1105E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1105E8u;
label_1105e8:
    // 0x1105e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1105e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1105ec: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x1105ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1105f0: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x1105f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1105f4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1105F4u;
    {
        const bool branch_taken_0x1105f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1105F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1105F4u;
        // 0x1105f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1105f4) {
            ctx->pc = 0x11061Cu;
            return;
        }
    }
    ctx->pc = 0x1105FCu;
    // 0x1105fc: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x1105FCu;
    SET_GPR_U32(ctx, 31, 0x110604u);
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x1105FCu, 0x110604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110604u;
label_110604:
    // 0x110604: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x110604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x110608: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11060c: 0x24a53c98  addiu       $a1, $a1, 0x3C98
    ctx->pc = 0x11060cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15512));
    // 0x110610: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x110610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x110614: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x110614u;
    SET_GPR_U32(ctx, 31, 0x11061Cu);
    ctx->pc = 0x110618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110614u;
    // 0x110618: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x110614u, 0x11061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11061Cu;
}
