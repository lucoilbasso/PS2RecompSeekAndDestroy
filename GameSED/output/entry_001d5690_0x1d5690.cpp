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

// Function: entry_001d5690
// Address: 0x1d5690 - 0x1d5694
void entry_001d5690_0x1d5690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5690_0x1d5690");
#endif

    ctx->pc = 0x1d5690u;

    // 0x1d5690: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1d5690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    ctx->pc = 0x1d5694u;
}
