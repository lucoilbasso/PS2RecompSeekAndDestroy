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

// Function: entry_0013070c
// Address: 0x13070c - 0x130728
void entry_0013070c_0x13070c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013070c_0x13070c");
#endif

    ctx->pc = 0x13070cu;

    // 0x13070c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x13070cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x130710: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130714: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x130714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x130718: 0xae240128  sw          $a0, 0x128($s1)
    ctx->pc = 0x130718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 4));
    // 0x13071c: 0x94650024  lhu         $a1, 0x24($v1)
    ctx->pc = 0x13071cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x130720: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x130720u;
    {
        const bool branch_taken_0x130720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130720u;
        // 0x130724: 0xa6250126  sh          $a1, 0x126($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 294), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130720) {
            ctx->pc = 0x1309FCu;
            return;
        }
    }
    ctx->pc = 0x130728u;
}
