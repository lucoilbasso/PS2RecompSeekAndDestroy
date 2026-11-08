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

// Function: entry_0013c454
// Address: 0x13c454 - 0x13c464
void entry_0013c454_0x13c454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c454_0x13c454");
#endif

    ctx->pc = 0x13c454u;

    // 0x13c454: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13c454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13c458: 0xd3102a  slt         $v0, $a2, $s3
    ctx->pc = 0x13c458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x13c45c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x13C45Cu;
    {
        const bool branch_taken_0x13c45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c45c) {
            ctx->pc = 0x13C460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C45Cu;
            // 0x13c460: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C438u;
            return;
        }
    }
    ctx->pc = 0x13C464u;
}
