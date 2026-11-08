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

// Function: entry_001884f0
// Address: 0x1884f0 - 0x18852c
void entry_001884f0_0x1884f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001884f0_0x1884f0");
#endif

    switch (ctx->pc) {
        case 0x1884f8u: goto label_1884f8;
        case 0x188514u: goto label_188514;
        case 0x188520u: goto label_188520;
        default: break;
    }

    ctx->pc = 0x1884f0u;

label_1884f0:
    // 0x1884f0: 0xc04f9e0  jal         func_13E780
label_1884f4:
    if (ctx->pc == 0x1884F4u) {
        ctx->pc = 0x1884F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884F0u;
        // 0x1884f4: 0x8e300130  lw          $s0, 0x130($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1884F8u;
        goto label_1884f8;
    }
    ctx->pc = 0x1884F0u;
    SET_GPR_U32(ctx, 31, 0x1884F8u);
    ctx->pc = 0x1884F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1884F0u;
    // 0x1884f4: 0x8e300130  lw          $s0, 0x130($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E780u, 0x1884F0u, 0x1884F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1884F8u;
label_1884f8:
    // 0x1884f8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1884f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1884fc:
    // 0x1884fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1884fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_188500:
    // 0x188500: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x188500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_188504:
    // 0x188504: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x188504u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_188508:
    // 0x188508: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x188508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_18850c:
    // 0x18850c: 0x60f809  jalr        $v1
label_188510:
    if (ctx->pc == 0x188510u) {
        ctx->pc = 0x188510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18850Cu;
        // 0x188510: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188514u;
        goto label_188514;
    }
    ctx->pc = 0x18850Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x188514u);
        ctx->pc = 0x188510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18850Cu;
        // 0x188510: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18850Cu, 0x188514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x188514u;
label_188514:
    // 0x188514: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x188514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_188518:
    // 0x188518: 0xc04f9e2  jal         func_13E788
label_18851c:
    if (ctx->pc == 0x18851Cu) {
        ctx->pc = 0x18851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188518u;
        // 0x18851c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188520u;
        goto label_188520;
    }
    ctx->pc = 0x188518u;
    SET_GPR_U32(ctx, 31, 0x188520u);
    ctx->pc = 0x18851Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188518u;
    // 0x18851c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E788u, 0x188518u, 0x188520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188520u;
label_188520:
    // 0x188520: 0x1620fff3  bnez        $s1, . + 4 + (-0xD << 2)
label_188524:
    if (ctx->pc == 0x188524u) {
        ctx->pc = 0x188528u;
        goto label_188528;
    }
    ctx->pc = 0x188520u;
    {
        const bool branch_taken_0x188520 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x188520) {
            ctx->pc = 0x1884F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1884f0;
        }
    }
    ctx->pc = 0x188528u;
label_188528:
    // 0x188528: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x188528u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->pc = 0x18852cu;
}
