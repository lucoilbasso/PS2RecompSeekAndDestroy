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

// Function: entry_0012a06c
// Address: 0x12a06c - 0x12a074
void entry_0012a06c_0x12a06c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a06c_0x12a06c");
#endif

    ctx->pc = 0x12a06cu;

    // 0x12a06c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x12a06cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x12a070: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12a070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x12a074u;
}
