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

// Function: entry_00110aac
// Address: 0x110aac - 0x110ab0
void entry_00110aac_0x110aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110aac_0x110aac");
#endif

    ctx->pc = 0x110aacu;

    // 0x110aac: 0x248300d0  addiu       $v1, $a0, 0xD0
    ctx->pc = 0x110aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    ctx->pc = 0x110ab0u;
}
