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

// Function: entry_00139708
// Address: 0x139708 - 0x139710
void entry_00139708_0x139708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139708_0x139708");
#endif

    ctx->pc = 0x139708u;

    // 0x139708: 0xf8e00000  sqc2        $vf0, 0x0($a3)
    ctx->pc = 0x139708u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13970c: 0x24c20020  addiu       $v0, $a2, 0x20
    ctx->pc = 0x13970cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    ctx->pc = 0x139710u;
}
