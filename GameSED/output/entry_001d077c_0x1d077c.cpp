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

// Function: entry_001d077c
// Address: 0x1d077c - 0x1d0784
void entry_001d077c_0x1d077c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d077c_0x1d077c");
#endif

    ctx->pc = 0x1d077cu;

    // 0x1d077c: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1d077cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1d0780: 0x8c4de1b0  lw          $t5, -0x1E50($v0)
    ctx->pc = 0x1d0780u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959536)));
    ctx->pc = 0x1d0784u;
}
