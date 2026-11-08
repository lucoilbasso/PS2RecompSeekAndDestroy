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

// Function: caseD_f
// Address: 0x1364d8 - 0x1364dc
void caseD_f_0x1364d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x1364d8");
#endif

    ctx->pc = 0x1364d8u;

    // 0x1364d8: 0x3c130010  lui         $s3, 0x10
    ctx->pc = 0x1364d8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16 << 16));
    ctx->pc = 0x1364dcu;
}
