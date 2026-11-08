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

// Function: entry_0018ebc4
// Address: 0x18ebc4 - 0x18ebc8
void entry_0018ebc4_0x18ebc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ebc4_0x18ebc4");
#endif

    ctx->pc = 0x18ebc4u;

    // 0x18ebc4: 0xa4c40244  sh          $a0, 0x244($a2)
    ctx->pc = 0x18ebc4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 580), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x18ebc8u;
}
