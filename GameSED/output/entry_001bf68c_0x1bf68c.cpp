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

// Function: entry_001bf68c
// Address: 0x1bf68c - 0x1bf690
void entry_001bf68c_0x1bf68c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf68c_0x1bf68c");
#endif

    ctx->pc = 0x1bf68cu;

    // 0x1bf68c: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x1bf68cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x1bf690u;
}
