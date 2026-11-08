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

// Function: entry_00118cb4
// Address: 0x118cb4 - 0x118cb8
void entry_00118cb4_0x118cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118cb4_0x118cb4");
#endif

    ctx->pc = 0x118cb4u;

    // 0x118cb4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x118cb4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->pc = 0x118cb8u;
}
