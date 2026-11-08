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

// Function: entry_0011451c
// Address: 0x11451c - 0x114520
void entry_0011451c_0x11451c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011451c_0x11451c");
#endif

    ctx->pc = 0x11451cu;

    // 0x11451c: 0xa602002c  sh          $v0, 0x2C($s0)
    ctx->pc = 0x11451cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x114520u;
}
