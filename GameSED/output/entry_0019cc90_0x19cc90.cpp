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

// Function: entry_0019cc90
// Address: 0x19cc90 - 0x19cc94
void entry_0019cc90_0x19cc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cc90_0x19cc90");
#endif

    ctx->pc = 0x19cc90u;

    // 0x19cc90: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x19cc90u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x19cc94u;
}
