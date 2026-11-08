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

// Function: entry_001b8d14
// Address: 0x1b8d14 - 0x1b8d28
void entry_001b8d14_0x1b8d14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8d14_0x1b8d14");
#endif

    ctx->pc = 0x1b8d14u;

    // 0x1b8d14: 0x3c170041  lui         $s7, 0x41
    ctx->pc = 0x1b8d14u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65 << 16));
    // 0x1b8d18: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x1b8d18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b8d1c: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x1b8d1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b8d20: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b8d20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8d24: 0x0  nop
    ctx->pc = 0x1b8d24u;
    // NOP
    ctx->pc = 0x1b8d28u;
}
