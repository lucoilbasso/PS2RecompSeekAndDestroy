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

// Function: entry_0016a754
// Address: 0x16a754 - 0x16a798
void entry_0016a754_0x16a754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a754_0x16a754");
#endif

    switch (ctx->pc) {
        case 0x16a780u: goto label_16a780;
        case 0x16a790u: goto label_16a790;
        default: break;
    }

    ctx->pc = 0x16a754u;

label_16a754:
    // 0x16a754: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16a754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16a758:
    // 0x16a758: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_16a75c:
    if (ctx->pc == 0x16A75Cu) {
        ctx->pc = 0x16A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A758u;
        // 0x16a75c: 0x8e250c10  lw          $a1, 0xC10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3088)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A760u;
        goto label_16a760;
    }
    ctx->pc = 0x16A758u;
    {
        const bool branch_taken_0x16a758 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a758) {
            ctx->pc = 0x16A75Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A758u;
            // 0x16a75c: 0x8e250c10  lw          $a1, 0xC10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A798u;
            return;
        }
    }
    ctx->pc = 0x16A760u;
label_16a760:
    // 0x16a760: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x16a760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16a764:
    // 0x16a764: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a768:
    // 0x16a768: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16a768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_16a76c:
    // 0x16a76c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x16a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_16a770:
    // 0x16a770: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16a770u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16a774:
    // 0x16a774: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16a774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16a778:
    // 0x16a778: 0x60f809  jalr        $v1
label_16a77c:
    if (ctx->pc == 0x16A77Cu) {
        ctx->pc = 0x16A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A778u;
        // 0x16a77c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A780u;
        goto label_16a780;
    }
    ctx->pc = 0x16A778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16A780u);
        ctx->pc = 0x16A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A778u;
        // 0x16a77c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A778u, 0x16A780u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A780u;
label_16a780:
    // 0x16a780: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16a784:
    // 0x16a784: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16a784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a788:
    // 0x16a788: 0xc05a900  jal         func_16A400
label_16a78c:
    if (ctx->pc == 0x16A78Cu) {
        ctx->pc = 0x16A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A788u;
        // 0x16a78c: 0x24060017  addiu       $a2, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A790u;
        goto label_16a790;
    }
    ctx->pc = 0x16A788u;
    SET_GPR_U32(ctx, 31, 0x16A790u);
    ctx->pc = 0x16A78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A788u;
    // 0x16a78c: 0x24060017  addiu       $a2, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A400u, 0x16A788u, 0x16A790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A790u;
label_16a790:
    // 0x16a790: 0x10000023  b           . + 4 + (0x23 << 2)
label_16a794:
    if (ctx->pc == 0x16A794u) {
        ctx->pc = 0x16A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A790u;
        // 0x16a794: 0x8e240ca4  lw          $a0, 0xCA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A798u;
        goto label_fallthrough_0x16a790;
    }
    ctx->pc = 0x16A790u;
    {
        const bool branch_taken_0x16a790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A790u;
        // 0x16a794: 0x8e240ca4  lw          $a0, 0xCA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a790) {
            ctx->pc = 0x16A820u;
            return;
        }
    }
label_fallthrough_0x16a790:
    ctx->pc = 0x16A798u;
}
