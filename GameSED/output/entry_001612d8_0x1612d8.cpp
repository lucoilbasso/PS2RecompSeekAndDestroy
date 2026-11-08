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

// Function: entry_001612d8
// Address: 0x1612d8 - 0x161320
void entry_001612d8_0x1612d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001612d8_0x1612d8");
#endif

    ctx->pc = 0x1612d8u;

    // 0x1612d8: 0x260911b0  addiu       $t1, $s0, 0x11B0
    ctx->pc = 0x1612d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4528));
    // 0x1612dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1612dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1612e0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1612e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1612e4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1612e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1612e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1612e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1612ec: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x1612ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1612f0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x1612f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x1612f4: 0x24680010  addiu       $t0, $v1, 0x10
    ctx->pc = 0x1612f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1612f8: 0xad120000  sw          $s2, 0x0($t0)
    ctx->pc = 0x1612f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 18));
    // 0x1612fc: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1612fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x161300: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x161300u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x161304: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x161304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x161308: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x161308u;
    {
        const bool branch_taken_0x161308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161308u;
        // 0x16130c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161308) {
            ctx->pc = 0x161320u;
            return;
        }
    }
    ctx->pc = 0x161310u;
    // 0x161310: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x161310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x161314: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x161314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x161318: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x161318u;
    {
        const bool branch_taken_0x161318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161318u;
        // 0x16131c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161318) {
            ctx->pc = 0x161324u;
            return;
        }
    }
    ctx->pc = 0x161320u;
}
