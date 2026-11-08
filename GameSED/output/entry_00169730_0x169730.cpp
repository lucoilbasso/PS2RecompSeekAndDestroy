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

// Function: entry_00169730
// Address: 0x169730 - 0x1697a4
void entry_00169730_0x169730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169730_0x169730");
#endif

    switch (ctx->pc) {
        case 0x169760u: goto label_169760;
        case 0x16977cu: goto label_16977c;
        case 0x169788u: goto label_169788;
        case 0x1697a0u: goto label_1697a0;
        default: break;
    }

    ctx->pc = 0x169730u;

    // 0x169730: 0x14800020  bnez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x169730u;
    {
        const bool branch_taken_0x169730 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x169734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169730u;
        // 0x169734: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169730) {
            ctx->pc = 0x1697B4u;
            return;
        }
    }
    ctx->pc = 0x169738u;
    // 0x169738: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x169738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x16973c: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x16973cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x169740: 0x8e4201b4  lw          $v0, 0x1B4($s2)
    ctx->pc = 0x169740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x169744: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x169744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x169748: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x169748u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16974c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16974cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169750: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x169750u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169754: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x169754u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x169758: 0xc06164c  jal         func_185930
    ctx->pc = 0x169758u;
    SET_GPR_U32(ctx, 31, 0x169760u);
    ctx->pc = 0x16975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169758u;
    // 0x16975c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x169758u, 0x169760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169760u;
label_169760:
    // 0x169760: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x169760u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x169764: 0xc78c845c  lwc1        $f12, -0x7BA4($gp)
    ctx->pc = 0x169764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x169768: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x169768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16976c: 0x24c6d3b0  addiu       $a2, $a2, -0x2C50
    ctx->pc = 0x16976cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955952));
    // 0x169770: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x169770u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x169774: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x169774u;
    SET_GPR_U32(ctx, 31, 0x16977Cu);
    ctx->pc = 0x169778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169774u;
    // 0x169778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x169774u, 0x16977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16977Cu;
label_16977c:
    // 0x16977c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16977cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169780: 0xc06164c  jal         func_185930
    ctx->pc = 0x169780u;
    SET_GPR_U32(ctx, 31, 0x169788u);
    ctx->pc = 0x169784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169780u;
    // 0x169784: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x169780u, 0x169788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169788u;
label_169788:
    // 0x169788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16978c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x16978cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x169790: 0xc78e8460  lwc1        $f14, -0x7BA0($gp)
    ctx->pc = 0x169790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x169794: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x169794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169798: 0xc0694d2  jal         func_1A5348
    ctx->pc = 0x169798u;
    SET_GPR_U32(ctx, 31, 0x1697A0u);
    ctx->pc = 0x16979Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169798u;
    // 0x16979c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5348u, 0x169798u, 0x1697A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1697A0u;
label_1697a0:
    // 0x1697a0: 0xae33000c  sw          $s3, 0xC($s1)
    ctx->pc = 0x1697a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 19));
    ctx->pc = 0x1697a4u;
}
