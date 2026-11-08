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

// Function: entry_00169578
// Address: 0x169578 - 0x169610
void entry_00169578_0x169578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169578_0x169578");
#endif

    switch (ctx->pc) {
        case 0x1695a8u: goto label_1695a8;
        case 0x1695c0u: goto label_1695c0;
        case 0x1695e0u: goto label_1695e0;
        case 0x1695fcu: goto label_1695fc;
        default: break;
    }

    ctx->pc = 0x169578u;

    // 0x169578: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x169578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x16957c: 0x54400069  bnel        $v0, $zero, . + 4 + (0x69 << 2)
    ctx->pc = 0x16957Cu;
    {
        const bool branch_taken_0x16957c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16957c) {
            ctx->pc = 0x169580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16957Cu;
            // 0x169580: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169724u;
            return;
        }
    }
    ctx->pc = 0x169584u;
    // 0x169584: 0x1080008a  beqz        $a0, . + 4 + (0x8A << 2)
    ctx->pc = 0x169584u;
    {
        const bool branch_taken_0x169584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x169588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169584u;
        // 0x169588: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169584) {
            ctx->pc = 0x1697B0u;
            return;
        }
    }
    ctx->pc = 0x16958Cu;
    // 0x16958c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x16958cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x169590: 0x8e4201b4  lw          $v0, 0x1B4($s2)
    ctx->pc = 0x169590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x169594: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x169594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x169598: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16959c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x16959cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1695a0: 0xc06164c  jal         func_185930
    ctx->pc = 0x1695A0u;
    SET_GPR_U32(ctx, 31, 0x1695A8u);
    ctx->pc = 0x1695A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1695A0u;
    // 0x1695a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1695A0u, 0x1695A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1695A8u;
label_1695a8:
    // 0x1695a8: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x1695a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x1695ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1695acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1695b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1695b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1695b4: 0x24c6d3a0  addiu       $a2, $a2, -0x2C60
    ctx->pc = 0x1695b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955936));
    // 0x1695b8: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x1695B8u;
    SET_GPR_U32(ctx, 31, 0x1695C0u);
    ctx->pc = 0x1695BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1695B8u;
    // 0x1695bc: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x1695B8u, 0x1695C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1695C0u;
label_1695c0:
    // 0x1695c0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1695c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1695c4: 0x8e4301b4  lw          $v1, 0x1B4($s2)
    ctx->pc = 0x1695c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x1695c8: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x1695c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1695cc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1695ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1695d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1695d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1695d4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1695d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1695d8: 0xc06164c  jal         func_185930
    ctx->pc = 0x1695D8u;
    SET_GPR_U32(ctx, 31, 0x1695E0u);
    ctx->pc = 0x1695DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1695D8u;
    // 0x1695dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1695D8u, 0x1695E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1695E0u;
label_1695e0:
    // 0x1695e0: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x1695e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x1695e4: 0xc78c8448  lwc1        $f12, -0x7BB8($gp)
    ctx->pc = 0x1695e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1695e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1695e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1695ec: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1695ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1695f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1695f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1695f4: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x1695F4u;
    SET_GPR_U32(ctx, 31, 0x1695FCu);
    ctx->pc = 0x1695F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1695F4u;
    // 0x1695f8: 0x24c6d3c0  addiu       $a2, $a2, -0x2C40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x1695F4u, 0x1695FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1695FCu;
label_1695fc:
    // 0x1695fc: 0xae33000c  sw          $s3, 0xC($s1)
    ctx->pc = 0x1695fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 19));
    // 0x169600: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x169600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x169604: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x169604u;
    {
        const bool branch_taken_0x169604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169604u;
        // 0x169608: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169604) {
            ctx->pc = 0x1697ACu;
            return;
        }
    }
    ctx->pc = 0x16960Cu;
    // 0x16960c: 0x0  nop
    ctx->pc = 0x16960cu;
    // NOP
    ctx->pc = 0x169610u;
}
