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

// Function: entry_00184b38
// Address: 0x184b38 - 0x184b5c
void entry_00184b38_0x184b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184b38_0x184b38");
#endif

    switch (ctx->pc) {
        case 0x184b44u: goto label_184b44;
        case 0x184b54u: goto label_184b54;
        default: break;
    }

    ctx->pc = 0x184b38u;

    // 0x184b38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x184b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184b3c: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x184B3Cu;
    SET_GPR_U32(ctx, 31, 0x184B44u);
    ctx->pc = 0x184B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184B3Cu;
    // 0x184b40: 0x248415a8  addiu       $a0, $a0, 0x15A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x184B3Cu, 0x184B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B44u;
label_184b44:
    // 0x184b44: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x184b44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x184b48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x184b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184b4c: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x184B4Cu;
    SET_GPR_U32(ctx, 31, 0x184B54u);
    ctx->pc = 0x184B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184B4Cu;
    // 0x184b50: 0x248415c0  addiu       $a0, $a0, 0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x184B4Cu, 0x184B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B54u;
label_184b54:
    // 0x184b54: 0xc068364  jal         func_1A0D90
    ctx->pc = 0x184B54u;
    SET_GPR_U32(ctx, 31, 0x184B5Cu);
    ctx->pc = 0x184B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184B54u;
    // 0x184b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D90u, 0x184B54u, 0x184B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184B5Cu;
}
