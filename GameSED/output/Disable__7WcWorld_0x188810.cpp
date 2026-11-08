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

// Function: Disable__7WcWorld
// Address: 0x188810 - 0x188860
void Disable__7WcWorld_0x188810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Disable__7WcWorld_0x188810");
#endif

    switch (ctx->pc) {
        case 0x188844u: goto label_188844;
        default: break;
    }

    ctx->pc = 0x188810u;

    // 0x188810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x188810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x188814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x188814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x188818: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x188818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18881c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18881cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x188820: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x188820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x188824: 0x8e02015c  lw          $v0, 0x15C($s0)
    ctx->pc = 0x188824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x188828: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x188828u;
    {
        const bool branch_taken_0x188828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188828u;
        // 0x18882c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188828) {
            ctx->pc = 0x18884Cu;
            goto label_18884c;
        }
    }
    ctx->pc = 0x188830u;
    // 0x188830: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x188830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x188834: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x188834u;
    {
        const bool branch_taken_0x188834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188834u;
        // 0x188838: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188834) {
            ctx->pc = 0x188848u;
            goto label_188848;
        }
    }
    ctx->pc = 0x18883Cu;
    // 0x18883c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x18883Cu;
    SET_GPR_U32(ctx, 31, 0x188844u);
    ctx->pc = 0x188840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18883Cu;
    // 0x188840: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x18883Cu, 0x188844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188844u;
label_188844:
    // 0x188844: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x188844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
label_188848:
    // 0x188848: 0xae20015c  sw          $zero, 0x15C($s1)
    ctx->pc = 0x188848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 0));
label_18884c:
    // 0x18884c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18884cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188850: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x188850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x188854: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x188854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188858: 0x3e00008  jr          $ra
    ctx->pc = 0x188858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188858u;
        // 0x18885c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188860u;
}
