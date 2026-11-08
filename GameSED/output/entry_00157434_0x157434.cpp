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

// Function: entry_00157434
// Address: 0x157434 - 0x157438
void entry_00157434_0x157434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157434_0x157434");
#endif

    ctx->pc = 0x157434u;

    // 0x157434: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x157434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    ctx->pc = 0x157438u;
}
