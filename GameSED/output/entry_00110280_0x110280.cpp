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

// Function: entry_00110280
// Address: 0x110280 - 0x1102c8
void entry_00110280_0x110280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110280_0x110280");
#endif

    switch (ctx->pc) {
        case 0x110294u: goto label_110294;
        case 0x1102b0u: goto label_1102b0;
        default: break;
    }

    ctx->pc = 0x110280u;

    // 0x110280: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x110280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x110284: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x110284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x110288: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x110288u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x11028c: 0xc04110c  jal         func_104430
    ctx->pc = 0x11028Cu;
    SET_GPR_U32(ctx, 31, 0x110294u);
    ctx->pc = 0x110290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11028Cu;
    // 0x110290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x11028Cu, 0x110294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110294u;
label_110294:
    // 0x110294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110298: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x110298u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11029c: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x11029cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1102a0: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1102A0u;
    {
        const bool branch_taken_0x1102a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1102A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102A0u;
        // 0x1102a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1102a0) {
            ctx->pc = 0x1102C8u;
            return;
        }
    }
    ctx->pc = 0x1102A8u;
    // 0x1102a8: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x1102A8u;
    SET_GPR_U32(ctx, 31, 0x1102B0u);
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x1102A8u, 0x1102B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1102B0u;
label_1102b0:
    // 0x1102b0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1102b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1102b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1102b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102b8: 0x24a53c98  addiu       $a1, $a1, 0x3C98
    ctx->pc = 0x1102b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15512));
    // 0x1102bc: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x1102bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1102c0: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1102C0u;
    SET_GPR_U32(ctx, 31, 0x1102C8u);
    ctx->pc = 0x1102C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1102C0u;
    // 0x1102c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1102C0u, 0x1102C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1102C8u;
}
