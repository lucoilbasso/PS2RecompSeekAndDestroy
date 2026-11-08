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

// Function: entry_001ca8f0
// Address: 0x1ca8f0 - 0x1ca930
void entry_001ca8f0_0x1ca8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca8f0_0x1ca8f0");
#endif

    ctx->pc = 0x1ca8f0u;

    // 0x1ca8f0: 0x50f2001b  beql        $a3, $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CA8F0u;
    {
        const bool branch_taken_0x1ca8f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 18));
        if (branch_taken_0x1ca8f0) {
            ctx->pc = 0x1CA8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA8F0u;
            // 0x1ca8f4: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA960u;
            return;
        }
    }
    ctx->pc = 0x1CA8F8u;
    // 0x1ca8f8: 0x14b3021  addu        $a2, $t2, $t3
    ctx->pc = 0x1ca8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1ca8fc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1ca8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ca900: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1ca900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ca904: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1ca904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ca908: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1ca908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ca90c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1ca90cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ca910: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CA910u;
    {
        const bool branch_taken_0x1ca910 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ca910) {
            ctx->pc = 0x1CA914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA910u;
            // 0x1ca914: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA960u;
            return;
        }
    }
    ctx->pc = 0x1CA918u;
    // 0x1ca918: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x1ca918u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca91c: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x1ca91cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca920: 0x300402d  daddu       $t0, $t8, $zero
    ctx->pc = 0x1ca920u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca924: 0x266d045c  addiu       $t5, $s3, 0x45C
    ctx->pc = 0x1ca924u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 19), 1116));
    // 0x1ca928: 0xe61023  subu        $v0, $a3, $a2
    ctx->pc = 0x1ca928u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1ca92c: 0x0  nop
    ctx->pc = 0x1ca92cu;
    // NOP
    ctx->pc = 0x1ca930u;
}
