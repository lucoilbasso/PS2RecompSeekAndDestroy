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

// Function: entry_0019fe74
// Address: 0x19fe74 - 0x19fea0
void entry_0019fe74_0x19fe74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fe74_0x19fe74");
#endif

    switch (ctx->pc) {
        case 0x19fe7cu: goto label_19fe7c;
        case 0x19fe8cu: goto label_19fe8c;
        case 0x19fe9cu: goto label_19fe9c;
        default: break;
    }

    ctx->pc = 0x19fe74u;

    // 0x19fe74: 0xc0671f6  jal         func_19C7D8
    ctx->pc = 0x19FE74u;
    SET_GPR_U32(ctx, 31, 0x19FE7Cu);
    ctx->pc = 0x19FE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE74u;
    // 0x19fe78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7D8u, 0x19FE74u, 0x19FE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FE7Cu;
label_19fe7c:
    // 0x19fe7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19fe7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fe80: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x19fe80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x19fe84: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x19FE84u;
    SET_GPR_U32(ctx, 31, 0x19FE8Cu);
    ctx->pc = 0x19FE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE84u;
    // 0x19fe88: 0x24848830  addiu       $a0, $a0, -0x77D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x19FE84u, 0x19FE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FE8Cu;
label_19fe8c:
    // 0x19fe8c: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x19fe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x19fe90: 0x24848810  addiu       $a0, $a0, -0x77F0
    ctx->pc = 0x19fe90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936592));
    // 0x19fe94: 0xc05bcca  jal         func_16F328
    ctx->pc = 0x19FE94u;
    SET_GPR_U32(ctx, 31, 0x19FE9Cu);
    ctx->pc = 0x19FE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FE94u;
    // 0x19fe98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F328u, 0x19FE94u, 0x19FE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FE9Cu;
label_19fe9c:
    // 0x19fe9c: 0x2645fff0  addiu       $a1, $s2, -0x10
    ctx->pc = 0x19fe9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    ctx->pc = 0x19fea0u;
}
