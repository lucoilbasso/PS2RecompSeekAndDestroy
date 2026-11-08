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

// Function: entry_00175084
// Address: 0x175084 - 0x17508c
void entry_00175084_0x175084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175084_0x175084");
#endif

    ctx->pc = 0x175084u;

    // 0x175084: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x175084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x175088: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x175088u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x17508cu;
}
