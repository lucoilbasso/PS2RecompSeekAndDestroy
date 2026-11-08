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

// Function: entry_001cc808
// Address: 0x1cc808 - 0x1cc844
void entry_001cc808_0x1cc808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc808_0x1cc808");
#endif

    switch (ctx->pc) {
        case 0x1cc83cu: goto label_1cc83c;
        default: break;
    }

    ctx->pc = 0x1cc808u;

label_1cc808:
    // 0x1cc808: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1cc808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1cc80c:
    // 0x1cc80c: 0x1282000d  beq         $s4, $v0, . + 4 + (0xD << 2)
label_1cc810:
    if (ctx->pc == 0x1CC810u) {
        ctx->pc = 0x1CC810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC80Cu;
        // 0x1cc810: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC814u;
        goto label_1cc814;
    }
    ctx->pc = 0x1CC80Cu;
    {
        const bool branch_taken_0x1cc80c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CC810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC80Cu;
        // 0x1cc810: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc80c) {
            ctx->pc = 0x1CC844u;
            return;
        }
    }
    ctx->pc = 0x1CC814u;
label_1cc814:
    // 0x1cc814: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x1cc814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_1cc818:
    // 0x1cc818: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1cc818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1cc81c:
    // 0x1cc81c: 0x7fad0020  sq          $t5, 0x20($sp)
    ctx->pc = 0x1cc81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 13));
label_1cc820:
    // 0x1cc820: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1cc820u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1cc824:
    // 0x1cc824: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1cc824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1cc828:
    // 0x1cc828: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x1cc828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1cc82c:
    // 0x1cc82c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1cc82cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1cc830:
    // 0x1cc830: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cc830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cc834:
    // 0x1cc834: 0x40f809  jalr        $v0
label_1cc838:
    if (ctx->pc == 0x1CC838u) {
        ctx->pc = 0x1CC838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC834u;
        // 0x1cc838: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC83Cu;
        goto label_1cc83c;
    }
    ctx->pc = 0x1CC834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CC83Cu);
        ctx->pc = 0x1CC838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC834u;
        // 0x1cc838: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC834u, 0x1CC83Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CC83Cu;
label_1cc83c:
    // 0x1cc83c: 0x7bad0020  lq          $t5, 0x20($sp)
    ctx->pc = 0x1cc83cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc840:
    // 0x1cc840: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cc840u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cc844u;
}
