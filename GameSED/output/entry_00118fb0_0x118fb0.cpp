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

// Function: entry_00118fb0
// Address: 0x118fb0 - 0x118fb4
void entry_00118fb0_0x118fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118fb0_0x118fb0");
#endif

    ctx->pc = 0x118fb0u;

    // 0x118fb0: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x118fb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    ctx->pc = 0x118fb4u;
}
