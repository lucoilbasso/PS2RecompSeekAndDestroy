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

// Function: entry_00155dcc
// Address: 0x155dcc - 0x155dd0
void entry_00155dcc_0x155dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155dcc_0x155dcc");
#endif

    ctx->pc = 0x155dccu;

    // 0x155dcc: 0x24639c60  addiu       $v1, $v1, -0x63A0
    ctx->pc = 0x155dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941792));
    ctx->pc = 0x155dd0u;
}
