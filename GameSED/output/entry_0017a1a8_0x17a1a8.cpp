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

// Function: entry_0017a1a8
// Address: 0x17a1a8 - 0x17a1b8
void entry_0017a1a8_0x17a1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a1a8_0x17a1a8");
#endif

    ctx->pc = 0x17a1a8u;

    // 0x17a1a8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17A1A8u;
    {
        const bool branch_taken_0x17a1a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a1a8) {
            ctx->pc = 0x17A1C8u;
            return;
        }
    }
    ctx->pc = 0x17A1B0u;
    // 0x17a1b0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x17a1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17a1b4: 0x0  nop
    ctx->pc = 0x17a1b4u;
    // NOP
    ctx->pc = 0x17a1b8u;
}
