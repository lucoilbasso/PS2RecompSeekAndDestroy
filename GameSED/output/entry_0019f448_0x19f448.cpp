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

// Function: entry_0019f448
// Address: 0x19f448 - 0x19f45c
void entry_0019f448_0x19f448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f448_0x19f448");
#endif

    ctx->pc = 0x19f448u;

    // 0x19f448: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f44c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x19f44cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f450: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19f450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19f454: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19f454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f458: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x19f458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    ctx->pc = 0x19f45cu;
}
