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

// Function: entry_001a8fe0
// Address: 0x1a8fe0 - 0x1a8ff4
void entry_001a8fe0_0x1a8fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8fe0_0x1a8fe0");
#endif

    ctx->pc = 0x1a8fe0u;

    // 0x1a8fe0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a8fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a8fe4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a8fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8fe8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8fec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a8fecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8ff0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a8ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    ctx->pc = 0x1a8ff4u;
}
