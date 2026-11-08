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

// Function: entry_00185968
// Address: 0x185968 - 0x18598c
void entry_00185968_0x185968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185968_0x185968");
#endif

    ctx->pc = 0x185968u;

label_185968:
    // 0x185968: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x185968u;
    {
        const bool branch_taken_0x185968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x18596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185968u;
        // 0x18596c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185968) {
            ctx->pc = 0x185990u;
            return;
        }
    }
    ctx->pc = 0x185970u;
    // 0x185970: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x185970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x185974: 0x0  nop
    ctx->pc = 0x185974u;
    // NOP
    // 0x185978: 0x0  nop
    ctx->pc = 0x185978u;
    // NOP
    // 0x18597c: 0x0  nop
    ctx->pc = 0x18597cu;
    // NOP
    // 0x185980: 0x0  nop
    ctx->pc = 0x185980u;
    // NOP
    // 0x185984: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x185984u;
    {
        const bool branch_taken_0x185984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x185984) {
            ctx->pc = 0x185988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185984u;
            // 0x185988: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185968;
        }
    }
    ctx->pc = 0x18598Cu;
}
