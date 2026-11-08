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

// Function: entry_001a2704
// Address: 0x1a2704 - 0x1a2728
void entry_001a2704_0x1a2704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2704_0x1a2704");
#endif

    switch (ctx->pc) {
        case 0x1a2720u: goto label_1a2720;
        default: break;
    }

    ctx->pc = 0x1a2704u;

label_1a2704:
    // 0x1a2704: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a2704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a2708:
    // 0x1a2708: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a2708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a270c:
    // 0x1a270c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a2710:
    if (ctx->pc == 0x1A2710u) {
        ctx->pc = 0x1A2710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A270Cu;
        // 0x1a2710: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2714u;
        goto label_1a2714;
    }
    ctx->pc = 0x1A270Cu;
    {
        const bool branch_taken_0x1a270c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A270Cu;
        // 0x1a2710: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a270c) {
            ctx->pc = 0x1A2728u;
            return;
        }
    }
    ctx->pc = 0x1A2714u;
label_1a2714:
    // 0x1a2714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a2718:
    // 0x1a2718: 0x40f809  jalr        $v0
label_1a271c:
    if (ctx->pc == 0x1A271Cu) {
        ctx->pc = 0x1A271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2718u;
        // 0x1a271c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2720u;
        goto label_1a2720;
    }
    ctx->pc = 0x1A2718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2720u);
        ctx->pc = 0x1A271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2718u;
        // 0x1a271c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2718u, 0x1A2720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2720u;
label_1a2720:
    // 0x1a2720: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a2724:
    if (ctx->pc == 0x1A2724u) {
        ctx->pc = 0x1A2724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2720u;
        // 0x1a2724: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2728u;
        goto label_fallthrough_0x1a2720;
    }
    ctx->pc = 0x1A2720u;
    {
        const bool branch_taken_0x1a2720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2720u;
        // 0x1a2724: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2720) {
            ctx->pc = 0x1A2758u;
            return;
        }
    }
label_fallthrough_0x1a2720:
    ctx->pc = 0x1A2728u;
}
