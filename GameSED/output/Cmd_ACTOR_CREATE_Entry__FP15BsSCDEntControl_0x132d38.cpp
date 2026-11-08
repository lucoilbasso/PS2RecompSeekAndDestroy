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

// Function: Cmd_ACTOR_CREATE_Entry__FP15BsSCDEntControl
// Address: 0x132d38 - 0x132fc0
void Cmd_ACTOR_CREATE_Entry__FP15BsSCDEntControl_0x132d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ACTOR_CREATE_Entry__FP15BsSCDEntControl_0x132d38");
#endif

    switch (ctx->pc) {
        case 0x132d38u: goto label_132d38;
        case 0x132d3cu: goto label_132d3c;
        case 0x132d40u: goto label_132d40;
        case 0x132d44u: goto label_132d44;
        case 0x132d48u: goto label_132d48;
        case 0x132d4cu: goto label_132d4c;
        case 0x132d50u: goto label_132d50;
        case 0x132d54u: goto label_132d54;
        case 0x132d58u: goto label_132d58;
        case 0x132d5cu: goto label_132d5c;
        case 0x132d60u: goto label_132d60;
        case 0x132d64u: goto label_132d64;
        case 0x132d68u: goto label_132d68;
        case 0x132d6cu: goto label_132d6c;
        case 0x132d70u: goto label_132d70;
        case 0x132d74u: goto label_132d74;
        case 0x132d78u: goto label_132d78;
        case 0x132d7cu: goto label_132d7c;
        case 0x132d80u: goto label_132d80;
        case 0x132d84u: goto label_132d84;
        case 0x132d88u: goto label_132d88;
        case 0x132d8cu: goto label_132d8c;
        case 0x132d90u: goto label_132d90;
        case 0x132d94u: goto label_132d94;
        case 0x132d98u: goto label_132d98;
        case 0x132d9cu: goto label_132d9c;
        case 0x132da0u: goto label_132da0;
        case 0x132da4u: goto label_132da4;
        case 0x132da8u: goto label_132da8;
        case 0x132dacu: goto label_132dac;
        case 0x132db0u: goto label_132db0;
        case 0x132db4u: goto label_132db4;
        case 0x132db8u: goto label_132db8;
        case 0x132dbcu: goto label_132dbc;
        case 0x132dc0u: goto label_132dc0;
        case 0x132dc4u: goto label_132dc4;
        case 0x132dc8u: goto label_132dc8;
        case 0x132dccu: goto label_132dcc;
        case 0x132dd0u: goto label_132dd0;
        case 0x132dd4u: goto label_132dd4;
        case 0x132dd8u: goto label_132dd8;
        case 0x132ddcu: goto label_132ddc;
        case 0x132de0u: goto label_132de0;
        case 0x132de4u: goto label_132de4;
        case 0x132de8u: goto label_132de8;
        case 0x132decu: goto label_132dec;
        case 0x132df0u: goto label_132df0;
        case 0x132df4u: goto label_132df4;
        case 0x132df8u: goto label_132df8;
        case 0x132dfcu: goto label_132dfc;
        case 0x132e00u: goto label_132e00;
        case 0x132e04u: goto label_132e04;
        case 0x132e08u: goto label_132e08;
        case 0x132e0cu: goto label_132e0c;
        case 0x132e10u: goto label_132e10;
        case 0x132e14u: goto label_132e14;
        case 0x132e18u: goto label_132e18;
        case 0x132e1cu: goto label_132e1c;
        case 0x132e20u: goto label_132e20;
        case 0x132e24u: goto label_132e24;
        case 0x132e28u: goto label_132e28;
        case 0x132e2cu: goto label_132e2c;
        case 0x132e30u: goto label_132e30;
        case 0x132e34u: goto label_132e34;
        case 0x132e38u: goto label_132e38;
        case 0x132e3cu: goto label_132e3c;
        case 0x132e40u: goto label_132e40;
        case 0x132e44u: goto label_132e44;
        case 0x132e48u: goto label_132e48;
        case 0x132e4cu: goto label_132e4c;
        case 0x132e50u: goto label_132e50;
        case 0x132e54u: goto label_132e54;
        case 0x132e58u: goto label_132e58;
        case 0x132e5cu: goto label_132e5c;
        case 0x132e60u: goto label_132e60;
        case 0x132e64u: goto label_132e64;
        case 0x132e68u: goto label_132e68;
        case 0x132e6cu: goto label_132e6c;
        case 0x132e70u: goto label_132e70;
        case 0x132e74u: goto label_132e74;
        case 0x132e78u: goto label_132e78;
        case 0x132e7cu: goto label_132e7c;
        case 0x132e80u: goto label_132e80;
        case 0x132e84u: goto label_132e84;
        case 0x132e88u: goto label_132e88;
        case 0x132e8cu: goto label_132e8c;
        case 0x132e90u: goto label_132e90;
        case 0x132e94u: goto label_132e94;
        case 0x132e98u: goto label_132e98;
        case 0x132e9cu: goto label_132e9c;
        case 0x132ea0u: goto label_132ea0;
        case 0x132ea4u: goto label_132ea4;
        case 0x132ea8u: goto label_132ea8;
        case 0x132eacu: goto label_132eac;
        case 0x132eb0u: goto label_132eb0;
        case 0x132eb4u: goto label_132eb4;
        case 0x132eb8u: goto label_132eb8;
        case 0x132ebcu: goto label_132ebc;
        case 0x132ec0u: goto label_132ec0;
        case 0x132ec4u: goto label_132ec4;
        case 0x132ec8u: goto label_132ec8;
        case 0x132eccu: goto label_132ecc;
        case 0x132ed0u: goto label_132ed0;
        case 0x132ed4u: goto label_132ed4;
        case 0x132ed8u: goto label_132ed8;
        case 0x132edcu: goto label_132edc;
        case 0x132ee0u: goto label_132ee0;
        case 0x132ee4u: goto label_132ee4;
        case 0x132ee8u: goto label_132ee8;
        case 0x132eecu: goto label_132eec;
        case 0x132ef0u: goto label_132ef0;
        case 0x132ef4u: goto label_132ef4;
        case 0x132ef8u: goto label_132ef8;
        case 0x132efcu: goto label_132efc;
        case 0x132f00u: goto label_132f00;
        case 0x132f04u: goto label_132f04;
        case 0x132f08u: goto label_132f08;
        case 0x132f0cu: goto label_132f0c;
        case 0x132f10u: goto label_132f10;
        case 0x132f14u: goto label_132f14;
        case 0x132f18u: goto label_132f18;
        case 0x132f1cu: goto label_132f1c;
        case 0x132f20u: goto label_132f20;
        case 0x132f24u: goto label_132f24;
        case 0x132f28u: goto label_132f28;
        case 0x132f2cu: goto label_132f2c;
        case 0x132f30u: goto label_132f30;
        case 0x132f34u: goto label_132f34;
        case 0x132f38u: goto label_132f38;
        case 0x132f3cu: goto label_132f3c;
        case 0x132f40u: goto label_132f40;
        case 0x132f44u: goto label_132f44;
        case 0x132f48u: goto label_132f48;
        case 0x132f4cu: goto label_132f4c;
        case 0x132f50u: goto label_132f50;
        case 0x132f54u: goto label_132f54;
        case 0x132f58u: goto label_132f58;
        case 0x132f5cu: goto label_132f5c;
        case 0x132f60u: goto label_132f60;
        case 0x132f64u: goto label_132f64;
        case 0x132f68u: goto label_132f68;
        case 0x132f6cu: goto label_132f6c;
        case 0x132f70u: goto label_132f70;
        case 0x132f74u: goto label_132f74;
        case 0x132f78u: goto label_132f78;
        case 0x132f7cu: goto label_132f7c;
        case 0x132f80u: goto label_132f80;
        case 0x132f84u: goto label_132f84;
        case 0x132f88u: goto label_132f88;
        case 0x132f8cu: goto label_132f8c;
        case 0x132f90u: goto label_132f90;
        case 0x132f94u: goto label_132f94;
        case 0x132f98u: goto label_132f98;
        case 0x132f9cu: goto label_132f9c;
        case 0x132fa0u: goto label_132fa0;
        case 0x132fa4u: goto label_132fa4;
        case 0x132fa8u: goto label_132fa8;
        case 0x132facu: goto label_132fac;
        case 0x132fb0u: goto label_132fb0;
        case 0x132fb4u: goto label_132fb4;
        case 0x132fb8u: goto label_132fb8;
        case 0x132fbcu: goto label_132fbc;
        default: break;
    }

    ctx->pc = 0x132d38u;

label_132d38:
    // 0x132d38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x132d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_132d3c:
    // 0x132d3c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x132d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_132d40:
    // 0x132d40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x132d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_132d44:
    // 0x132d44: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x132d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_132d48:
    // 0x132d48: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x132d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_132d4c:
    // 0x132d4c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x132d4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132d50:
    // 0x132d50: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x132d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_132d54:
    // 0x132d54: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x132d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_132d58:
    // 0x132d58: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x132d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_132d5c:
    // 0x132d5c: 0x8e120024  lw          $s2, 0x24($s0)
    ctx->pc = 0x132d5cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_132d60:
    // 0x132d60: 0xc06a26e  jal         func_1A89B8
label_132d64:
    if (ctx->pc == 0x132D64u) {
        ctx->pc = 0x132D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132D60u;
        // 0x132d64: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132D68u;
        goto label_132d68;
    }
    ctx->pc = 0x132D60u;
    SET_GPR_U32(ctx, 31, 0x132D68u);
    ctx->pc = 0x132D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132D60u;
    // 0x132d64: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x132D60u, 0x132D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D68u;
label_132d68:
    // 0x132d68: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x132d68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132d6c:
    // 0x132d6c: 0xc06a26e  jal         func_1A89B8
label_132d70:
    if (ctx->pc == 0x132D70u) {
        ctx->pc = 0x132D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132D6Cu;
        // 0x132d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132D74u;
        goto label_132d74;
    }
    ctx->pc = 0x132D6Cu;
    SET_GPR_U32(ctx, 31, 0x132D74u);
    ctx->pc = 0x132D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132D6Cu;
    // 0x132d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x132D6Cu, 0x132D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D74u;
label_132d74:
    // 0x132d74: 0x2e630005  sltiu       $v1, $s3, 0x5
    ctx->pc = 0x132d74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_132d78:
    // 0x132d78: 0x10600086  beqz        $v1, . + 4 + (0x86 << 2)
label_132d7c:
    if (ctx->pc == 0x132D7Cu) {
        ctx->pc = 0x132D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132D78u;
        // 0x132d7c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132D80u;
        goto label_132d80;
    }
    ctx->pc = 0x132D78u;
    {
        const bool branch_taken_0x132d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x132D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132D78u;
        // 0x132d7c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132d78) {
            ctx->pc = 0x132F94u;
            goto label_132f94;
        }
    }
    ctx->pc = 0x132D80u;
label_132d80:
    // 0x132d80: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x132d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_132d84:
    // 0x132d84: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x132d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_132d88:
    // 0x132d88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x132d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_132d8c:
    // 0x132d8c: 0x8c6363d0  lw          $v1, 0x63D0($v1)
    ctx->pc = 0x132d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25552)));
label_132d90:
    // 0x132d90: 0x600008  jr          $v1
label_132d94:
    if (ctx->pc == 0x132D94u) {
        ctx->pc = 0x132D98u;
        goto label_132d98;
    }
    ctx->pc = 0x132D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132D98u: goto label_132d98;
            case 0x132DA8u: goto label_132da8;
            case 0x132E00u: goto label_132e00;
            case 0x132E60u: goto label_132e60;
            case 0x132EC8u: goto label_132ec8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132D90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x132D98u;
label_132d98:
    // 0x132d98: 0xc06678e  jal         func_199E38
label_132d9c:
    if (ctx->pc == 0x132D9Cu) {
        ctx->pc = 0x132DA0u;
        goto label_132da0;
    }
    ctx->pc = 0x132D98u;
    SET_GPR_U32(ctx, 31, 0x132DA0u);
    ctx->pc = 0x199E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199E38u, 0x132D98u, 0x132DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132DA0u;
label_132da0:
    // 0x132da0: 0x10000004  b           . + 4 + (0x4 << 2)
label_132da4:
    if (ctx->pc == 0x132DA4u) {
        ctx->pc = 0x132DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DA0u;
        // 0x132da4: 0x8e24007c  lw          $a0, 0x7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132DA8u;
        goto label_132da8;
    }
    ctx->pc = 0x132DA0u;
    {
        const bool branch_taken_0x132da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DA0u;
        // 0x132da4: 0x8e24007c  lw          $a0, 0x7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132da0) {
            ctx->pc = 0x132DB4u;
            goto label_132db4;
        }
    }
    ctx->pc = 0x132DA8u;
label_132da8:
    // 0x132da8: 0xc06696c  jal         func_19A5B0
label_132dac:
    if (ctx->pc == 0x132DACu) {
        ctx->pc = 0x132DB0u;
        goto label_132db0;
    }
    ctx->pc = 0x132DA8u;
    SET_GPR_U32(ctx, 31, 0x132DB0u);
    ctx->pc = 0x19A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A5B0u, 0x132DA8u, 0x132DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132DB0u;
label_132db0:
    // 0x132db0: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x132db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_132db4:
    // 0x132db4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x132db4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132db8:
    // 0x132db8: 0xc0684de  jal         func_1A1378
label_132dbc:
    if (ctx->pc == 0x132DBCu) {
        ctx->pc = 0x132DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DB8u;
        // 0x132dbc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132DC0u;
        goto label_132dc0;
    }
    ctx->pc = 0x132DB8u;
    SET_GPR_U32(ctx, 31, 0x132DC0u);
    ctx->pc = 0x132DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132DB8u;
    // 0x132dbc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1378u, 0x132DB8u, 0x132DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132DC0u;
label_132dc0:
    // 0x132dc0: 0x14400075  bnez        $v0, . + 4 + (0x75 << 2)
label_132dc4:
    if (ctx->pc == 0x132DC4u) {
        ctx->pc = 0x132DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DC0u;
        // 0x132dc4: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132DC8u;
        goto label_132dc8;
    }
    ctx->pc = 0x132DC0u;
    {
        const bool branch_taken_0x132dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DC0u;
        // 0x132dc4: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132dc0) {
            ctx->pc = 0x132F98u;
            goto label_132f98;
        }
    }
    ctx->pc = 0x132DC8u;
label_132dc8:
    // 0x132dc8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x132dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_132dcc:
    // 0x132dcc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x132dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_132dd0:
    // 0x132dd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x132dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132dd4:
    // 0x132dd4: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x132dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_132dd8:
    // 0x132dd8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x132dd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_132ddc:
    // 0x132ddc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x132ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_132de0:
    // 0x132de0: 0x60f809  jalr        $v1
label_132de4:
    if (ctx->pc == 0x132DE4u) {
        ctx->pc = 0x132DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DE0u;
        // 0x132de4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132DE8u;
        goto label_132de8;
    }
    ctx->pc = 0x132DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x132DE8u);
        ctx->pc = 0x132DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DE0u;
        // 0x132de4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132DE0u, 0x132DE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x132DE8u;
label_132de8:
    // 0x132de8: 0x2624007c  addiu       $a0, $s1, 0x7C
    ctx->pc = 0x132de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
label_132dec:
    // 0x132dec: 0xc0683b6  jal         func_1A0ED8
label_132df0:
    if (ctx->pc == 0x132DF0u) {
        ctx->pc = 0x132DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DECu;
        // 0x132df0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132DF4u;
        goto label_132df4;
    }
    ctx->pc = 0x132DECu;
    SET_GPR_U32(ctx, 31, 0x132DF4u);
    ctx->pc = 0x132DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132DECu;
    // 0x132df0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x132DECu, 0x132DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132DF4u;
label_132df4:
    // 0x132df4: 0x10000068  b           . + 4 + (0x68 << 2)
label_132df8:
    if (ctx->pc == 0x132DF8u) {
        ctx->pc = 0x132DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DF4u;
        // 0x132df8: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132DFCu;
        goto label_132dfc;
    }
    ctx->pc = 0x132DF4u;
    {
        const bool branch_taken_0x132df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DF4u;
        // 0x132df8: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132df4) {
            ctx->pc = 0x132F98u;
            goto label_132f98;
        }
    }
    ctx->pc = 0x132DFCu;
label_132dfc:
    // 0x132dfc: 0x0  nop
    ctx->pc = 0x132dfcu;
    // NOP
label_132e00:
    // 0x132e00: 0x8e510048  lw          $s1, 0x48($s2)
    ctx->pc = 0x132e00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_132e04:
    // 0x132e04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x132e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_132e08:
    // 0x132e08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x132e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132e0c:
    // 0x132e0c: 0xc04e354  jal         func_138D50
label_132e10:
    if (ctx->pc == 0x132E10u) {
        ctx->pc = 0x132E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E0Cu;
        // 0x132e10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132E14u;
        goto label_132e14;
    }
    ctx->pc = 0x132E0Cu;
    SET_GPR_U32(ctx, 31, 0x132E14u);
    ctx->pc = 0x132E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132E0Cu;
    // 0x132e10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138D50u, 0x132E0Cu, 0x132E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E14u;
label_132e14:
    // 0x132e14: 0x24040118  addiu       $a0, $zero, 0x118
    ctx->pc = 0x132e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
label_132e18:
    // 0x132e18: 0x8fb20000  lw          $s2, 0x0($sp)
    ctx->pc = 0x132e18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_132e1c:
    // 0x132e1c: 0xc0682b2  jal         func_1A0AC8
label_132e20:
    if (ctx->pc == 0x132E20u) {
        ctx->pc = 0x132E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E1Cu;
        // 0x132e20: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132E24u;
        goto label_132e24;
    }
    ctx->pc = 0x132E1Cu;
    SET_GPR_U32(ctx, 31, 0x132E24u);
    ctx->pc = 0x132E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132E1Cu;
    // 0x132e20: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x132E1Cu, 0x132E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E24u;
label_132e24:
    // 0x132e24: 0xc0682b6  jal         func_1A0AD8
label_132e28:
    if (ctx->pc == 0x132E28u) {
        ctx->pc = 0x132E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E24u;
        // 0x132e28: 0x24040260  addiu       $a0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132E2Cu;
        goto label_132e2c;
    }
    ctx->pc = 0x132E24u;
    SET_GPR_U32(ctx, 31, 0x132E2Cu);
    ctx->pc = 0x132E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132E24u;
    // 0x132e28: 0x24040260  addiu       $a0, $zero, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x132E24u, 0x132E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E2Cu;
label_132e2c:
    // 0x132e2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x132e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_132e30:
    // 0x132e30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x132e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132e34:
    // 0x132e34: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x132e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_132e38:
    // 0x132e38: 0x2442ef68  addiu       $v0, $v0, -0x1098
    ctx->pc = 0x132e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963048));
label_132e3c:
    // 0x132e3c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x132e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_132e40:
    // 0x132e40: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x132e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_132e44:
    // 0x132e44: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x132e44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_132e48:
    // 0x132e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132e4c:
    // 0x132e4c: 0xc0529f0  jal         func_14A7C0
label_132e50:
    if (ctx->pc == 0x132E50u) {
        ctx->pc = 0x132E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E4Cu;
        // 0x132e50: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132E54u;
        goto label_132e54;
    }
    ctx->pc = 0x132E4Cu;
    SET_GPR_U32(ctx, 31, 0x132E54u);
    ctx->pc = 0x132E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132E4Cu;
    // 0x132e50: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A7C0u, 0x132E4Cu, 0x132E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E54u;
label_132e54:
    // 0x132e54: 0x10000018  b           . + 4 + (0x18 << 2)
label_132e58:
    if (ctx->pc == 0x132E58u) {
        ctx->pc = 0x132E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E54u;
        // 0x132e58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132E5Cu;
        goto label_132e5c;
    }
    ctx->pc = 0x132E54u;
    {
        const bool branch_taken_0x132e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E54u;
        // 0x132e58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132e54) {
            ctx->pc = 0x132EB8u;
            goto label_132eb8;
        }
    }
    ctx->pc = 0x132E5Cu;
label_132e5c:
    // 0x132e5c: 0x0  nop
    ctx->pc = 0x132e5cu;
    // NOP
label_132e60:
    // 0x132e60: 0x8e510048  lw          $s1, 0x48($s2)
    ctx->pc = 0x132e60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_132e64:
    // 0x132e64: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x132e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_132e68:
    // 0x132e68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x132e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132e6c:
    // 0x132e6c: 0xc04e354  jal         func_138D50
label_132e70:
    if (ctx->pc == 0x132E70u) {
        ctx->pc = 0x132E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E6Cu;
        // 0x132e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132E74u;
        goto label_132e74;
    }
    ctx->pc = 0x132E6Cu;
    SET_GPR_U32(ctx, 31, 0x132E74u);
    ctx->pc = 0x132E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132E6Cu;
    // 0x132e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138D50u, 0x132E6Cu, 0x132E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E74u;
label_132e74:
    // 0x132e74: 0x24041118  addiu       $a0, $zero, 0x1118
    ctx->pc = 0x132e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
label_132e78:
    // 0x132e78: 0x8fb20000  lw          $s2, 0x0($sp)
    ctx->pc = 0x132e78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_132e7c:
    // 0x132e7c: 0xc0682b2  jal         func_1A0AC8
label_132e80:
    if (ctx->pc == 0x132E80u) {
        ctx->pc = 0x132E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E7Cu;
        // 0x132e80: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132E84u;
        goto label_132e84;
    }
    ctx->pc = 0x132E7Cu;
    SET_GPR_U32(ctx, 31, 0x132E84u);
    ctx->pc = 0x132E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132E7Cu;
    // 0x132e80: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x132E7Cu, 0x132E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E84u;
label_132e84:
    // 0x132e84: 0xc0682b6  jal         func_1A0AD8
label_132e88:
    if (ctx->pc == 0x132E88u) {
        ctx->pc = 0x132E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E84u;
        // 0x132e88: 0x240408b0  addiu       $a0, $zero, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132E8Cu;
        goto label_132e8c;
    }
    ctx->pc = 0x132E84u;
    SET_GPR_U32(ctx, 31, 0x132E8Cu);
    ctx->pc = 0x132E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132E84u;
    // 0x132e88: 0x240408b0  addiu       $a0, $zero, 0x8B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x132E84u, 0x132E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E8Cu;
label_132e8c:
    // 0x132e8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x132e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_132e90:
    // 0x132e90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x132e90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132e94:
    // 0x132e94: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x132e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_132e98:
    // 0x132e98: 0x2442f038  addiu       $v0, $v0, -0xFC8
    ctx->pc = 0x132e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963256));
label_132e9c:
    // 0x132e9c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x132e9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_132ea0:
    // 0x132ea0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x132ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_132ea4:
    // 0x132ea4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x132ea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_132ea8:
    // 0x132ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132eac:
    // 0x132eac: 0xc053508  jal         func_14D420
label_132eb0:
    if (ctx->pc == 0x132EB0u) {
        ctx->pc = 0x132EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132EACu;
        // 0x132eb0: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132EB4u;
        goto label_132eb4;
    }
    ctx->pc = 0x132EACu;
    SET_GPR_U32(ctx, 31, 0x132EB4u);
    ctx->pc = 0x132EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132EACu;
    // 0x132eb0: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D420u, 0x132EACu, 0x132EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132EB4u;
label_132eb4:
    // 0x132eb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132eb8:
    // 0x132eb8: 0xc06825c  jal         func_1A0970
label_132ebc:
    if (ctx->pc == 0x132EBCu) {
        ctx->pc = 0x132EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132EB8u;
        // 0x132ebc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132EC0u;
        goto label_132ec0;
    }
    ctx->pc = 0x132EB8u;
    SET_GPR_U32(ctx, 31, 0x132EC0u);
    ctx->pc = 0x132EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132EB8u;
    // 0x132ebc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x132EB8u, 0x132EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132EC0u;
label_132ec0:
    // 0x132ec0: 0x10000035  b           . + 4 + (0x35 << 2)
label_132ec4:
    if (ctx->pc == 0x132EC4u) {
        ctx->pc = 0x132EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132EC0u;
        // 0x132ec4: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132EC8u;
        goto label_132ec8;
    }
    ctx->pc = 0x132EC0u;
    {
        const bool branch_taken_0x132ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132EC0u;
        // 0x132ec4: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132ec0) {
            ctx->pc = 0x132F98u;
            goto label_132f98;
        }
    }
    ctx->pc = 0x132EC8u;
label_132ec8:
    // 0x132ec8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x132ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_132ecc:
    // 0x132ecc: 0x8e520048  lw          $s2, 0x48($s2)
    ctx->pc = 0x132eccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_132ed0:
    // 0x132ed0: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x132ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_132ed4:
    // 0x132ed4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x132ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_132ed8:
    // 0x132ed8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x132ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_132edc:
    // 0x132edc: 0x8c71fff0  lw          $s1, -0x10($v1)
    ctx->pc = 0x132edcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_132ee0:
    // 0x132ee0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x132ee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_132ee4:
    // 0x132ee4: 0x38420018  xori        $v0, $v0, 0x18
    ctx->pc = 0x132ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)24);
label_132ee8:
    // 0x132ee8: 0xc04e346  jal         func_138D18
label_132eec:
    if (ctx->pc == 0x132EECu) {
        ctx->pc = 0x132EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132EE8u;
        // 0x132eec: 0x2880b  movn        $s1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132EF0u;
        goto label_132ef0;
    }
    ctx->pc = 0x132EE8u;
    SET_GPR_U32(ctx, 31, 0x132EF0u);
    ctx->pc = 0x132EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132EE8u;
    // 0x132eec: 0x2880b  movn        $s1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138D18u, 0x132EE8u, 0x132EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132EF0u;
label_132ef0:
    // 0x132ef0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x132ef0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132ef4:
    // 0x132ef4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x132ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_132ef8:
    // 0x132ef8: 0x8f838b2c  lw          $v1, -0x74D4($gp)
    ctx->pc = 0x132ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
label_132efc:
    // 0x132efc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_132f00:
    if (ctx->pc == 0x132F00u) {
        ctx->pc = 0x132F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132EFCu;
        // 0x132f00: 0x30530fff  andi        $s3, $v0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x132F04u;
        goto label_132f04;
    }
    ctx->pc = 0x132EFCu;
    {
        const bool branch_taken_0x132efc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x132F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132EFCu;
        // 0x132f00: 0x30530fff  andi        $s3, $v0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132efc) {
            ctx->pc = 0x132F48u;
            goto label_132f48;
        }
    }
    ctx->pc = 0x132F04u;
label_132f04:
    // 0x132f04: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x132f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
label_132f08:
    // 0x132f08: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x132f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_132f0c:
    // 0x132f0c: 0x8c63026c  lw          $v1, 0x26C($v1)
    ctx->pc = 0x132f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
label_132f10:
    // 0x132f10: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x132f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_132f14:
    // 0x132f14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x132f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_132f18:
    // 0x132f18: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x132f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_132f1c:
    // 0x132f1c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x132f1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_132f20:
    // 0x132f20: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x132f20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_132f24:
    // 0x132f24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132f28:
    // 0x132f28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x132f28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132f2c:
    // 0x132f2c: 0xaf828b30  sw          $v0, -0x74D0($gp)
    ctx->pc = 0x132f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 2));
label_132f30:
    // 0x132f30: 0xc055bb0  jal         func_156EC0
label_132f34:
    if (ctx->pc == 0x132F34u) {
        ctx->pc = 0x132F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132F30u;
        // 0x132f34: 0xaf838b2c  sw          $v1, -0x74D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132F38u;
        goto label_132f38;
    }
    ctx->pc = 0x132F30u;
    SET_GPR_U32(ctx, 31, 0x132F38u);
    ctx->pc = 0x132F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132F30u;
    // 0x132f34: 0xaf838b2c  sw          $v1, -0x74D4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156EC0u, 0x132F30u, 0x132F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F38u;
label_132f38:
    // 0x132f38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x132f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_132f3c:
    // 0x132f3c: 0x10000011  b           . + 4 + (0x11 << 2)
label_132f40:
    if (ctx->pc == 0x132F40u) {
        ctx->pc = 0x132F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132F3Cu;
        // 0x132f40: 0xae02026c  sw          $v0, 0x26C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132F44u;
        goto label_132f44;
    }
    ctx->pc = 0x132F3Cu;
    {
        const bool branch_taken_0x132f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132F3Cu;
        // 0x132f40: 0xae02026c  sw          $v0, 0x26C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132f3c) {
            ctx->pc = 0x132F84u;
            goto label_132f84;
        }
    }
    ctx->pc = 0x132F44u;
label_132f44:
    // 0x132f44: 0x0  nop
    ctx->pc = 0x132f44u;
    // NOP
label_132f48:
    // 0x132f48: 0xc0682b2  jal         func_1A0AC8
label_132f4c:
    if (ctx->pc == 0x132F4Cu) {
        ctx->pc = 0x132F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132F48u;
        // 0x132f4c: 0x24042118  addiu       $a0, $zero, 0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132F50u;
        goto label_132f50;
    }
    ctx->pc = 0x132F48u;
    SET_GPR_U32(ctx, 31, 0x132F50u);
    ctx->pc = 0x132F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132F48u;
    // 0x132f4c: 0x24042118  addiu       $a0, $zero, 0x2118 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x132F48u, 0x132F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F50u;
label_132f50:
    // 0x132f50: 0xc0682b6  jal         func_1A0AD8
label_132f54:
    if (ctx->pc == 0x132F54u) {
        ctx->pc = 0x132F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132F50u;
        // 0x132f54: 0x24040290  addiu       $a0, $zero, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132F58u;
        goto label_132f58;
    }
    ctx->pc = 0x132F50u;
    SET_GPR_U32(ctx, 31, 0x132F58u);
    ctx->pc = 0x132F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132F50u;
    // 0x132f54: 0x24040290  addiu       $a0, $zero, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x132F50u, 0x132F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F58u;
label_132f58:
    // 0x132f58: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x132f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_132f5c:
    // 0x132f5c: 0x2463f0d0  addiu       $v1, $v1, -0xF30
    ctx->pc = 0x132f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963408));
label_132f60:
    // 0x132f60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x132f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132f64:
    // 0x132f64: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x132f64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_132f68:
    // 0x132f68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x132f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_132f6c:
    // 0x132f6c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x132f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_132f70:
    // 0x132f70: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x132f70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_132f74:
    // 0x132f74: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x132f74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_132f78:
    // 0x132f78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132f7c:
    // 0x132f7c: 0xc055bb0  jal         func_156EC0
label_132f80:
    if (ctx->pc == 0x132F80u) {
        ctx->pc = 0x132F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132F7Cu;
        // 0x132f80: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132F84u;
        goto label_132f84;
    }
    ctx->pc = 0x132F7Cu;
    SET_GPR_U32(ctx, 31, 0x132F84u);
    ctx->pc = 0x132F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132F7Cu;
    // 0x132f80: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156EC0u, 0x132F7Cu, 0x132F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F84u;
label_132f84:
    // 0x132f84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132f88:
    // 0x132f88: 0xc06825c  jal         func_1A0970
label_132f8c:
    if (ctx->pc == 0x132F8Cu) {
        ctx->pc = 0x132F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132F88u;
        // 0x132f8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132F90u;
        goto label_132f90;
    }
    ctx->pc = 0x132F88u;
    SET_GPR_U32(ctx, 31, 0x132F90u);
    ctx->pc = 0x132F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132F88u;
    // 0x132f8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x132F88u, 0x132F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F90u;
label_132f90:
    // 0x132f90: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x132f90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132f94:
    // 0x132f94: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x132f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_132f98:
    // 0x132f98: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x132f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_132f9c:
    // 0x132f9c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x132f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_132fa0:
    // 0x132fa0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x132fa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_132fa4:
    // 0x132fa4: 0xac740040  sw          $s4, 0x40($v1)
    ctx->pc = 0x132fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 20));
label_132fa8:
    // 0x132fa8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x132fa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_132fac:
    // 0x132fac: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x132facu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_132fb0:
    // 0x132fb0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x132fb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_132fb4:
    // 0x132fb4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x132fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_132fb8:
    // 0x132fb8: 0x3e00008  jr          $ra
label_132fbc:
    if (ctx->pc == 0x132FBCu) {
        ctx->pc = 0x132FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132FB8u;
        // 0x132fbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132FC0u;
        goto label_fallthrough_0x132fb8;
    }
    ctx->pc = 0x132FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132FB8u;
        // 0x132fbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x132fb8:
    ctx->pc = 0x132FC0u;
}
