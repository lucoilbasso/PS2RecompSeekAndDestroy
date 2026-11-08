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

// Function: entry_001ceba0
// Address: 0x1ceba0 - 0x1cebcc
void entry_001ceba0_0x1ceba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ceba0_0x1ceba0");
#endif

    ctx->pc = 0x1ceba0u;

    // 0x1ceba0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CEBA0u;
    {
        const bool branch_taken_0x1ceba0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEBA0u;
        // 0x1ceba4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceba0) {
            ctx->pc = 0x1CEBCCu;
            return;
        }
    }
    ctx->pc = 0x1CEBA8u;
    // 0x1ceba8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ceba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cebac: 0x27c51ea0  addiu       $a1, $fp, 0x1EA0
    ctx->pc = 0x1cebacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 7840));
    // 0x1cebb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cebb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cebb4: 0x26a81780  addiu       $t0, $s5, 0x1780
    ctx->pc = 0x1cebb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 6016));
    // 0x1cebb8: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1cebb8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cebbc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1cebbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cebc0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1cebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cebc4: 0xc073bbe  jal         func_1CEEF8
    ctx->pc = 0x1CEBC4u;
    SET_GPR_U32(ctx, 31, 0x1CEBCCu);
    ctx->pc = 0x1CEBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEBC4u;
    // 0x1cebc8: 0x2073821  addu        $a3, $s0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEEF8u, 0x1CEBC4u, 0x1CEBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEBCCu;
}
