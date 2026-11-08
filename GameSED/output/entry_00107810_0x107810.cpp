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

// Function: entry_00107810
// Address: 0x107810 - 0x107820
void entry_00107810_0x107810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107810_0x107810");
#endif

    ctx->pc = 0x107810u;

    // 0x107810: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x107810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x107814: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x107814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x107818: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x107818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10781c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10781cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    ctx->pc = 0x107820u;
}
