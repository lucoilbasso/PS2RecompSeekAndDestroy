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

// Function: entry_0013c984
// Address: 0x13c984 - 0x13c990
void entry_0013c984_0x13c984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c984_0x13c984");
#endif

    ctx->pc = 0x13c984u;

    // 0x13c984: 0x8e0201e0  lw          $v0, 0x1E0($s0)
    ctx->pc = 0x13c984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x13c988: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x13c988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x13c98c: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x13c98cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x13c990u;
}
