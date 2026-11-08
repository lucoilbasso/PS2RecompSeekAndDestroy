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

// Function: entry_001430d0
// Address: 0x1430d0 - 0x1430f8
void entry_001430d0_0x1430d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001430d0_0x1430d0");
#endif

    ctx->pc = 0x1430d0u;

    // 0x1430d0: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1430D0u;
    {
        const bool branch_taken_0x1430d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1430D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1430D0u;
        // 0x1430d4: 0xae300324  sw          $s0, 0x324($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 804), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1430d0) {
            ctx->pc = 0x143180u;
            return;
        }
    }
    ctx->pc = 0x1430D8u;
    // 0x1430d8: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x1430d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x1430dc: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x1430dcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1430e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1430e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1430e4: 0x8c6b0010  lw          $t3, 0x10($v1)
    ctx->pc = 0x1430e4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1430e8: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x1430e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x1430ec: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1430ECu;
    {
        const bool branch_taken_0x1430ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1430F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1430ECu;
        // 0x1430f0: 0x25670010  addiu       $a3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1430ec) {
            ctx->pc = 0x143194u;
            return;
        }
    }
    ctx->pc = 0x1430F4u;
    // 0x1430f4: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x1430f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1430f8u;
}
