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

// Function: entry_001d0560
// Address: 0x1d0560 - 0x1d0568
void entry_001d0560_0x1d0560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0560_0x1d0560");
#endif

    ctx->pc = 0x1d0560u;

    // 0x1d0560: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0564: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d0564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d0568u;
}
