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

// Function: Cmd_DISP_PASSWORD_Entry__FP15BsSCDEntControl
// Address: 0x117d78 - 0x117e98
void Cmd_DISP_PASSWORD_Entry__FP15BsSCDEntControl_0x117d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DISP_PASSWORD_Entry__FP15BsSCDEntControl_0x117d78");
#endif

    switch (ctx->pc) {
        case 0x117d98u: goto label_117d98;
        case 0x117da4u: goto label_117da4;
        case 0x117db0u: goto label_117db0;
        case 0x117dbcu: goto label_117dbc;
        case 0x117dc8u: goto label_117dc8;
        case 0x117dd8u: goto label_117dd8;
        case 0x117de8u: goto label_117de8;
        case 0x117e08u: goto label_117e08;
        case 0x117e10u: goto label_117e10;
        case 0x117e64u: goto label_117e64;
        case 0x117e70u: goto label_117e70;
        default: break;
    }

    ctx->pc = 0x117d78u;

    // 0x117d78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x117d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x117d7c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x117d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x117d80: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x117d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x117d84: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x117d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x117d88: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x117d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x117d8c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x117d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x117d90: 0xc043258  jal         func_10C960
    ctx->pc = 0x117D90u;
    SET_GPR_U32(ctx, 31, 0x117D98u);
    ctx->pc = 0x117D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117D90u;
    // 0x117d94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C960u, 0x117D90u, 0x117D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117D98u;
label_117d98:
    // 0x117d98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d9c: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x117D9Cu;
    SET_GPR_U32(ctx, 31, 0x117DA4u);
    ctx->pc = 0x117DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117D9Cu;
    // 0x117da0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x117D9Cu, 0x117DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117DA4u;
label_117da4:
    // 0x117da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117da8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x117DA8u;
    SET_GPR_U32(ctx, 31, 0x117DB0u);
    ctx->pc = 0x117DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117DA8u;
    // 0x117dac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x117DA8u, 0x117DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117DB0u;
label_117db0:
    // 0x117db0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x117db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117db4: 0xc041862  jal         func_106188
    ctx->pc = 0x117DB4u;
    SET_GPR_U32(ctx, 31, 0x117DBCu);
    ctx->pc = 0x117DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117DB4u;
    // 0x117db8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106188u, 0x117DB4u, 0x117DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117DBCu;
label_117dbc:
    // 0x117dbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117dc0: 0xc0637a8  jal         func_18DEA0
    ctx->pc = 0x117DC0u;
    SET_GPR_U32(ctx, 31, 0x117DC8u);
    ctx->pc = 0x117DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117DC0u;
    // 0x117dc4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DEA0u, 0x117DC0u, 0x117DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117DC8u;
label_117dc8:
    // 0x117dc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117dcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x117dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117dd0: 0xc063a94  jal         func_18EA50
    ctx->pc = 0x117DD0u;
    SET_GPR_U32(ctx, 31, 0x117DD8u);
    ctx->pc = 0x117DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117DD0u;
    // 0x117dd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EA50u, 0x117DD0u, 0x117DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117DD8u;
label_117dd8:
    // 0x117dd8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x117dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x117ddc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117de0: 0xc063764  jal         func_18DD90
    ctx->pc = 0x117DE0u;
    SET_GPR_U32(ctx, 31, 0x117DE8u);
    ctx->pc = 0x117DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117DE0u;
    // 0x117de4: 0x24a54690  addiu       $a1, $a1, 0x4690 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x117DE0u, 0x117DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117DE8u;
label_117de8:
    // 0x117de8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x117de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x117dec: 0x244433b0  addiu       $a0, $v0, 0x33B0
    ctx->pc = 0x117decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13232));
    // 0x117df0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x117df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117df4: 0x8c820194  lw          $v0, 0x194($a0)
    ctx->pc = 0x117df4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1F3544u));
    // 0x117df8: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x117DF8u;
    {
        const bool branch_taken_0x117df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x117DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117DF8u;
        // 0x117dfc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117df8) {
            ctx->pc = 0x117E7Cu;
            goto label_117e7c;
        }
    }
    ctx->pc = 0x117E00u;
    // 0x117e00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x117e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e04: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x117e04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_117e08:
    // 0x117e08: 0x26240258  addiu       $a0, $s1, 0x258
    ctx->pc = 0x117e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 600));
    // 0x117e0c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x117e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_117e10:
    // 0x117e10: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x117e10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x117e14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x117e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x117e18: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x117e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x117e1c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x117e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x117e20: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x117e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x117e24: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x117e24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117e28: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x117e28u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x117e2c: 0x4a1fff8  bgez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x117E2Cu;
    {
        const bool branch_taken_0x117e2c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x117E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E2Cu;
        // 0x117e30: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e2c) {
            ctx->pc = 0x117E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117e10;
        }
    }
    ctx->pc = 0x117E34u;
    // 0x117e34: 0x1037c2  srl         $a2, $s0, 31
    ctx->pc = 0x117e34u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x117e38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e3c: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x117e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x117e40: 0xa7a00008  sh          $zero, 0x8($sp)
    ctx->pc = 0x117e40u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x117e44: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x117e44u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x117e48: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x117e48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x117e4c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x117e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x117e50: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x117e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x117e54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x117e54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x117e58: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x117e58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x117e5c: 0xc063a94  jal         func_18EA50
    ctx->pc = 0x117E5Cu;
    SET_GPR_U32(ctx, 31, 0x117E64u);
    ctx->pc = 0x117E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117E5Cu;
    // 0x117e60: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EA50u, 0x117E5Cu, 0x117E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117E64u;
label_117e64:
    // 0x117e64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e68: 0xc063b2e  jal         func_18ECB8
    ctx->pc = 0x117E68u;
    SET_GPR_U32(ctx, 31, 0x117E70u);
    ctx->pc = 0x117E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117E68u;
    // 0x117e6c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ECB8u, 0x117E68u, 0x117E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117E70u;
label_117e70:
    // 0x117e70: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x117e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x117e74: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x117E74u;
    {
        const bool branch_taken_0x117e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E74u;
        // 0x117e78: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e74) {
            ctx->pc = 0x117E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117e08;
        }
    }
    ctx->pc = 0x117E7Cu;
label_117e7c:
    // 0x117e7c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x117e7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117e80: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x117e80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x117e84: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x117e84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x117e88: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x117e88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x117e8c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x117e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x117e90: 0x3e00008  jr          $ra
    ctx->pc = 0x117E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E90u;
        // 0x117e94: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117E98u;
}
