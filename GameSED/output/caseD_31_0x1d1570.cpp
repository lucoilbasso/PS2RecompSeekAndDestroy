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

// Function: caseD_31
// Address: 0x1d1570 - 0x1d1578
void caseD_31_0x1d1570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_31_0x1d1570");
#endif

    ctx->pc = 0x1d1570u;

    // 0x1d1570: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d1570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1574: 0x0  nop
    ctx->pc = 0x1d1574u;
    // NOP
    ctx->pc = 0x1d1578u;
}
