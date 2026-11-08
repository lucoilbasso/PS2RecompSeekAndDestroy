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

// Function: entry_001d9c98
// Address: 0x1d9c98 - 0x1d9cd4
void entry_001d9c98_0x1d9c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9c98_0x1d9c98");
#endif

    switch (ctx->pc) {
        case 0x1d9ca0u: goto label_1d9ca0;
        case 0x1d9ca8u: goto label_1d9ca8;
        default: break;
    }

    ctx->pc = 0x1d9c98u;

    // 0x1d9c98: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1D9C98u;
    SET_GPR_U32(ctx, 31, 0x1D9CA0u);
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1D9C98u, 0x1D9CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9CA0u;
label_1d9ca0:
    // 0x1d9ca0: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1D9CA0u;
    SET_GPR_U32(ctx, 31, 0x1D9CA8u);
    ctx->pc = 0x1D9CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9CA0u;
    // 0x1d9ca4: 0x24040290  addiu       $a0, $zero, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1D9CA0u, 0x1D9CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9CA8u;
label_1d9ca8:
    // 0x1d9ca8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1d9ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1d9cac: 0x2463f0d0  addiu       $v1, $v1, -0xF30
    ctx->pc = 0x1d9cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963408));
    // 0x1d9cb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d9cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9cb4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1d9cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1d9cb8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d9cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9cbc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1d9cbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9cc0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1d9cc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9cc4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1d9cc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9cc8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1d9cc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ccc: 0xc055bb0  jal         func_156EC0
    ctx->pc = 0x1D9CCCu;
    SET_GPR_U32(ctx, 31, 0x1D9CD4u);
    ctx->pc = 0x1D9CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9CCCu;
    // 0x1d9cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156EC0u, 0x1D9CCCu, 0x1D9CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9CD4u;
}
