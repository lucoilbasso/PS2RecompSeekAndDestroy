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

// Function: entry_0011293c
// Address: 0x11293c - 0x112940
void entry_0011293c_0x11293c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011293c_0x11293c");
#endif

    ctx->pc = 0x11293cu;

    // 0x11293c: 0x7e000000  sq          $zero, 0x0($s0)
    ctx->pc = 0x11293cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 0));
    ctx->pc = 0x112940u;
}
