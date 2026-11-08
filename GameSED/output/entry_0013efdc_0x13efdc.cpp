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

// Function: entry_0013efdc
// Address: 0x13efdc - 0x13efe4
void entry_0013efdc_0x13efdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013efdc_0x13efdc");
#endif

    ctx->pc = 0x13efdcu;

    // 0x13efdc: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x13efdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x13efe0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x13efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->pc = 0x13efe4u;
}
