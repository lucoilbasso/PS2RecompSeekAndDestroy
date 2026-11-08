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

// Function: entry_00115bb8
// Address: 0x115bb8 - 0x115bc8
void entry_00115bb8_0x115bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115bb8_0x115bb8");
#endif

    ctx->pc = 0x115bb8u;

    // 0x115bb8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x115bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x115bbc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x115bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x115bc0: 0x24a211d6  addiu       $v0, $a1, 0x11D6
    ctx->pc = 0x115bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4566));
    // 0x115bc4: 0x0  nop
    ctx->pc = 0x115bc4u;
    // NOP
    ctx->pc = 0x115bc8u;
}
