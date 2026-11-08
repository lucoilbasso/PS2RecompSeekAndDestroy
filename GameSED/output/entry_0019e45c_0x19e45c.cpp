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

// Function: entry_0019e45c
// Address: 0x19e45c - 0x19e468
void entry_0019e45c_0x19e45c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e45c_0x19e45c");
#endif

    ctx->pc = 0x19e45cu;

    // 0x19e45c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x19e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x19e460: 0x8c43d640  lw          $v1, -0x29C0($v0)
    ctx->pc = 0x19e460u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x25D640u));
    // 0x19e464: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x19e464u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x19e468u;
}
