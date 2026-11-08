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

// Function: entry_00160a78
// Address: 0x160a78 - 0x160a7c
void entry_00160a78_0x160a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160a78_0x160a78");
#endif

    ctx->pc = 0x160a78u;

    // 0x160a78: 0xa4400014  sh          $zero, 0x14($v0)
    ctx->pc = 0x160a78u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x160a7cu;
}
