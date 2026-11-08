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

// Function: caseD_a
// Address: 0x133518 - 0x133540
void caseD_a_0x133518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x133518");
#endif

    ctx->pc = 0x133518u;

    // 0x133518: 0x8e640230  lw          $a0, 0x230($s3)
    ctx->pc = 0x133518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
    // 0x13351c: 0x188002e1  blez        $a0, . + 4 + (0x2E1 << 2)
    ctx->pc = 0x13351Cu;
    {
        const bool branch_taken_0x13351c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x133520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13351Cu;
        // 0x133520: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13351c) {
            ctx->pc = 0x1340A4u;
            return;
        }
    }
    ctx->pc = 0x133524u;
    // 0x133524: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x133524u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x133528: 0x24022118  addiu       $v0, $zero, 0x2118
    ctx->pc = 0x133528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x13352c: 0x546202de  bnel        $v1, $v0, . + 4 + (0x2DE << 2)
    ctx->pc = 0x13352Cu;
    {
        const bool branch_taken_0x13352c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13352c) {
            ctx->pc = 0x133530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13352Cu;
            // 0x133530: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            return;
        }
    }
    ctx->pc = 0x133534u;
    // 0x133534: 0x100002db  b           . + 4 + (0x2DB << 2)
    ctx->pc = 0x133534u;
    {
        const bool branch_taken_0x133534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133534u;
        // 0x133538: 0x84900264  lh          $s0, 0x264($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133534) {
            ctx->pc = 0x1340A4u;
            return;
        }
    }
    ctx->pc = 0x13353Cu;
    // 0x13353c: 0x0  nop
    ctx->pc = 0x13353cu;
    // NOP
    ctx->pc = 0x133540u;
}
