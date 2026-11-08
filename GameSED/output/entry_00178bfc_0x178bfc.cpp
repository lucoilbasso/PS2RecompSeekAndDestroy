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

// Function: entry_00178bfc
// Address: 0x178bfc - 0x178c00
void entry_00178bfc_0x178bfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178bfc_0x178bfc");
#endif

    ctx->pc = 0x178bfcu;

    // 0x178bfc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x178bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    ctx->pc = 0x178c00u;
}
