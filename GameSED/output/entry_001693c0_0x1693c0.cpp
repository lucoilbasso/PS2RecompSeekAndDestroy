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

// Function: entry_001693c0
// Address: 0x1693c0 - 0x169434
void entry_001693c0_0x1693c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001693c0_0x1693c0");
#endif

    switch (ctx->pc) {
        case 0x1693f0u: goto label_1693f0;
        case 0x16940cu: goto label_16940c;
        case 0x169418u: goto label_169418;
        case 0x169430u: goto label_169430;
        default: break;
    }

    ctx->pc = 0x1693c0u;

    // 0x1693c0: 0x54800020  bnel        $a0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1693C0u;
    {
        const bool branch_taken_0x1693c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1693c0) {
            ctx->pc = 0x1693C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1693C0u;
            // 0x1693c4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169444u;
            return;
        }
    }
    ctx->pc = 0x1693C8u;
    // 0x1693c8: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1693c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1693cc: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x1693ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1693d0: 0x8e0201b4  lw          $v0, 0x1B4($s0)
    ctx->pc = 0x1693d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1693d4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1693d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1693d8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1693d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1693dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1693dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1693e0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1693e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1693e4: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x1693e4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x1693e8: 0xc06164c  jal         func_185930
    ctx->pc = 0x1693E8u;
    SET_GPR_U32(ctx, 31, 0x1693F0u);
    ctx->pc = 0x1693ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1693E8u;
    // 0x1693ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1693E8u, 0x1693F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1693F0u;
label_1693f0:
    // 0x1693f0: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x1693f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x1693f4: 0xc78c8440  lwc1        $f12, -0x7BC0($gp)
    ctx->pc = 0x1693f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1693f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1693f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1693fc: 0x24c6d370  addiu       $a2, $a2, -0x2C90
    ctx->pc = 0x1693fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955888));
    // 0x169400: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x169400u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x169404: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x169404u;
    SET_GPR_U32(ctx, 31, 0x16940Cu);
    ctx->pc = 0x169408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169404u;
    // 0x169408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x169404u, 0x16940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16940Cu;
label_16940c:
    // 0x16940c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16940cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169410: 0xc06164c  jal         func_185930
    ctx->pc = 0x169410u;
    SET_GPR_U32(ctx, 31, 0x169418u);
    ctx->pc = 0x169414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169410u;
    // 0x169414: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x169410u, 0x169418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169418u;
label_169418:
    // 0x169418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16941c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x16941cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x169420: 0xc78e8444  lwc1        $f14, -0x7BBC($gp)
    ctx->pc = 0x169420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x169424: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x169424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169428: 0xc0694d2  jal         func_1A5348
    ctx->pc = 0x169428u;
    SET_GPR_U32(ctx, 31, 0x169430u);
    ctx->pc = 0x16942Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169428u;
    // 0x16942c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5348u, 0x169428u, 0x169430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169430u;
label_169430:
    // 0x169430: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x169430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
    ctx->pc = 0x169434u;
}
