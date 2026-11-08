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

// Function: entry_00171958
// Address: 0x171958 - 0x171960
void entry_00171958_0x171958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171958_0x171958");
#endif

    ctx->pc = 0x171958u;

    // 0x171958: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x171958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17195c: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x17195cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    ctx->pc = 0x171960u;
}
