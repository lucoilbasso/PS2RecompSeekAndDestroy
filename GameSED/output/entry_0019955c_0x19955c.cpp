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

// Function: entry_0019955c
// Address: 0x19955c - 0x199568
void entry_0019955c_0x19955c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019955c_0x19955c");
#endif

    ctx->pc = 0x19955cu;

    // 0x19955c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19955cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x199560: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x199560u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    ctx->pc = 0x199568u;
}
