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

// Function: entry_001413a8
// Address: 0x1413a8 - 0x1413b4
void entry_001413a8_0x1413a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001413a8_0x1413a8");
#endif

    ctx->pc = 0x1413a8u;

    // 0x1413a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1413a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1413ac: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1413acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1413b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1413b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1413b4u;
}
