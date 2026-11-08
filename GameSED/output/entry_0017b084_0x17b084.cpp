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

// Function: entry_0017b084
// Address: 0x17b084 - 0x17b090
void entry_0017b084_0x17b084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b084_0x17b084");
#endif

    ctx->pc = 0x17b084u;

    // 0x17b084: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x17b084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17b088: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x17b088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17b08c: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x17b08cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    ctx->pc = 0x17b090u;
}
