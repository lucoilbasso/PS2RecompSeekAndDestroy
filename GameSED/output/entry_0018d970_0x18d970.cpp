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

// Function: entry_0018d970
// Address: 0x18d970 - 0x18d978
void entry_0018d970_0x18d970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d970_0x18d970");
#endif

    ctx->pc = 0x18d970u;

    // 0x18d970: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x18d970u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d974: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x18d974u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x18d978u;
}
