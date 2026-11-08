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

// Function: ApExtGetModelBankParam1_2__FP15BsSCDEntControlPi
// Address: 0x10db48 - 0x10dcc8
void ApExtGetModelBankParam1_2__FP15BsSCDEntControlPi_0x10db48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApExtGetModelBankParam1_2__FP15BsSCDEntControlPi_0x10db48");
#endif

    switch (ctx->pc) {
        case 0x10db84u: goto label_10db84;
        case 0x10dbd8u: goto label_10dbd8;
        case 0x10dbf8u: goto label_10dbf8;
        case 0x10dc08u: goto label_10dc08;
        case 0x10dc30u: goto label_10dc30;
        case 0x10dc70u: goto label_10dc70;
        case 0x10dc90u: goto label_10dc90;
        default: break;
    }

    ctx->pc = 0x10db48u;

    // 0x10db48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10db48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10db4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10db4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10db50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10db50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10db54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10db54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10db58: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10db58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x10db5c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x10db5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x10db60: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x10db60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10db64: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x10db64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x10db68: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x10db68u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10db6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10db6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10db70: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10db70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10db74: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x10db74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x10db78: 0x8e330024  lw          $s3, 0x24($s1)
    ctx->pc = 0x10db78u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10db7c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10DB7Cu;
    SET_GPR_U32(ctx, 31, 0x10DB84u);
    ctx->pc = 0x10DB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DB7Cu;
    // 0x10db80: 0x8e720044  lw          $s2, 0x44($s3) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10DB7Cu, 0x10DB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DB84u;
label_10db84:
    // 0x10db84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10db84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10db88: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x10db88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x10db8c: 0x102a03  sra         $a1, $s0, 8
    ctx->pc = 0x10db8cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 16), 8));
    // 0x10db90: 0x12000042  beqz        $s0, . + 4 + (0x42 << 2)
    ctx->pc = 0x10DB90u;
    {
        const bool branch_taken_0x10db90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB90u;
        // 0x10db94: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10db90) {
            ctx->pc = 0x10DC9Cu;
            goto label_10dc9c;
        }
    }
    ctx->pc = 0x10DB98u;
    // 0x10db98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10db98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10db9c: 0x10a2003f  beq         $a1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x10DB9Cu;
    {
        const bool branch_taken_0x10db9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x10DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB9Cu;
        // 0x10dba0: 0x28a20004  slti        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10db9c) {
            ctx->pc = 0x10DC9Cu;
            goto label_10dc9c;
        }
    }
    ctx->pc = 0x10DBA4u;
    // 0x10dba4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x10DBA4u;
    {
        const bool branch_taken_0x10dba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dba4) {
            ctx->pc = 0x10DBA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DBA4u;
            // 0x10dba8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DBC0u;
            goto label_10dbc0;
        }
    }
    ctx->pc = 0x10DBACu;
    // 0x10dbac: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x10DBACu;
    {
        const bool branch_taken_0x10dbac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dbac) {
            ctx->pc = 0x10DBB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DBACu;
            // 0x10dbb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DBD0u;
            goto label_10dbd0;
        }
    }
    ctx->pc = 0x10DBB4u;
    // 0x10dbb4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x10DBB4u;
    {
        const bool branch_taken_0x10dbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBB4u;
        // 0x10dbb8: 0x8e640048  lw          $a0, 0x48($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dbb4) {
            ctx->pc = 0x10DC68u;
            goto label_10dc68;
        }
    }
    ctx->pc = 0x10DBBCu;
    // 0x10dbbc: 0x0  nop
    ctx->pc = 0x10dbbcu;
    // NOP
label_10dbc0:
    // 0x10dbc0: 0x50a2000f  beql        $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10DBC0u;
    {
        const bool branch_taken_0x10dbc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x10dbc0) {
            ctx->pc = 0x10DBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DBC0u;
            // 0x10dbc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DC00u;
            goto label_10dc00;
        }
    }
    ctx->pc = 0x10DBC8u;
    // 0x10dbc8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x10DBC8u;
    {
        const bool branch_taken_0x10dbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBC8u;
        // 0x10dbcc: 0x8e640048  lw          $a0, 0x48($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dbc8) {
            ctx->pc = 0x10DC68u;
            goto label_10dc68;
        }
    }
    ctx->pc = 0x10DBD0u;
label_10dbd0:
    // 0x10dbd0: 0xc04106a  jal         func_1041A8
    ctx->pc = 0x10DBD0u;
    SET_GPR_U32(ctx, 31, 0x10DBD8u);
    ctx->pc = 0x10DBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DBD0u;
    // 0x10dbd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1041A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1041A8u, 0x10DBD0u, 0x10DBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DBD8u;
label_10dbd8:
    // 0x10dbd8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10dbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10dbdc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x10dbdcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dbe0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x10dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10dbe4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10dbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10dbe8: 0x14640027  bne         $v1, $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x10DBE8u;
    {
        const bool branch_taken_0x10dbe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x10DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBE8u;
        // 0x10dbec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dbe8) {
            ctx->pc = 0x10DC88u;
            goto label_10dc88;
        }
    }
    ctx->pc = 0x10DBF0u;
    // 0x10dbf0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x10DBF0u;
    {
        const bool branch_taken_0x10dbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBF0u;
        // 0x10dbf4: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dbf0) {
            ctx->pc = 0x10DC9Cu;
            goto label_10dc9c;
        }
    }
    ctx->pc = 0x10DBF8u;
label_10dbf8:
    // 0x10dbf8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x10DBF8u;
    {
        const bool branch_taken_0x10dbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBF8u;
        // 0x10dbfc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dbf8) {
            ctx->pc = 0x10DC5Cu;
            goto label_10dc5c;
        }
    }
    ctx->pc = 0x10DC00u;
label_10dc00:
    // 0x10dc00: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10DC00u;
    SET_GPR_U32(ctx, 31, 0x10DC08u);
    ctx->pc = 0x10DC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DC00u;
    // 0x10dc04: 0x321000ff  andi        $s0, $s0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10DC00u, 0x10DC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DC08u;
label_10dc08:
    // 0x10dc08: 0x8e83003c  lw          $v1, 0x3C($s4)
    ctx->pc = 0x10dc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x10dc0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10dc0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc10: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x10dc10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x10dc14: 0x2c3102a  slt         $v0, $s6, $v1
    ctx->pc = 0x10dc14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10dc18: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10DC18u;
    {
        const bool branch_taken_0x10dc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC18u;
        // 0x10dc1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc18) {
            ctx->pc = 0x10DC58u;
            goto label_10dc58;
        }
    }
    ctx->pc = 0x10DC20u;
    // 0x10dc20: 0x8e890040  lw          $t1, 0x40($s4)
    ctx->pc = 0x10dc20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x10dc24: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x10dc24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc28: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x10dc28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc2c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x10dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_10dc30:
    // 0x10dc30: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x10dc30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x10dc34: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x10dc34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x10dc38: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x10dc38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x10dc3c: 0x4a1824  and         $v1, $v0, $t2
    ctx->pc = 0x10dc3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x10dc40: 0x10b302a  slt         $a2, $t0, $t3
    ctx->pc = 0x10dc40u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x10dc44: 0x6a100b  movn        $v0, $v1, $t2
    ctx->pc = 0x10dc44u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x10dc48: 0x1050ffeb  beq         $v0, $s0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x10DC48u;
    {
        const bool branch_taken_0x10dc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x10DC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC48u;
        // 0x10dc4c: 0x1241821  addu        $v1, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc48) {
            ctx->pc = 0x10DBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10dbf8;
        }
    }
    ctx->pc = 0x10DC50u;
    // 0x10dc50: 0x54c0fff7  bnel        $a2, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x10DC50u;
    {
        const bool branch_taken_0x10dc50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x10dc50) {
            ctx->pc = 0x10DC54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DC50u;
            // 0x10dc54: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10dc30;
        }
    }
    ctx->pc = 0x10DC58u;
label_10dc58:
    // 0x10dc58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10dc58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10dc5c:
    // 0x10dc5c: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x10dc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x10dc60: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x10DC60u;
    {
        const bool branch_taken_0x10dc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC60u;
        // 0x10dc64: 0x8c560004  lw          $s6, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc60) {
            ctx->pc = 0x10DC9Cu;
            goto label_10dc9c;
        }
    }
    ctx->pc = 0x10DC68u;
label_10dc68:
    // 0x10dc68: 0xc051826  jal         func_146098
    ctx->pc = 0x10DC68u;
    SET_GPR_U32(ctx, 31, 0x10DC70u);
    ctx->pc = 0x10DC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DC68u;
    // 0x10dc6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146098u, 0x10DC68u, 0x10DC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DC70u;
label_10dc70:
    // 0x10dc70: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10dc70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10dc74: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x10dc74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc78: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x10dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10dc7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10dc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10dc80: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10DC80u;
    {
        const bool branch_taken_0x10dc80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x10DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC80u;
        // 0x10dc84: 0x320200ff  andi        $v0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc80) {
            ctx->pc = 0x10DC98u;
            goto label_10dc98;
        }
    }
    ctx->pc = 0x10DC88u;
label_10dc88:
    // 0x10dc88: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10DC88u;
    SET_GPR_U32(ctx, 31, 0x10DC90u);
    ctx->pc = 0x10DC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DC88u;
    // 0x10dc8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10DC88u, 0x10DC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DC90u;
label_10dc90:
    // 0x10dc90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10DC90u;
    {
        const bool branch_taken_0x10dc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC90u;
        // 0x10dc94: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc90) {
            ctx->pc = 0x10DC9Cu;
            goto label_10dc9c;
        }
    }
    ctx->pc = 0x10DC98u;
label_10dc98:
    // 0x10dc98: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x10dc98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_10dc9c:
    // 0x10dc9c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x10dc9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dca0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10dca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10dca4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10dca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10dca8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10dca8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10dcac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10dcacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10dcb0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10dcb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10dcb4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x10dcb4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10dcb8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x10dcb8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10dcbc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x10dcbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x10dcc0: 0x3e00008  jr          $ra
    ctx->pc = 0x10DCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DCC0u;
        // 0x10dcc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DCC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DCC8u;
}
