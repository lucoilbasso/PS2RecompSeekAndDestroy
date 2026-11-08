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

// Function: entry_0019cf00
// Address: 0x19cf00 - 0x19cf08
void entry_0019cf00_0x19cf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cf00_0x19cf00");
#endif

    ctx->pc = 0x19cf00u;

    // 0x19cf00: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19cf04: 0x2442f008  addiu       $v0, $v0, -0xFF8
    ctx->pc = 0x19cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963208));
    ctx->pc = 0x19cf08u;
}
