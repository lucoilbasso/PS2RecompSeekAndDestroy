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

// Function: entry_0015e5f0
// Address: 0x15e5f0 - 0x15e620
void entry_0015e5f0_0x15e5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e5f0_0x15e5f0");
#endif

    switch (ctx->pc) {
        case 0x15e614u: goto label_15e614;
        default: break;
    }

    ctx->pc = 0x15e5f0u;

label_15e5f0:
    // 0x15e5f0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15e5f4:
    // 0x15e5f4: 0x10c0005a  beqz        $a2, . + 4 + (0x5A << 2)
label_15e5f8:
    if (ctx->pc == 0x15E5F8u) {
        ctx->pc = 0x15E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5F4u;
        // 0x15e5f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E5FCu;
        goto label_15e5fc;
    }
    ctx->pc = 0x15E5F4u;
    {
        const bool branch_taken_0x15e5f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5F4u;
        // 0x15e5f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e5f4) {
            ctx->pc = 0x15E760u;
            return;
        }
    }
    ctx->pc = 0x15E5FCu;
label_15e5fc:
    // 0x15e5fc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e600:
    // 0x15e600: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e604:
    // 0x15e604: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e604u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e608:
    // 0x15e608: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e60c:
    // 0x15e60c: 0x60f809  jalr        $v1
label_15e610:
    if (ctx->pc == 0x15E610u) {
        ctx->pc = 0x15E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E60Cu;
        // 0x15e610: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E614u;
        goto label_15e614;
    }
    ctx->pc = 0x15E60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E614u);
        ctx->pc = 0x15E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E60Cu;
        // 0x15e610: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E60Cu, 0x15E614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E614u;
label_15e614:
    // 0x15e614: 0x10000053  b           . + 4 + (0x53 << 2)
label_15e618:
    if (ctx->pc == 0x15E618u) {
        ctx->pc = 0x15E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E614u;
        // 0x15e618: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E61Cu;
        goto label_15e61c;
    }
    ctx->pc = 0x15E614u;
    {
        const bool branch_taken_0x15e614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E614u;
        // 0x15e618: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e614) {
            ctx->pc = 0x15E764u;
            return;
        }
    }
    ctx->pc = 0x15E61Cu;
label_15e61c:
    // 0x15e61c: 0x0  nop
    ctx->pc = 0x15e61cu;
    // NOP
    ctx->pc = 0x15e620u;
}
