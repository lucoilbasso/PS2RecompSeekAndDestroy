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

// Function: entry_0014b6a8
// Address: 0x14b6a8 - 0x14b6f0
void entry_0014b6a8_0x14b6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b6a8_0x14b6a8");
#endif

    ctx->pc = 0x14b6a8u;

label_14b6a8:
    // 0x14b6a8: 0x10800025  beqz        $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x14B6A8u;
    {
        const bool branch_taken_0x14b6a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B6A8u;
        // 0x14b6ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b6a8) {
            ctx->pc = 0x14B740u;
            return;
        }
    }
    ctx->pc = 0x14B6B0u;
    // 0x14b6b0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14b6b4: 0x0  nop
    ctx->pc = 0x14b6b4u;
    // NOP
    // 0x14b6b8: 0x0  nop
    ctx->pc = 0x14b6b8u;
    // NOP
    // 0x14b6bc: 0x0  nop
    ctx->pc = 0x14b6bcu;
    // NOP
    // 0x14b6c0: 0x0  nop
    ctx->pc = 0x14b6c0u;
    // NOP
    // 0x14b6c4: 0x5443fff8  bnel        $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14B6C4u;
    {
        const bool branch_taken_0x14b6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14b6c4) {
            ctx->pc = 0x14B6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B6C4u;
            // 0x14b6c8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b6a8;
        }
    }
    ctx->pc = 0x14B6CCu;
    // 0x14b6cc: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x14B6CCu;
    {
        const bool branch_taken_0x14b6cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B6CCu;
        // 0x14b6d0: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b6cc) {
            ctx->pc = 0x14B744u;
            return;
        }
    }
    ctx->pc = 0x14B6D4u;
    // 0x14b6d4: 0x8ca201bc  lw          $v0, 0x1BC($a1)
    ctx->pc = 0x14b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 444)));
    // 0x14b6d8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x14B6D8u;
    {
        const bool branch_taken_0x14b6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B6D8u;
        // 0x14b6dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b6d8) {
            ctx->pc = 0x14B744u;
            return;
        }
    }
    ctx->pc = 0x14B6E0u;
    // 0x14b6e0: 0x1044000c  beq         $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x14B6E0u;
    {
        const bool branch_taken_0x14b6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x14b6e0) {
            ctx->pc = 0x14B714u;
            return;
        }
    }
    ctx->pc = 0x14B6E8u;
    // 0x14b6e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14b6e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b6ec: 0x0  nop
    ctx->pc = 0x14b6ecu;
    // NOP
    ctx->pc = 0x14b6f0u;
}
