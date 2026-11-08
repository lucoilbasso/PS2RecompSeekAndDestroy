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

// Function: entry_00176bd0
// Address: 0x176bd0 - 0x176bdc
void entry_00176bd0_0x176bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176bd0_0x176bd0");
#endif

    ctx->pc = 0x176bd0u;

    // 0x176bd0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x176bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x176bd4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x176bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x176bd8: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x176bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    ctx->pc = 0x176bdcu;
}
