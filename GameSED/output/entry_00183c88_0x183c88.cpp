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

// Function: entry_00183c88
// Address: 0x183c88 - 0x183c98
void entry_00183c88_0x183c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183c88_0x183c88");
#endif

    ctx->pc = 0x183c88u;

    // 0x183c88: 0xaca6002c  sw          $a2, 0x2C($a1)
    ctx->pc = 0x183c88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 6));
    // 0x183c8c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x183c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x183c90: 0x10660004  beq         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x183C90u;
    {
        const bool branch_taken_0x183c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x183c90) {
            ctx->pc = 0x183CA4u;
            return;
        }
    }
    ctx->pc = 0x183C98u;
}
