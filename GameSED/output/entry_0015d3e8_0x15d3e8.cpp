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

// Function: entry_0015d3e8
// Address: 0x15d3e8 - 0x15d3f0
void entry_0015d3e8_0x15d3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d3e8_0x15d3e8");
#endif

    ctx->pc = 0x15d3e8u;

    // 0x15d3e8: 0x8e030164  lw          $v1, 0x164($s0)
    ctx->pc = 0x15d3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x15d3ec: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x15d3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
    ctx->pc = 0x15d3f0u;
}
