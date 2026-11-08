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

// Function: entry_00156c60
// Address: 0x156c60 - 0x156c64
void entry_00156c60_0x156c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156c60_0x156c60");
#endif

    ctx->pc = 0x156c60u;

    // 0x156c60: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x156c60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    ctx->pc = 0x156c64u;
}
