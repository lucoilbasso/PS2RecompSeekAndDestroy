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

// Function: entry_00138100
// Address: 0x138100 - 0x13810c
void entry_00138100_0x138100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138100_0x138100");
#endif

    ctx->pc = 0x138100u;

    // 0x138100: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x138100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x138104: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x138104u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x138108: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x138108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    ctx->pc = 0x13810cu;
}
