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

// Function: entry_001857b8
// Address: 0x1857b8 - 0x1857d8
void entry_001857b8_0x1857b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001857b8_0x1857b8");
#endif

    switch (ctx->pc) {
        case 0x1857c4u: goto label_1857c4;
        default: break;
    }

    ctx->pc = 0x1857b8u;

label_1857b8:
    // 0x1857b8: 0x8c90001c  lw          $s0, 0x1C($a0)
    ctx->pc = 0x1857b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1857bc: 0xc061906  jal         func_186418
    ctx->pc = 0x1857BCu;
    SET_GPR_U32(ctx, 31, 0x1857C4u);
    ctx->pc = 0x1857C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1857BCu;
    // 0x1857c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186418u, 0x1857BCu, 0x1857C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1857C4u;
label_1857c4:
    // 0x1857c4: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1857C4u;
    {
        const bool branch_taken_0x1857c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1857C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1857C4u;
        // 0x1857c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1857c4) {
            ctx->pc = 0x1857B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1857b8;
        }
    }
    ctx->pc = 0x1857CCu;
    // 0x1857cc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1857CCu;
    {
        const bool branch_taken_0x1857cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1857D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1857CCu;
        // 0x1857d0: 0x96620002  lhu         $v0, 0x2($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1857cc) {
            ctx->pc = 0x185828u;
            return;
        }
    }
    ctx->pc = 0x1857D4u;
    // 0x1857d4: 0x0  nop
    ctx->pc = 0x1857d4u;
    // NOP
    ctx->pc = 0x1857d8u;
}
