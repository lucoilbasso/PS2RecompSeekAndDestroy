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

// Function: entry_0018f728
// Address: 0x18f728 - 0x18f730
void entry_0018f728_0x18f728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f728_0x18f728");
#endif

    ctx->pc = 0x18f728u;

    // 0x18f728: 0xdc62d628  ld          $v0, -0x29D8($v1)
    ctx->pc = 0x18f728u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294956584)));
    // 0x18f72c: 0xfc820018  sd          $v0, 0x18($a0)
    ctx->pc = 0x18f72cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 2));
    ctx->pc = 0x18f730u;
}
