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

// Function: entry_0015afdc
// Address: 0x15afdc - 0x15afe0
void entry_0015afdc_0x15afdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015afdc_0x15afdc");
#endif

    ctx->pc = 0x15afdcu;

    // 0x15afdc: 0x26d50020  addiu       $s5, $s6, 0x20
    ctx->pc = 0x15afdcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    ctx->pc = 0x15afe0u;
}
