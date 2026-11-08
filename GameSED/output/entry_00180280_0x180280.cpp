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

// Function: entry_00180280
// Address: 0x180280 - 0x18028c
void entry_00180280_0x180280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180280_0x180280");
#endif

    ctx->pc = 0x180280u;

    // 0x180280: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x180280u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x180284: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x180284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180288: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x180288u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x18028cu;
}
