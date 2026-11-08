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

// Function: entry_0019517c
// Address: 0x19517c - 0x195180
void entry_0019517c_0x19517c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019517c_0x19517c");
#endif

    ctx->pc = 0x19517cu;

    // 0x19517c: 0xac800170  sw          $zero, 0x170($a0)
    ctx->pc = 0x19517cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 368), GPR_U32(ctx, 0));
    ctx->pc = 0x195180u;
}
