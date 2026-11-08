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

// Function: entry_001d05f8
// Address: 0x1d05f8 - 0x1d0600
void entry_001d05f8_0x1d05f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d05f8_0x1d05f8");
#endif

    ctx->pc = 0x1d05f8u;

    // 0x1d05f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d05f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d05fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d05fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d0600u;
}
