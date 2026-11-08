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

// Function: entry_0017e268
// Address: 0x17e268 - 0x17e26c
void entry_0017e268_0x17e268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e268_0x17e268");
#endif

    ctx->pc = 0x17e268u;

    // 0x17e268: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x17e268u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    ctx->pc = 0x17e26cu;
}
