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

// Function: entry_0017be6c
// Address: 0x17be6c - 0x17be9c
void entry_0017be6c_0x17be6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017be6c_0x17be6c");
#endif

    switch (ctx->pc) {
        case 0x17be7cu: goto label_17be7c;
        case 0x17be84u: goto label_17be84;
        default: break;
    }

    ctx->pc = 0x17be6cu;

    // 0x17be6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17be6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17be70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17be70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17be74: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x17BE74u;
    SET_GPR_U32(ctx, 31, 0x17BE7Cu);
    ctx->pc = 0x17BE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BE74u;
    // 0x17be78: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x17BE74u, 0x17BE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BE7Cu;
label_17be7c:
    // 0x17be7c: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x17BE7Cu;
    SET_GPR_U32(ctx, 31, 0x17BE84u);
    ctx->pc = 0x17BE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BE7Cu;
    // 0x17be80: 0x24040280  addiu       $a0, $zero, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x17BE7Cu, 0x17BE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BE84u;
label_17be84:
    // 0x17be84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17be84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17be88: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x17be88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x17be8c: 0x2442fb08  addiu       $v0, $v0, -0x4F8
    ctx->pc = 0x17be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966024));
    // 0x17be90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17be90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17be94: 0xc05efb0  jal         func_17BEC0
    ctx->pc = 0x17BE94u;
    SET_GPR_U32(ctx, 31, 0x17BE9Cu);
    ctx->pc = 0x17BE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BE94u;
    // 0x17be98: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BEC0u, 0x17BE94u, 0x17BE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BE9Cu;
}
