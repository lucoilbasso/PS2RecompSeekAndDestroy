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

// Function: entry_00133658
// Address: 0x133658 - 0x133680
void entry_00133658_0x133658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133658_0x133658");
#endif

    ctx->pc = 0x133658u;

    // 0x133658: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x133658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13365c: 0x54400291  bnel        $v0, $zero, . + 4 + (0x291 << 2)
    ctx->pc = 0x13365Cu;
    {
        const bool branch_taken_0x13365c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13365c) {
            ctx->pc = 0x133660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13365Cu;
            // 0x133660: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A4u;
            return;
        }
    }
    ctx->pc = 0x133664u;
    // 0x133664: 0x314c3  sra         $v0, $v1, 19
    ctx->pc = 0x133664u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 19));
    // 0x133668: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x133668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13366c: 0x5040028e  beql        $v0, $zero, . + 4 + (0x28E << 2)
    ctx->pc = 0x13366Cu;
    {
        const bool branch_taken_0x13366c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13366c) {
            ctx->pc = 0x133670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13366Cu;
            // 0x133670: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            return;
        }
    }
    ctx->pc = 0x133674u;
    // 0x133674: 0x1000028b  b           . + 4 + (0x28B << 2)
    ctx->pc = 0x133674u;
    {
        const bool branch_taken_0x133674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133674u;
        // 0x133678: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133674) {
            ctx->pc = 0x1340A4u;
            return;
        }
    }
    ctx->pc = 0x13367Cu;
    // 0x13367c: 0x0  nop
    ctx->pc = 0x13367cu;
    // NOP
    ctx->pc = 0x133680u;
}
