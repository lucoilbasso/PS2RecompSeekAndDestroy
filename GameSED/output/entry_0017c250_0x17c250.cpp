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

// Function: entry_0017c250
// Address: 0x17c250 - 0x17c254
void entry_0017c250_0x17c250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c250_0x17c250");
#endif

    ctx->pc = 0x17c250u;

    // 0x17c250: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x17c250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    ctx->pc = 0x17c254u;
}
