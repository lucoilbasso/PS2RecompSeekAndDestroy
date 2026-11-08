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

// Function: entry_001d5968
// Address: 0x1d5968 - 0x1d5990
void entry_001d5968_0x1d5968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5968_0x1d5968");
#endif

    ctx->pc = 0x1d5968u;

label_1d5968:
    // 0x1d5968: 0x5a800009  blezl       $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D5968u;
    {
        const bool branch_taken_0x1d5968 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x1d5968) {
            ctx->pc = 0x1D596Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5968u;
            // 0x1d596c: 0xaf140010  sw          $s4, 0x10($t8) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5990u;
            return;
        }
    }
    ctx->pc = 0x1D5970u;
    // 0x1d5970: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x1d5970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x1d5974: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1d5974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d5978: 0x0  nop
    ctx->pc = 0x1d5978u;
    // NOP
    // 0x1d597c: 0x0  nop
    ctx->pc = 0x1d597cu;
    // NOP
    // 0x1d5980: 0x0  nop
    ctx->pc = 0x1d5980u;
    // NOP
    // 0x1d5984: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D5984u;
    {
        const bool branch_taken_0x1d5984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5984) {
            ctx->pc = 0x1D5988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5984u;
            // 0x1d5988: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5968;
        }
    }
    ctx->pc = 0x1D598Cu;
    // 0x1d598c: 0xaf140010  sw          $s4, 0x10($t8)
    ctx->pc = 0x1d598cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 20));
    ctx->pc = 0x1d5990u;
}
