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

// Function: entry_001cf354
// Address: 0x1cf354 - 0x1cf364
void entry_001cf354_0x1cf354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf354_0x1cf354");
#endif

    ctx->pc = 0x1cf354u;

    // 0x1cf354: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1cf354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1cf358: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1cf358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1cf35c: 0x2463c1f0  addiu       $v1, $v1, -0x3E10
    ctx->pc = 0x1cf35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951408));
    // 0x1cf360: 0x24840d70  addiu       $a0, $a0, 0xD70
    ctx->pc = 0x1cf360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3440));
    ctx->pc = 0x1cf364u;
}
