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

// Function: entry_001171b8
// Address: 0x1171b8 - 0x1171c8
void entry_001171b8_0x1171b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001171b8_0x1171b8");
#endif

    ctx->pc = 0x1171b8u;

    // 0x1171b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1171b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1171bc: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x1171bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1171c0: 0x2e530008  sltiu       $s3, $s2, 0x8
    ctx->pc = 0x1171c0u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1171c4: 0x26b11c10  addiu       $s1, $s5, 0x1C10
    ctx->pc = 0x1171c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 7184));
    ctx->pc = 0x1171c8u;
}
