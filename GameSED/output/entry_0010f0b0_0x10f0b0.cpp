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

// Function: entry_0010f0b0
// Address: 0x10f0b0 - 0x10f0d0
void entry_0010f0b0_0x10f0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f0b0_0x10f0b0");
#endif

    ctx->pc = 0x10f0b0u;

    // 0x10f0b0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x10f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x10f0b4: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x10f0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x10f0b8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10F0B8u;
    {
        const bool branch_taken_0x10f0b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x10F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0B8u;
        // 0x10f0bc: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0b8) {
            ctx->pc = 0x10F0D0u;
            return;
        }
    }
    ctx->pc = 0x10F0C0u;
    // 0x10f0c0: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x10f0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x10f0c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10F0C4u;
    {
        const bool branch_taken_0x10f0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0C4u;
        // 0x10f0c8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0c4) {
            ctx->pc = 0x10F0D4u;
            return;
        }
    }
    ctx->pc = 0x10F0CCu;
    // 0x10f0cc: 0x0  nop
    ctx->pc = 0x10f0ccu;
    // NOP
    ctx->pc = 0x10f0d0u;
}
