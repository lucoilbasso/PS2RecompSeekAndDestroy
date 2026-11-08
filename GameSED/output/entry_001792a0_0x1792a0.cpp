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

// Function: entry_001792a0
// Address: 0x1792a0 - 0x1792d0
void entry_001792a0_0x1792a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001792a0_0x1792a0");
#endif

    ctx->pc = 0x1792a0u;

    // 0x1792a0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1792a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1792a4: 0x8e434030  lw          $v1, 0x4030($s2)
    ctx->pc = 0x1792a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16432)));
    // 0x1792a8: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1792A8u;
    {
        const bool branch_taken_0x1792a8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1792ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792A8u;
        // 0x1792ac: 0x2862fffe  slti        $v0, $v1, -0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967294) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1792a8) {
            ctx->pc = 0x1792D0u;
            return;
        }
    }
    ctx->pc = 0x1792B0u;
    // 0x1792b0: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1792B0u;
    {
        const bool branch_taken_0x1792b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1792b0) {
            ctx->pc = 0x1792B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1792B0u;
            // 0x1792b4: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179310u;
            return;
        }
    }
    ctx->pc = 0x1792B8u;
    // 0x1792b8: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1792b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1792bc: 0x50620020  beql        $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1792BCu;
    {
        const bool branch_taken_0x1792bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1792bc) {
            ctx->pc = 0x1792C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1792BCu;
            // 0x1792c0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179340u;
            return;
        }
    }
    ctx->pc = 0x1792C4u;
    // 0x1792c4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1792C4u;
    {
        const bool branch_taken_0x1792c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1792C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792C4u;
        // 0x1792c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1792c4) {
            ctx->pc = 0x179340u;
            return;
        }
    }
    ctx->pc = 0x1792CCu;
    // 0x1792cc: 0x0  nop
    ctx->pc = 0x1792ccu;
    // NOP
    ctx->pc = 0x1792d0u;
}
