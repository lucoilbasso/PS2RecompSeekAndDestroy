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

// Function: entry_0013a5b8
// Address: 0x13a5b8 - 0x13a5bc
void entry_0013a5b8_0x13a5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a5b8_0x13a5b8");
#endif

    ctx->pc = 0x13a5b8u;

    // 0x13a5b8: 0xacc40010  sw          $a0, 0x10($a2)
    ctx->pc = 0x13a5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
    ctx->pc = 0x13a5bcu;
}
