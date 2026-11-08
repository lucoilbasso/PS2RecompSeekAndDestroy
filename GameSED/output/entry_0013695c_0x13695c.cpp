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

// Function: entry_0013695c
// Address: 0x13695c - 0x136968
void entry_0013695c_0x13695c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013695c_0x13695c");
#endif

    ctx->pc = 0x13695cu;

    // 0x13695c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13695cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x136960: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x136960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136964: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x136964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    ctx->pc = 0x136968u;
}
