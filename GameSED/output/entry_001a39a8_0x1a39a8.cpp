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

// Function: entry_001a39a8
// Address: 0x1a39a8 - 0x1a39c0
void entry_001a39a8_0x1a39a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a39a8_0x1a39a8");
#endif

    ctx->pc = 0x1a39a8u;

    // 0x1a39a8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a39a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a39ac: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1a39acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1a39b0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1a39b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a39b4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1a39b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1a39b8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1A39B8u;
    {
        const bool branch_taken_0x1a39b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A39BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39B8u;
        // 0x1a39bc: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a39b8) {
            ctx->pc = 0x1A3A20u;
            return;
        }
    }
    ctx->pc = 0x1A39C0u;
}
