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

// Function: entry_0019416c
// Address: 0x19416c - 0x194170
void entry_0019416c_0x19416c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019416c_0x19416c");
#endif

    ctx->pc = 0x19416cu;

    // 0x19416c: 0xae400094  sw          $zero, 0x94($s2)
    ctx->pc = 0x19416cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 0));
    ctx->pc = 0x194170u;
}
