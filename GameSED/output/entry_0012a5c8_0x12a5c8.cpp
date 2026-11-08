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

// Function: entry_0012a5c8
// Address: 0x12a5c8 - 0x12a5fc
void entry_0012a5c8_0x12a5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a5c8_0x12a5c8");
#endif

    ctx->pc = 0x12a5c8u;

    // 0x12a5c8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x12A5C8u;
    {
        const bool branch_taken_0x12a5c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A5C8u;
        // 0x12a5cc: 0x8f8289f8  lw          $v0, -0x7608($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a5c8) {
            ctx->pc = 0x12A5FCu;
            return;
        }
    }
    ctx->pc = 0x12A5D0u;
    // 0x12a5d0: 0x2c420015  sltiu       $v0, $v0, 0x15
    ctx->pc = 0x12a5d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x12a5d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12A5D4u;
    {
        const bool branch_taken_0x12a5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A5D4u;
        // 0x12a5d8: 0x8f8289f8  lw          $v0, -0x7608($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a5d4) {
            ctx->pc = 0x12A600u;
            return;
        }
    }
    ctx->pc = 0x12A5DCu;
    // 0x12a5dc: 0x8c830114  lw          $v1, 0x114($a0)
    ctx->pc = 0x12a5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x12a5e0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x12a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12a5e4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A5E4u;
    {
        const bool branch_taken_0x12a5e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A5E4u;
        // 0x12a5e8: 0x8f8289f8  lw          $v0, -0x7608($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a5e4) {
            ctx->pc = 0x12A600u;
            return;
        }
    }
    ctx->pc = 0x12A5ECu;
    // 0x12a5ec: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x12a5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x12a5f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12a5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a5f4: 0x10620044  beq         $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x12A5F4u;
    {
        const bool branch_taken_0x12a5f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12A5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A5F4u;
        // 0x12a5f8: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a5f4) {
            ctx->pc = 0x12A708u;
            return;
        }
    }
    ctx->pc = 0x12A5FCu;
}
