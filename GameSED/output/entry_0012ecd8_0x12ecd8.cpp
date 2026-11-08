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

// Function: entry_0012ecd8
// Address: 0x12ecd8 - 0x12ece8
void entry_0012ecd8_0x12ecd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ecd8_0x12ecd8");
#endif

    ctx->pc = 0x12ecd8u;

    // 0x12ecd8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12ECD8u;
    {
        const bool branch_taken_0x12ecd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ecd8) {
            ctx->pc = 0x12ECE8u;
            return;
        }
    }
    ctx->pc = 0x12ECE0u;
    // 0x12ece0: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x12ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x12ece4: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x12ece4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
    ctx->pc = 0x12ece8u;
}
