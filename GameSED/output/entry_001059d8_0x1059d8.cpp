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

// Function: entry_001059d8
// Address: 0x1059d8 - 0x1059e0
void entry_001059d8_0x1059d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001059d8_0x1059d8");
#endif

    ctx->pc = 0x1059d8u;

    // 0x1059d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1059d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1059dc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1059dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1059e0u;
}
