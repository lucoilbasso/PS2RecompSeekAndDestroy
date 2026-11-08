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

// Function: entry_0012a8c4
// Address: 0x12a8c4 - 0x12a8c8
void entry_0012a8c4_0x12a8c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a8c4_0x12a8c4");
#endif

    ctx->pc = 0x12a8c4u;

    // 0x12a8c4: 0x265001b0  addiu       $s0, $s2, 0x1B0
    ctx->pc = 0x12a8c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
    ctx->pc = 0x12a8c8u;
}
