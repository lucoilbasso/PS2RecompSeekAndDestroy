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

// Function: entry_001ce9b0
// Address: 0x1ce9b0 - 0x1ce9e4
void entry_001ce9b0_0x1ce9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce9b0_0x1ce9b0");
#endif

    ctx->pc = 0x1ce9b0u;

    // 0x1ce9b0: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1CE9B0u;
    {
        const bool branch_taken_0x1ce9b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9B0u;
        // 0x1ce9b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce9b0) {
            ctx->pc = 0x1CE9E4u;
            return;
        }
    }
    ctx->pc = 0x1CE9B8u;
    // 0x1ce9b8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1ce9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ce9bc: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1ce9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1ce9c0: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1ce9c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x1ce9c4: 0x24a51ea0  addiu       $a1, $a1, 0x1EA0
    ctx->pc = 0x1ce9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7840));
    // 0x1ce9c8: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1ce9c8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce9cc: 0x25081780  addiu       $t0, $t0, 0x1780
    ctx->pc = 0x1ce9ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6016));
    // 0x1ce9d0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1ce9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ce9d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ce9d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce9d8: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x1ce9d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1ce9dc: 0xc073bbe  jal         func_1CEEF8
    ctx->pc = 0x1CE9DCu;
    SET_GPR_U32(ctx, 31, 0x1CE9E4u);
    ctx->pc = 0x1CE9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE9DCu;
    // 0x1ce9e0: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEEF8u, 0x1CE9DCu, 0x1CE9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE9E4u;
}
