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

// Function: entry_00169610
// Address: 0x169610 - 0x169698
void entry_00169610_0x169610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169610_0x169610");
#endif

    switch (ctx->pc) {
        case 0x169644u: goto label_169644;
        case 0x169660u: goto label_169660;
        case 0x16966cu: goto label_16966c;
        case 0x169684u: goto label_169684;
        default: break;
    }

    ctx->pc = 0x169610u;

    // 0x169610: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x169610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x169614: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x169614u;
    {
        const bool branch_taken_0x169614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169614u;
        // 0x169618: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169614) {
            ctx->pc = 0x169724u;
            return;
        }
    }
    ctx->pc = 0x16961Cu;
    // 0x16961c: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x16961Cu;
    {
        const bool branch_taken_0x16961c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x169620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16961Cu;
        // 0x169620: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16961c) {
            ctx->pc = 0x169698u;
            return;
        }
    }
    ctx->pc = 0x169624u;
    // 0x169624: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x169624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x169628: 0x8e4201b4  lw          $v0, 0x1B4($s2)
    ctx->pc = 0x169628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x16962c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x16962cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x169630: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x169630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x169634: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169638: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x169638u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16963c: 0xc06164c  jal         func_185930
    ctx->pc = 0x16963Cu;
    SET_GPR_U32(ctx, 31, 0x169644u);
    ctx->pc = 0x169640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16963Cu;
    // 0x169640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x16963Cu, 0x169644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169644u;
label_169644:
    // 0x169644: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x169644u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x169648: 0xc78c844c  lwc1        $f12, -0x7BB4($gp)
    ctx->pc = 0x169648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16964c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16964cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169650: 0x24c6d3c0  addiu       $a2, $a2, -0x2C40
    ctx->pc = 0x169650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955968));
    // 0x169654: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x169654u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x169658: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x169658u;
    SET_GPR_U32(ctx, 31, 0x169660u);
    ctx->pc = 0x16965Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169658u;
    // 0x16965c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x169658u, 0x169660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169660u;
label_169660:
    // 0x169660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169664: 0xc06164c  jal         func_185930
    ctx->pc = 0x169664u;
    SET_GPR_U32(ctx, 31, 0x16966Cu);
    ctx->pc = 0x169668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169664u;
    // 0x169668: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x169664u, 0x16966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16966Cu;
label_16966c:
    // 0x16966c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16966cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169670: 0xc78d8450  lwc1        $f13, -0x7BB0($gp)
    ctx->pc = 0x169670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x169674: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x169674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169678: 0xc78e8454  lwc1        $f14, -0x7BAC($gp)
    ctx->pc = 0x169678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x16967c: 0xc0694d2  jal         func_1A5348
    ctx->pc = 0x16967Cu;
    SET_GPR_U32(ctx, 31, 0x169684u);
    ctx->pc = 0x169680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16967Cu;
    // 0x169680: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5348u, 0x16967Cu, 0x169684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169684u;
label_169684:
    // 0x169684: 0xae33000c  sw          $s3, 0xC($s1)
    ctx->pc = 0x169684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 19));
    // 0x169688: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x169688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x16968c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x16968Cu;
    {
        const bool branch_taken_0x16968c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16968Cu;
        // 0x169690: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16968c) {
            ctx->pc = 0x1697ACu;
            return;
        }
    }
    ctx->pc = 0x169694u;
    // 0x169694: 0x0  nop
    ctx->pc = 0x169694u;
    // NOP
    ctx->pc = 0x169698u;
}
