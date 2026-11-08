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

// Function: entry_0018698c
// Address: 0x18698c - 0x186990
void entry_0018698c_0x18698c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018698c_0x18698c");
#endif

    ctx->pc = 0x18698cu;

    // 0x18698c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18698cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    ctx->pc = 0x186990u;
}
