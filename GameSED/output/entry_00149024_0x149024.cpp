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

// Function: entry_00149024
// Address: 0x149024 - 0x14902c
void entry_00149024_0x149024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149024_0x149024");
#endif

    ctx->pc = 0x149024u;

    // 0x149024: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x149024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149028: 0x8c430250  lw          $v1, 0x250($v0)
    ctx->pc = 0x149028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    ctx->pc = 0x14902cu;
}
