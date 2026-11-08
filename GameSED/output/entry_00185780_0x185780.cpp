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

// Function: entry_00185780
// Address: 0x185780 - 0x1857b8
void entry_00185780_0x185780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185780_0x185780");
#endif

    switch (ctx->pc) {
        case 0x1857a8u: goto label_1857a8;
        default: break;
    }

    ctx->pc = 0x185780u;

label_185780:
    // 0x185780: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x185780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_185784:
    // 0x185784: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_185788:
    if (ctx->pc == 0x185788u) {
        ctx->pc = 0x185788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185784u;
        // 0x185788: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18578Cu;
        goto label_18578c;
    }
    ctx->pc = 0x185784u;
    {
        const bool branch_taken_0x185784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x185788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185784u;
        // 0x185788: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185784) {
            ctx->pc = 0x1857D8u;
            return;
        }
    }
    ctx->pc = 0x18578Cu;
label_18578c:
    // 0x18578c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x18578cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_185790:
    // 0x185790: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x185790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_185794:
    // 0x185794: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x185794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_185798:
    // 0x185798: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x185798u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_18579c:
    // 0x18579c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x18579cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1857a0:
    // 0x1857a0: 0x60f809  jalr        $v1
label_1857a4:
    if (ctx->pc == 0x1857A4u) {
        ctx->pc = 0x1857A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1857A0u;
        // 0x1857a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1857A8u;
        goto label_1857a8;
    }
    ctx->pc = 0x1857A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1857A8u);
        ctx->pc = 0x1857A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1857A0u;
        // 0x1857a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1857A0u, 0x1857A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1857A8u;
label_1857a8:
    // 0x1857a8: 0x8e500018  lw          $s0, 0x18($s2)
    ctx->pc = 0x1857a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_1857ac:
    // 0x1857ac: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
label_1857b0:
    if (ctx->pc == 0x1857B0u) {
        ctx->pc = 0x1857B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1857ACu;
        // 0x1857b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1857B4u;
        goto label_1857b4;
    }
    ctx->pc = 0x1857ACu;
    {
        const bool branch_taken_0x1857ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1857B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1857ACu;
        // 0x1857b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1857ac) {
            ctx->pc = 0x185824u;
            return;
        }
    }
    ctx->pc = 0x1857B4u;
label_1857b4:
    // 0x1857b4: 0x0  nop
    ctx->pc = 0x1857b4u;
    // NOP
    ctx->pc = 0x1857b8u;
}
