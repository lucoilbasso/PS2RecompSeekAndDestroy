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

// Function: entry_0016b1a0
// Address: 0x16b1a0 - 0x16b1a4
void entry_0016b1a0_0x16b1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b1a0_0x16b1a0");
#endif

    ctx->pc = 0x16b1a0u;

    // 0x16b1a0: 0x3063f7ff  andi        $v1, $v1, 0xF7FF
    ctx->pc = 0x16b1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63487);
    ctx->pc = 0x16b1a4u;
}
