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

// Function: entry_0017a680
// Address: 0x17a680 - 0x17a688
void entry_0017a680_0x17a680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a680_0x17a680");
#endif

    ctx->pc = 0x17a680u;

    // 0x17a680: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x17a680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x17a684: 0x2463ffe7  addiu       $v1, $v1, -0x19
    ctx->pc = 0x17a684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
    ctx->pc = 0x17a688u;
}
