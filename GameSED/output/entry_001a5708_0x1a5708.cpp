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

// Function: entry_001a5708
// Address: 0x1a5708 - 0x1a570c
void entry_001a5708_0x1a5708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5708_0x1a5708");
#endif

    ctx->pc = 0x1a5708u;

    // 0x1a5708: 0xa4a00018  sh          $zero, 0x18($a1)
    ctx->pc = 0x1a5708u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 24), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1a570cu;
}
