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

// Function: caseD_17
// Address: 0x133b88 - 0x133bdc
void caseD_17_0x133b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_17_0x133b88");
#endif

    ctx->pc = 0x133b88u;

    // 0x133b88: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x133b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x133b8c: 0x8e630160  lw          $v1, 0x160($s3)
    ctx->pc = 0x133b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
    // 0x133b90: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x133b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x133b94: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x133b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x133b98: 0x10600142  beqz        $v1, . + 4 + (0x142 << 2)
    ctx->pc = 0x133B98u;
    {
        const bool branch_taken_0x133b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x133B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B98u;
        // 0x133b9c: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133b98) {
            ctx->pc = 0x1340A4u;
            return;
        }
    }
    ctx->pc = 0x133BA0u;
    // 0x133ba0: 0x50400141  beql        $v0, $zero, . + 4 + (0x141 << 2)
    ctx->pc = 0x133BA0u;
    {
        const bool branch_taken_0x133ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133ba0) {
            ctx->pc = 0x133BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133BA0u;
            // 0x133ba4: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            return;
        }
    }
    ctx->pc = 0x133BA8u;
    // 0x133ba8: 0x8c72001c  lw          $s2, 0x1C($v1)
    ctx->pc = 0x133ba8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x133bac: 0x5240013e  beql        $s2, $zero, . + 4 + (0x13E << 2)
    ctx->pc = 0x133BACu;
    {
        const bool branch_taken_0x133bac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x133bac) {
            ctx->pc = 0x133BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133BACu;
            // 0x133bb0: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            return;
        }
    }
    ctx->pc = 0x133BB4u;
    // 0x133bb4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x133bb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133bb8: 0x1220013a  beqz        $s1, . + 4 + (0x13A << 2)
    ctx->pc = 0x133BB8u;
    {
        const bool branch_taken_0x133bb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x133BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133BB8u;
        // 0x133bbc: 0x26330020  addiu       $s3, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133bb8) {
            ctx->pc = 0x1340A4u;
            return;
        }
    }
    ctx->pc = 0x133BC0u;
    // 0x133bc0: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x133bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x133bc4: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x133bc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x133bc8: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x133bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x133bcc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x133BCCu;
    {
        const bool branch_taken_0x133bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133BCCu;
        // 0x133bd0: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133bcc) {
            ctx->pc = 0x133BDCu;
            return;
        }
    }
    ctx->pc = 0x133BD4u;
    // 0x133bd4: 0xc061920  jal         func_186480
    ctx->pc = 0x133BD4u;
    SET_GPR_U32(ctx, 31, 0x133BDCu);
    ctx->pc = 0x133BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133BD4u;
    // 0x133bd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x133BD4u, 0x133BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133BDCu;
}
