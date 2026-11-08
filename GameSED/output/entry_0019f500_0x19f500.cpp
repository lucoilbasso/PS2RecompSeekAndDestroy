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

// Function: entry_0019f500
// Address: 0x19f500 - 0x19f508
void entry_0019f500_0x19f500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f500_0x19f500");
#endif

    ctx->pc = 0x19f500u;

    // 0x19f500: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x19f500u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x19f504: 0x0  nop
    ctx->pc = 0x19f504u;
    // NOP
    ctx->pc = 0x19f508u;
}
