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

// Function: entry_0017bc10
// Address: 0x17bc10 - 0x17bc14
void entry_0017bc10_0x17bc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bc10_0x17bc10");
#endif

    ctx->pc = 0x17bc10u;

    // 0x17bc10: 0x713c3  sra         $v0, $a3, 15
    ctx->pc = 0x17bc10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 15));
    ctx->pc = 0x17bc14u;
}
