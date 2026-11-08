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

// Function: entry_0015cd7c
// Address: 0x15cd7c - 0x15cdbc
void entry_0015cd7c_0x15cd7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cd7c_0x15cd7c");
#endif

    ctx->pc = 0x15cd7cu;

label_15cd7c:
    // 0x15cd7c: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
label_15cd80:
    if (ctx->pc == 0x15CD80u) {
        ctx->pc = 0x15CD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD7Cu;
        // 0x15cd80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD84u;
        goto label_15cd84;
    }
    ctx->pc = 0x15CD7Cu;
    {
        const bool branch_taken_0x15cd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD7Cu;
        // 0x15cd80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd7c) {
            ctx->pc = 0x15CF74u;
            return;
        }
    }
    ctx->pc = 0x15CD84u;
label_15cd84:
    // 0x15cd84: 0x1640002a  bnez        $s2, . + 4 + (0x2A << 2)
label_15cd88:
    if (ctx->pc == 0x15CD88u) {
        ctx->pc = 0x15CD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD84u;
        // 0x15cd88: 0x26300120  addiu       $s0, $s1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD8Cu;
        goto label_15cd8c;
    }
    ctx->pc = 0x15CD84u;
    {
        const bool branch_taken_0x15cd84 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD84u;
        // 0x15cd88: 0x26300120  addiu       $s0, $s1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd84) {
            ctx->pc = 0x15CE30u;
            return;
        }
    }
    ctx->pc = 0x15CD8Cu;
label_15cd8c:
    // 0x15cd8c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15cd90:
    // 0x15cd90: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15cd90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15cd94:
    // 0x15cd94: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15cd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_15cd98:
    // 0x15cd98: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15cd9c:
    if (ctx->pc == 0x15CD9Cu) {
        ctx->pc = 0x15CD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD98u;
        // 0x15cd9c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CDA0u;
        goto label_15cda0;
    }
    ctx->pc = 0x15CD98u;
    {
        const bool branch_taken_0x15cd98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD98u;
        // 0x15cd9c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd98) {
            ctx->pc = 0x15CDBCu;
            return;
        }
    }
    ctx->pc = 0x15CDA0u;
label_15cda0:
    // 0x15cda0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15cda4:
    // 0x15cda4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15cda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cda8:
    // 0x15cda8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15cdac:
    // 0x15cdac: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15cdacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15cdb0:
    // 0x15cdb0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15cdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15cdb4:
    // 0x15cdb4: 0x60f809  jalr        $v1
label_15cdb8:
    if (ctx->pc == 0x15CDB8u) {
        ctx->pc = 0x15CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDB4u;
        // 0x15cdb8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CDBCu;
        goto label_fallthrough_0x15cdb4;
    }
    ctx->pc = 0x15CDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15CDBCu);
        ctx->pc = 0x15CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDB4u;
        // 0x15cdb8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CDB4u, 0x15CDBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15cdb4:
    ctx->pc = 0x15CDBCu;
}
