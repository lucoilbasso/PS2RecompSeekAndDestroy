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

// Function: entry_0016b310
// Address: 0x16b310 - 0x16b320
void entry_0016b310_0x16b310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b310_0x16b310");
#endif

    ctx->pc = 0x16b310u;

    // 0x16b310: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x16b310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x16b314: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x16b314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x16b318: 0x8e2201e4  lw          $v0, 0x1E4($s1)
    ctx->pc = 0x16b318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x16b31c: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x16b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    ctx->pc = 0x16b320u;
}
