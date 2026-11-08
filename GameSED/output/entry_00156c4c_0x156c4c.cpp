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

// Function: entry_00156c4c
// Address: 0x156c4c - 0x156c50
void entry_00156c4c_0x156c4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156c4c_0x156c4c");
#endif

    ctx->pc = 0x156c4cu;

    // 0x156c4c: 0xacc40010  sw          $a0, 0x10($a2)
    ctx->pc = 0x156c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
    ctx->pc = 0x156c50u;
}
