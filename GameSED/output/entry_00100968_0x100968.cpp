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

// Function: entry_00100968
// Address: 0x100968 - 0x100978
void entry_00100968_0x100968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100968_0x100968");
#endif

    ctx->pc = 0x100968u;

    // 0x100968: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x100968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x10096c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x10096cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x100970: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x100970u;
    {
        const bool branch_taken_0x100970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100970u;
        // 0x100974: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100970) {
            ctx->pc = 0x100930u;
            return;
        }
    }
    ctx->pc = 0x100978u;
}
