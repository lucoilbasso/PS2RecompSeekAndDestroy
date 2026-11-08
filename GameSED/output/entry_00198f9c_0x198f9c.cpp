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

// Function: entry_00198f9c
// Address: 0x198f9c - 0x198fa0
void entry_00198f9c_0x198f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198f9c_0x198f9c");
#endif

    ctx->pc = 0x198f9cu;

    // 0x198f9c: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x198f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    ctx->pc = 0x198fa0u;
}
