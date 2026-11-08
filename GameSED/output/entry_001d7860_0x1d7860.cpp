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

// Function: entry_001d7860
// Address: 0x1d7860 - 0x1d7868
void entry_001d7860_0x1d7860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7860_0x1d7860");
#endif

    ctx->pc = 0x1d7860u;

    // 0x1d7860: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x1d7860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1d7864: 0x478021  addu        $s0, $v0, $a3
    ctx->pc = 0x1d7864u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    ctx->pc = 0x1d7868u;
}
