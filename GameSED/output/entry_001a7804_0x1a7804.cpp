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

// Function: entry_001a7804
// Address: 0x1a7804 - 0x1a7840
void entry_001a7804_0x1a7804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7804_0x1a7804");
#endif

    ctx->pc = 0x1a7804u;

    // 0x1a7804: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a7804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7808: 0x602003b  bltzl       $s0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1A7808u;
    {
        const bool branch_taken_0x1a7808 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1a7808) {
            ctx->pc = 0x1A780Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7808u;
            // 0x1a780c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A78F8u;
            return;
        }
    }
    ctx->pc = 0x1A7810u;
    // 0x1a7810: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1a7810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1a7814: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a7814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a7818: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a7818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a781c: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x1A781Cu;
    {
        const bool branch_taken_0x1a781c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a781c) {
            ctx->pc = 0x1A7820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A781Cu;
            // 0x1a7820: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A78F8u;
            return;
        }
    }
    ctx->pc = 0x1A7824u;
    // 0x1a7824: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A7824u;
    {
        const bool branch_taken_0x1a7824 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7824u;
        // 0x1a7828: 0x2644001c  addiu       $a0, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7824) {
            ctx->pc = 0x1A7870u;
            return;
        }
    }
    ctx->pc = 0x1A782Cu;
    // 0x1a782c: 0x3c137ffe  lui         $s3, 0x7FFE
    ctx->pc = 0x1a782cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32766 << 16));
    // 0x1a7830: 0x2651001c  addiu       $s1, $s2, 0x1C
    ctx->pc = 0x1a7830u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1a7834: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x1a7834u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x1a7838: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a7838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a783c: 0x0  nop
    ctx->pc = 0x1a783cu;
    // NOP
    ctx->pc = 0x1a7840u;
}
