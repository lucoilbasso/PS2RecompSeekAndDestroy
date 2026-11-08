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

// Function: entry_00141d9c
// Address: 0x141d9c - 0x141da4
void entry_00141d9c_0x141d9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141d9c_0x141d9c");
#endif

    ctx->pc = 0x141d9cu;

    // 0x141d9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x141d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x141da0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x141da0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x141da4u;
}
