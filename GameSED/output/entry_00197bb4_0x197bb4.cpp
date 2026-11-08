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

// Function: entry_00197bb4
// Address: 0x197bb4 - 0x197bbc
void entry_00197bb4_0x197bb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197bb4_0x197bb4");
#endif

    ctx->pc = 0x197bb4u;

    // 0x197bb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x197bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x197bb8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x197bb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x197bbcu;
}
