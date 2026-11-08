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

// Function: entry_00118fd8
// Address: 0x118fd8 - 0x118fe4
void entry_00118fd8_0x118fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118fd8_0x118fd8");
#endif

    ctx->pc = 0x118fd8u;

    // 0x118fd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118fdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x118fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118fe0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x118fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    ctx->pc = 0x118fe4u;
}
