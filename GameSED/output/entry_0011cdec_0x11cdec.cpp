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

// Function: entry_0011cdec
// Address: 0x11cdec - 0x11cdf4
void entry_0011cdec_0x11cdec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cdec_0x11cdec");
#endif

    ctx->pc = 0x11cdecu;

    // 0x11cdec: 0x8c624060  lw          $v0, 0x4060($v1)
    ctx->pc = 0x11cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16480)));
    // 0x11cdf0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11cdf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x11cdf4u;
}
