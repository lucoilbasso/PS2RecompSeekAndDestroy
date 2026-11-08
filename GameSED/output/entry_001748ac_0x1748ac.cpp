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

// Function: entry_001748ac
// Address: 0x1748ac - 0x1748b8
void entry_001748ac_0x1748ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001748ac_0x1748ac");
#endif

    ctx->pc = 0x1748acu;

    // 0x1748ac: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1748acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1748b0: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x1748b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1748b4: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1748b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    ctx->pc = 0x1748b8u;
}
