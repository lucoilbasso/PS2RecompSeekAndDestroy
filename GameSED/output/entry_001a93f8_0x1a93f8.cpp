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

// Function: entry_001a93f8
// Address: 0x1a93f8 - 0x1a9404
void entry_001a93f8_0x1a93f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a93f8_0x1a93f8");
#endif

    ctx->pc = 0x1a93f8u;

    // 0x1a93f8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1a93f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1a93fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a93fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9400: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1a9400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    ctx->pc = 0x1a9404u;
}
