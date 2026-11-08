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

// Function: entry_00199748
// Address: 0x199748 - 0x199754
void entry_00199748_0x199748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199748_0x199748");
#endif

    ctx->pc = 0x199748u;

    // 0x199748: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x199748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19974c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19974cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199750: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x199754u;
}
