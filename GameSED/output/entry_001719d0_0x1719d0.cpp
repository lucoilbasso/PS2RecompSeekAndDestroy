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

// Function: entry_001719d0
// Address: 0x1719d0 - 0x1719f0
void entry_001719d0_0x1719d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001719d0_0x1719d0");
#endif

    switch (ctx->pc) {
        case 0x1719dcu: goto label_1719dc;
        case 0x1719e4u: goto label_1719e4;
        case 0x1719ecu: goto label_1719ec;
        default: break;
    }

    ctx->pc = 0x1719d0u;

    // 0x1719d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1719d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1719d4: 0xc05d468  jal         func_1751A0
    ctx->pc = 0x1719D4u;
    SET_GPR_U32(ctx, 31, 0x1719DCu);
    ctx->pc = 0x1719D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1719D4u;
    // 0x1719d8: 0x261012a8  addiu       $s0, $s0, 0x12A8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1751A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1751A0u, 0x1719D4u, 0x1719DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1719DCu;
label_1719dc:
    // 0x1719dc: 0xc05cf56  jal         func_173D58
    ctx->pc = 0x1719DCu;
    SET_GPR_U32(ctx, 31, 0x1719E4u);
    ctx->pc = 0x1719E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1719DCu;
    // 0x1719e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D58u, 0x1719DCu, 0x1719E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1719E4u;
label_1719e4:
    // 0x1719e4: 0xc05c68a  jal         func_171A28
    ctx->pc = 0x1719E4u;
    SET_GPR_U32(ctx, 31, 0x1719ECu);
    ctx->pc = 0x1719E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1719E4u;
    // 0x1719e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171A28u, 0x1719E4u, 0x1719ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1719ECu;
label_1719ec:
    // 0x1719ec: 0x0  nop
    ctx->pc = 0x1719ecu;
    // NOP
    ctx->pc = 0x1719f0u;
}
