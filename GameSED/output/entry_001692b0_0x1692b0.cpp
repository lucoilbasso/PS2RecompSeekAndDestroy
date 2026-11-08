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

// Function: entry_001692b0
// Address: 0x1692b0 - 0x169338
void entry_001692b0_0x1692b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001692b0_0x1692b0");
#endif

    switch (ctx->pc) {
        case 0x1692e4u: goto label_1692e4;
        case 0x169300u: goto label_169300;
        case 0x16930cu: goto label_16930c;
        case 0x169324u: goto label_169324;
        default: break;
    }

    ctx->pc = 0x1692b0u;

    // 0x1692b0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1692b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1692b4: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1692B4u;
    {
        const bool branch_taken_0x1692b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1692B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1692B4u;
        // 0x1692b8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1692b4) {
            ctx->pc = 0x1693B8u;
            return;
        }
    }
    ctx->pc = 0x1692BCu;
    // 0x1692bc: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1692BCu;
    {
        const bool branch_taken_0x1692bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1692C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1692BCu;
        // 0x1692c0: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1692bc) {
            ctx->pc = 0x169338u;
            return;
        }
    }
    ctx->pc = 0x1692C4u;
    // 0x1692c4: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1692c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1692c8: 0x8e0201b4  lw          $v0, 0x1B4($s0)
    ctx->pc = 0x1692c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1692cc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1692ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1692d0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1692d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1692d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1692d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1692d8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1692d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1692dc: 0xc06164c  jal         func_185930
    ctx->pc = 0x1692DCu;
    SET_GPR_U32(ctx, 31, 0x1692E4u);
    ctx->pc = 0x1692E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1692DCu;
    // 0x1692e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1692DCu, 0x1692E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1692E4u;
label_1692e4:
    // 0x1692e4: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x1692e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x1692e8: 0xc78c842c  lwc1        $f12, -0x7BD4($gp)
    ctx->pc = 0x1692e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1692ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1692ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1692f0: 0x24c6d380  addiu       $a2, $a2, -0x2C80
    ctx->pc = 0x1692f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955904));
    // 0x1692f4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1692f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1692f8: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x1692F8u;
    SET_GPR_U32(ctx, 31, 0x169300u);
    ctx->pc = 0x1692FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1692F8u;
    // 0x1692fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x1692F8u, 0x169300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169300u;
label_169300:
    // 0x169300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169304: 0xc06164c  jal         func_185930
    ctx->pc = 0x169304u;
    SET_GPR_U32(ctx, 31, 0x16930Cu);
    ctx->pc = 0x169308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169304u;
    // 0x169308: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x169304u, 0x16930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16930Cu;
label_16930c:
    // 0x16930c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16930cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169310: 0xc78d8430  lwc1        $f13, -0x7BD0($gp)
    ctx->pc = 0x169310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x169314: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x169314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169318: 0xc78e8434  lwc1        $f14, -0x7BCC($gp)
    ctx->pc = 0x169318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x16931c: 0xc0694d2  jal         func_1A5348
    ctx->pc = 0x16931Cu;
    SET_GPR_U32(ctx, 31, 0x169324u);
    ctx->pc = 0x169320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16931Cu;
    // 0x169320: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5348u, 0x16931Cu, 0x169324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169324u;
label_169324:
    // 0x169324: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x169324u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
    // 0x169328: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x169328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x16932c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x16932Cu;
    {
        const bool branch_taken_0x16932c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16932Cu;
        // 0x169330: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16932c) {
            ctx->pc = 0x16943Cu;
            return;
        }
    }
    ctx->pc = 0x169334u;
    // 0x169334: 0x0  nop
    ctx->pc = 0x169334u;
    // NOP
    ctx->pc = 0x169338u;
}
