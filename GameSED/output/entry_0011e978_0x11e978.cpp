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

// Function: entry_0011e978
// Address: 0x11e978 - 0x11e98c
void entry_0011e978_0x11e978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e978_0x11e978");
#endif

    ctx->pc = 0x11e978u;

    // 0x11e978: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x11e978u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11e97c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x11e97cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11e980: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x11e980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x11e984: 0x90430005  lbu         $v1, 0x5($v0)
    ctx->pc = 0x11e984u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x11e988: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x11e988u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x11e98cu;
}
