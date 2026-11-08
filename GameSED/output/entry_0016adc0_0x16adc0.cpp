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

// Function: entry_0016adc0
// Address: 0x16adc0 - 0x16adc4
void entry_0016adc0_0x16adc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016adc0_0x16adc0");
#endif

    ctx->pc = 0x16adc0u;

    // 0x16adc0: 0xac430134  sw          $v1, 0x134($v0)
    ctx->pc = 0x16adc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 3));
    ctx->pc = 0x16adc4u;
}
