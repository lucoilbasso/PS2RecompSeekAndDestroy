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

// Function: entry_0016102c
// Address: 0x16102c - 0x161030
void entry_0016102c_0x16102c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016102c_0x16102c");
#endif

    ctx->pc = 0x16102cu;

    // 0x16102c: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x16102cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    ctx->pc = 0x161030u;
}
