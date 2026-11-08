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

// Function: entry_0010c6e8
// Address: 0x10c6e8 - 0x10c6fc
void entry_0010c6e8_0x10c6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c6e8_0x10c6e8");
#endif

    ctx->pc = 0x10c6e8u;

    // 0x10c6e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c6ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c6ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c6f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10c6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10c6f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c6f8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x10c6fcu;
}
