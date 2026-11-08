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

// Function: entry_0014cb48
// Address: 0x14cb48 - 0x14cb6c
void entry_0014cb48_0x14cb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cb48_0x14cb48");
#endif

    ctx->pc = 0x14cb48u;

label_14cb48:
    // 0x14cb48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14cb4c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14CB4Cu;
    {
        const bool branch_taken_0x14cb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB4Cu;
        // 0x14cb50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cb4c) {
            ctx->pc = 0x14CB98u;
            return;
        }
    }
    ctx->pc = 0x14CB54u;
    // 0x14cb54: 0x0  nop
    ctx->pc = 0x14cb54u;
    // NOP
    // 0x14cb58: 0x0  nop
    ctx->pc = 0x14cb58u;
    // NOP
    // 0x14cb5c: 0x0  nop
    ctx->pc = 0x14cb5cu;
    // NOP
    // 0x14cb60: 0x0  nop
    ctx->pc = 0x14cb60u;
    // NOP
    // 0x14cb64: 0x5444fff8  bnel        $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14CB64u;
    {
        const bool branch_taken_0x14cb64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x14cb64) {
            ctx->pc = 0x14CB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CB64u;
            // 0x14cb68: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14cb48;
        }
    }
    ctx->pc = 0x14CB6Cu;
}
