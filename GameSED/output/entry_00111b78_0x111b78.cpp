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

// Function: entry_00111b78
// Address: 0x111b78 - 0x111bd8
void entry_00111b78_0x111b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111b78_0x111b78");
#endif

    switch (ctx->pc) {
        case 0x111b80u: goto label_111b80;
        case 0x111b94u: goto label_111b94;
        default: break;
    }

    ctx->pc = 0x111b78u;

label_111b78:
    // 0x111b78: 0xc06a250  jal         func_1A8940
label_111b7c:
    if (ctx->pc == 0x111B7Cu) {
        ctx->pc = 0x111B80u;
        goto label_111b80;
    }
    ctx->pc = 0x111B78u;
    SET_GPR_U32(ctx, 31, 0x111B80u);
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x111B78u, 0x111B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B80u;
label_111b80:
    // 0x111b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_111b84:
    // 0x111b84: 0x27b10014  addiu       $s1, $sp, 0x14
    ctx->pc = 0x111b84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_111b88:
    // 0x111b88: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x111b88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_111b8c:
    // 0x111b8c: 0xc06a26e  jal         func_1A89B8
label_111b90:
    if (ctx->pc == 0x111B90u) {
        ctx->pc = 0x111B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B8Cu;
        // 0x111b90: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111B94u;
        goto label_111b94;
    }
    ctx->pc = 0x111B8Cu;
    SET_GPR_U32(ctx, 31, 0x111B94u);
    ctx->pc = 0x111B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111B8Cu;
    // 0x111b90: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x111B8Cu, 0x111B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B94u;
label_111b94:
    // 0x111b94: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x111b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_111b98:
    // 0x111b98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x111b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_111b9c:
    // 0x111b9c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x111b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_111ba0:
    // 0x111ba0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x111ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_111ba4:
    // 0x111ba4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x111ba4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_111ba8:
    // 0x111ba8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x111ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_111bac:
    // 0x111bac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x111bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_111bb0:
    // 0x111bb0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x111bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_111bb4:
    // 0x111bb4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x111bb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_111bb8:
    // 0x111bb8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_111bbc:
    if (ctx->pc == 0x111BBCu) {
        ctx->pc = 0x111BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BB8u;
        // 0x111bbc: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111BC0u;
        goto label_111bc0;
    }
    ctx->pc = 0x111BB8u;
    {
        const bool branch_taken_0x111bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BB8u;
        // 0x111bbc: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111bb8) {
            ctx->pc = 0x111C20u;
            return;
        }
    }
    ctx->pc = 0x111BC0u;
label_111bc0:
    // 0x111bc0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x111bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_111bc4:
    // 0x111bc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x111bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_111bc8:
    // 0x111bc8: 0x8c634060  lw          $v1, 0x4060($v1)
    ctx->pc = 0x111bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16480)));
label_111bcc:
    // 0x111bcc: 0x600008  jr          $v1
label_111bd0:
    if (ctx->pc == 0x111BD0u) {
        ctx->pc = 0x111BD4u;
        goto label_111bd4;
    }
    ctx->pc = 0x111BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111BCCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x111BD4u;
label_111bd4:
    // 0x111bd4: 0x0  nop
    ctx->pc = 0x111bd4u;
    // NOP
    ctx->pc = 0x111bd8u;
}
