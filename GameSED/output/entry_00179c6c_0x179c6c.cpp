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

// Function: entry_00179c6c
// Address: 0x179c6c - 0x179c74
void entry_00179c6c_0x179c6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179c6c_0x179c6c");
#endif

    ctx->pc = 0x179c6cu;

    // 0x179c6c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x179c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x179c70: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x179c70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x179c74u;
}
