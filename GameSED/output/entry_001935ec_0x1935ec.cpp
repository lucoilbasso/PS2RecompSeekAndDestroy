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

// Function: entry_001935ec
// Address: 0x1935ec - 0x19361c
void entry_001935ec_0x1935ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001935ec_0x1935ec");
#endif

    switch (ctx->pc) {
        case 0x1935fcu: goto label_1935fc;
        case 0x193604u: goto label_193604;
        default: break;
    }

    ctx->pc = 0x1935ecu;

    // 0x1935ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1935ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1935f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1935f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1935f4: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1935F4u;
    SET_GPR_U32(ctx, 31, 0x1935FCu);
    ctx->pc = 0x1935F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1935F4u;
    // 0x1935f8: 0x24040276  addiu       $a0, $zero, 0x276 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1935F4u, 0x1935FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1935FCu;
label_1935fc:
    // 0x1935fc: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1935FCu;
    SET_GPR_U32(ctx, 31, 0x193604u);
    ctx->pc = 0x193600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1935FCu;
    // 0x193600: 0x24040250  addiu       $a0, $zero, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1935FCu, 0x193604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193604u;
label_193604:
    // 0x193604: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x193604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193608: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x193608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x19360c: 0x244205e0  addiu       $v0, $v0, 0x5E0
    ctx->pc = 0x19360cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1504));
    // 0x193610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193614: 0xc064a8a  jal         func_192A28
    ctx->pc = 0x193614u;
    SET_GPR_U32(ctx, 31, 0x19361Cu);
    ctx->pc = 0x193618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193614u;
    // 0x193618: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A28u, 0x193614u, 0x19361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19361Cu;
}
