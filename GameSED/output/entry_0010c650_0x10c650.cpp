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

// Function: entry_0010c650
// Address: 0x10c650 - 0x10c680
void entry_0010c650_0x10c650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c650_0x10c650");
#endif

    switch (ctx->pc) {
        case 0x10c670u: goto label_10c670;
        default: break;
    }

    ctx->pc = 0x10c650u;

    // 0x10c650: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c654: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10c654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10c658: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10c658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c65c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c660: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10c660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c664: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10c664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10c668: 0xc04110c  jal         func_104430
    ctx->pc = 0x10C668u;
    SET_GPR_U32(ctx, 31, 0x10C670u);
    ctx->pc = 0x10C66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C668u;
    // 0x10c66c: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10C668u, 0x10C670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C670u;
label_10c670:
    // 0x10c670: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x10c670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10c674: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10c674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c678: 0xc062a2a  jal         func_18A8A8
    ctx->pc = 0x10C678u;
    SET_GPR_U32(ctx, 31, 0x10C680u);
    ctx->pc = 0x10C67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C678u;
    // 0x10c67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A8A8u, 0x10C678u, 0x10C680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C680u;
}
