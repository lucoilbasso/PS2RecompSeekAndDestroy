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

// Function: entry_0017aadc
// Address: 0x17aadc - 0x17aae4
void entry_0017aadc_0x17aadc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017aadc_0x17aadc");
#endif

    ctx->pc = 0x17aadcu;

    // 0x17aadc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x17aadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17aae0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x17aae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x17aae4u;
}
