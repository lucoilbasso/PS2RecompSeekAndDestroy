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

// Function: entry_00171d20
// Address: 0x171d20 - 0x171d24
void entry_00171d20_0x171d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171d20_0x171d20");
#endif

    ctx->pc = 0x171d20u;

    // 0x171d20: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x171d20u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x171d24u;
}
