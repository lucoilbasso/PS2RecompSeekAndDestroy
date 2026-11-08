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

// Function: entry_0014155c
// Address: 0x14155c - 0x141560
void entry_0014155c_0x14155c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014155c_0x14155c");
#endif

    ctx->pc = 0x14155cu;

    // 0x14155c: 0x25240020  addiu       $a0, $t1, 0x20
    ctx->pc = 0x14155cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    ctx->pc = 0x141560u;
}
