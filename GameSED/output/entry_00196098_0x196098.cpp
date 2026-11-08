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

// Function: entry_00196098
// Address: 0x196098 - 0x1960a0
void entry_00196098_0x196098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196098_0x196098");
#endif

    ctx->pc = 0x196098u;

    // 0x196098: 0x21023  negu        $v0, $v0
    ctx->pc = 0x196098u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x19609c: 0xae02019c  sw          $v0, 0x19C($s0)
    ctx->pc = 0x19609cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
    ctx->pc = 0x1960a0u;
}
