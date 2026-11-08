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

// Function: find_exception_handler
// Address: 0x1cdb80 - 0x1cdcbc
void find_exception_handler_0x1cdb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("find_exception_handler_0x1cdb80");
#endif

    switch (ctx->pc) {
        case 0x1cdb80u: goto label_1cdb80;
        case 0x1cdb84u: goto label_1cdb84;
        case 0x1cdb88u: goto label_1cdb88;
        case 0x1cdb8cu: goto label_1cdb8c;
        case 0x1cdb90u: goto label_1cdb90;
        case 0x1cdb94u: goto label_1cdb94;
        case 0x1cdb98u: goto label_1cdb98;
        case 0x1cdb9cu: goto label_1cdb9c;
        case 0x1cdba0u: goto label_1cdba0;
        case 0x1cdba4u: goto label_1cdba4;
        case 0x1cdba8u: goto label_1cdba8;
        case 0x1cdbacu: goto label_1cdbac;
        case 0x1cdbb0u: goto label_1cdbb0;
        case 0x1cdbb4u: goto label_1cdbb4;
        case 0x1cdbb8u: goto label_1cdbb8;
        case 0x1cdbbcu: goto label_1cdbbc;
        case 0x1cdbc0u: goto label_1cdbc0;
        case 0x1cdbc4u: goto label_1cdbc4;
        case 0x1cdbc8u: goto label_1cdbc8;
        case 0x1cdbccu: goto label_1cdbcc;
        case 0x1cdbd0u: goto label_1cdbd0;
        case 0x1cdbd4u: goto label_1cdbd4;
        case 0x1cdbd8u: goto label_1cdbd8;
        case 0x1cdbdcu: goto label_1cdbdc;
        case 0x1cdbe0u: goto label_1cdbe0;
        case 0x1cdbe4u: goto label_1cdbe4;
        case 0x1cdbe8u: goto label_1cdbe8;
        case 0x1cdbecu: goto label_1cdbec;
        case 0x1cdbf0u: goto label_1cdbf0;
        case 0x1cdbf4u: goto label_1cdbf4;
        case 0x1cdbf8u: goto label_1cdbf8;
        case 0x1cdbfcu: goto label_1cdbfc;
        case 0x1cdc00u: goto label_1cdc00;
        case 0x1cdc04u: goto label_1cdc04;
        case 0x1cdc08u: goto label_1cdc08;
        case 0x1cdc0cu: goto label_1cdc0c;
        case 0x1cdc10u: goto label_1cdc10;
        case 0x1cdc14u: goto label_1cdc14;
        case 0x1cdc18u: goto label_1cdc18;
        case 0x1cdc1cu: goto label_1cdc1c;
        case 0x1cdc20u: goto label_1cdc20;
        case 0x1cdc24u: goto label_1cdc24;
        case 0x1cdc28u: goto label_1cdc28;
        case 0x1cdc2cu: goto label_1cdc2c;
        case 0x1cdc30u: goto label_1cdc30;
        case 0x1cdc34u: goto label_1cdc34;
        case 0x1cdc38u: goto label_1cdc38;
        case 0x1cdc3cu: goto label_1cdc3c;
        case 0x1cdc40u: goto label_1cdc40;
        case 0x1cdc44u: goto label_1cdc44;
        case 0x1cdc48u: goto label_1cdc48;
        case 0x1cdc4cu: goto label_1cdc4c;
        case 0x1cdc50u: goto label_1cdc50;
        case 0x1cdc54u: goto label_1cdc54;
        case 0x1cdc58u: goto label_1cdc58;
        case 0x1cdc5cu: goto label_1cdc5c;
        case 0x1cdc60u: goto label_1cdc60;
        case 0x1cdc64u: goto label_1cdc64;
        case 0x1cdc68u: goto label_1cdc68;
        case 0x1cdc6cu: goto label_1cdc6c;
        case 0x1cdc70u: goto label_1cdc70;
        case 0x1cdc74u: goto label_1cdc74;
        case 0x1cdc78u: goto label_1cdc78;
        case 0x1cdc7cu: goto label_1cdc7c;
        case 0x1cdc80u: goto label_1cdc80;
        case 0x1cdc84u: goto label_1cdc84;
        case 0x1cdc88u: goto label_1cdc88;
        case 0x1cdc8cu: goto label_1cdc8c;
        case 0x1cdc90u: goto label_1cdc90;
        case 0x1cdc94u: goto label_1cdc94;
        case 0x1cdc98u: goto label_1cdc98;
        case 0x1cdc9cu: goto label_1cdc9c;
        case 0x1cdca0u: goto label_1cdca0;
        case 0x1cdca4u: goto label_1cdca4;
        case 0x1cdca8u: goto label_1cdca8;
        case 0x1cdcacu: goto label_1cdcac;
        case 0x1cdcb0u: goto label_1cdcb0;
        case 0x1cdcb4u: goto label_1cdcb4;
        case 0x1cdcb8u: goto label_1cdcb8;
        default: break;
    }

    ctx->pc = 0x1cdb80u;

label_1cdb80:
    // 0x1cdb80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cdb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1cdb84:
    // 0x1cdb84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cdb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cdb88:
    // 0x1cdb88: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cdb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1cdb8c:
    // 0x1cdb8c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1cdb8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cdb90:
    // 0x1cdb90: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1cdb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_1cdb94:
    // 0x1cdb94: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1cdb94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1cdb98:
    // 0x1cdb98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cdb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1cdb9c:
    // 0x1cdb9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cdb9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cdba0:
    // 0x1cdba0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cdba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1cdba4:
    // 0x1cdba4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cdba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdba8:
    // 0x1cdba8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cdba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1cdbac:
    // 0x1cdbac: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1cdbacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cdbb0:
    // 0x1cdbb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cdbb4:
    // 0x1cdbb4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1cdbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1cdbb8:
    // 0x1cdbb8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1cdbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_1cdbbc:
    // 0x1cdbbc: 0x12800034  beqz        $s4, . + 4 + (0x34 << 2)
label_1cdbc0:
    if (ctx->pc == 0x1CDBC0u) {
        ctx->pc = 0x1CDBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBBCu;
        // 0x1cdbc0: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDBC4u;
        goto label_1cdbc4;
    }
    ctx->pc = 0x1CDBBCu;
    {
        const bool branch_taken_0x1cdbbc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBBCu;
        // 0x1cdbc0: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdbbc) {
            ctx->pc = 0x1CDC90u;
            goto label_1cdc90;
        }
    }
    ctx->pc = 0x1CDBC4u;
label_1cdbc4:
    // 0x1cdbc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cdbc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdbc8:
    // 0x1cdbc8: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
label_1cdbcc:
    if (ctx->pc == 0x1CDBCCu) {
        ctx->pc = 0x1CDBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBC8u;
        // 0x1cdbcc: 0x26850008  addiu       $a1, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDBD0u;
        goto label_1cdbd0;
    }
    ctx->pc = 0x1CDBC8u;
    {
        const bool branch_taken_0x1cdbc8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBC8u;
        // 0x1cdbcc: 0x26850008  addiu       $a1, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdbc8) {
            ctx->pc = 0x1CDC00u;
            goto label_1cdc00;
        }
    }
    ctx->pc = 0x1CDBD0u;
label_1cdbd0:
    // 0x1cdbd0: 0x2251023  subu        $v0, $s1, $a1
    ctx->pc = 0x1cdbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_1cdbd4:
    // 0x1cdbd4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1cdbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1cdbd8:
    // 0x1cdbd8: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x1cdbd8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_1cdbdc:
    // 0x1cdbdc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1cdbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1cdbe0:
    // 0x1cdbe0: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1cdbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1cdbe4:
    // 0x1cdbe4: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x1cdbe4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1cdbe8:
    // 0x1cdbe8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1cdbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1cdbec:
    // 0x1cdbec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cdbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cdbf0:
    // 0x1cdbf0: 0x10640027  beq         $v1, $a0, . + 4 + (0x27 << 2)
label_1cdbf4:
    if (ctx->pc == 0x1CDBF4u) {
        ctx->pc = 0x1CDBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBF0u;
        // 0x1cdbf4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDBF8u;
        goto label_1cdbf8;
    }
    ctx->pc = 0x1CDBF0u;
    {
        const bool branch_taken_0x1cdbf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1CDBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBF0u;
        // 0x1cdbf4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdbf0) {
            ctx->pc = 0x1CDC90u;
            goto label_1cdc90;
        }
    }
    ctx->pc = 0x1CDBF8u;
label_1cdbf8:
    // 0x1cdbf8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1cdbfc:
    if (ctx->pc == 0x1CDBFCu) {
        ctx->pc = 0x1CDBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBF8u;
        // 0x1cdbfc: 0x61100  sll         $v0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC00u;
        goto label_1cdc00;
    }
    ctx->pc = 0x1CDBF8u;
    {
        const bool branch_taken_0x1cdbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBF8u;
        // 0x1cdbfc: 0x61100  sll         $v0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdbf8) {
            ctx->pc = 0x1CDC0Cu;
            goto label_1cdc0c;
        }
    }
    ctx->pc = 0x1CDC00u;
label_1cdc00:
    // 0x1cdc00: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1cdc00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1cdc04:
    // 0x1cdc04: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1cdc04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1cdc08:
    // 0x1cdc08: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1cdc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1cdc0c:
    // 0x1cdc0c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1cdc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1cdc10:
    // 0x1cdc10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cdc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cdc14:
    // 0x1cdc14: 0x1064001e  beq         $v1, $a0, . + 4 + (0x1E << 2)
label_1cdc18:
    if (ctx->pc == 0x1CDC18u) {
        ctx->pc = 0x1CDC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC14u;
        // 0x1cdc18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC1Cu;
        goto label_1cdc1c;
    }
    ctx->pc = 0x1CDC14u;
    {
        const bool branch_taken_0x1cdc14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1CDC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC14u;
        // 0x1cdc18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc14) {
            ctx->pc = 0x1CDC90u;
            goto label_1cdc90;
        }
    }
    ctx->pc = 0x1CDC1Cu;
label_1cdc1c:
    // 0x1cdc1c: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1cdc1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1cdc20:
    // 0x1cdc20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cdc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cdc24:
    // 0x1cdc24: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1cdc24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1cdc28:
    // 0x1cdc28: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_1cdc2c:
    if (ctx->pc == 0x1CDC2Cu) {
        ctx->pc = 0x1CDC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC28u;
        // 0x1cdc2c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC30u;
        goto label_1cdc30;
    }
    ctx->pc = 0x1CDC28u;
    {
        const bool branch_taken_0x1cdc28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdc28) {
            ctx->pc = 0x1CDC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDC28u;
            // 0x1cdc2c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDC84u;
            goto label_1cdc84;
        }
    }
    ctx->pc = 0x1CDC30u;
label_1cdc30:
    // 0x1cdc30: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cdc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1cdc34:
    // 0x1cdc34: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1cdc34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1cdc38:
    // 0x1cdc38: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_1cdc3c:
    if (ctx->pc == 0x1CDC3Cu) {
        ctx->pc = 0x1CDC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC38u;
        // 0x1cdc3c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC40u;
        goto label_1cdc40;
    }
    ctx->pc = 0x1CDC38u;
    {
        const bool branch_taken_0x1cdc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdc38) {
            ctx->pc = 0x1CDC3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDC38u;
            // 0x1cdc3c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDC84u;
            goto label_1cdc84;
        }
    }
    ctx->pc = 0x1CDC40u;
label_1cdc40:
    // 0x1cdc40: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1cdc40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1cdc44:
    // 0x1cdc44: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_1cdc48:
    if (ctx->pc == 0x1CDC48u) {
        ctx->pc = 0x1CDC4Cu;
        goto label_1cdc4c;
    }
    ctx->pc = 0x1CDC44u;
    {
        const bool branch_taken_0x1cdc44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdc44) {
            ctx->pc = 0x1CDC78u;
            goto label_1cdc78;
        }
    }
    ctx->pc = 0x1CDC4Cu;
label_1cdc4c:
    // 0x1cdc4c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1cdc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1cdc50:
    // 0x1cdc50: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1cdc54:
    if (ctx->pc == 0x1CDC54u) {
        ctx->pc = 0x1CDC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC50u;
        // 0x1cdc54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC58u;
        goto label_1cdc58;
    }
    ctx->pc = 0x1CDC50u;
    {
        const bool branch_taken_0x1cdc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC50u;
        // 0x1cdc54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc50) {
            ctx->pc = 0x1CDC80u;
            goto label_1cdc80;
        }
    }
    ctx->pc = 0x1CDC58u;
label_1cdc58:
    // 0x1cdc58: 0x40f809  jalr        $v0
label_1cdc5c:
    if (ctx->pc == 0x1CDC5Cu) {
        ctx->pc = 0x1CDC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC58u;
        // 0x1cdc5c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC60u;
        goto label_1cdc60;
    }
    ctx->pc = 0x1CDC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CDC60u);
        ctx->pc = 0x1CDC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC58u;
        // 0x1cdc5c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDC58u, 0x1CDC60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CDC60u;
label_1cdc60:
    // 0x1cdc60: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1cdc64:
    if (ctx->pc == 0x1CDC64u) {
        ctx->pc = 0x1CDC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC60u;
        // 0x1cdc64: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC68u;
        goto label_1cdc68;
    }
    ctx->pc = 0x1CDC60u;
    {
        const bool branch_taken_0x1cdc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdc60) {
            ctx->pc = 0x1CDC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDC60u;
            // 0x1cdc64: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDC84u;
            goto label_1cdc84;
        }
    }
    ctx->pc = 0x1CDC68u;
label_1cdc68:
    // 0x1cdc68: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
label_1cdc6c:
    if (ctx->pc == 0x1CDC6Cu) {
        ctx->pc = 0x1CDC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC68u;
        // 0x1cdc6c: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC70u;
        goto label_1cdc70;
    }
    ctx->pc = 0x1CDC68u;
    {
        const bool branch_taken_0x1cdc68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdc68) {
            ctx->pc = 0x1CDC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDC68u;
            // 0x1cdc6c: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDC70u;
            goto label_1cdc70;
        }
    }
    ctx->pc = 0x1CDC70u;
label_1cdc70:
    // 0x1cdc70: 0x10000007  b           . + 4 + (0x7 << 2)
label_1cdc74:
    if (ctx->pc == 0x1CDC74u) {
        ctx->pc = 0x1CDC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC70u;
        // 0x1cdc74: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC78u;
        goto label_1cdc78;
    }
    ctx->pc = 0x1CDC70u;
    {
        const bool branch_taken_0x1cdc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC70u;
        // 0x1cdc74: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc70) {
            ctx->pc = 0x1CDC90u;
            goto label_1cdc90;
        }
    }
    ctx->pc = 0x1CDC78u;
label_1cdc78:
    // 0x1cdc78: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
label_1cdc7c:
    if (ctx->pc == 0x1CDC7Cu) {
        ctx->pc = 0x1CDC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC78u;
        // 0x1cdc7c: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC80u;
        goto label_1cdc80;
    }
    ctx->pc = 0x1CDC78u;
    {
        const bool branch_taken_0x1cdc78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdc78) {
            ctx->pc = 0x1CDC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDC78u;
            // 0x1cdc7c: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDC80u;
            goto label_1cdc80;
        }
    }
    ctx->pc = 0x1CDC80u;
label_1cdc80:
    // 0x1cdc80: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1cdc80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1cdc84:
    // 0x1cdc84: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cdc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cdc88:
    // 0x1cdc88: 0x1455ffe7  bne         $v0, $s5, . + 4 + (-0x19 << 2)
label_1cdc8c:
    if (ctx->pc == 0x1CDC8Cu) {
        ctx->pc = 0x1CDC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC88u;
        // 0x1cdc8c: 0x222102b  sltu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC90u;
        goto label_1cdc90;
    }
    ctx->pc = 0x1CDC88u;
    {
        const bool branch_taken_0x1cdc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x1CDC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC88u;
        // 0x1cdc8c: 0x222102b  sltu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc88) {
            ctx->pc = 0x1CDC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc28;
        }
    }
    ctx->pc = 0x1CDC90u;
label_1cdc90:
    // 0x1cdc90: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1cdc90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cdc94:
    // 0x1cdc94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdc94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cdc98:
    // 0x1cdc98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdc98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cdc9c:
    // 0x1cdc9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cdc9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cdca0:
    // 0x1cdca0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cdca0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1cdca4:
    // 0x1cdca4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cdca4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cdca8:
    // 0x1cdca8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1cdca8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1cdcac:
    // 0x1cdcac: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1cdcacu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1cdcb0:
    // 0x1cdcb0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1cdcb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1cdcb4:
    // 0x1cdcb4: 0x3e00008  jr          $ra
label_1cdcb8:
    if (ctx->pc == 0x1CDCB8u) {
        ctx->pc = 0x1CDCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCB4u;
        // 0x1cdcb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDCBCu;
        goto label_fallthrough_0x1cdcb4;
    }
    ctx->pc = 0x1CDCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCB4u;
        // 0x1cdcb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDCB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cdcb4:
    ctx->pc = 0x1CDCBCu;
}
