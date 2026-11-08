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

// Function: entry_001b26e4
// Address: 0x1b26e4 - 0x1b26f0
void entry_001b26e4_0x1b26e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b26e4_0x1b26e4");
#endif

    ctx->pc = 0x1b26e4u;

    // 0x1b26e4: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x1b26e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x1b26e8: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1b26e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1b26ec: 0x8e84aa10  lw          $a0, -0x55F0($s4)
    ctx->pc = 0x1b26ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945296)));
    ctx->pc = 0x1b26f0u;
}
