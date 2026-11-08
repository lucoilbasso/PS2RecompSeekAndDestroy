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

// Function: entry_001a3864
// Address: 0x1a3864 - 0x1a38b0
void entry_001a3864_0x1a3864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3864_0x1a3864");
#endif

    switch (ctx->pc) {
        case 0x1a3880u: goto label_1a3880;
        case 0x1a38a4u: goto label_1a38a4;
        default: break;
    }

    ctx->pc = 0x1a3864u;

label_1a3864:
    // 0x1a3864: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a3864u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3868:
    // 0x1a3868: 0x4c20027  bltzl       $a2, . + 4 + (0x27 << 2)
label_1a386c:
    if (ctx->pc == 0x1A386Cu) {
        ctx->pc = 0x1A386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3868u;
        // 0x1a386c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3870u;
        goto label_1a3870;
    }
    ctx->pc = 0x1A3868u;
    {
        const bool branch_taken_0x1a3868 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1a3868) {
            ctx->pc = 0x1A386Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3868u;
            // 0x1a386c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3908u;
            return;
        }
    }
    ctx->pc = 0x1A3870u;
label_1a3870:
    // 0x1a3870: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_1a3874:
    if (ctx->pc == 0x1A3874u) {
        ctx->pc = 0x1A3878u;
        goto label_1a3878;
    }
    ctx->pc = 0x1A3870u;
    {
        const bool branch_taken_0x1a3870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3870) {
            ctx->pc = 0x1A38F8u;
            return;
        }
    }
    ctx->pc = 0x1A3878u;
label_1a3878:
    // 0x1a3878: 0xc06a848  jal         func_1AA120
label_1a387c:
    if (ctx->pc == 0x1A387Cu) {
        ctx->pc = 0x1A387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3878u;
        // 0x1a387c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3880u;
        goto label_1a3880;
    }
    ctx->pc = 0x1A3878u;
    SET_GPR_U32(ctx, 31, 0x1A3880u);
    ctx->pc = 0x1A387Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3878u;
    // 0x1a387c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA120u, 0x1A3878u, 0x1A3880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3880u;
label_1a3880:
    // 0x1a3880: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a3880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1a3884:
    // 0x1a3884: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1a3888:
    if (ctx->pc == 0x1A3888u) {
        ctx->pc = 0x1A388Cu;
        goto label_1a388c;
    }
    ctx->pc = 0x1A3884u;
    {
        const bool branch_taken_0x1a3884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3884) {
            ctx->pc = 0x1A3900u;
            return;
        }
    }
    ctx->pc = 0x1A388Cu;
label_1a388c:
    // 0x1a388c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a388cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a3890:
    // 0x1a3890: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a3894:
    if (ctx->pc == 0x1A3894u) {
        ctx->pc = 0x1A3894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3890u;
        // 0x1a3894: 0xc62c005c  lwc1        $f12, 0x5C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3898u;
        goto label_1a3898;
    }
    ctx->pc = 0x1A3890u;
    {
        const bool branch_taken_0x1a3890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3890u;
        // 0x1a3894: 0xc62c005c  lwc1        $f12, 0x5C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3890) {
            ctx->pc = 0x1A38B0u;
            return;
        }
    }
    ctx->pc = 0x1A3898u;
label_1a3898:
    // 0x1a3898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a389c:
    // 0x1a389c: 0x40f809  jalr        $v0
label_1a38a0:
    if (ctx->pc == 0x1A38A0u) {
        ctx->pc = 0x1A38A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A389Cu;
        // 0x1a38a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A38A4u;
        goto label_1a38a4;
    }
    ctx->pc = 0x1A389Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A38A4u);
        ctx->pc = 0x1A38A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A389Cu;
        // 0x1a38a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A389Cu, 0x1A38A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A38A4u;
label_1a38a4:
    // 0x1a38a4: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a38a8:
    if (ctx->pc == 0x1A38A8u) {
        ctx->pc = 0x1A38A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A38A4u;
        // 0x1a38a8: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A38ACu;
        goto label_1a38ac;
    }
    ctx->pc = 0x1A38A4u;
    {
        const bool branch_taken_0x1a38a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A38A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A38A4u;
        // 0x1a38a8: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a38a4) {
            ctx->pc = 0x1A38DCu;
            return;
        }
    }
    ctx->pc = 0x1A38ACu;
label_1a38ac:
    // 0x1a38ac: 0x0  nop
    ctx->pc = 0x1a38acu;
    // NOP
    ctx->pc = 0x1a38b0u;
}
