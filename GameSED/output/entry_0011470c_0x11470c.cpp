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

// Function: entry_0011470c
// Address: 0x11470c - 0x114710
void entry_0011470c_0x11470c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011470c_0x11470c");
#endif

    ctx->pc = 0x11470cu;

    // 0x11470c: 0xaf849124  sw          $a0, -0x6EDC($gp)
    ctx->pc = 0x11470cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938916), GPR_U32(ctx, 4));
    ctx->pc = 0x114710u;
}
