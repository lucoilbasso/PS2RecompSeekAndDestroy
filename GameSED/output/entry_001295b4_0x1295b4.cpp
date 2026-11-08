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

// Function: entry_001295b4
// Address: 0x1295b4 - 0x1295b8
void entry_001295b4_0x1295b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001295b4_0x1295b4");
#endif

    ctx->pc = 0x1295b4u;

    // 0x1295b4: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x1295b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->pc = 0x1295b8u;
}
