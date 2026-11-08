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

// Function: entry_00152b60
// Address: 0x152b60 - 0x152b9c
void entry_00152b60_0x152b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152b60_0x152b60");
#endif

    switch (ctx->pc) {
        case 0x152b68u: goto label_152b68;
        case 0x152b70u: goto label_152b70;
        default: break;
    }

    ctx->pc = 0x152b60u;

    // 0x152b60: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x152B60u;
    SET_GPR_U32(ctx, 31, 0x152B68u);
    ctx->pc = 0x152B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152B60u;
    // 0x152b64: 0x24042118  addiu       $a0, $zero, 0x2118 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x152B60u, 0x152B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152B68u;
label_152b68:
    // 0x152b68: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x152B68u;
    SET_GPR_U32(ctx, 31, 0x152B70u);
    ctx->pc = 0x152B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152B68u;
    // 0x152b6c: 0x24040290  addiu       $a0, $zero, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x152B68u, 0x152B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152B70u;
label_152b70:
    // 0x152b70: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x152b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x152b74: 0x2463f0d0  addiu       $v1, $v1, -0xF30
    ctx->pc = 0x152b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963408));
    // 0x152b78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x152b78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b7c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x152b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x152b80: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x152b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b84: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x152b84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b90: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x152b90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b94: 0xc055bb0  jal         func_156EC0
    ctx->pc = 0x152B94u;
    SET_GPR_U32(ctx, 31, 0x152B9Cu);
    ctx->pc = 0x152B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152B94u;
    // 0x152b98: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156EC0u, 0x152B94u, 0x152B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152B9Cu;
}
