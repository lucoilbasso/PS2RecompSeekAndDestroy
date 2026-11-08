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

// Function: entry_0015a308
// Address: 0x15a308 - 0x15a30c
void entry_0015a308_0x15a308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a308_0x15a308");
#endif

    ctx->pc = 0x15a308u;

    // 0x15a308: 0xaca0003c  sw          $zero, 0x3C($a1)
    ctx->pc = 0x15a308u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
    ctx->pc = 0x15a30cu;
}
