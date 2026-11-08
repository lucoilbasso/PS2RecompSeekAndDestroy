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

// Function: DrawSort__8WcMulobjP8WcEntity
// Address: 0x197cd0 - 0x197de8
void DrawSort__8WcMulobjP8WcEntity_0x197cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSort__8WcMulobjP8WcEntity_0x197cd0");
#endif

    switch (ctx->pc) {
        case 0x197d08u: goto label_197d08;
        case 0x197d24u: goto label_197d24;
        case 0x197d2cu: goto label_197d2c;
        case 0x197d54u: goto label_197d54;
        case 0x197d68u: goto label_197d68;
        default: break;
    }

    ctx->pc = 0x197cd0u;

    // 0x197cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x197cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x197cd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x197cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x197cd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x197cd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197cdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x197cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x197ce0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x197ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x197ce4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x197ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x197ce8: 0x8e2401b0  lw          $a0, 0x1B0($s1)
    ctx->pc = 0x197ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x197cec: 0x10800038  beqz        $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x197CECu;
    {
        const bool branch_taken_0x197cec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x197CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CECu;
        // 0x197cf0: 0x8cb2015c  lw          $s2, 0x15C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197cec) {
            ctx->pc = 0x197DD0u;
            goto label_197dd0;
        }
    }
    ctx->pc = 0x197CF4u;
    // 0x197cf4: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x197cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x197cf8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x197CF8u;
    {
        const bool branch_taken_0x197cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197cf8) {
            ctx->pc = 0x197CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197CF8u;
            // 0x197cfc: 0x8e220160  lw          $v0, 0x160($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197D40u;
            goto label_197d40;
        }
    }
    ctx->pc = 0x197D00u;
    // 0x197d00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x197d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197d04: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x197d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_197d08:
    // 0x197d08: 0x24910020  addiu       $s1, $a0, 0x20
    ctx->pc = 0x197d08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x197d0c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x197d0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x197d10: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x197d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x197d14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197D14u;
    {
        const bool branch_taken_0x197d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197d14) {
            ctx->pc = 0x197D24u;
            goto label_197d24;
        }
    }
    ctx->pc = 0x197D1Cu;
    // 0x197d1c: 0xc061920  jal         func_186480
    ctx->pc = 0x197D1Cu;
    SET_GPR_U32(ctx, 31, 0x197D24u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x197D1Cu, 0x197D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D24u;
label_197d24:
    // 0x197d24: 0xc061422  jal         func_185088
    ctx->pc = 0x197D24u;
    SET_GPR_U32(ctx, 31, 0x197D2Cu);
    ctx->pc = 0x197D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197D24u;
    // 0x197d28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x197D24u, 0x197D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D2Cu;
label_197d2c:
    // 0x197d2c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x197d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x197d30: 0x5600fff5  bnel        $s0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x197D30u;
    {
        const bool branch_taken_0x197d30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x197d30) {
            ctx->pc = 0x197D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197D30u;
            // 0x197d34: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197d08;
        }
    }
    ctx->pc = 0x197D38u;
    // 0x197d38: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x197D38u;
    {
        const bool branch_taken_0x197d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D38u;
        // 0x197d3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d38) {
            ctx->pc = 0x197DD4u;
            goto label_197dd4;
        }
    }
    ctx->pc = 0x197D40u;
label_197d40:
    // 0x197d40: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x197D40u;
    {
        const bool branch_taken_0x197d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197d40) {
            ctx->pc = 0x197D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197D40u;
            // 0x197d44: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197D7Cu;
            goto label_197d7c;
        }
    }
    ctx->pc = 0x197D48u;
    // 0x197d48: 0x8e240194  lw          $a0, 0x194($s1)
    ctx->pc = 0x197d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x197d4c: 0xc05fec2  jal         func_17FB08
    ctx->pc = 0x197D4Cu;
    SET_GPR_U32(ctx, 31, 0x197D54u);
    ctx->pc = 0x197D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197D4Cu;
    // 0x197d50: 0x26300160  addiu       $s0, $s1, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB08u, 0x197D4Cu, 0x197D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D54u;
label_197d54:
    // 0x197d54: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x197d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x197d58: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197D58u;
    {
        const bool branch_taken_0x197d58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D58u;
        // 0x197d5c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d58) {
            ctx->pc = 0x197D68u;
            goto label_197d68;
        }
    }
    ctx->pc = 0x197D60u;
    // 0x197d60: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x197D60u;
    SET_GPR_U32(ctx, 31, 0x197D68u);
    ctx->pc = 0x197D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197D60u;
    // 0x197d64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x197D60u, 0x197D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D68u;
label_197d68:
    // 0x197d68: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x197d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x197d6c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x197d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x197d70: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x197d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x197d74: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x197d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x197d78: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x197d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_197d7c:
    // 0x197d7c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x197d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x197d80: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x197d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x197d84: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x197D84u;
    {
        const bool branch_taken_0x197d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D84u;
        // 0x197d88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d84) {
            ctx->pc = 0x197DD4u;
            goto label_197dd4;
        }
    }
    ctx->pc = 0x197D8Cu;
    // 0x197d8c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x197d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x197d90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x197d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197d94: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x197d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x197d98: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x197d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x197d9c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x197D9Cu;
    {
        const bool branch_taken_0x197d9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x197DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D9Cu;
        // 0x197da0: 0x2465fffe  addiu       $a1, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d9c) {
            ctx->pc = 0x197DB8u;
            goto label_197db8;
        }
    }
    ctx->pc = 0x197DA4u;
    // 0x197da4: 0x8e22012c  lw          $v0, 0x12C($s1)
    ctx->pc = 0x197da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x197da8: 0x2182a  slt         $v1, $zero, $v0
    ctx->pc = 0x197da8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x197dac: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x197dacu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x197db0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x197db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x197db4: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x197db4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_197db8:
    // 0x197db8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x197db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x197dbc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x197dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x197dc0: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x197dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x197dc4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x197dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197dc8: 0xae230130  sw          $v1, 0x130($s1)
    ctx->pc = 0x197dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 3));
    // 0x197dcc: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x197dccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_197dd0:
    // 0x197dd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x197dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_197dd4:
    // 0x197dd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x197dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x197dd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x197dd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197ddc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x197ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197de0: 0x3e00008  jr          $ra
    ctx->pc = 0x197DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DE0u;
        // 0x197de4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197DE8u;
}
