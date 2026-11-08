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

// Function: entry_001699b8
// Address: 0x1699b8 - 0x1699d0
void entry_001699b8_0x1699b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001699b8_0x1699b8");
#endif

    ctx->pc = 0x1699b8u;

    // 0x1699b8: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1699b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1699bc: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x1699bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x1699c0: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x1699c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x1699c4: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x1699c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1699c8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1699c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1699cc: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x1699ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    ctx->pc = 0x1699d0u;
}
