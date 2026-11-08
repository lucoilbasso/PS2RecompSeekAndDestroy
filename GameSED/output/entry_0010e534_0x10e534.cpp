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

// Function: entry_0010e534
// Address: 0x10e534 - 0x10e57c
void entry_0010e534_0x10e534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e534_0x10e534");
#endif

    switch (ctx->pc) {
        case 0x10e548u: goto label_10e548;
        case 0x10e564u: goto label_10e564;
        default: break;
    }

    ctx->pc = 0x10e534u;

    // 0x10e534: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10e534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10e538: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x10e538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x10e53c: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x10e53cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10e540: 0xc04110c  jal         func_104430
    ctx->pc = 0x10E540u;
    SET_GPR_U32(ctx, 31, 0x10E548u);
    ctx->pc = 0x10E544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E540u;
    // 0x10e544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10E540u, 0x10E548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E548u;
label_10e548:
    // 0x10e548: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10e548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e54c: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x10e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x10e550: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x10e550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10e554: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10E554u;
    {
        const bool branch_taken_0x10e554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E554u;
        // 0x10e558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e554) {
            ctx->pc = 0x10E57Cu;
            return;
        }
    }
    ctx->pc = 0x10E55Cu;
    // 0x10e55c: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10E55Cu;
    SET_GPR_U32(ctx, 31, 0x10E564u);
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10E55Cu, 0x10E564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E564u;
label_10e564:
    // 0x10e564: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10e564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10e568: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10e568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e56c: 0x24a53c98  addiu       $a1, $a1, 0x3C98
    ctx->pc = 0x10e56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15512));
    // 0x10e570: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10e570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10e574: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10E574u;
    SET_GPR_U32(ctx, 31, 0x10E57Cu);
    ctx->pc = 0x10E578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E574u;
    // 0x10e578: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10E574u, 0x10E57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E57Cu;
}
