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

// Function: entry_00193b58
// Address: 0x193b58 - 0x193bc0
void entry_00193b58_0x193b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193b58_0x193b58");
#endif

    switch (ctx->pc) {
        case 0x193b60u: goto label_193b60;
        case 0x193b68u: goto label_193b68;
        default: break;
    }

    ctx->pc = 0x193b58u;

    // 0x193b58: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x193B58u;
    SET_GPR_U32(ctx, 31, 0x193B60u);
    ctx->pc = 0x193B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B58u;
    // 0x193b5c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x193B58u, 0x193B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193B60u;
label_193b60:
    // 0x193b60: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x193B60u;
    SET_GPR_U32(ctx, 31, 0x193B68u);
    ctx->pc = 0x193B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B60u;
    // 0x193b64: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x193B60u, 0x193B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193B68u;
label_193b68:
    // 0x193b68: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x193b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x193b6c: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x193b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x193b70: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x193b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x193b74: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x193b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193b78: 0xae250194  sw          $a1, 0x194($s1)
    ctx->pc = 0x193b78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 5));
    // 0x193b7c: 0xe6200190  swc1        $f0, 0x190($s1)
    ctx->pc = 0x193b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 400), bits); }
    // 0x193b80: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x193B80u;
    {
        const bool branch_taken_0x193b80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x193B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B80u;
        // 0x193b84: 0xae250158  sw          $a1, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193b80) {
            ctx->pc = 0x193BE4u;
            return;
        }
    }
    ctx->pc = 0x193B88u;
    // 0x193b88: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x193b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x193b8c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x193b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x193b90: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x193b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x193b94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x193b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x193b98: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x193B98u;
    {
        const bool branch_taken_0x193b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B98u;
        // 0x193b9c: 0xae24015c  sw          $a0, 0x15C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193b98) {
            ctx->pc = 0x193BE4u;
            return;
        }
    }
    ctx->pc = 0x193BA0u;
    // 0x193ba0: 0x26300160  addiu       $s0, $s1, 0x160
    ctx->pc = 0x193ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x193ba4: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x193ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x193ba8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x193ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x193bac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x193bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x193bb0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x193BB0u;
    {
        const bool branch_taken_0x193bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x193BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BB0u;
        // 0x193bb4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193bb0) {
            ctx->pc = 0x193BC0u;
            return;
        }
    }
    ctx->pc = 0x193BB8u;
    // 0x193bb8: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x193BB8u;
    SET_GPR_U32(ctx, 31, 0x193BC0u);
    ctx->pc = 0x193BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193BB8u;
    // 0x193bbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x193BB8u, 0x193BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193BC0u;
}
