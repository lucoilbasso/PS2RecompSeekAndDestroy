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

// Function: entry_00199e3c
// Address: 0x199e3c - 0x199e6c
void entry_00199e3c_0x199e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199e3c_0x199e3c");
#endif

    switch (ctx->pc) {
        case 0x199e4cu: goto label_199e4c;
        case 0x199e54u: goto label_199e54;
        default: break;
    }

    ctx->pc = 0x199e3cu;

    // 0x199e3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x199e40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x199e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x199e44: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x199E44u;
    SET_GPR_U32(ctx, 31, 0x199E4Cu);
    ctx->pc = 0x199E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199E44u;
    // 0x199e48: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x199E44u, 0x199E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E4Cu;
label_199e4c:
    // 0x199e4c: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x199E4Cu;
    SET_GPR_U32(ctx, 31, 0x199E54u);
    ctx->pc = 0x199E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199E4Cu;
    // 0x199e50: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x199E4Cu, 0x199E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E54u;
label_199e54:
    // 0x199e54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x199e54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e58: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x199e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x199e5c: 0x24420b18  addiu       $v0, $v0, 0xB18
    ctx->pc = 0x199e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2840));
    // 0x199e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e64: 0xc066730  jal         func_199CC0
    ctx->pc = 0x199E64u;
    SET_GPR_U32(ctx, 31, 0x199E6Cu);
    ctx->pc = 0x199E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199E64u;
    // 0x199e68: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199CC0u, 0x199E64u, 0x199E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E6Cu;
}
