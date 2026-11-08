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

// Function: entry_0017f6fc
// Address: 0x17f6fc - 0x17f704
void entry_0017f6fc_0x17f6fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f6fc_0x17f6fc");
#endif

    ctx->pc = 0x17f6fcu;

    // 0x17f6fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x17f6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x17f700: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x17f700u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->pc = 0x17f704u;
}
