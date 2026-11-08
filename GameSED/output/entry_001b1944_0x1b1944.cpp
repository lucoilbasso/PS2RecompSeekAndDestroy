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

// Function: entry_001b1944
// Address: 0x1b1944 - 0x1b1948
void entry_001b1944_0x1b1944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1944_0x1b1944");
#endif

    ctx->pc = 0x1b1944u;

    // 0x1b1944: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x1b1944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    ctx->pc = 0x1b1948u;
}
