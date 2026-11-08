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

// Function: entry_00159a98
// Address: 0x159a98 - 0x159aa8
void entry_00159a98_0x159a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159a98_0x159a98");
#endif

    ctx->pc = 0x159a98u;

    // 0x159a98: 0x92020020  lbu         $v0, 0x20($s0)
    ctx->pc = 0x159a98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x159a9c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x159a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x159aa0: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x159aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x159aa4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x159aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->pc = 0x159aa8u;
}
