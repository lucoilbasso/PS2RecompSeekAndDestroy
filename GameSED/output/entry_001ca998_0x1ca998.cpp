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

// Function: entry_001ca998
// Address: 0x1ca998 - 0x1ca9b8
void entry_001ca998_0x1ca998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca998_0x1ca998");
#endif

    ctx->pc = 0x1ca998u;

    // 0x1ca998: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ca998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ca99c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA99Cu;
    {
        const bool branch_taken_0x1ca99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA99Cu;
        // 0x1ca9a0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca99c) {
            ctx->pc = 0x1CA9B8u;
            return;
        }
    }
    ctx->pc = 0x1CA9A4u;
    // 0x1ca9a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ca9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ca9a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ca9a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ca9ac: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1ca9acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1ca9b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA9B0u;
    {
        const bool branch_taken_0x1ca9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA9B0u;
        // 0x1ca9b4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca9b0) {
            ctx->pc = 0x1CA9C8u;
            return;
        }
    }
    ctx->pc = 0x1CA9B8u;
}
