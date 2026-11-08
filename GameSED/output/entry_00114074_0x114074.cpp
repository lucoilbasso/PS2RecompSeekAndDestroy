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

// Function: entry_00114074
// Address: 0x114074 - 0x1140a8
void entry_00114074_0x114074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114074_0x114074");
#endif

    switch (ctx->pc) {
        case 0x114084u: goto label_114084;
        case 0x11408cu: goto label_11408c;
        default: break;
    }

    ctx->pc = 0x114074u;

    // 0x114074: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x114074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x114078: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x114078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11407c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x11407Cu;
    SET_GPR_U32(ctx, 31, 0x114084u);
    ctx->pc = 0x114080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11407Cu;
    // 0x114080: 0x2404011f  addiu       $a0, $zero, 0x11F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x11407Cu, 0x114084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114084u;
label_114084:
    // 0x114084: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x114084u;
    SET_GPR_U32(ctx, 31, 0x11408Cu);
    ctx->pc = 0x114088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114084u;
    // 0x114088: 0x24043640  addiu       $a0, $zero, 0x3640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x114084u, 0x11408Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11408Cu;
label_11408c:
    // 0x11408c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11408cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114090: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x114090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114094: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x114094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x114098: 0x2442e7b8  addiu       $v0, $v0, -0x1848
    ctx->pc = 0x114098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961080));
    // 0x11409c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11409cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1140a0: 0xc045034  jal         func_1140D0
    ctx->pc = 0x1140A0u;
    SET_GPR_U32(ctx, 31, 0x1140A8u);
    ctx->pc = 0x1140A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1140A0u;
    // 0x1140a4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1140D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1140D0u, 0x1140A0u, 0x1140A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1140A8u;
}
