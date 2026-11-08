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

// Function: entry_001a4310
// Address: 0x1a4310 - 0x1a4324
void entry_001a4310_0x1a4310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4310_0x1a4310");
#endif

    ctx->pc = 0x1a4310u;

    // 0x1a4310: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a4310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a4314: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a4314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4318: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a4318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a431c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a431cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4320: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x1a4324u;
}
