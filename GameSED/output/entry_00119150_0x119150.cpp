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

// Function: entry_00119150
// Address: 0x119150 - 0x119160
void entry_00119150_0x119150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119150_0x119150");
#endif

    ctx->pc = 0x119150u;

    // 0x119150: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x119150u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x119154: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x119154u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x119158: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x119158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x11915c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x11915cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x119160u;
}
