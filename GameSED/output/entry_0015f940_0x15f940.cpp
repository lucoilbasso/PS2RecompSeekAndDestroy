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

// Function: entry_0015f940
// Address: 0x15f940 - 0x15f944
void entry_0015f940_0x15f940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f940_0x15f940");
#endif

    ctx->pc = 0x15f940u;

    // 0x15f940: 0x96a20014  lhu         $v0, 0x14($s5)
    ctx->pc = 0x15f940u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 20)));
    ctx->pc = 0x15f944u;
}
