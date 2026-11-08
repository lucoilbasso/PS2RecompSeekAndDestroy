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

// Function: entry_0018c578
// Address: 0x18c578 - 0x18c580
void entry_0018c578_0x18c578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c578_0x18c578");
#endif

    ctx->pc = 0x18c578u;

    // 0x18c578: 0x26230230  addiu       $v1, $s1, 0x230
    ctx->pc = 0x18c578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    // 0x18c57c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x18c57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x18c580u;
}
