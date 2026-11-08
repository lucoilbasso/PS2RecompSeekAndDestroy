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

// Function: entry_001508e0
// Address: 0x1508e0 - 0x1508ec
void entry_001508e0_0x1508e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001508e0_0x1508e0");
#endif

    ctx->pc = 0x1508e0u;

    // 0x1508e0: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x1508E0u;
    {
        const bool branch_taken_0x1508e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1508e0) {
            ctx->pc = 0x150910u;
            return;
        }
    }
    ctx->pc = 0x1508E8u;
    // 0x1508e8: 0x8e4303b0  lw          $v1, 0x3B0($s2)
    ctx->pc = 0x1508e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
    ctx->pc = 0x1508ecu;
}
