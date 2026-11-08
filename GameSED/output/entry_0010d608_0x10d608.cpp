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

// Function: entry_0010d608
// Address: 0x10d608 - 0x10d630
void entry_0010d608_0x10d608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d608_0x10d608");
#endif

    switch (ctx->pc) {
        case 0x10d618u: goto label_10d618;
        default: break;
    }

    ctx->pc = 0x10d608u;

    // 0x10d608: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10D608u;
    {
        const bool branch_taken_0x10d608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x10d608) {
            ctx->pc = 0x10D630u;
            return;
        }
    }
    ctx->pc = 0x10D610u;
    // 0x10d610: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10D610u;
    SET_GPR_U32(ctx, 31, 0x10D618u);
    ctx->pc = 0x10D614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D610u;
    // 0x10d614: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10D610u, 0x10D618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D618u;
label_10d618:
    // 0x10d618: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10d618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10d61c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10d61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d620: 0x24a53c88  addiu       $a1, $a1, 0x3C88
    ctx->pc = 0x10d620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15496));
    // 0x10d624: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10d624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10d628: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10D628u;
    SET_GPR_U32(ctx, 31, 0x10D630u);
    ctx->pc = 0x10D62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D628u;
    // 0x10d62c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10D628u, 0x10D630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D630u;
}
