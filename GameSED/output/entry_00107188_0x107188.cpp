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

// Function: entry_00107188
// Address: 0x107188 - 0x107194
void entry_00107188_0x107188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107188_0x107188");
#endif

    ctx->pc = 0x107188u;

    // 0x107188: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x107188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x10718c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10718cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107190: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x107190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->pc = 0x107194u;
}
