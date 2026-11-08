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

// Function: entry_00183a9c
// Address: 0x183a9c - 0x183aa0
void entry_00183a9c_0x183a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183a9c_0x183a9c");
#endif

    ctx->pc = 0x183a9cu;

    // 0x183a9c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x183a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    ctx->pc = 0x183aa0u;
}
