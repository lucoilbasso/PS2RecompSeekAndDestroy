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

// Function: entry_00182c04
// Address: 0x182c04 - 0x182c08
void entry_00182c04_0x182c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182c04_0x182c04");
#endif

    ctx->pc = 0x182c04u;

    // 0x182c04: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x182c04u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x182c08u;
}
