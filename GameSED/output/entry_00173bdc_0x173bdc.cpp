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

// Function: entry_00173bdc
// Address: 0x173bdc - 0x173be0
void entry_00173bdc_0x173bdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173bdc_0x173bdc");
#endif

    ctx->pc = 0x173bdcu;

    // 0x173bdc: 0x28a40010  slti        $a0, $a1, 0x10
    ctx->pc = 0x173bdcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    ctx->pc = 0x173be0u;
}
