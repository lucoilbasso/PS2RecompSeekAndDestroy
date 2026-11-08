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

// Function: entry_0019cc8c
// Address: 0x19cc8c - 0x19cc90
void entry_0019cc8c_0x19cc8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cc8c_0x19cc8c");
#endif

    ctx->pc = 0x19cc8cu;

    // 0x19cc8c: 0xa1400001  sb          $zero, 0x1($t2)
    ctx->pc = 0x19cc8cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x19cc90u;
}
