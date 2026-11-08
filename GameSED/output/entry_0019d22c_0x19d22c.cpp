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

// Function: entry_0019d22c
// Address: 0x19d22c - 0x19d230
void entry_0019d22c_0x19d22c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d22c_0x19d22c");
#endif

    ctx->pc = 0x19d22cu;

    // 0x19d22c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x19d22cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    ctx->pc = 0x19d230u;
}
