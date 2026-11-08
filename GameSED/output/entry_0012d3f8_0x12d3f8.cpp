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

// Function: entry_0012d3f8
// Address: 0x12d3f8 - 0x12d3fc
void entry_0012d3f8_0x12d3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d3f8_0x12d3f8");
#endif

    ctx->pc = 0x12d3f8u;

    // 0x12d3f8: 0x8e1000c4  lw          $s0, 0xC4($s0)
    ctx->pc = 0x12d3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->pc = 0x12d3fcu;
}
