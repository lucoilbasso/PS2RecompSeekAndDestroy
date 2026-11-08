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

// Function: entry_00143c04
// Address: 0x143c04 - 0x143c08
void entry_00143c04_0x143c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143c04_0x143c04");
#endif

    ctx->pc = 0x143c04u;

    // 0x143c04: 0x3c1e0044  lui         $fp, 0x44
    ctx->pc = 0x143c04u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)68 << 16));
    ctx->pc = 0x143c08u;
}
