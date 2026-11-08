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

// Function: entry_00155590
// Address: 0x155590 - 0x1555b8
void entry_00155590_0x155590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155590_0x155590");
#endif

    ctx->pc = 0x155590u;

    // 0x155590: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155594: 0x54620014  bnel        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x155594u;
    {
        const bool branch_taken_0x155594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x155594) {
            ctx->pc = 0x155598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155594u;
            // 0x155598: 0x8e5308a0  lw          $s3, 0x8A0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1555E8u;
            return;
        }
    }
    ctx->pc = 0x15559Cu;
    // 0x15559c: 0x8e430898  lw          $v1, 0x898($s2)
    ctx->pc = 0x15559cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2200)));
    // 0x1555a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1555a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1555a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1555a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1555a8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1555A8u;
    {
        const bool branch_taken_0x1555a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1555ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1555A8u;
        // 0x1555ac: 0x8e4408a4  lw          $a0, 0x8A4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1555a8) {
            ctx->pc = 0x1555DCu;
            return;
        }
    }
    ctx->pc = 0x1555B0u;
    // 0x1555b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1555b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1555b4: 0x0  nop
    ctx->pc = 0x1555b4u;
    // NOP
    ctx->pc = 0x1555b8u;
}
