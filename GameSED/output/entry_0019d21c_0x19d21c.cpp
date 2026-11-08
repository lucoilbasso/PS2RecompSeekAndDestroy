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

// Function: entry_0019d21c
// Address: 0x19d21c - 0x19d220
void entry_0019d21c_0x19d21c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d21c_0x19d21c");
#endif

    ctx->pc = 0x19d21cu;

    // 0x19d21c: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x19d21cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    ctx->pc = 0x19d220u;
}
