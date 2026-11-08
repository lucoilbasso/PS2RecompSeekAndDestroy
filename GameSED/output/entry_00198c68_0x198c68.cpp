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

// Function: entry_00198c68
// Address: 0x198c68 - 0x198c7c
void entry_00198c68_0x198c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198c68_0x198c68");
#endif

    ctx->pc = 0x198c68u;

    // 0x198c68: 0x313fc  dsll32      $v0, $v1, 15
    ctx->pc = 0x198c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 15));
    // 0x198c6c: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x198c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x198c70: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x198c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x198c74: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x198c74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x198c78: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x198c78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    ctx->pc = 0x198c7cu;
}
