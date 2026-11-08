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

// Function: entry_001bcc48
// Address: 0x1bcc48 - 0x1bcc50
void entry_001bcc48_0x1bcc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcc48_0x1bcc48");
#endif

    ctx->pc = 0x1bcc48u;

    // 0x1bcc48: 0xde230018  ld          $v1, 0x18($s1)
    ctx->pc = 0x1bcc48u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1bcc4c: 0x2c3102b  sltu        $v0, $s6, $v1
    ctx->pc = 0x1bcc4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    ctx->pc = 0x1bcc50u;
}
