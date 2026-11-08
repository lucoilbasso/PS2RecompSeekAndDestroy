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

// Function: entry_001c1d00
// Address: 0x1c1d00 - 0x1c1d0c
void entry_001c1d00_0x1c1d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1d00_0x1c1d00");
#endif

    ctx->pc = 0x1c1d00u;

    // 0x1c1d00: 0x3c130025  lui         $s3, 0x25
    ctx->pc = 0x1c1d00u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)37 << 16));
    // 0x1c1d04: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1c1d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1c1d08: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c1d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    ctx->pc = 0x1c1d0cu;
}
