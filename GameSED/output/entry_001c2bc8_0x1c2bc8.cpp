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

// Function: entry_001c2bc8
// Address: 0x1c2bc8 - 0x1c2bdc
void entry_001c2bc8_0x1c2bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2bc8_0x1c2bc8");
#endif

    ctx->pc = 0x1c2bc8u;

    // 0x1c2bc8: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2BC8u;
    {
        const bool branch_taken_0x1c2bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c2bc8) {
            ctx->pc = 0x1C2BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2BC8u;
            // 0x1c2bcc: 0x8e0501c8  lw          $a1, 0x1C8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2BDCu;
            return;
        }
    }
    ctx->pc = 0x1C2BD0u;
    // 0x1c2bd0: 0x8e0501d4  lw          $a1, 0x1D4($s0)
    ctx->pc = 0x1c2bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x1c2bd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2BD4u;
    {
        const bool branch_taken_0x1c2bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BD4u;
        // 0x1c2bd8: 0x8e0601e4  lw          $a2, 0x1E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2bd4) {
            ctx->pc = 0x1C2BE0u;
            return;
        }
    }
    ctx->pc = 0x1C2BDCu;
}
