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

// Function: entry_0017b0c4
// Address: 0x17b0c4 - 0x17b0cc
void entry_0017b0c4_0x17b0c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b0c4_0x17b0c4");
#endif

    ctx->pc = 0x17b0c4u;

    // 0x17b0c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17b0c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b0c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x17b0ccu;
}
