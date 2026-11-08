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

// Function: entry_0018dda0
// Address: 0x18dda0 - 0x18dda8
void entry_0018dda0_0x18dda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dda0_0x18dda0");
#endif

    ctx->pc = 0x18dda0u;

    // 0x18dda0: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x18dda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x18dda4: 0xffa60150  sd          $a2, 0x150($sp)
    ctx->pc = 0x18dda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 6));
    ctx->pc = 0x18dda8u;
}
