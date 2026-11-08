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

// Function: entry_001940f8
// Address: 0x1940f8 - 0x194108
void entry_001940f8_0x1940f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001940f8_0x1940f8");
#endif

    ctx->pc = 0x1940f8u;

    // 0x1940f8: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x1940f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1940fc: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x1940fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x194100: 0xa3a00002  sb          $zero, 0x2($sp)
    ctx->pc = 0x194100u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x194104: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x194104u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x194108u;
}
