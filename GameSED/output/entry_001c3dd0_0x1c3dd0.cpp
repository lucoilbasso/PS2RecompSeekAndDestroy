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

// Function: entry_001c3dd0
// Address: 0x1c3dd0 - 0x1c3de0
void entry_001c3dd0_0x1c3dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3dd0_0x1c3dd0");
#endif

    ctx->pc = 0x1c3dd0u;

    // 0x1c3dd0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c3dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3dd4: 0x2a750400  slti        $s5, $s3, 0x400
    ctx->pc = 0x1c3dd4u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1c3dd8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1c3dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1c3ddc: 0x0  nop
    ctx->pc = 0x1c3ddcu;
    // NOP
    ctx->pc = 0x1c3de0u;
}
