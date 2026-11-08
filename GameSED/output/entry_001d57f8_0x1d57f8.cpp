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

// Function: entry_001d57f8
// Address: 0x1d57f8 - 0x1d5830
void entry_001d57f8_0x1d57f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d57f8_0x1d57f8");
#endif

    switch (ctx->pc) {
        case 0x1d580cu: goto label_1d580c;
        default: break;
    }

    ctx->pc = 0x1d57f8u;

    // 0x1d57f8: 0x271a021  addu        $s4, $s3, $s1
    ctx->pc = 0x1d57f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1d57fc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d57fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d5800: 0xb4282a  slt         $a1, $a1, $s4
    ctx->pc = 0x1d5800u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1d5804: 0xc0754c8  jal         func_1D5320
    ctx->pc = 0x1D5804u;
    SET_GPR_U32(ctx, 31, 0x1D580Cu);
    ctx->pc = 0x1D5808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5804u;
    // 0x1d5808: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5320u, 0x1D5804u, 0x1D580Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D580Cu;
label_1d580c:
    // 0x1d580c: 0x14c880  sll         $t9, $s4, 2
    ctx->pc = 0x1d580cu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1d5810: 0x40c02d  daddu       $t8, $v0, $zero
    ctx->pc = 0x1d5810u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5814: 0x270f0014  addiu       $t7, $t8, 0x14
    ctx->pc = 0x1d5814u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 24), 20));
    // 0x1d5818: 0x1f96821  addu        $t5, $t7, $t9
    ctx->pc = 0x1d5818u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
    // 0x1d581c: 0x1ed102b  sltu        $v0, $t7, $t5
    ctx->pc = 0x1d581cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1d5820: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D5820u;
    {
        const bool branch_taken_0x1d5820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5820u;
        // 0x1d5824: 0x1e0402d  daddu       $t0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5820) {
            ctx->pc = 0x1D584Cu;
            return;
        }
    }
    ctx->pc = 0x1D5828u;
    // 0x1d5828: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1d5828u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1d582c: 0x0  nop
    ctx->pc = 0x1d582cu;
    // NOP
    ctx->pc = 0x1d5830u;
}
