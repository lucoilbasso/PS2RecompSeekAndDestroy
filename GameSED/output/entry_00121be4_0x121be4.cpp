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

// Function: entry_00121be4
// Address: 0x121be4 - 0x121bf0
void entry_00121be4_0x121be4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121be4_0x121be4");
#endif

    ctx->pc = 0x121be4u;

    // 0x121be4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x121be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x121be8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x121be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121bec: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x121becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    ctx->pc = 0x121bf0u;
}
