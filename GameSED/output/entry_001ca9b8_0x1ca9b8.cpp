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

// Function: entry_001ca9b8
// Address: 0x1ca9b8 - 0x1ca9c8
void entry_001ca9b8_0x1ca9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca9b8_0x1ca9b8");
#endif

    ctx->pc = 0x1ca9b8u;

    // 0x1ca9b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ca9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ca9bc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1ca9bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1ca9c0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ca9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1ca9c4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1ca9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->pc = 0x1ca9c8u;
}
