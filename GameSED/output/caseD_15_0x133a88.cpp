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

// Function: caseD_15
// Address: 0x133a88 - 0x133af4
void caseD_15_0x133a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_15_0x133a88");
#endif

    switch (ctx->pc) {
        case 0x133a90u: goto label_133a90;
        case 0x133a9cu: goto label_133a9c;
        case 0x133aa4u: goto label_133aa4;
        default: break;
    }

    ctx->pc = 0x133a88u;

    // 0x133a88: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x133A88u;
    SET_GPR_U32(ctx, 31, 0x133A90u);
    ctx->pc = 0x133A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A88u;
    // 0x133a8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x133A88u, 0x133A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A90u;
label_133a90:
    // 0x133a90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133a94: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x133A94u;
    SET_GPR_U32(ctx, 31, 0x133A9Cu);
    ctx->pc = 0x133A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A94u;
    // 0x133a98: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x133A94u, 0x133A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A9Cu;
label_133a9c:
    // 0x133a9c: 0xc04db4e  jal         func_136D38
    ctx->pc = 0x133A9Cu;
    SET_GPR_U32(ctx, 31, 0x133AA4u);
    ctx->pc = 0x133AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A9Cu;
    // 0x133aa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D38u, 0x133A9Cu, 0x133AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133AA4u;
label_133aa4:
    // 0x133aa4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x133aa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133aa8: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x133aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x133aac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x133aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x133ab0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x133ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x133ab4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x133ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x133ab8: 0x5040017b  beql        $v0, $zero, . + 4 + (0x17B << 2)
    ctx->pc = 0x133AB8u;
    {
        const bool branch_taken_0x133ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133ab8) {
            ctx->pc = 0x133ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133AB8u;
            // 0x133abc: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            return;
        }
    }
    ctx->pc = 0x133AC0u;
    // 0x133ac0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x133ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133ac4: 0x52200178  beql        $s1, $zero, . + 4 + (0x178 << 2)
    ctx->pc = 0x133AC4u;
    {
        const bool branch_taken_0x133ac4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x133ac4) {
            ctx->pc = 0x133AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133AC4u;
            // 0x133ac8: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            return;
        }
    }
    ctx->pc = 0x133ACCu;
    // 0x133acc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x133accu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x133ad0: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x133ad0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x133ad4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x133ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x133ad8: 0x26330020  addiu       $s3, $s1, 0x20
    ctx->pc = 0x133ad8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x133adc: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x133adcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x133ae0: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x133ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x133ae4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x133AE4u;
    {
        const bool branch_taken_0x133ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133AE4u;
        // 0x133ae8: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133ae4) {
            ctx->pc = 0x133AF4u;
            return;
        }
    }
    ctx->pc = 0x133AECu;
    // 0x133aec: 0xc061920  jal         func_186480
    ctx->pc = 0x133AECu;
    SET_GPR_U32(ctx, 31, 0x133AF4u);
    ctx->pc = 0x133AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133AECu;
    // 0x133af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x133AECu, 0x133AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133AF4u;
}
