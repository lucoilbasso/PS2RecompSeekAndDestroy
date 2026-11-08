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

// Function: entry_0019a158
// Address: 0x19a158 - 0x19a168
void entry_0019a158_0x19a158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a158_0x19a158");
#endif

    ctx->pc = 0x19a158u;

    // 0x19a158: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x19a158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x19a15c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19A15Cu;
    {
        const bool branch_taken_0x19a15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a15c) {
            ctx->pc = 0x19A184u;
            return;
        }
    }
    ctx->pc = 0x19A164u;
    // 0x19a164: 0x0  nop
    ctx->pc = 0x19a164u;
    // NOP
    ctx->pc = 0x19a168u;
}
