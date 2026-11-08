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

// Function: entry_001be5b8
// Address: 0x1be5b8 - 0x1be5c0
void entry_001be5b8_0x1be5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be5b8_0x1be5b8");
#endif

    ctx->pc = 0x1be5b8u;

    // 0x1be5b8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1be5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1be5bc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1be5bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    ctx->pc = 0x1be5c0u;
}
