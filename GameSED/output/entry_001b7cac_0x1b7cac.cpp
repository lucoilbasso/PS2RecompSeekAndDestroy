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

// Function: entry_001b7cac
// Address: 0x1b7cac - 0x1b7cb4
void entry_001b7cac_0x1b7cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7cac_0x1b7cac");
#endif

    ctx->pc = 0x1b7cacu;

    // 0x1b7cac: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b7cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b7cb0: 0x8c44bfec  lw          $a0, -0x4014($v0)
    ctx->pc = 0x1b7cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x40BFECu));
    ctx->pc = 0x1b7cb4u;
}
