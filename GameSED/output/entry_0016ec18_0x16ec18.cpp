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

// Function: entry_0016ec18
// Address: 0x16ec18 - 0x16ec20
void entry_0016ec18_0x16ec18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ec18_0x16ec18");
#endif

    ctx->pc = 0x16ec18u;

    // 0x16ec18: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x16ec18u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x16ec1c: 0x26220280  addiu       $v0, $s1, 0x280
    ctx->pc = 0x16ec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
    ctx->pc = 0x16ec20u;
}
