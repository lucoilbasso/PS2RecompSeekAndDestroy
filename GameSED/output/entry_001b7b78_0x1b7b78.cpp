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

// Function: entry_001b7b78
// Address: 0x1b7b78 - 0x1b7c00
void entry_001b7b78_0x1b7b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7b78_0x1b7b78");
#endif

    switch (ctx->pc) {
        case 0x1b7b80u: goto label_1b7b80;
        case 0x1b7b94u: goto label_1b7b94;
        case 0x1b7ba4u: goto label_1b7ba4;
        case 0x1b7bb4u: goto label_1b7bb4;
        default: break;
    }

    ctx->pc = 0x1b7b78u;

label_1b7b78:
    // 0x1b7b78: 0xc06be1c  jal         func_1AF870
    ctx->pc = 0x1B7B78u;
    SET_GPR_U32(ctx, 31, 0x1B7B80u);
    ctx->pc = 0x1B7B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7B78u;
    // 0x1b7b7c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF870u, 0x1B7B78u, 0x1B7B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7B80u;
label_1b7b80:
    // 0x1b7b80: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1b7b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x1b7b84: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1B7B84u;
    {
        const bool branch_taken_0x1b7b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B84u;
        // 0x1b7b88: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b84) {
            ctx->pc = 0x1B7B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7b78;
        }
    }
    ctx->pc = 0x1B7B8Cu;
    // 0x1b7b8c: 0xc06be1c  jal         func_1AF870
    ctx->pc = 0x1B7B8Cu;
    SET_GPR_U32(ctx, 31, 0x1B7B94u);
    ctx->pc = 0x1B7B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7B8Cu;
    // 0x1b7b90: 0x2650bfd8  addiu       $s0, $s2, -0x4028 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF870u, 0x1B7B8Cu, 0x1B7B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7B94u;
label_1b7b94:
    // 0x1b7b94: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1b7b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1b7b98: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b7b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b7b9c: 0xc06be18  jal         func_1AF860
    ctx->pc = 0x1B7B9Cu;
    SET_GPR_U32(ctx, 31, 0x1B7BA4u);
    ctx->pc = 0x1B7BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7B9Cu;
    // 0x1b7ba0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF860u, 0x1B7B9Cu, 0x1B7BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7BA4u;
label_1b7ba4:
    // 0x1b7ba4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b7ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b7ba8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b7ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7bac: 0xc06be18  jal         func_1AF860
    ctx->pc = 0x1B7BACu;
    SET_GPR_U32(ctx, 31, 0x1B7BB4u);
    ctx->pc = 0x1B7BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7BACu;
    // 0x1b7bb0: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF860u, 0x1B7BACu, 0x1B7BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7BB4u;
label_1b7bb4:
    // 0x1b7bb4: 0x2683bfc0  addiu       $v1, $s4, -0x4040
    ctx->pc = 0x1b7bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950848));
    // 0x1b7bb8: 0x2662bf00  addiu       $v0, $s3, -0x4100
    ctx->pc = 0x1b7bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950656));
    // 0x1b7bbc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b7bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b7bc0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b7bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7bc4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1b7bc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7bc8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1b7bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7bcc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1b7bccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7bd0: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x1b7bd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x1b7bd4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b7bd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7bd8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1b7bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b7bdc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b7bdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7be0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b7be0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7be4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7be4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7be8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b7be8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7bec: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x1b7becu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x1b7bf0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b7bf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7bf4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1b7bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1b7bf8: 0x806df7e  j           func_1B7DF8
    ctx->pc = 0x1B7BF8u;
    ctx->pc = 0x1B7BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7BF8u;
    // 0x1b7bfc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7DF8u;
    sceSifSendCmd_0x1b7df8(rdram, ctx, runtime); return;
    ctx->pc = 0x1B7C00u;
}
