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

// Function: entry_001cad6c
// Address: 0x1cad6c - 0x1cad70
void entry_001cad6c_0x1cad6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cad6c_0x1cad6c");
#endif

    ctx->pc = 0x1cad6cu;

    // 0x1cad6c: 0xec1021  addu        $v0, $a3, $t4
    ctx->pc = 0x1cad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    ctx->pc = 0x1cad70u;
}
