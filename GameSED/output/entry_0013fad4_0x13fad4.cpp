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

// Function: entry_0013fad4
// Address: 0x13fad4 - 0x13fadc
void entry_0013fad4_0x13fad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fad4_0x13fad4");
#endif

    ctx->pc = 0x13fad4u;

    // 0x13fad4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13fad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fad8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13fad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x13fadcu;
}
