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

// Function: entry_001a4ed0
// Address: 0x1a4ed0 - 0x1a4ee0
void entry_001a4ed0_0x1a4ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4ed0_0x1a4ed0");
#endif

    ctx->pc = 0x1a4ed0u;

    // 0x1a4ed0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a4ed4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a4ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4ed8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a4ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a4edc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a4edcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a4ee0u;
}
