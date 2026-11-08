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

// Function: entry_001cf00c
// Address: 0x1cf00c - 0x1cf01c
void entry_001cf00c_0x1cf00c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf00c_0x1cf00c");
#endif

    ctx->pc = 0x1cf00cu;

    // 0x1cf00c: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1cf00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1cf010: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1cf010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1cf014: 0x2463c178  addiu       $v1, $v1, -0x3E88
    ctx->pc = 0x1cf014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951288));
    // 0x1cf018: 0x24840d70  addiu       $a0, $a0, 0xD70
    ctx->pc = 0x1cf018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3440));
    ctx->pc = 0x1cf01cu;
}
