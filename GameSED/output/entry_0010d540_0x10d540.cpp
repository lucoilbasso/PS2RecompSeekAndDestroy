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

// Function: entry_0010d540
// Address: 0x10d540 - 0x10d568
void entry_0010d540_0x10d540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d540_0x10d540");
#endif

    switch (ctx->pc) {
        case 0x10d550u: goto label_10d550;
        default: break;
    }

    ctx->pc = 0x10d540u;

    // 0x10d540: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10D540u;
    {
        const bool branch_taken_0x10d540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x10d540) {
            ctx->pc = 0x10D568u;
            return;
        }
    }
    ctx->pc = 0x10D548u;
    // 0x10d548: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10D548u;
    SET_GPR_U32(ctx, 31, 0x10D550u);
    ctx->pc = 0x10D54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D548u;
    // 0x10d54c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10D548u, 0x10D550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D550u;
label_10d550:
    // 0x10d550: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10d550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10d554: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10d554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d558: 0x24a53c88  addiu       $a1, $a1, 0x3C88
    ctx->pc = 0x10d558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15496));
    // 0x10d55c: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10d55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10d560: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10D560u;
    SET_GPR_U32(ctx, 31, 0x10D568u);
    ctx->pc = 0x10D564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D560u;
    // 0x10d564: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10D560u, 0x10D568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D568u;
}
