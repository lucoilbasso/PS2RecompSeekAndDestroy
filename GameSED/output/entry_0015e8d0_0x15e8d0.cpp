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

// Function: entry_0015e8d0
// Address: 0x15e8d0 - 0x15e900
void entry_0015e8d0_0x15e8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e8d0_0x15e8d0");
#endif

    switch (ctx->pc) {
        case 0x15e8f4u: goto label_15e8f4;
        default: break;
    }

    ctx->pc = 0x15e8d0u;

label_15e8d0:
    // 0x15e8d0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15e8d4:
    // 0x15e8d4: 0x10c0005a  beqz        $a2, . + 4 + (0x5A << 2)
label_15e8d8:
    if (ctx->pc == 0x15E8D8u) {
        ctx->pc = 0x15E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8D4u;
        // 0x15e8d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E8DCu;
        goto label_15e8dc;
    }
    ctx->pc = 0x15E8D4u;
    {
        const bool branch_taken_0x15e8d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8D4u;
        // 0x15e8d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e8d4) {
            ctx->pc = 0x15EA40u;
            return;
        }
    }
    ctx->pc = 0x15E8DCu;
label_15e8dc:
    // 0x15e8dc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e8e0:
    // 0x15e8e0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e8e4:
    // 0x15e8e4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e8e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e8e8:
    // 0x15e8e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e8ec:
    // 0x15e8ec: 0x60f809  jalr        $v1
label_15e8f0:
    if (ctx->pc == 0x15E8F0u) {
        ctx->pc = 0x15E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8ECu;
        // 0x15e8f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E8F4u;
        goto label_15e8f4;
    }
    ctx->pc = 0x15E8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E8F4u);
        ctx->pc = 0x15E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8ECu;
        // 0x15e8f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E8ECu, 0x15E8F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E8F4u;
label_15e8f4:
    // 0x15e8f4: 0x10000053  b           . + 4 + (0x53 << 2)
label_15e8f8:
    if (ctx->pc == 0x15E8F8u) {
        ctx->pc = 0x15E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8F4u;
        // 0x15e8f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E8FCu;
        goto label_15e8fc;
    }
    ctx->pc = 0x15E8F4u;
    {
        const bool branch_taken_0x15e8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8F4u;
        // 0x15e8f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e8f4) {
            ctx->pc = 0x15EA44u;
            return;
        }
    }
    ctx->pc = 0x15E8FCu;
label_15e8fc:
    // 0x15e8fc: 0x0  nop
    ctx->pc = 0x15e8fcu;
    // NOP
    ctx->pc = 0x15e900u;
}
