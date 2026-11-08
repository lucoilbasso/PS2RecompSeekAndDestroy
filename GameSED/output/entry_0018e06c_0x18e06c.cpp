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

// Function: entry_0018e06c
// Address: 0x18e06c - 0x18e070
void entry_0018e06c_0x18e06c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e06c_0x18e06c");
#endif

    ctx->pc = 0x18e06cu;

    // 0x18e06c: 0xa4800244  sh          $zero, 0x244($a0)
    ctx->pc = 0x18e06cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 580), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x18e070u;
}
