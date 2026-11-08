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

// Function: entry_00141848
// Address: 0x141848 - 0x141850
void entry_00141848_0x141848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141848_0x141848");
#endif

    ctx->pc = 0x141848u;

    // 0x141848: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x141848u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14184c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x14184cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x141850u;
}
