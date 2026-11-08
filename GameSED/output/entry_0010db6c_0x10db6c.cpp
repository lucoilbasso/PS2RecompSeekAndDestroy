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

// Function: entry_0010db6c
// Address: 0x10db6c - 0x10dbc0
void entry_0010db6c_0x10db6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010db6c_0x10db6c");
#endif

    switch (ctx->pc) {
        case 0x10db84u: goto label_10db84;
        default: break;
    }

    ctx->pc = 0x10db6cu;

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
            return;
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
            return;
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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x10DBBCu;
    // 0x10dbbc: 0x0  nop
    ctx->pc = 0x10dbbcu;
    // NOP
    ctx->pc = 0x10dbc0u;
}
