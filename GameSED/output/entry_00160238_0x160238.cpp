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

// Function: entry_00160238
// Address: 0x160238 - 0x160248
void entry_00160238_0x160238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160238_0x160238");
#endif

    ctx->pc = 0x160238u;

    // 0x160238: 0x111883  sra         $v1, $s1, 2
    ctx->pc = 0x160238u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 2));
    // 0x16023c: 0x112043  sra         $a0, $s1, 1
    ctx->pc = 0x16023cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 1));
    // 0x160240: 0xa0510002  sb          $s1, 0x2($v0)
    ctx->pc = 0x160240u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 17));
    // 0x160244: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x160244u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x160248u;
}
