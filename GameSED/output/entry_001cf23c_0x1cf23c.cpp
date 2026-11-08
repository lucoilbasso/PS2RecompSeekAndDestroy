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

// Function: entry_001cf23c
// Address: 0x1cf23c - 0x1cf24c
void entry_001cf23c_0x1cf23c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf23c_0x1cf23c");
#endif

    ctx->pc = 0x1cf23cu;

    // 0x1cf23c: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1cf23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1cf240: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1cf240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1cf244: 0x2463c1c8  addiu       $v1, $v1, -0x3E38
    ctx->pc = 0x1cf244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951368));
    // 0x1cf248: 0x24840d70  addiu       $a0, $a0, 0xD70
    ctx->pc = 0x1cf248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3440));
    ctx->pc = 0x1cf24cu;
}
