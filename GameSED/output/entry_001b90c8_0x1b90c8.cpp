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

// Function: entry_001b90c8
// Address: 0x1b90c8 - 0x1b90cc
void entry_001b90c8_0x1b90c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b90c8_0x1b90c8");
#endif

    ctx->pc = 0x1b90c8u;

    // 0x1b90c8: 0x9043aea0  lbu         $v1, -0x5160($v0)
    ctx->pc = 0x1b90c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946464)));
    ctx->pc = 0x1b90ccu;
}
