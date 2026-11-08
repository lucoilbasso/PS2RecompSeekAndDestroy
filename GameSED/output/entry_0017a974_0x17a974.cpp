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

// Function: entry_0017a974
// Address: 0x17a974 - 0x17a978
void entry_0017a974_0x17a974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a974_0x17a974");
#endif

    ctx->pc = 0x17a974u;

    // 0x17a974: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x17a974u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x17a978u;
}
