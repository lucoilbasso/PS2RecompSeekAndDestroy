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

// Function: entry_001cea84
// Address: 0x1cea84 - 0x1ceab8
void entry_001cea84_0x1cea84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cea84_0x1cea84");
#endif

    ctx->pc = 0x1cea84u;

    // 0x1cea84: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CEA84u;
    {
        const bool branch_taken_0x1cea84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA84u;
        // 0x1cea88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea84) {
            ctx->pc = 0x1CEAB8u;
            return;
        }
    }
    ctx->pc = 0x1CEA8Cu;
    // 0x1cea8c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cea90: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1cea90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1cea94: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1cea94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x1cea98: 0x24a51998  addiu       $a1, $a1, 0x1998
    ctx->pc = 0x1cea98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6552));
    // 0x1cea9c: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1cea9cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ceaa0: 0x25081780  addiu       $t0, $t0, 0x1780
    ctx->pc = 0x1ceaa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6016));
    // 0x1ceaa4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1ceaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ceaa8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ceaa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceaac: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x1ceaacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1ceab0: 0xc073bbe  jal         func_1CEEF8
    ctx->pc = 0x1CEAB0u;
    SET_GPR_U32(ctx, 31, 0x1CEAB8u);
    ctx->pc = 0x1CEAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEAB0u;
    // 0x1ceab4: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEEF8u, 0x1CEAB0u, 0x1CEAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEAB8u;
}
