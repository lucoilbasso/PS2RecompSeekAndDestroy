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

// Function: entry_001a0ae0
// Address: 0x1a0ae0 - 0x1a0ae4
void entry_001a0ae0_0x1a0ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0ae0_0x1a0ae0");
#endif

    ctx->pc = 0x1a0ae0u;

    // 0x1a0ae0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a0ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    ctx->pc = 0x1a0ae4u;
}
