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

// Function: entry_0018e24c
// Address: 0x18e24c - 0x18e250
void entry_0018e24c_0x18e24c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e24c_0x18e24c");
#endif

    ctx->pc = 0x18e24cu;

    // 0x18e24c: 0xad00024c  sw          $zero, 0x24C($t0)
    ctx->pc = 0x18e24cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 588), GPR_U32(ctx, 0));
    ctx->pc = 0x18e250u;
}
