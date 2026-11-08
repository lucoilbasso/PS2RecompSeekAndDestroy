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

// Function: entry_001cb318
// Address: 0x1cb318 - 0x1cb32c
void entry_001cb318_0x1cb318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb318_0x1cb318");
#endif

    ctx->pc = 0x1cb318u;

    // 0x1cb318: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB318u;
    {
        const bool branch_taken_0x1cb318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb318) {
            ctx->pc = 0x1CB32Cu;
            return;
        }
    }
    ctx->pc = 0x1CB320u;
    // 0x1cb320: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1cb320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cb324: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB324u;
    {
        const bool branch_taken_0x1cb324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1cb324) {
            ctx->pc = 0x1CB33Cu;
            return;
        }
    }
    ctx->pc = 0x1CB32Cu;
}
