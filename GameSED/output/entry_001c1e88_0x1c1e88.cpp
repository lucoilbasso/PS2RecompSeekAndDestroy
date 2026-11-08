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

// Function: entry_001c1e88
// Address: 0x1c1e88 - 0x1c1e94
void entry_001c1e88_0x1c1e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1e88_0x1c1e88");
#endif

    ctx->pc = 0x1c1e88u;

    // 0x1c1e88: 0x3c110025  lui         $s1, 0x25
    ctx->pc = 0x1c1e88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)37 << 16));
    // 0x1c1e8c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c1e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c1e90: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c1e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    ctx->pc = 0x1c1e94u;
}
