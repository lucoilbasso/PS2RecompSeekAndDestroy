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

// Function: entry_00169698
// Address: 0x169698 - 0x169718
void entry_00169698_0x169698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169698_0x169698");
#endif

    switch (ctx->pc) {
        case 0x1696b8u: goto label_1696b8;
        case 0x1696d0u: goto label_1696d0;
        case 0x1696f0u: goto label_1696f0;
        case 0x16970cu: goto label_16970c;
        default: break;
    }

    ctx->pc = 0x169698u;

    // 0x169698: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x169698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x16969c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x16969cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1696a0: 0x8e4201b4  lw          $v0, 0x1B4($s2)
    ctx->pc = 0x1696a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x1696a4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1696a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1696a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1696a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1696ac: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1696acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1696b0: 0xc06164c  jal         func_185930
    ctx->pc = 0x1696B0u;
    SET_GPR_U32(ctx, 31, 0x1696B8u);
    ctx->pc = 0x1696B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1696B0u;
    // 0x1696b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1696B0u, 0x1696B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1696B8u;
label_1696b8:
    // 0x1696b8: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x1696b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x1696bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1696bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1696c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1696c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1696c4: 0x24c6d390  addiu       $a2, $a2, -0x2C70
    ctx->pc = 0x1696c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955920));
    // 0x1696c8: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x1696C8u;
    SET_GPR_U32(ctx, 31, 0x1696D0u);
    ctx->pc = 0x1696CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1696C8u;
    // 0x1696cc: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x1696C8u, 0x1696D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1696D0u;
label_1696d0:
    // 0x1696d0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1696d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1696d4: 0x8e4301b4  lw          $v1, 0x1B4($s2)
    ctx->pc = 0x1696d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x1696d8: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x1696d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1696dc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1696dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1696e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1696e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1696e4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1696e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1696e8: 0xc06164c  jal         func_185930
    ctx->pc = 0x1696E8u;
    SET_GPR_U32(ctx, 31, 0x1696F0u);
    ctx->pc = 0x1696ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1696E8u;
    // 0x1696ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1696E8u, 0x1696F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1696F0u;
label_1696f0:
    // 0x1696f0: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x1696f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x1696f4: 0xc78c8458  lwc1        $f12, -0x7BA8($gp)
    ctx->pc = 0x1696f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1696f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1696f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1696fc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1696fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x169700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169704: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x169704u;
    SET_GPR_U32(ctx, 31, 0x16970Cu);
    ctx->pc = 0x169708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169704u;
    // 0x169708: 0x24c6d3b0  addiu       $a2, $a2, -0x2C50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x169704u, 0x16970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16970Cu;
label_16970c:
    // 0x16970c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x16970Cu;
    {
        const bool branch_taken_0x16970c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16970Cu;
        // 0x169710: 0xae33000c  sw          $s3, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16970c) {
            ctx->pc = 0x1697A4u;
            return;
        }
    }
    ctx->pc = 0x169714u;
    // 0x169714: 0x0  nop
    ctx->pc = 0x169714u;
    // NOP
    ctx->pc = 0x169718u;
}
