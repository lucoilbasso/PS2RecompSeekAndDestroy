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

// Function: entry_001b3bb4
// Address: 0x1b3bb4 - 0x1b3bc0
void entry_001b3bb4_0x1b3bb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3bb4_0x1b3bb4");
#endif

    ctx->pc = 0x1b3bb4u;

    // 0x1b3bb4: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b3bb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b3bb8: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b3bb8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b3bbc: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b3bbcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x1b3bc0u;
}
