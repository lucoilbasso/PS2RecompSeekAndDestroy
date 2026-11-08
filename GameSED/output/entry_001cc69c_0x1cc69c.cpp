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

// Function: entry_001cc69c
// Address: 0x1cc69c - 0x1cc6b8
void entry_001cc69c_0x1cc69c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc69c_0x1cc69c");
#endif

    ctx->pc = 0x1cc69cu;

    // 0x1cc69c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1cc69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1cc6a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1cc6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc6a4: 0xae53000c  sw          $s3, 0xC($s2)
    ctx->pc = 0x1cc6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
    // 0x1cc6a8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1cc6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1cc6ac: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x1CC6ACu;
    {
        const bool branch_taken_0x1cc6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6ACu;
        // 0x1cc6b0: 0xae440004  sw          $a0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6ac) {
            ctx->pc = 0x1CC8D0u;
            return;
        }
    }
    ctx->pc = 0x1CC6B4u;
    // 0x1cc6b4: 0x0  nop
    ctx->pc = 0x1cc6b4u;
    // NOP
    ctx->pc = 0x1cc6b8u;
}
