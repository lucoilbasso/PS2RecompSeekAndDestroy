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

// Function: entry_0019f7b8
// Address: 0x19f7b8 - 0x19f7e8
void entry_0019f7b8_0x19f7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f7b8_0x19f7b8");
#endif

    ctx->pc = 0x19f7b8u;

    // 0x19f7b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19f7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19f7bc: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x19F7BCu;
    {
        const bool branch_taken_0x19f7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7BCu;
        // 0x19f7c0: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7bc) {
            ctx->pc = 0x19F880u;
            return;
        }
    }
    ctx->pc = 0x19F7C4u;
    // 0x19f7c4: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x19f7c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x19f7c8: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x19f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x19f7cc: 0x2451f6a8  addiu       $s1, $v0, -0x958
    ctx->pc = 0x19f7ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964904));
    // 0x19f7d0: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F7D0u;
    {
        const bool branch_taken_0x19f7d0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x19F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7D0u;
        // 0x19f7d4: 0x26e4e120  addiu       $a0, $s7, -0x1EE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7d0) {
            ctx->pc = 0x19F7E8u;
            return;
        }
    }
    ctx->pc = 0x19F7D8u;
    // 0x19f7d8: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x19f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x19f7dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19F7DCu;
    {
        const bool branch_taken_0x19f7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7DCu;
        // 0x19f7e0: 0x2445d658  addiu       $a1, $v0, -0x29A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7dc) {
            ctx->pc = 0x19F7F0u;
            return;
        }
    }
    ctx->pc = 0x19F7E4u;
    // 0x19f7e4: 0x0  nop
    ctx->pc = 0x19f7e4u;
    // NOP
    ctx->pc = 0x19f7e8u;
}
