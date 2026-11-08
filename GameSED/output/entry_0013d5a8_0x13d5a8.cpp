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

// Function: entry_0013d5a8
// Address: 0x13d5a8 - 0x13d5ac
void entry_0013d5a8_0x13d5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d5a8_0x13d5a8");
#endif

    ctx->pc = 0x13d5a8u;

    // 0x13d5a8: 0xad070008  sw          $a3, 0x8($t0)
    ctx->pc = 0x13d5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
    ctx->pc = 0x13d5acu;
}
