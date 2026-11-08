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

// Function: entry_0018fe10
// Address: 0x18fe10 - 0x18fe1c
void entry_0018fe10_0x18fe10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fe10_0x18fe10");
#endif

    ctx->pc = 0x18fe10u;

    // 0x18fe10: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x18fe10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x18fe14: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x18fe14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x18fe18: 0x3463000d  ori         $v1, $v1, 0xD
    ctx->pc = 0x18fe18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13);
    ctx->pc = 0x18fe1cu;
}
