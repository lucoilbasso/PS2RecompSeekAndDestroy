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

// Function: entry_001d7058
// Address: 0x1d7058 - 0x1d7080
void entry_001d7058_0x1d7058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7058_0x1d7058");
#endif

    ctx->pc = 0x1d7058u;

    // 0x1d7058: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x1d7058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1d705c: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x1d705cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1d7060: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d7060u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d7064: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1d7064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d7068: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1d7068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d706c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1d706cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7070: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7070u;
    {
        const bool branch_taken_0x1d7070 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7070u;
        // 0x1d7074: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7070) {
            ctx->pc = 0x1D7080u;
            return;
        }
    }
    ctx->pc = 0x1D7078u;
    // 0x1d7078: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1D7078u;
    SET_GPR_U32(ctx, 31, 0x1D7080u);
    ctx->pc = 0x1D707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7078u;
    // 0x1d707c: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D7078u, 0x1D7080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7080u;
}
