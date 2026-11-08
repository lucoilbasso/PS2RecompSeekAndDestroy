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

// Function: entry_0019ae20
// Address: 0x19ae20 - 0x19ae28
void entry_0019ae20_0x19ae20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ae20_0x19ae20");
#endif

    ctx->pc = 0x19ae20u;

    // 0x19ae20: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x19ae20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19ae24: 0x0  nop
    ctx->pc = 0x19ae24u;
    // NOP
    ctx->pc = 0x19ae28u;
}
