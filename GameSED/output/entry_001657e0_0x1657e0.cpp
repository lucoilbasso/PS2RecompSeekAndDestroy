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

// Function: entry_001657e0
// Address: 0x1657e0 - 0x1657f0
void entry_001657e0_0x1657e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001657e0_0x1657e0");
#endif

    ctx->pc = 0x1657e0u;

    // 0x1657e0: 0x8e4201b0  lw          $v0, 0x1B0($s2)
    ctx->pc = 0x1657e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x1657e4: 0xae340008  sw          $s4, 0x8($s1)
    ctx->pc = 0x1657e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
    // 0x1657e8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1657e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1657ec: 0xae5101b0  sw          $s1, 0x1B0($s2)
    ctx->pc = 0x1657ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 432), GPR_U32(ctx, 17));
    ctx->pc = 0x1657f0u;
}
