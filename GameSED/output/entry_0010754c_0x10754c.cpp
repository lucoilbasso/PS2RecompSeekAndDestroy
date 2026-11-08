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

// Function: entry_0010754c
// Address: 0x10754c - 0x107550
void entry_0010754c_0x10754c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010754c_0x10754c");
#endif

    ctx->pc = 0x10754cu;

    // 0x10754c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x10754cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x107550u;
}
