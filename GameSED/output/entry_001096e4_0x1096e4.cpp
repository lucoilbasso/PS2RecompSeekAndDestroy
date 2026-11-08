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

// Function: entry_001096e4
// Address: 0x1096e4 - 0x109770
void entry_001096e4_0x1096e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001096e4_0x1096e4");
#endif

    switch (ctx->pc) {
        case 0x109704u: goto label_109704;
        case 0x109710u: goto label_109710;
        case 0x109720u: goto label_109720;
        case 0x10973cu: goto label_10973c;
        case 0x10976cu: goto label_10976c;
        default: break;
    }

    ctx->pc = 0x1096e4u;

    // 0x1096e4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1096e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1096e8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1096e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1096ec: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1096ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1096f0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1096f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1096f4: 0x10430066  beq         $v0, $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x1096F4u;
    {
        const bool branch_taken_0x1096f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1096F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1096F4u;
        // 0x1096f8: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1096f4) {
            ctx->pc = 0x109890u;
            return;
        }
    }
    ctx->pc = 0x1096FCu;
    // 0x1096fc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1096FCu;
    SET_GPR_U32(ctx, 31, 0x109704u);
    ctx->pc = 0x109700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1096FCu;
    // 0x109700: 0x8c530044  lw          $s3, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1096FCu, 0x109704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109704u;
label_109704:
    // 0x109704: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109708: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109708u;
    SET_GPR_U32(ctx, 31, 0x109710u);
    ctx->pc = 0x10970Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109708u;
    // 0x10970c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109708u, 0x109710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109710u;
label_109710:
    // 0x109710: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x109710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x109714: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x109714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x109718: 0xc06406e  jal         func_1901B8
    ctx->pc = 0x109718u;
    SET_GPR_U32(ctx, 31, 0x109720u);
    ctx->pc = 0x10971Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109718u;
    // 0x10971c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1901B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1901B8u, 0x109718u, 0x109720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109720u;
label_109720:
    // 0x109720: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x109720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
    // 0x109724: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x109724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x109728: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x109728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10972c: 0x3c014370  lui         $at, 0x4370
    ctx->pc = 0x10972cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17264 << 16));
    // 0x109730: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x109730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x109734: 0xc063d1e  jal         func_18F478
    ctx->pc = 0x109734u;
    SET_GPR_U32(ctx, 31, 0x10973Cu);
    ctx->pc = 0x109738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109734u;
    // 0x109738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F478u, 0x109734u, 0x10973Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10973Cu;
label_10973c:
    // 0x10973c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x10973cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x109740: 0x8c43d638  lw          $v1, -0x29C8($v0)
    ctx->pc = 0x109740u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x25D638u));
    // 0x109744: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x109744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x109748: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x109748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10974c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10974cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x109750: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x109750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x109754: 0x50440006  beql        $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x109754u;
    {
        const bool branch_taken_0x109754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x109754) {
            ctx->pc = 0x109758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109754u;
            // 0x109758: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109770u;
            return;
        }
    }
    ctx->pc = 0x10975Cu;
    // 0x10975c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10975cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109760: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x109760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109764: 0xc0416ee  jal         func_105BB8
    ctx->pc = 0x109764u;
    SET_GPR_U32(ctx, 31, 0x10976Cu);
    ctx->pc = 0x109768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109764u;
    // 0x109768: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BB8u, 0x109764u, 0x10976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10976Cu;
label_10976c:
    // 0x10976c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x10976cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x109770u;
}
