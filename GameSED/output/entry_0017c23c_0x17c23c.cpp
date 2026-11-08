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

// Function: entry_0017c23c
// Address: 0x17c23c - 0x17c248
void entry_0017c23c_0x17c23c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c23c_0x17c23c");
#endif

    ctx->pc = 0x17c23cu;

    // 0x17c23c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x17c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17c240: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x17c240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x17c244: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x17c244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    ctx->pc = 0x17c248u;
}
