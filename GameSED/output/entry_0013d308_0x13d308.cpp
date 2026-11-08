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

// Function: entry_0013d308
// Address: 0x13d308 - 0x13d30c
void entry_0013d308_0x13d308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d308_0x13d308");
#endif

    ctx->pc = 0x13d308u;

    // 0x13d308: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x13d308u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    ctx->pc = 0x13d30cu;
}
