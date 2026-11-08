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

// Function: entry_0011e98c
// Address: 0x11e98c - 0x11e998
void entry_0011e98c_0x11e98c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e98c_0x11e98c");
#endif

    ctx->pc = 0x11e98cu;

    // 0x11e98c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x11e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x11e990: 0x90430006  lbu         $v1, 0x6($v0)
    ctx->pc = 0x11e990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x11e994: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x11e994u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x11e998u;
}
