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

// Function: entry_0019f0e8
// Address: 0x19f0e8 - 0x19f0f0
void entry_0019f0e8_0x19f0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f0e8_0x19f0e8");
#endif

    ctx->pc = 0x19f0e8u;

    // 0x19f0e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19f0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19f0ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19f0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x19f0f0u;
}
