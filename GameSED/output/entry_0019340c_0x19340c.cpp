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

// Function: entry_0019340c
// Address: 0x19340c - 0x193410
void entry_0019340c_0x19340c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019340c_0x19340c");
#endif

    ctx->pc = 0x19340cu;

    // 0x19340c: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x19340cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    ctx->pc = 0x193410u;
}
