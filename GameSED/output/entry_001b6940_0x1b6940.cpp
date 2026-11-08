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

// Function: entry_001b6940
// Address: 0x1b6940 - 0x1b6960
void entry_001b6940_0x1b6940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6940_0x1b6940");
#endif

    ctx->pc = 0x1b6940u;

label_1b6940:
    // 0x1b6940: 0x2543b640  addiu       $v1, $t2, -0x49C0
    ctx->pc = 0x1b6940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294948416));
    // 0x1b6944: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b6944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1b6948: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1b6948u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1b694c: 0xa0640018  sb          $a0, 0x18($v1)
    ctx->pc = 0x1b694cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b6950: 0x2291021  addu        $v0, $s1, $t1
    ctx->pc = 0x1b6950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x1b6954: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1b6954u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b6958: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B6958u;
    {
        const bool branch_taken_0x1b6958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6958) {
            ctx->pc = 0x1B695Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6958u;
            // 0x1b695c: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6940;
        }
    }
    ctx->pc = 0x1B6960u;
}
