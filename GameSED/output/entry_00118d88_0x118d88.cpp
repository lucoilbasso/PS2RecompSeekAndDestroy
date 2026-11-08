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

// Function: entry_00118d88
// Address: 0x118d88 - 0x118d94
void entry_00118d88_0x118d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118d88_0x118d88");
#endif

    ctx->pc = 0x118d88u;

    // 0x118d88: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x118d88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118d8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x118d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x118d90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x118d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118d94u;
}
