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

// Function: Cmd_TURRET_MOTION_Entry__FP15BsSCDEntControl
// Address: 0x163de8 - 0x163fd8
void Cmd_TURRET_MOTION_Entry__FP15BsSCDEntControl_0x163de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_TURRET_MOTION_Entry__FP15BsSCDEntControl_0x163de8");
#endif

    switch (ctx->pc) {
        case 0x163de8u: goto label_163de8;
        case 0x163decu: goto label_163dec;
        case 0x163df0u: goto label_163df0;
        case 0x163df4u: goto label_163df4;
        case 0x163df8u: goto label_163df8;
        case 0x163dfcu: goto label_163dfc;
        case 0x163e00u: goto label_163e00;
        case 0x163e04u: goto label_163e04;
        case 0x163e08u: goto label_163e08;
        case 0x163e0cu: goto label_163e0c;
        case 0x163e10u: goto label_163e10;
        case 0x163e14u: goto label_163e14;
        case 0x163e18u: goto label_163e18;
        case 0x163e1cu: goto label_163e1c;
        case 0x163e20u: goto label_163e20;
        case 0x163e24u: goto label_163e24;
        case 0x163e28u: goto label_163e28;
        case 0x163e2cu: goto label_163e2c;
        case 0x163e30u: goto label_163e30;
        case 0x163e34u: goto label_163e34;
        case 0x163e38u: goto label_163e38;
        case 0x163e3cu: goto label_163e3c;
        case 0x163e40u: goto label_163e40;
        case 0x163e44u: goto label_163e44;
        case 0x163e48u: goto label_163e48;
        case 0x163e4cu: goto label_163e4c;
        case 0x163e50u: goto label_163e50;
        case 0x163e54u: goto label_163e54;
        case 0x163e58u: goto label_163e58;
        case 0x163e5cu: goto label_163e5c;
        case 0x163e60u: goto label_163e60;
        case 0x163e64u: goto label_163e64;
        case 0x163e68u: goto label_163e68;
        case 0x163e6cu: goto label_163e6c;
        case 0x163e70u: goto label_163e70;
        case 0x163e74u: goto label_163e74;
        case 0x163e78u: goto label_163e78;
        case 0x163e7cu: goto label_163e7c;
        case 0x163e80u: goto label_163e80;
        case 0x163e84u: goto label_163e84;
        case 0x163e88u: goto label_163e88;
        case 0x163e8cu: goto label_163e8c;
        case 0x163e90u: goto label_163e90;
        case 0x163e94u: goto label_163e94;
        case 0x163e98u: goto label_163e98;
        case 0x163e9cu: goto label_163e9c;
        case 0x163ea0u: goto label_163ea0;
        case 0x163ea4u: goto label_163ea4;
        case 0x163ea8u: goto label_163ea8;
        case 0x163eacu: goto label_163eac;
        case 0x163eb0u: goto label_163eb0;
        case 0x163eb4u: goto label_163eb4;
        case 0x163eb8u: goto label_163eb8;
        case 0x163ebcu: goto label_163ebc;
        case 0x163ec0u: goto label_163ec0;
        case 0x163ec4u: goto label_163ec4;
        case 0x163ec8u: goto label_163ec8;
        case 0x163eccu: goto label_163ecc;
        case 0x163ed0u: goto label_163ed0;
        case 0x163ed4u: goto label_163ed4;
        case 0x163ed8u: goto label_163ed8;
        case 0x163edcu: goto label_163edc;
        case 0x163ee0u: goto label_163ee0;
        case 0x163ee4u: goto label_163ee4;
        case 0x163ee8u: goto label_163ee8;
        case 0x163eecu: goto label_163eec;
        case 0x163ef0u: goto label_163ef0;
        case 0x163ef4u: goto label_163ef4;
        case 0x163ef8u: goto label_163ef8;
        case 0x163efcu: goto label_163efc;
        case 0x163f00u: goto label_163f00;
        case 0x163f04u: goto label_163f04;
        case 0x163f08u: goto label_163f08;
        case 0x163f0cu: goto label_163f0c;
        case 0x163f10u: goto label_163f10;
        case 0x163f14u: goto label_163f14;
        case 0x163f18u: goto label_163f18;
        case 0x163f1cu: goto label_163f1c;
        case 0x163f20u: goto label_163f20;
        case 0x163f24u: goto label_163f24;
        case 0x163f28u: goto label_163f28;
        case 0x163f2cu: goto label_163f2c;
        case 0x163f30u: goto label_163f30;
        case 0x163f34u: goto label_163f34;
        case 0x163f38u: goto label_163f38;
        case 0x163f3cu: goto label_163f3c;
        case 0x163f40u: goto label_163f40;
        case 0x163f44u: goto label_163f44;
        case 0x163f48u: goto label_163f48;
        case 0x163f4cu: goto label_163f4c;
        case 0x163f50u: goto label_163f50;
        case 0x163f54u: goto label_163f54;
        case 0x163f58u: goto label_163f58;
        case 0x163f5cu: goto label_163f5c;
        case 0x163f60u: goto label_163f60;
        case 0x163f64u: goto label_163f64;
        case 0x163f68u: goto label_163f68;
        case 0x163f6cu: goto label_163f6c;
        case 0x163f70u: goto label_163f70;
        case 0x163f74u: goto label_163f74;
        case 0x163f78u: goto label_163f78;
        case 0x163f7cu: goto label_163f7c;
        case 0x163f80u: goto label_163f80;
        case 0x163f84u: goto label_163f84;
        case 0x163f88u: goto label_163f88;
        case 0x163f8cu: goto label_163f8c;
        case 0x163f90u: goto label_163f90;
        case 0x163f94u: goto label_163f94;
        case 0x163f98u: goto label_163f98;
        case 0x163f9cu: goto label_163f9c;
        case 0x163fa0u: goto label_163fa0;
        case 0x163fa4u: goto label_163fa4;
        case 0x163fa8u: goto label_163fa8;
        case 0x163facu: goto label_163fac;
        case 0x163fb0u: goto label_163fb0;
        case 0x163fb4u: goto label_163fb4;
        case 0x163fb8u: goto label_163fb8;
        case 0x163fbcu: goto label_163fbc;
        case 0x163fc0u: goto label_163fc0;
        case 0x163fc4u: goto label_163fc4;
        case 0x163fc8u: goto label_163fc8;
        case 0x163fccu: goto label_163fcc;
        case 0x163fd0u: goto label_163fd0;
        case 0x163fd4u: goto label_163fd4;
        default: break;
    }

    ctx->pc = 0x163de8u;

label_163de8:
    // 0x163de8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x163de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_163dec:
    // 0x163dec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x163decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163df0:
    // 0x163df0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x163df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_163df4:
    // 0x163df4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x163df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_163df8:
    // 0x163df8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x163df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_163dfc:
    // 0x163dfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x163dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163e00:
    // 0x163e00: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x163e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_163e04:
    // 0x163e04: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x163e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_163e08:
    // 0x163e08: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x163e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_163e0c:
    // 0x163e0c: 0xc04110c  jal         func_104430
label_163e10:
    if (ctx->pc == 0x163E10u) {
        ctx->pc = 0x163E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E0Cu;
        // 0x163e10: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163E14u;
        goto label_163e14;
    }
    ctx->pc = 0x163E0Cu;
    SET_GPR_U32(ctx, 31, 0x163E14u);
    ctx->pc = 0x163E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163E0Cu;
    // 0x163e10: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x163E0Cu, 0x163E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163E14u;
label_163e14:
    // 0x163e14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163e18:
    // 0x163e18: 0xc06a26e  jal         func_1A89B8
label_163e1c:
    if (ctx->pc == 0x163E1Cu) {
        ctx->pc = 0x163E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E18u;
        // 0x163e1c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163E20u;
        goto label_163e20;
    }
    ctx->pc = 0x163E18u;
    SET_GPR_U32(ctx, 31, 0x163E20u);
    ctx->pc = 0x163E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163E18u;
    // 0x163e1c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x163E18u, 0x163E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163E20u;
label_163e20:
    // 0x163e20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x163e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163e24:
    // 0x163e24: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x163e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_163e28:
    // 0x163e28: 0x24a4fffa  addiu       $a0, $a1, -0x6
    ctx->pc = 0x163e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967290));
label_163e2c:
    // 0x163e2c: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x163e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_163e30:
    // 0x163e30: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
label_163e34:
    if (ctx->pc == 0x163E34u) {
        ctx->pc = 0x163E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E30u;
        // 0x163e34: 0x2466fffe  addiu       $a2, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163E38u;
        goto label_163e38;
    }
    ctx->pc = 0x163E30u;
    {
        const bool branch_taken_0x163e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E30u;
        // 0x163e34: 0x2466fffe  addiu       $a2, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e30) {
            ctx->pc = 0x163FC0u;
            goto label_163fc0;
        }
    }
    ctx->pc = 0x163E38u;
label_163e38:
    // 0x163e38: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x163e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_163e3c:
    // 0x163e3c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x163e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_163e40:
    // 0x163e40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x163e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_163e44:
    // 0x163e44: 0x8c636f70  lw          $v1, 0x6F70($v1)
    ctx->pc = 0x163e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28528)));
label_163e48:
    // 0x163e48: 0x600008  jr          $v1
label_163e4c:
    if (ctx->pc == 0x163E4Cu) {
        ctx->pc = 0x163E50u;
        goto label_163e50;
    }
    ctx->pc = 0x163E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163E50u: goto label_163e50;
            case 0x163E58u: goto label_163e58;
            case 0x163EB8u: goto label_163eb8;
            case 0x163F20u: goto label_163f20;
            case 0x163F50u: goto label_163f50;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163E48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x163E50u;
label_163e50:
    // 0x163e50: 0x1000005b  b           . + 4 + (0x5B << 2)
label_163e54:
    if (ctx->pc == 0x163E54u) {
        ctx->pc = 0x163E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E50u;
        // 0x163e54: 0xae200250  sw          $zero, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163E58u;
        goto label_163e58;
    }
    ctx->pc = 0x163E50u;
    {
        const bool branch_taken_0x163e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E50u;
        // 0x163e54: 0xae200250  sw          $zero, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e50) {
            ctx->pc = 0x163FC0u;
            goto label_163fc0;
        }
    }
    ctx->pc = 0x163E58u;
label_163e58:
    // 0x163e58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x163e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_163e5c:
    // 0x163e5c: 0x54c2000a  bnel        $a2, $v0, . + 4 + (0xA << 2)
label_163e60:
    if (ctx->pc == 0x163E60u) {
        ctx->pc = 0x163E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E5Cu;
        // 0x163e60: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163E64u;
        goto label_163e64;
    }
    ctx->pc = 0x163E5Cu;
    {
        const bool branch_taken_0x163e5c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x163e5c) {
            ctx->pc = 0x163E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163E5Cu;
            // 0x163e60: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163E88u;
            goto label_163e88;
        }
    }
    ctx->pc = 0x163E64u;
label_163e64:
    // 0x163e64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163e68:
    // 0x163e68: 0xc06a2ac  jal         func_1A8AB0
label_163e6c:
    if (ctx->pc == 0x163E6Cu) {
        ctx->pc = 0x163E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E68u;
        // 0x163e6c: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163E70u;
        goto label_163e70;
    }
    ctx->pc = 0x163E68u;
    SET_GPR_U32(ctx, 31, 0x163E70u);
    ctx->pc = 0x163E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163E68u;
    // 0x163e6c: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x163E68u, 0x163E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163E70u;
label_163e70:
    // 0x163e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163e74:
    // 0x163e74: 0xc06a2ac  jal         func_1A8AB0
label_163e78:
    if (ctx->pc == 0x163E78u) {
        ctx->pc = 0x163E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E74u;
        // 0x163e78: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163E7Cu;
        goto label_163e7c;
    }
    ctx->pc = 0x163E74u;
    SET_GPR_U32(ctx, 31, 0x163E7Cu);
    ctx->pc = 0x163E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163E74u;
    // 0x163e78: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x163E74u, 0x163E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163E7Cu;
label_163e7c:
    // 0x163e7c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x163e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_163e80:
    // 0x163e80: 0x10000003  b           . + 4 + (0x3 << 2)
label_163e84:
    if (ctx->pc == 0x163E84u) {
        ctx->pc = 0x163E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E80u;
        // 0x163e84: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163E88u;
        goto label_163e88;
    }
    ctx->pc = 0x163E80u;
    {
        const bool branch_taken_0x163e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E80u;
        // 0x163e84: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e80) {
            ctx->pc = 0x163E90u;
            goto label_163e90;
        }
    }
    ctx->pc = 0x163E88u;
label_163e88:
    // 0x163e88: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x163e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_163e8c:
    // 0x163e8c: 0x24720020  addiu       $s2, $v1, 0x20
    ctx->pc = 0x163e8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_163e90:
    // 0x163e90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x163e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163e94:
    // 0x163e94: 0x26230260  addiu       $v1, $s1, 0x260
    ctx->pc = 0x163e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
label_163e98:
    // 0x163e98: 0xae240250  sw          $a0, 0x250($s1)
    ctx->pc = 0x163e98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 4));
label_163e9c:
    // 0x163e9c: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x163e9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_163ea0:
    // 0x163ea0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x163ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_163ea4:
    // 0x163ea4: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x163ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_163ea8:
    // 0x163ea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_163eac:
    // 0x163eac: 0x10000033  b           . + 4 + (0x33 << 2)
label_163eb0:
    if (ctx->pc == 0x163EB0u) {
        ctx->pc = 0x163EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EACu;
        // 0x163eb0: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163EB4u;
        goto label_163eb4;
    }
    ctx->pc = 0x163EACu;
    {
        const bool branch_taken_0x163eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EACu;
        // 0x163eb0: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163eac) {
            ctx->pc = 0x163F7Cu;
            goto label_163f7c;
        }
    }
    ctx->pc = 0x163EB4u;
label_163eb4:
    // 0x163eb4: 0x0  nop
    ctx->pc = 0x163eb4u;
    // NOP
label_163eb8:
    // 0x163eb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x163eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_163ebc:
    // 0x163ebc: 0x54c2000c  bnel        $a2, $v0, . + 4 + (0xC << 2)
label_163ec0:
    if (ctx->pc == 0x163EC0u) {
        ctx->pc = 0x163EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EBCu;
        // 0x163ec0: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163EC4u;
        goto label_163ec4;
    }
    ctx->pc = 0x163EBCu;
    {
        const bool branch_taken_0x163ebc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x163ebc) {
            ctx->pc = 0x163EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163EBCu;
            // 0x163ec0: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163EF0u;
            goto label_163ef0;
        }
    }
    ctx->pc = 0x163EC4u;
label_163ec4:
    // 0x163ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163ec8:
    // 0x163ec8: 0xc06a282  jal         func_1A8A08
label_163ecc:
    if (ctx->pc == 0x163ECCu) {
        ctx->pc = 0x163ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EC8u;
        // 0x163ecc: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163ED0u;
        goto label_163ed0;
    }
    ctx->pc = 0x163EC8u;
    SET_GPR_U32(ctx, 31, 0x163ED0u);
    ctx->pc = 0x163ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163EC8u;
    // 0x163ecc: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x163EC8u, 0x163ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163ED0u;
label_163ed0:
    // 0x163ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163ed4:
    // 0x163ed4: 0xc06a282  jal         func_1A8A08
label_163ed8:
    if (ctx->pc == 0x163ED8u) {
        ctx->pc = 0x163ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163ED4u;
        // 0x163ed8: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x163EDCu;
        goto label_163edc;
    }
    ctx->pc = 0x163ED4u;
    SET_GPR_U32(ctx, 31, 0x163EDCu);
    ctx->pc = 0x163ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163ED4u;
    // 0x163ed8: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x163ED4u, 0x163EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163EDCu;
label_163edc:
    // 0x163edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163ee0:
    // 0x163ee0: 0xc06a282  jal         func_1A8A08
label_163ee4:
    if (ctx->pc == 0x163EE4u) {
        ctx->pc = 0x163EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EE0u;
        // 0x163ee4: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x163EE8u;
        goto label_163ee8;
    }
    ctx->pc = 0x163EE0u;
    SET_GPR_U32(ctx, 31, 0x163EE8u);
    ctx->pc = 0x163EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163EE0u;
    // 0x163ee4: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x163EE0u, 0x163EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163EE8u;
label_163ee8:
    // 0x163ee8: 0x10000002  b           . + 4 + (0x2 << 2)
label_163eec:
    if (ctx->pc == 0x163EECu) {
        ctx->pc = 0x163EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EE8u;
        // 0x163eec: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x163EF0u;
        goto label_163ef0;
    }
    ctx->pc = 0x163EE8u;
    {
        const bool branch_taken_0x163ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EE8u;
        // 0x163eec: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ee8) {
            ctx->pc = 0x163EF4u;
            goto label_163ef4;
        }
    }
    ctx->pc = 0x163EF0u;
label_163ef0:
    // 0x163ef0: 0x8c52b830  lw          $s2, -0x47D0($v0)
    ctx->pc = 0x163ef0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_163ef4:
    // 0x163ef4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x163ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_163ef8:
    // 0x163ef8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x163ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_163efc:
    // 0x163efc: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x163efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_163f00:
    // 0x163f00: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x163f00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_163f04:
    // 0x163f04: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x163f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_163f08:
    // 0x163f08: 0x60f809  jalr        $v1
label_163f0c:
    if (ctx->pc == 0x163F0Cu) {
        ctx->pc = 0x163F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F08u;
        // 0x163f0c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163F10u;
        goto label_163f10;
    }
    ctx->pc = 0x163F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x163F10u);
        ctx->pc = 0x163F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F08u;
        // 0x163f0c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163F08u, 0x163F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163F10u;
label_163f10:
    // 0x163f10: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x163f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_163f14:
    // 0x163f14: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x163f14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_163f18:
    // 0x163f18: 0x10000018  b           . + 4 + (0x18 << 2)
label_163f1c:
    if (ctx->pc == 0x163F1Cu) {
        ctx->pc = 0x163F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F18u;
        // 0x163f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163F20u;
        goto label_163f20;
    }
    ctx->pc = 0x163F18u;
    {
        const bool branch_taken_0x163f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F18u;
        // 0x163f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f18) {
            ctx->pc = 0x163F7Cu;
            goto label_163f7c;
        }
    }
    ctx->pc = 0x163F20u;
label_163f20:
    // 0x163f20: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x163f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_163f24:
    // 0x163f24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x163f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_163f28:
    // 0x163f28: 0x8c66b830  lw          $a2, -0x47D0($v1)
    ctx->pc = 0x163f28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948912)));
label_163f2c:
    // 0x163f2c: 0x8f858a30  lw          $a1, -0x75D0($gp)
    ctx->pc = 0x163f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
label_163f30:
    // 0x163f30: 0x8cc40040  lw          $a0, 0x40($a2)
    ctx->pc = 0x163f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
label_163f34:
    // 0x163f34: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x163f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
label_163f38:
    // 0x163f38: 0xc066810  jal         func_19A040
label_163f3c:
    if (ctx->pc == 0x163F3Cu) {
        ctx->pc = 0x163F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F38u;
        // 0x163f3c: 0xae240254  sw          $a0, 0x254($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163F40u;
        goto label_163f40;
    }
    ctx->pc = 0x163F38u;
    SET_GPR_U32(ctx, 31, 0x163F40u);
    ctx->pc = 0x163F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163F38u;
    // 0x163f3c: 0xae240254  sw          $a0, 0x254($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A040u, 0x163F38u, 0x163F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163F40u;
label_163f40:
    // 0x163f40: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x163f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_163f44:
    // 0x163f44: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x163f44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_163f48:
    // 0x163f48: 0x1000000c  b           . + 4 + (0xC << 2)
label_163f4c:
    if (ctx->pc == 0x163F4Cu) {
        ctx->pc = 0x163F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F48u;
        // 0x163f4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163F50u;
        goto label_163f50;
    }
    ctx->pc = 0x163F48u;
    {
        const bool branch_taken_0x163f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F48u;
        // 0x163f4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f48) {
            ctx->pc = 0x163F7Cu;
            goto label_163f7c;
        }
    }
    ctx->pc = 0x163F50u;
label_163f50:
    // 0x163f50: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x163f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_163f54:
    // 0x163f54: 0x38a5000b  xori        $a1, $a1, 0xB
    ctx->pc = 0x163f54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)11);
label_163f58:
    // 0x163f58: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x163f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_163f5c:
    // 0x163f5c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x163f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_163f60:
    // 0x163f60: 0x8c863630  lw          $a2, 0x3630($a0)
    ctx->pc = 0x163f60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 13872)));
label_163f64:
    // 0x163f64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_163f68:
    // 0x163f68: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x163f68u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_163f6c:
    // 0x163f6c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x163f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_163f70:
    // 0x163f70: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x163f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
label_163f74:
    // 0x163f74: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x163f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_163f78:
    // 0x163f78: 0xae260254  sw          $a2, 0x254($s1)
    ctx->pc = 0x163f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 6));
label_163f7c:
    // 0x163f7c: 0x34a50101  ori         $a1, $a1, 0x101
    ctx->pc = 0x163f7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)257);
label_163f80:
    // 0x163f80: 0xc06164c  jal         func_185930
label_163f84:
    if (ctx->pc == 0x163F84u) {
        ctx->pc = 0x163F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F80u;
        // 0x163f84: 0x245038e8  addiu       $s0, $v0, 0x38E8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163F88u;
        goto label_163f88;
    }
    ctx->pc = 0x163F80u;
    SET_GPR_U32(ctx, 31, 0x163F88u);
    ctx->pc = 0x163F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163F80u;
    // 0x163f84: 0x245038e8  addiu       $s0, $v0, 0x38E8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x163F80u, 0x163F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163F88u;
label_163f88:
    // 0x163f88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x163f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163f8c:
    // 0x163f8c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x163f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_163f90:
    // 0x163f90: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_163f94:
    if (ctx->pc == 0x163F94u) {
        ctx->pc = 0x163F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F90u;
        // 0x163f94: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163F98u;
        goto label_163f98;
    }
    ctx->pc = 0x163F90u;
    {
        const bool branch_taken_0x163f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163f90) {
            ctx->pc = 0x163F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163F90u;
            // 0x163f94: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163FC4u;
            goto label_163fc4;
        }
    }
    ctx->pc = 0x163F98u;
label_163f98:
    // 0x163f98: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x163f98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_163f9c:
    // 0x163f9c: 0x10182b  sltu        $v1, $zero, $s0
    ctx->pc = 0x163f9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_163fa0:
    // 0x163fa0: 0xac91001c  sw          $s1, 0x1C($a0)
    ctx->pc = 0x163fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 17));
label_163fa4:
    // 0x163fa4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x163fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_163fa8:
    // 0x163fa8: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x163fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
label_163fac:
    // 0x163fac: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x163facu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_163fb0:
    // 0x163fb0: 0xac900018  sw          $s0, 0x18($a0)
    ctx->pc = 0x163fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 16));
label_163fb4:
    // 0x163fb4: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x163fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
label_163fb8:
    // 0x163fb8: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x163fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
label_163fbc:
    // 0x163fbc: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x163fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_163fc0:
    // 0x163fc0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x163fc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_163fc4:
    // 0x163fc4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x163fc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_163fc8:
    // 0x163fc8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x163fc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_163fcc:
    // 0x163fcc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x163fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_163fd0:
    // 0x163fd0: 0x3e00008  jr          $ra
label_163fd4:
    if (ctx->pc == 0x163FD4u) {
        ctx->pc = 0x163FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163FD0u;
        // 0x163fd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163FD8u;
        goto label_fallthrough_0x163fd0;
    }
    ctx->pc = 0x163FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163FD0u;
        // 0x163fd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x163fd0:
    ctx->pc = 0x163FD8u;
}
