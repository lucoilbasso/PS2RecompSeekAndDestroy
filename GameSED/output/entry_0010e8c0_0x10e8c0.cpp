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

// Function: entry_0010e8c0
// Address: 0x10e8c0 - 0x10e91c
void entry_0010e8c0_0x10e8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e8c0_0x10e8c0");
#endif

    switch (ctx->pc) {
        case 0x10e8e4u: goto label_10e8e4;
        case 0x10e900u: goto label_10e900;
        case 0x10e918u: goto label_10e918;
        default: break;
    }

    ctx->pc = 0x10e8c0u;

    // 0x10e8c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x10e8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x10e8c4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x10e8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x10e8c8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x10e8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x10e8cc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x10e8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x10e8d0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10e8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10e8d4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10e8d8: 0x8c510044  lw          $s1, 0x44($v0)
    ctx->pc = 0x10e8d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10e8dc: 0xc04110c  jal         func_104430
    ctx->pc = 0x10E8DCu;
    SET_GPR_U32(ctx, 31, 0x10E8E4u);
    ctx->pc = 0x10E8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E8DCu;
    // 0x10e8e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10E8DCu, 0x10E8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E8E4u;
label_10e8e4:
    // 0x10e8e4: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x10e8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x10e8e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10e8e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e8ec: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x10e8ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10e8f0: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x10E8F0u;
    {
        const bool branch_taken_0x10e8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10e8f0) {
            ctx->pc = 0x10E8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E8F0u;
            // 0x10e8f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E91Cu;
            return;
        }
    }
    ctx->pc = 0x10E8F8u;
    // 0x10e8f8: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10E8F8u;
    SET_GPR_U32(ctx, 31, 0x10E900u);
    ctx->pc = 0x10E8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E8F8u;
    // 0x10e8fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10E8F8u, 0x10E900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E900u;
label_10e900:
    // 0x10e900: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10e900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10e904: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10e904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e908: 0x24a53c98  addiu       $a1, $a1, 0x3C98
    ctx->pc = 0x10e908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15512));
    // 0x10e90c: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10e90cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10e910: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10E910u;
    SET_GPR_U32(ctx, 31, 0x10E918u);
    ctx->pc = 0x10E914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E910u;
    // 0x10e914: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10E910u, 0x10E918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E918u;
label_10e918:
    // 0x10e918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10e91cu;
}
