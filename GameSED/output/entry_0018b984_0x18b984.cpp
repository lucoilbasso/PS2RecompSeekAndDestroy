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

// Function: entry_0018b984
// Address: 0x18b984 - 0x18b98c
void entry_0018b984_0x18b984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b984_0x18b984");
#endif

    ctx->pc = 0x18b984u;

    // 0x18b984: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18b984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b988: 0xac830130  sw          $v1, 0x130($a0)
    ctx->pc = 0x18b988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 3));
    ctx->pc = 0x18b98cu;
}
