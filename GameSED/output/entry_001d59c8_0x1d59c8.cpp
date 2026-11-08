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

// Function: entry_001d59c8
// Address: 0x1d59c8 - 0x1d59dc
void entry_001d59c8_0x1d59c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d59c8_0x1d59c8");
#endif

    ctx->pc = 0x1d59c8u;

    // 0x1d59c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d59c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d59cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d59ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d59d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d59d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d59d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d59d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d59d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d59d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d59dcu;
}
