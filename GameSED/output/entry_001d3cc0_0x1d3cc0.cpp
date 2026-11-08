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

// Function: entry_001d3cc0
// Address: 0x1d3cc0 - 0x1d3cc8
void entry_001d3cc0_0x1d3cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3cc0_0x1d3cc0");
#endif

    ctx->pc = 0x1d3cc0u;

    // 0x1d3cc0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d3cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d3cc4: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1d3cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x1d3cc8u;
}
