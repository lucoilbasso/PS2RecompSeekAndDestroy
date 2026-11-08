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

// Function: entry_00128bac
// Address: 0x128bac - 0x128bb4
void entry_00128bac_0x128bac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128bac_0x128bac");
#endif

    ctx->pc = 0x128bacu;

    // 0x128bac: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x128bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x128bb0: 0xae22010c  sw          $v0, 0x10C($s1)
    ctx->pc = 0x128bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 2));
    ctx->pc = 0x128bb4u;
}
