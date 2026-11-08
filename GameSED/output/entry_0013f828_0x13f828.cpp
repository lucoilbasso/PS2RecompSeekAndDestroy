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

// Function: entry_0013f828
// Address: 0x13f828 - 0x13f830
void entry_0013f828_0x13f828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f828_0x13f828");
#endif

    ctx->pc = 0x13f828u;

    // 0x13f828: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13f828u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13f82c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13f82cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x13f830u;
}
