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

// Function: entry_00124334
// Address: 0x124334 - 0x12433c
void entry_00124334_0x124334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124334_0x124334");
#endif

    ctx->pc = 0x124334u;

    // 0x124334: 0xaef1015c  sw          $s1, 0x15C($s7)
    ctx->pc = 0x124334u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 348), GPR_U32(ctx, 17));
    // 0x124338: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x124338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12433cu;
}
