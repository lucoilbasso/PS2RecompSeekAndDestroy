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

// Function: entry_001a000c
// Address: 0x1a000c - 0x1a0010
void entry_001a000c_0x1a000c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a000c_0x1a000c");
#endif

    ctx->pc = 0x1a000cu;

    // 0x1a000c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x1a000cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x1a0010u;
}
