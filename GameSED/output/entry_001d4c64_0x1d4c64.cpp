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

// Function: entry_001d4c64
// Address: 0x1d4c64 - 0x1d4c70
void entry_001d4c64_0x1d4c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4c64_0x1d4c64");
#endif

    ctx->pc = 0x1d4c64u;

    // 0x1d4c64: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1d4c64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1d4c68: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1d4c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1d4c6c: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1d4c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    ctx->pc = 0x1d4c70u;
}
