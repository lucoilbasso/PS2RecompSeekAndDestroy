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

// Function: entry_0017be48
// Address: 0x17be48 - 0x17be4c
void entry_0017be48_0x17be48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017be48_0x17be48");
#endif

    ctx->pc = 0x17be48u;

    // 0x17be48: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x17be48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    ctx->pc = 0x17be4cu;
}
