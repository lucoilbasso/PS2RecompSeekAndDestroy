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

// Function: entry_0018e068
// Address: 0x18e068 - 0x18e06c
void entry_0018e068_0x18e068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e068_0x18e068");
#endif

    ctx->pc = 0x18e068u;

    // 0x18e068: 0xa4400004  sh          $zero, 0x4($v0)
    ctx->pc = 0x18e068u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x18e06cu;
}
