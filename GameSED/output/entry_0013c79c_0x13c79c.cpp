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

// Function: entry_0013c79c
// Address: 0x13c79c - 0x13c7a8
void entry_0013c79c_0x13c79c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c79c_0x13c79c");
#endif

    ctx->pc = 0x13c79cu;

    // 0x13c79c: 0x8e2201e0  lw          $v0, 0x1E0($s1)
    ctx->pc = 0x13c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x13c7a0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x13c7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x13c7a4: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x13c7a4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x13c7a8u;
}
