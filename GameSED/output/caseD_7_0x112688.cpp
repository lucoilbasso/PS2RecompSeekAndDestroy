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

// Function: caseD_7
// Address: 0x112688 - 0x112694
void caseD_7_0x112688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x112688");
#endif

    ctx->pc = 0x112688u;

    // 0x112688: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x112688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x11268c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x11268cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x112690: 0xa0710033  sb          $s1, 0x33($v1)
    ctx->pc = 0x112690u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 51), (uint8_t)GPR_U32(ctx, 17));
    ctx->pc = 0x112694u;
}
