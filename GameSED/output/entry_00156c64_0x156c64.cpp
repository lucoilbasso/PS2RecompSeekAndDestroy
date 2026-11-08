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

// Function: entry_00156c64
// Address: 0x156c64 - 0x156c68
void entry_00156c64_0x156c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156c64_0x156c64");
#endif

    ctx->pc = 0x156c64u;

    // 0x156c64: 0xacc40014  sw          $a0, 0x14($a2)
    ctx->pc = 0x156c64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 4));
    ctx->pc = 0x156c68u;
}
