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

// Function: entry_00142370
// Address: 0x142370 - 0x142380
void entry_00142370_0x142370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142370_0x142370");
#endif

    ctx->pc = 0x142370u;

    // 0x142370: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x142370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x142374: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x142374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x142378: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14237c: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x14237cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x142380u;
}
