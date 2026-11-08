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

// Function: entry_001a8c08
// Address: 0x1a8c08 - 0x1a8c0c
void entry_001a8c08_0x1a8c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8c08_0x1a8c08");
#endif

    ctx->pc = 0x1a8c08u;

    // 0x1a8c08: 0x3c157ffe  lui         $s5, 0x7FFE
    ctx->pc = 0x1a8c08u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32766 << 16));
    ctx->pc = 0x1a8c0cu;
}
