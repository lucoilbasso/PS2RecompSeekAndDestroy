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

// Function: entry_0016da68
// Address: 0x16da68 - 0x16dac0
void entry_0016da68_0x16da68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016da68_0x16da68");
#endif

    switch (ctx->pc) {
        case 0x16da9cu: goto label_16da9c;
        case 0x16daa4u: goto label_16daa4;
        case 0x16dab0u: goto label_16dab0;
        default: break;
    }

    ctx->pc = 0x16da68u;

label_16da68:
    // 0x16da68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16da68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16da6c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x16da6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x16da70: 0x0  nop
    ctx->pc = 0x16da70u;
    // NOP
    // 0x16da74: 0x0  nop
    ctx->pc = 0x16da74u;
    // NOP
    // 0x16da78: 0x0  nop
    ctx->pc = 0x16da78u;
    // NOP
    // 0x16da7c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16DA7Cu;
    {
        const bool branch_taken_0x16da7c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x16DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA7Cu;
        // 0x16da80: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da7c) {
            ctx->pc = 0x16DA68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16da68;
        }
    }
    ctx->pc = 0x16DA84u;
    // 0x16da84: 0xaea002dc  sw          $zero, 0x2DC($s5)
    ctx->pc = 0x16da84u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 732), GPR_U32(ctx, 0));
    // 0x16da88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16da88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16da8c: 0xaea002d8  sw          $zero, 0x2D8($s5)
    ctx->pc = 0x16da8cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 728), GPR_U32(ctx, 0));
    // 0x16da90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16da90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16da94: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x16DA94u;
    SET_GPR_U32(ctx, 31, 0x16DA9Cu);
    ctx->pc = 0x16DA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DA94u;
    // 0x16da98: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x16DA94u, 0x16DA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DA9Cu;
label_16da9c:
    // 0x16da9c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16DA9Cu;
    SET_GPR_U32(ctx, 31, 0x16DAA4u);
    ctx->pc = 0x16DAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DA9Cu;
    // 0x16daa0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16DA9Cu, 0x16DAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DAA4u;
label_16daa4:
    // 0x16daa4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16daa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16daa8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16DAA8u;
    SET_GPR_U32(ctx, 31, 0x16DAB0u);
    ctx->pc = 0x16DAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DAA8u;
    // 0x16daac: 0xae0202b0  sw          $v0, 0x2B0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16DAA8u, 0x16DAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DAB0u;
label_16dab0:
    // 0x16dab0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16DAB0u;
    {
        const bool branch_taken_0x16dab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16dab0) {
            ctx->pc = 0x16DAC0u;
            return;
        }
    }
    ctx->pc = 0x16DAB8u;
    // 0x16dab8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16DAB8u;
    {
        const bool branch_taken_0x16dab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAB8u;
        // 0x16dabc: 0x8e6201b4  lw          $v0, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dab8) {
            ctx->pc = 0x16DAFCu;
            return;
        }
    }
    ctx->pc = 0x16DAC0u;
}
