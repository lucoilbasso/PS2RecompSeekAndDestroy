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

// Function: entry_00172e00
// Address: 0x172e00 - 0x172e04
void entry_00172e00_0x172e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172e00_0x172e00");
#endif

    ctx->pc = 0x172e00u;

    // 0x172e00: 0x2412fff8  addiu       $s2, $zero, -0x8
    ctx->pc = 0x172e00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    ctx->pc = 0x172e04u;
}
