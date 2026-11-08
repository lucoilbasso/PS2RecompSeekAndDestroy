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

// Function: entry_001710b8
// Address: 0x1710b8 - 0x1710c8
void entry_001710b8_0x1710b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001710b8_0x1710b8");
#endif

    ctx->pc = 0x1710b8u;

    // 0x1710b8: 0x8d2a0034  lw          $t2, 0x34($t1)
    ctx->pc = 0x1710b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
    // 0x1710bc: 0x8d240038  lw          $a0, 0x38($t1)
    ctx->pc = 0x1710bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
    // 0x1710c0: 0x4a1823  subu        $v1, $v0, $t2
    ctx->pc = 0x1710c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1710c4: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x1710c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x1710c8u;
}
