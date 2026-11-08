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

// Function: entry_001084d0
// Address: 0x1084d0 - 0x1084d4
void entry_001084d0_0x1084d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001084d0_0x1084d0");
#endif

    ctx->pc = 0x1084d0u;

    // 0x1084d0: 0xa4c00008  sh          $zero, 0x8($a2)
    ctx->pc = 0x1084d0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1084d4u;
}
