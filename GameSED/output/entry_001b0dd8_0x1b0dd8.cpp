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

// Function: entry_001b0dd8
// Address: 0x1b0dd8 - 0x1b0e34
void entry_001b0dd8_0x1b0dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0dd8_0x1b0dd8");
#endif

    switch (ctx->pc) {
        case 0x1b0dd8u: goto label_1b0dd8;
        case 0x1b0ddcu: goto label_1b0ddc;
        case 0x1b0de0u: goto label_1b0de0;
        case 0x1b0de4u: goto label_1b0de4;
        case 0x1b0de8u: goto label_1b0de8;
        case 0x1b0decu: goto label_1b0dec;
        case 0x1b0df0u: goto label_1b0df0;
        case 0x1b0df4u: goto label_1b0df4;
        case 0x1b0df8u: goto label_1b0df8;
        case 0x1b0dfcu: goto label_1b0dfc;
        case 0x1b0e00u: goto label_1b0e00;
        case 0x1b0e04u: goto label_1b0e04;
        case 0x1b0e08u: goto label_1b0e08;
        case 0x1b0e0cu: goto label_1b0e0c;
        case 0x1b0e10u: goto label_1b0e10;
        case 0x1b0e14u: goto label_1b0e14;
        case 0x1b0e18u: goto label_1b0e18;
        case 0x1b0e1cu: goto label_1b0e1c;
        case 0x1b0e20u: goto label_1b0e20;
        case 0x1b0e24u: goto label_1b0e24;
        case 0x1b0e28u: goto label_1b0e28;
        case 0x1b0e2cu: goto label_1b0e2c;
        case 0x1b0e30u: goto label_1b0e30;
        default: break;
    }

    ctx->pc = 0x1b0dd8u;

label_1b0dd8:
    // 0x1b0dd8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1b0dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1b0ddc:
    // 0x1b0ddc: 0x8ea2a974  lw          $v0, -0x568C($s5)
    ctx->pc = 0x1b0ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945140)));
label_1b0de0:
    // 0x1b0de0: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x1b0de0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_1b0de4:
    // 0x1b0de4: 0x40f809  jalr        $v0
label_1b0de8:
    if (ctx->pc == 0x1B0DE8u) {
        ctx->pc = 0x1B0DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DE4u;
        // 0x1b0de8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0DECu;
        goto label_1b0dec;
    }
    ctx->pc = 0x1B0DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B0DECu);
        ctx->pc = 0x1B0DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DE4u;
        // 0x1b0de8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0DE4u, 0x1B0DECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0DECu;
label_1b0dec:
    // 0x1b0dec: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b0decu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1b0df0:
    // 0x1b0df0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1b0df4:
    if (ctx->pc == 0x1B0DF4u) {
        ctx->pc = 0x1B0DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DF0u;
        // 0x1b0df4: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0DF8u;
        goto label_1b0df8;
    }
    ctx->pc = 0x1B0DF0u;
    {
        const bool branch_taken_0x1b0df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DF0u;
        // 0x1b0df4: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0df0) {
            ctx->pc = 0x1B0DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0dd8;
        }
    }
    ctx->pc = 0x1B0DF8u;
label_1b0df8:
    // 0x1b0df8: 0x10000051  b           . + 4 + (0x51 << 2)
label_1b0dfc:
    if (ctx->pc == 0x1B0DFCu) {
        ctx->pc = 0x1B0DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DF8u;
        // 0x1b0dfc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E00u;
        goto label_1b0e00;
    }
    ctx->pc = 0x1B0DF8u;
    {
        const bool branch_taken_0x1b0df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DF8u;
        // 0x1b0dfc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0df8) {
            ctx->pc = 0x1B0F40u;
            return;
        }
    }
    ctx->pc = 0x1B0E00u;
label_1b0e00:
    // 0x1b0e00: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1b0e00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1b0e04:
    // 0x1b0e04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0e04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0e08:
    // 0x1b0e08: 0xc66cfff8  lwc1        $f12, -0x8($s3)
    ctx->pc = 0x1b0e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b0e0c:
    // 0x1b0e0c: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x1b0e0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b0e10:
    // 0x1b0e10: 0x0  nop
    ctx->pc = 0x1b0e10u;
    // NOP
label_1b0e14:
    // 0x1b0e14: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1b0e18:
    if (ctx->pc == 0x1B0E18u) {
        ctx->pc = 0x1B0E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E14u;
        // 0x1b0e18: 0x3c150025  lui         $s5, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E1Cu;
        goto label_1b0e1c;
    }
    ctx->pc = 0x1B0E14u;
    {
        const bool branch_taken_0x1b0e14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B0E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E14u;
        // 0x1b0e18: 0x3c150025  lui         $s5, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e14) {
            ctx->pc = 0x1B0E34u;
            return;
        }
    }
    ctx->pc = 0x1B0E1Cu;
label_1b0e1c:
    // 0x1b0e1c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1b0e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1b0e20:
    // 0x1b0e20: 0x8ea2a974  lw          $v0, -0x568C($s5)
    ctx->pc = 0x1b0e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945140)));
label_1b0e24:
    // 0x1b0e24: 0x40f809  jalr        $v0
label_1b0e28:
    if (ctx->pc == 0x1B0E28u) {
        ctx->pc = 0x1B0E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E24u;
        // 0x1b0e28: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E2Cu;
        goto label_1b0e2c;
    }
    ctx->pc = 0x1B0E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B0E2Cu);
        ctx->pc = 0x1B0E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E24u;
        // 0x1b0e28: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0E24u, 0x1B0E2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0E2Cu;
label_1b0e2c:
    // 0x1b0e2c: 0x10000044  b           . + 4 + (0x44 << 2)
label_1b0e30:
    if (ctx->pc == 0x1B0E30u) {
        ctx->pc = 0x1B0E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E2Cu;
        // 0x1b0e30: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E34u;
        goto label_fallthrough_0x1b0e2c;
    }
    ctx->pc = 0x1B0E2Cu;
    {
        const bool branch_taken_0x1b0e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E2Cu;
        // 0x1b0e30: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e2c) {
            ctx->pc = 0x1B0F40u;
            return;
        }
    }
label_fallthrough_0x1b0e2c:
    ctx->pc = 0x1B0E34u;
}
