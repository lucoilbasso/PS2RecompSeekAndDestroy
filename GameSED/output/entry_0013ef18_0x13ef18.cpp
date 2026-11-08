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

// Function: entry_0013ef18
// Address: 0x13ef18 - 0x13ef20
void entry_0013ef18_0x13ef18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ef18_0x13ef18");
#endif

    ctx->pc = 0x13ef18u;

    // 0x13ef18: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x13ef18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ef1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13ef1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    ctx->pc = 0x13ef20u;
}
