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

// Function: entry_001836a8
// Address: 0x1836a8 - 0x1836c8
void entry_001836a8_0x1836a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001836a8_0x1836a8");
#endif

    ctx->pc = 0x1836a8u;

    // 0x1836a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1836a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1836ac: 0x86020028  lh          $v0, 0x28($s0)
    ctx->pc = 0x1836acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1836b0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1836b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1836b4: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x1836b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1836b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1836b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1836bc: 0x1880000c  blez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1836BCu;
    {
        const bool branch_taken_0x1836bc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1836C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1836BCu;
        // 0x1836c0: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1836bc) {
            ctx->pc = 0x1836F0u;
            return;
        }
    }
    ctx->pc = 0x1836C4u;
    // 0x1836c4: 0x0  nop
    ctx->pc = 0x1836c4u;
    // NOP
    ctx->pc = 0x1836c8u;
}
