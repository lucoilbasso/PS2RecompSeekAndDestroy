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

// Function: entry_001907a8
// Address: 0x1907a8 - 0x1907b0
void entry_001907a8_0x1907a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001907a8_0x1907a8");
#endif

    ctx->pc = 0x1907a8u;

    // 0x1907a8: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1907a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1907ac: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1907acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    ctx->pc = 0x1907b0u;
}
