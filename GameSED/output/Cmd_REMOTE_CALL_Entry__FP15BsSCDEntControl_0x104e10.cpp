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

// Function: Cmd_REMOTE_CALL_Entry__FP15BsSCDEntControl
// Address: 0x104e10 - 0x104f88
void Cmd_REMOTE_CALL_Entry__FP15BsSCDEntControl_0x104e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_REMOTE_CALL_Entry__FP15BsSCDEntControl_0x104e10");
#endif

    switch (ctx->pc) {
        case 0x104e40u: goto label_104e40;
        case 0x104e58u: goto label_104e58;
        case 0x104e94u: goto label_104e94;
        case 0x104ec0u: goto label_104ec0;
        case 0x104ef8u: goto label_104ef8;
        case 0x104f3cu: goto label_104f3c;
        case 0x104f5cu: goto label_104f5c;
        default: break;
    }

    ctx->pc = 0x104e10u;

    // 0x104e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x104e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x104e14: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x104e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x104e18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x104e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x104e1c: 0x24430610  addiu       $v1, $v0, 0x610
    ctx->pc = 0x104e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1552));
    // 0x104e20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x104e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x104e24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x104e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x104e28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104e2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x104e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e30: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x104e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x104e34: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x104e34u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x104e38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x104e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e3c: 0x0  nop
    ctx->pc = 0x104e3cu;
    // NOP
label_104e40:
    // 0x104e40: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x104e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x104e44: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x104E44u;
    {
        const bool branch_taken_0x104e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E44u;
        // 0x104e48: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e44) {
            ctx->pc = 0x104ED8u;
            goto label_104ed8;
        }
    }
    ctx->pc = 0x104E4Cu;
    // 0x104e4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e50: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x104E50u;
    SET_GPR_U32(ctx, 31, 0x104E58u);
    ctx->pc = 0x104E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104E50u;
    // 0x104e54: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x104E50u, 0x104E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104E58u;
label_104e58:
    // 0x104e58: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x104e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x104e5c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x104e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x104e60: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x104e60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e64: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x104e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x104e68: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x104e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x104e6c: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x104e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x104e70: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x104e70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x104e74: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x104e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x104e78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x104e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x104e7c: 0xae260004  sw          $a2, 0x4($s1)
    ctx->pc = 0x104e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 6));
    // 0x104e80: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x104e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
    // 0x104e84: 0x10530006  beq         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x104E84u;
    {
        const bool branch_taken_0x104e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x104E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E84u;
        // 0x104e88: 0xae230018  sw          $v1, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e84) {
            ctx->pc = 0x104EA0u;
            goto label_104ea0;
        }
    }
    ctx->pc = 0x104E8Cu;
    // 0x104e8c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x104E8Cu;
    SET_GPR_U32(ctx, 31, 0x104E94u);
    ctx->pc = 0x104E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104E8Cu;
    // 0x104e90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x104E8Cu, 0x104E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104E94u;
label_104e94:
    // 0x104e94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x104E94u;
    {
        const bool branch_taken_0x104e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E94u;
        // 0x104e98: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e94) {
            ctx->pc = 0x104EA8u;
            goto label_104ea8;
        }
    }
    ctx->pc = 0x104E9Cu;
    // 0x104e9c: 0x0  nop
    ctx->pc = 0x104e9cu;
    // NOP
label_104ea0:
    // 0x104ea0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x104ea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ea4: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x104ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_104ea8:
    // 0x104ea8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x104ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x104eac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x104eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104eb0: 0x50730005  beql        $v1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x104EB0u;
    {
        const bool branch_taken_0x104eb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x104eb0) {
            ctx->pc = 0x104EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104EB0u;
            // 0x104eb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104EC8u;
            goto label_104ec8;
        }
    }
    ctx->pc = 0x104EB8u;
    // 0x104eb8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x104EB8u;
    SET_GPR_U32(ctx, 31, 0x104EC0u);
    ctx->pc = 0x104EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104EB8u;
    // 0x104ebc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x104EB8u, 0x104EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104EC0u;
label_104ec0:
    // 0x104ec0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x104EC0u;
    {
        const bool branch_taken_0x104ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EC0u;
        // 0x104ec4: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ec0) {
            ctx->pc = 0x104ECCu;
            goto label_104ecc;
        }
    }
    ctx->pc = 0x104EC8u;
label_104ec8:
    // 0x104ec8: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x104ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_104ecc:
    // 0x104ecc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x104ECCu;
    {
        const bool branch_taken_0x104ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104ECCu;
        // 0x104ed0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ecc) {
            ctx->pc = 0x104EFCu;
            goto label_104efc;
        }
    }
    ctx->pc = 0x104ED4u;
    // 0x104ed4: 0x0  nop
    ctx->pc = 0x104ed4u;
    // NOP
label_104ed8:
    // 0x104ed8: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x104ed8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x104edc: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x104EDCu;
    {
        const bool branch_taken_0x104edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104EDCu;
        // 0x104ee0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104edc) {
            ctx->pc = 0x104E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104e40;
        }
    }
    ctx->pc = 0x104EE4u;
    // 0x104ee4: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x104ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x104ee8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x104ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x104eec: 0x24a538a8  addiu       $a1, $a1, 0x38A8
    ctx->pc = 0x104eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14504));
    // 0x104ef0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x104EF0u;
    SET_GPR_U32(ctx, 31, 0x104EF8u);
    ctx->pc = 0x104EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104EF0u;
    // 0x104ef4: 0x24060037  addiu       $a2, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x104EF0u, 0x104EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104EF8u;
label_104ef8:
    // 0x104ef8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x104ef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_104efc:
    // 0x104efc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x104efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f00: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x104f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x104f04: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x104f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x104f08: 0x24041605  addiu       $a0, $zero, 0x1605
    ctx->pc = 0x104f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5637));
    // 0x104f0c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x104f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x104f10: 0xac6200b8  sw          $v0, 0xB8($v1)
    ctx->pc = 0x104f10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2400B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2400B8u, _value); } while (0);
    // 0x104f14: 0x8f919194  lw          $s1, -0x6E6C($gp)
    ctx->pc = 0x104f14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939028)));
    // 0x104f18: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x104f18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x104f1c: 0x1444000a  bne         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x104F1Cu;
    {
        const bool branch_taken_0x104f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x104F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F1Cu;
        // 0x104f20: 0xaf909194  sw          $s0, -0x6E6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939028), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f1c) {
            ctx->pc = 0x104F48u;
            goto label_104f48;
        }
    }
    ctx->pc = 0x104F24u;
    // 0x104f24: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x104f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f28: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x104f28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x104f2c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x104f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x104f30: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x104f30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x104f34: 0xc041228  jal         func_1048A0
    ctx->pc = 0x104F34u;
    SET_GPR_U32(ctx, 31, 0x104F3Cu);
    ctx->pc = 0x104F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104F34u;
    // 0x104f38: 0x8e080018  lw          $t0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x104F34u, 0x104F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104F3Cu;
label_104f3c:
    // 0x104f3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x104F3Cu;
    {
        const bool branch_taken_0x104f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F3Cu;
        // 0x104f40: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f3c) {
            ctx->pc = 0x104F60u;
            goto label_104f60;
        }
    }
    ctx->pc = 0x104F44u;
    // 0x104f44: 0x0  nop
    ctx->pc = 0x104f44u;
    // NOP
label_104f48:
    // 0x104f48: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x104f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f4c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x104f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x104f50: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x104f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x104f54: 0xc060e56  jal         func_183958
    ctx->pc = 0x104F54u;
    SET_GPR_U32(ctx, 31, 0x104F5Cu);
    ctx->pc = 0x104F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104F54u;
    // 0x104f58: 0x8e070018  lw          $a3, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183958u, 0x104F54u, 0x104F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104F5Cu;
label_104f5c:
    // 0x104f5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x104f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_104f60:
    // 0x104f60: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x104f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x104f64: 0xaf919194  sw          $s1, -0x6E6C($gp)
    ctx->pc = 0x104f64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939028), GPR_U32(ctx, 17));
    // 0x104f68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104f68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104f6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x104f6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104f70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x104f70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104f74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x104f74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x104f78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x104f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104f7c: 0xac4300b0  sw          $v1, 0xB0($v0)
    ctx->pc = 0x104f7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2400B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2400B0u, _value); } while (0);
    // 0x104f80: 0x3e00008  jr          $ra
    ctx->pc = 0x104F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F80u;
        // 0x104f84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104F88u;
}
