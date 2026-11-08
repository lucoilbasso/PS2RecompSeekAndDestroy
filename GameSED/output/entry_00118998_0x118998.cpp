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

// Function: entry_00118998
// Address: 0x118998 - 0x1189a4
void entry_00118998_0x118998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118998_0x118998");
#endif

    ctx->pc = 0x118998u;

    // 0x118998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11899c: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x11899cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1189a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1189a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1189a4u;
}
