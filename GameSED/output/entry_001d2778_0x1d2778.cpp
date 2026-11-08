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

// Function: entry_001d2778
// Address: 0x1d2778 - 0x1d2784
void entry_001d2778_0x1d2778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2778_0x1d2778");
#endif

    ctx->pc = 0x1d2778u;

    // 0x1d2778: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x1d2778u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d277c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1d277cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1d2780: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1d2780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x1d2784u;
}
