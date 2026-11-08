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

// Function: entry_0014156c
// Address: 0x14156c - 0x141570
void entry_0014156c_0x14156c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014156c_0x14156c");
#endif

    ctx->pc = 0x14156cu;

    // 0x14156c: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x14156cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    ctx->pc = 0x141570u;
}
