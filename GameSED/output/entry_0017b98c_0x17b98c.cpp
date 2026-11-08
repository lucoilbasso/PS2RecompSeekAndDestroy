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

// Function: entry_0017b98c
// Address: 0x17b98c - 0x17b990
void entry_0017b98c_0x17b98c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b98c_0x17b98c");
#endif

    ctx->pc = 0x17b98cu;

    // 0x17b98c: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x17b98cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    ctx->pc = 0x17b990u;
}
