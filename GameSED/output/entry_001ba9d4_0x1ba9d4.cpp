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

// Function: entry_001ba9d4
// Address: 0x1ba9d4 - 0x1ba9d8
void entry_001ba9d4_0x1ba9d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba9d4_0x1ba9d4");
#endif

    ctx->pc = 0x1ba9d4u;

    // 0x1ba9d4: 0x2630dac8  addiu       $s0, $s1, -0x2538
    ctx->pc = 0x1ba9d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957768));
    ctx->pc = 0x1ba9d8u;
}
