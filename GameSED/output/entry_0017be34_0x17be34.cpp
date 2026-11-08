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

// Function: entry_0017be34
// Address: 0x17be34 - 0x17be40
void entry_0017be34_0x17be34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017be34_0x17be34");
#endif

    ctx->pc = 0x17be34u;

    // 0x17be34: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x17be34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17be38: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x17be38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x17be3c: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x17be3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    ctx->pc = 0x17be40u;
}
