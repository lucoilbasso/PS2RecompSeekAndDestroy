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

// Function: entry_00169ddc
// Address: 0x169ddc - 0x169de4
void entry_00169ddc_0x169ddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169ddc_0x169ddc");
#endif

    ctx->pc = 0x169ddcu;

    // 0x169ddc: 0x26c50ccc  addiu       $a1, $s6, 0xCCC
    ctx->pc = 0x169ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 3276));
    // 0x169de0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x169de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x169de4u;
}
