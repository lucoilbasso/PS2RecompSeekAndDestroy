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

// Function: entry_0014267c
// Address: 0x14267c - 0x142680
void entry_0014267c_0x14267c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014267c_0x14267c");
#endif

    ctx->pc = 0x14267cu;

    // 0x14267c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x14267cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    ctx->pc = 0x142680u;
}
