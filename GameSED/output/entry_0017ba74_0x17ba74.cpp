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

// Function: entry_0017ba74
// Address: 0x17ba74 - 0x17ba84
void entry_0017ba74_0x17ba74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ba74_0x17ba74");
#endif

    ctx->pc = 0x17ba74u;

    // 0x17ba74: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x17ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x17ba78: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x17ba78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17ba7c: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x17ba7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x17ba80: 0xaca3004c  sw          $v1, 0x4C($a1)
    ctx->pc = 0x17ba80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 3));
    ctx->pc = 0x17ba84u;
}
