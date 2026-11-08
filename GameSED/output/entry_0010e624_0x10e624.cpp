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

// Function: entry_0010e624
// Address: 0x10e624 - 0x10e62c
void entry_0010e624_0x10e624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e624_0x10e624");
#endif

    ctx->pc = 0x10e624u;

    // 0x10e624: 0x1012  mflo        $v0
    ctx->pc = 0x10e624u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x10e628: 0xa622017a  sh          $v0, 0x17A($s1)
    ctx->pc = 0x10e628u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 378), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x10e62cu;
}
