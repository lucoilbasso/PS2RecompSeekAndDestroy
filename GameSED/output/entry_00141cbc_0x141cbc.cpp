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

// Function: entry_00141cbc
// Address: 0x141cbc - 0x141cc0
void entry_00141cbc_0x141cbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141cbc_0x141cbc");
#endif

    ctx->pc = 0x141cbcu;

    // 0x141cbc: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x141cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->pc = 0x141cc0u;
}
