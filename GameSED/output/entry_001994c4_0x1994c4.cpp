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

// Function: entry_001994c4
// Address: 0x1994c4 - 0x1994f4
void entry_001994c4_0x1994c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001994c4_0x1994c4");
#endif

    switch (ctx->pc) {
        case 0x1994d4u: goto label_1994d4;
        case 0x1994dcu: goto label_1994dc;
        default: break;
    }

    ctx->pc = 0x1994c4u;

    // 0x1994c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1994c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1994c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1994c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1994cc: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1994CCu;
    SET_GPR_U32(ctx, 31, 0x1994D4u);
    ctx->pc = 0x1994D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1994CCu;
    // 0x1994d0: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1994CCu, 0x1994D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994D4u;
label_1994d4:
    // 0x1994d4: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1994D4u;
    SET_GPR_U32(ctx, 31, 0x1994DCu);
    ctx->pc = 0x1994D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1994D4u;
    // 0x1994d8: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1994D4u, 0x1994DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994DCu;
label_1994dc:
    // 0x1994dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1994dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1994e0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1994e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1994e4: 0x24420ab0  addiu       $v0, $v0, 0xAB0
    ctx->pc = 0x1994e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2736));
    // 0x1994e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1994e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1994ec: 0xc066546  jal         func_199518
    ctx->pc = 0x1994ECu;
    SET_GPR_U32(ctx, 31, 0x1994F4u);
    ctx->pc = 0x1994F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1994ECu;
    // 0x1994f0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199518u, 0x1994ECu, 0x1994F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1994F4u;
}
