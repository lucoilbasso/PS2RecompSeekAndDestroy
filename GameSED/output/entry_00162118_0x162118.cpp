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

// Function: entry_00162118
// Address: 0x162118 - 0x16211c
void entry_00162118_0x162118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162118_0x162118");
#endif

    ctx->pc = 0x162118u;

    // 0x162118: 0x8e9001b8  lw          $s0, 0x1B8($s4)
    ctx->pc = 0x162118u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
    ctx->pc = 0x16211cu;
}
