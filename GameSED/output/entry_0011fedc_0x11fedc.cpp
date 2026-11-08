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

// Function: entry_0011fedc
// Address: 0x11fedc - 0x11fee0
void entry_0011fedc_0x11fedc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fedc_0x11fedc");
#endif

    ctx->pc = 0x11fedcu;

    // 0x11fedc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x11fedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x11fee0u;
}
