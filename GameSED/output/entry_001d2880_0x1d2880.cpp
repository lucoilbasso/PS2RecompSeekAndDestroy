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

// Function: entry_001d2880
// Address: 0x1d2880 - 0x1d2888
void entry_001d2880_0x1d2880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2880_0x1d2880");
#endif

    ctx->pc = 0x1d2880u;

    // 0x1d2880: 0x8fa60208  lw          $a2, 0x208($sp)
    ctx->pc = 0x1d2880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1d2884: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x1d2884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    ctx->pc = 0x1d2888u;
}
