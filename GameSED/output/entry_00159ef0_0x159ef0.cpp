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

// Function: entry_00159ef0
// Address: 0x159ef0 - 0x159efc
void entry_00159ef0_0x159ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159ef0_0x159ef0");
#endif

    ctx->pc = 0x159ef0u;

    // 0x159ef0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x159ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x159ef4: 0xa2220020  sb          $v0, 0x20($s1)
    ctx->pc = 0x159ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x159ef8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x159ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->pc = 0x159efcu;
}
