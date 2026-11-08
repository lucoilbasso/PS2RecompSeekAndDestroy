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

// Function: entry_001ab8f8
// Address: 0x1ab8f8 - 0x1ab900
void entry_001ab8f8_0x1ab8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab8f8_0x1ab8f8");
#endif

    ctx->pc = 0x1ab8f8u;

    // 0x1ab8f8: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1ab8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1ab8fc: 0x24849858  addiu       $a0, $a0, -0x67A8
    ctx->pc = 0x1ab8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940760));
    ctx->pc = 0x1ab900u;
}
