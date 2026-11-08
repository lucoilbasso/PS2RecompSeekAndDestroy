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

// Function: entry_001148fc
// Address: 0x1148fc - 0x114904
void entry_001148fc_0x1148fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001148fc_0x1148fc");
#endif

    ctx->pc = 0x1148fcu;

    // 0x1148fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1148fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114900: 0x24060c08  addiu       $a2, $zero, 0xC08
    ctx->pc = 0x114900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3080));
    ctx->pc = 0x114904u;
}
