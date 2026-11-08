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

// Function: entry_00117ebc
// Address: 0x117ebc - 0x117ec0
void entry_00117ebc_0x117ebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117ebc_0x117ebc");
#endif

    ctx->pc = 0x117ebcu;

    // 0x117ebc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x117ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x117ec0u;
}
