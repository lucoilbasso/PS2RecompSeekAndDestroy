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

// Function: PartsLoadDestroy__9ApcObjRscib
// Address: 0x102d88 - 0x102e7c
void PartsLoadDestroy__9ApcObjRscib_0x102d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PartsLoadDestroy__9ApcObjRscib_0x102d88");
#endif

    switch (ctx->pc) {
        case 0x102d88u: goto label_102d88;
        case 0x102d8cu: goto label_102d8c;
        case 0x102d90u: goto label_102d90;
        case 0x102d94u: goto label_102d94;
        case 0x102d98u: goto label_102d98;
        case 0x102d9cu: goto label_102d9c;
        case 0x102da0u: goto label_102da0;
        case 0x102da4u: goto label_102da4;
        case 0x102da8u: goto label_102da8;
        case 0x102dacu: goto label_102dac;
        case 0x102db0u: goto label_102db0;
        case 0x102db4u: goto label_102db4;
        case 0x102db8u: goto label_102db8;
        case 0x102dbcu: goto label_102dbc;
        case 0x102dc0u: goto label_102dc0;
        case 0x102dc4u: goto label_102dc4;
        case 0x102dc8u: goto label_102dc8;
        case 0x102dccu: goto label_102dcc;
        case 0x102dd0u: goto label_102dd0;
        case 0x102dd4u: goto label_102dd4;
        case 0x102dd8u: goto label_102dd8;
        case 0x102ddcu: goto label_102ddc;
        case 0x102de0u: goto label_102de0;
        case 0x102de4u: goto label_102de4;
        case 0x102de8u: goto label_102de8;
        case 0x102decu: goto label_102dec;
        case 0x102df0u: goto label_102df0;
        case 0x102df4u: goto label_102df4;
        case 0x102df8u: goto label_102df8;
        case 0x102dfcu: goto label_102dfc;
        case 0x102e00u: goto label_102e00;
        case 0x102e04u: goto label_102e04;
        case 0x102e08u: goto label_102e08;
        case 0x102e0cu: goto label_102e0c;
        case 0x102e10u: goto label_102e10;
        case 0x102e14u: goto label_102e14;
        case 0x102e18u: goto label_102e18;
        case 0x102e1cu: goto label_102e1c;
        case 0x102e20u: goto label_102e20;
        case 0x102e24u: goto label_102e24;
        case 0x102e28u: goto label_102e28;
        case 0x102e2cu: goto label_102e2c;
        case 0x102e30u: goto label_102e30;
        case 0x102e34u: goto label_102e34;
        case 0x102e38u: goto label_102e38;
        case 0x102e3cu: goto label_102e3c;
        case 0x102e40u: goto label_102e40;
        case 0x102e44u: goto label_102e44;
        case 0x102e48u: goto label_102e48;
        case 0x102e4cu: goto label_102e4c;
        case 0x102e50u: goto label_102e50;
        case 0x102e54u: goto label_102e54;
        case 0x102e58u: goto label_102e58;
        case 0x102e5cu: goto label_102e5c;
        case 0x102e60u: goto label_102e60;
        case 0x102e64u: goto label_102e64;
        case 0x102e68u: goto label_102e68;
        case 0x102e6cu: goto label_102e6c;
        case 0x102e70u: goto label_102e70;
        case 0x102e74u: goto label_102e74;
        case 0x102e78u: goto label_102e78;
        default: break;
    }

    ctx->pc = 0x102d88u;

label_102d88:
    // 0x102d88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x102d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_102d8c:
    // 0x102d8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x102d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_102d90:
    // 0x102d90: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
label_102d94:
    if (ctx->pc == 0x102D94u) {
        ctx->pc = 0x102D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D90u;
        // 0x102d94: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102D98u;
        goto label_102d98;
    }
    ctx->pc = 0x102D90u;
    {
        const bool branch_taken_0x102d90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x102D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D90u;
        // 0x102d94: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102d90) {
            ctx->pc = 0x102E08u;
            goto label_102e08;
        }
    }
    ctx->pc = 0x102D98u;
label_102d98:
    // 0x102d98: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x102d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_102d9c:
    // 0x102d9c: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_102da0:
    if (ctx->pc == 0x102DA0u) {
        ctx->pc = 0x102DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D9Cu;
        // 0x102da0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102DA4u;
        goto label_102da4;
    }
    ctx->pc = 0x102D9Cu;
    {
        const bool branch_taken_0x102d9c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x102DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D9Cu;
        // 0x102da0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102d9c) {
            ctx->pc = 0x102DDCu;
            goto label_102ddc;
        }
    }
    ctx->pc = 0x102DA4u;
label_102da4:
    // 0x102da4: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x102da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_102da8:
    // 0x102da8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x102da8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102dac:
    // 0x102dac: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x102dacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_102db0:
    // 0x102db0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x102db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_102db4:
    // 0x102db4: 0x0  nop
    ctx->pc = 0x102db4u;
    // NOP
label_102db8:
    // 0x102db8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x102db8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_102dbc:
    // 0x102dbc: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x102dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_102dc0:
    // 0x102dc0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x102dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_102dc4:
    // 0x102dc4: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x102dc4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_102dc8:
    // 0x102dc8: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
label_102dcc:
    if (ctx->pc == 0x102DCCu) {
        ctx->pc = 0x102DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102DC8u;
        // 0x102dcc: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102DD0u;
        goto label_102dd0;
    }
    ctx->pc = 0x102DC8u;
    {
        const bool branch_taken_0x102dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x102DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102DC8u;
        // 0x102dcc: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102dc8) {
            ctx->pc = 0x102DE8u;
            goto label_102de8;
        }
    }
    ctx->pc = 0x102DD0u;
label_102dd0:
    // 0x102dd0: 0x0  nop
    ctx->pc = 0x102dd0u;
    // NOP
label_102dd4:
    // 0x102dd4: 0x54c0fff8  bnel        $a2, $zero, . + 4 + (-0x8 << 2)
label_102dd8:
    if (ctx->pc == 0x102DD8u) {
        ctx->pc = 0x102DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102DD4u;
        // 0x102dd8: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102DDCu;
        goto label_102ddc;
    }
    ctx->pc = 0x102DD4u;
    {
        const bool branch_taken_0x102dd4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x102dd4) {
            ctx->pc = 0x102DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102DD4u;
            // 0x102dd8: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102db8;
        }
    }
    ctx->pc = 0x102DDCu;
label_102ddc:
    // 0x102ddc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x102ddcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102de0:
    // 0x102de0: 0x1000000c  b           . + 4 + (0xC << 2)
label_102de4:
    if (ctx->pc == 0x102DE4u) {
        ctx->pc = 0x102DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102DE0u;
        // 0x102de4: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102DE8u;
        goto label_102de8;
    }
    ctx->pc = 0x102DE0u;
    {
        const bool branch_taken_0x102de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102DE0u;
        // 0x102de4: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102de0) {
            ctx->pc = 0x102E14u;
            goto label_102e14;
        }
    }
    ctx->pc = 0x102DE8u;
label_102de8:
    // 0x102de8: 0x0  nop
    ctx->pc = 0x102de8u;
    // NOP
label_102dec:
    // 0x102dec: 0x0  nop
    ctx->pc = 0x102decu;
    // NOP
label_102df0:
    // 0x102df0: 0x0  nop
    ctx->pc = 0x102df0u;
    // NOP
label_102df4:
    // 0x102df4: 0x0  nop
    ctx->pc = 0x102df4u;
    // NOP
label_102df8:
    // 0x102df8: 0x0  nop
    ctx->pc = 0x102df8u;
    // NOP
label_102dfc:
    // 0x102dfc: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_102e00:
    if (ctx->pc == 0x102E00u) {
        ctx->pc = 0x102E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102DFCu;
        // 0x102e00: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102E04u;
        goto label_102e04;
    }
    ctx->pc = 0x102DFCu;
    {
        const bool branch_taken_0x102dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102DFCu;
        // 0x102e00: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102dfc) {
            ctx->pc = 0x102DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102de0;
        }
    }
    ctx->pc = 0x102E04u;
label_102e04:
    // 0x102e04: 0x0  nop
    ctx->pc = 0x102e04u;
    // NOP
label_102e08:
    // 0x102e08: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x102e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_102e0c:
    // 0x102e0c: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x102e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_102e10:
    // 0x102e10: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x102e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_102e14:
    // 0x102e14: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x102e14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_102e18:
    // 0x102e18: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_102e1c:
    if (ctx->pc == 0x102E1Cu) {
        ctx->pc = 0x102E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E18u;
        // 0x102e1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102E20u;
        goto label_102e20;
    }
    ctx->pc = 0x102E18u;
    {
        const bool branch_taken_0x102e18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x102E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E18u;
        // 0x102e1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e18) {
            ctx->pc = 0x102E38u;
            goto label_102e38;
        }
    }
    ctx->pc = 0x102E20u;
label_102e20:
    // 0x102e20: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x102e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_102e24:
    // 0x102e24: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x102e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_102e28:
    // 0x102e28: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x102e28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_102e2c:
    // 0x102e2c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x102e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_102e30:
    // 0x102e30: 0x60f809  jalr        $v1
label_102e34:
    if (ctx->pc == 0x102E34u) {
        ctx->pc = 0x102E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E30u;
        // 0x102e34: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102E38u;
        goto label_102e38;
    }
    ctx->pc = 0x102E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x102E38u);
        ctx->pc = 0x102E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E30u;
        // 0x102e34: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102E30u, 0x102E38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102E38u;
label_102e38:
    // 0x102e38: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x102e38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_102e3c:
    // 0x102e3c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_102e40:
    if (ctx->pc == 0x102E40u) {
        ctx->pc = 0x102E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E3Cu;
        // 0x102e40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102E44u;
        goto label_102e44;
    }
    ctx->pc = 0x102E3Cu;
    {
        const bool branch_taken_0x102e3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x102E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E3Cu;
        // 0x102e40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e3c) {
            ctx->pc = 0x102E5Cu;
            goto label_102e5c;
        }
    }
    ctx->pc = 0x102E44u;
label_102e44:
    // 0x102e44: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x102e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_102e48:
    // 0x102e48: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x102e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_102e4c:
    // 0x102e4c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x102e4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_102e50:
    // 0x102e50: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x102e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_102e54:
    // 0x102e54: 0x60f809  jalr        $v1
label_102e58:
    if (ctx->pc == 0x102E58u) {
        ctx->pc = 0x102E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E54u;
        // 0x102e58: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102E5Cu;
        goto label_102e5c;
    }
    ctx->pc = 0x102E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x102E5Cu);
        ctx->pc = 0x102E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E54u;
        // 0x102e58: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102E54u, 0x102E5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102E5Cu;
label_102e5c:
    // 0x102e5c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x102e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_102e60:
    // 0x102e60: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x102e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_102e64:
    // 0x102e64: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x102e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_102e68:
    // 0x102e68: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x102e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_102e6c:
    // 0x102e6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x102e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_102e70:
    // 0x102e70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_102e74:
    // 0x102e74: 0x3e00008  jr          $ra
label_102e78:
    if (ctx->pc == 0x102E78u) {
        ctx->pc = 0x102E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E74u;
        // 0x102e78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102E7Cu;
        goto label_fallthrough_0x102e74;
    }
    ctx->pc = 0x102E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E74u;
        // 0x102e78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x102e74:
    ctx->pc = 0x102E7Cu;
}
