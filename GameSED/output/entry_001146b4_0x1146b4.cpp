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

// Function: entry_001146b4
// Address: 0x1146b4 - 0x1146b8
void entry_001146b4_0x1146b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001146b4_0x1146b4");
#endif

    ctx->pc = 0x1146b4u;

    // 0x1146b4: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x1146b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1146b8u;
}
