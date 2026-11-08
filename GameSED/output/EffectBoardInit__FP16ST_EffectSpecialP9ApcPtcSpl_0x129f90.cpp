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

// Function: EffectBoardInit__FP16ST_EffectSpecialP9ApcPtcSpl
// Address: 0x129f90 - 0x12a084
void EffectBoardInit__FP16ST_EffectSpecialP9ApcPtcSpl_0x129f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectBoardInit__FP16ST_EffectSpecialP9ApcPtcSpl_0x129f90");
#endif

    switch (ctx->pc) {
        case 0x129fb4u: goto label_129fb4;
        case 0x129fd8u: goto label_129fd8;
        case 0x129ff8u: goto label_129ff8;
        case 0x12a018u: goto label_12a018;
        default: break;
    }

    ctx->pc = 0x129f90u;

    // 0x129f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x129f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x129f94: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x129f94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x129f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x129f9c: 0x245001b0  addiu       $s0, $v0, 0x1B0
    ctx->pc = 0x129f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    // 0x129fa0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x129fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x129fa4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x129fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x129fa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x129fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x129fac: 0xc04844a  jal         func_121128
    ctx->pc = 0x129FACu;
    SET_GPR_U32(ctx, 31, 0x129FB4u);
    ctx->pc = 0x129FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129FACu;
    // 0x129fb0: 0x8c440028  lw          $a0, 0x28($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x129FACu, 0x129FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129FB4u;
label_129fb4:
    // 0x129fb4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x129fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x129fb8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x129fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x129fbc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x129fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129fc0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x129fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x129fc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x129fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x129fc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x129fc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129fcc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x129fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x129fd0: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x129FD0u;
    SET_GPR_U32(ctx, 31, 0x129FD8u);
    ctx->pc = 0x129FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129FD0u;
    // 0x129fd4: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x129FD0u, 0x129FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129FD8u;
label_129fd8:
    // 0x129fd8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x129fd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129fdc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x129fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x129fe0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x129FE0u;
    {
        const bool branch_taken_0x129fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129FE0u;
        // 0x129fe4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129fe0) {
            ctx->pc = 0x129FF0u;
            goto label_129ff0;
        }
    }
    ctx->pc = 0x129FE8u;
    // 0x129fe8: 0x31023  negu        $v0, $v1
    ctx->pc = 0x129fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x129fec: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x129fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_129ff0:
    // 0x129ff0: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x129FF0u;
    SET_GPR_U32(ctx, 31, 0x129FF8u);
    ctx->pc = 0x129FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129FF0u;
    // 0x129ff4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x129FF0u, 0x129FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129FF8u;
label_129ff8:
    // 0x129ff8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x129ff8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ffc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x129ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x12a000: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A000u;
    {
        const bool branch_taken_0x12a000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A000u;
        // 0x12a004: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a000) {
            ctx->pc = 0x12A010u;
            goto label_12a010;
        }
    }
    ctx->pc = 0x12A008u;
    // 0x12a008: 0x31023  negu        $v0, $v1
    ctx->pc = 0x12a008u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x12a00c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x12a00cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_12a010:
    // 0x12a010: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12A010u;
    SET_GPR_U32(ctx, 31, 0x12A018u);
    ctx->pc = 0x12A014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A010u;
    // 0x12a014: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12A010u, 0x12A018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A018u;
label_12a018:
    // 0x12a018: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12a018u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a01c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x12a01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x12a020: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A020u;
    {
        const bool branch_taken_0x12a020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A020u;
        // 0x12a024: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a020) {
            ctx->pc = 0x12A030u;
            goto label_12a030;
        }
    }
    ctx->pc = 0x12A028u;
    // 0x12a028: 0x31023  negu        $v0, $v1
    ctx->pc = 0x12a028u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x12a02c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x12a02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_12a030:
    // 0x12a030: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x12a030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x12a034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12a034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a038: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12A038u;
    {
        const bool branch_taken_0x12a038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12a038) {
            ctx->pc = 0x12A03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A038u;
            // 0x12a03c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A074u;
            goto label_12a074;
        }
    }
    ctx->pc = 0x12A040u;
    // 0x12a040: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12a040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12a044: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x12a044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12a048: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x12a048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12a04c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x12a04cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x12a050: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x12a050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x12a054: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x12a054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x12a058: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A058u;
    {
        const bool branch_taken_0x12a058 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x12A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A058u;
        // 0x12a05c: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a058) {
            ctx->pc = 0x12A068u;
            goto label_12a068;
        }
    }
    ctx->pc = 0x12A060u;
    // 0x12a060: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12A060u;
    {
        const bool branch_taken_0x12a060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A060u;
        // 0x12a064: 0x2482fc18  addiu       $v0, $a0, -0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a060) {
            ctx->pc = 0x12A06Cu;
            goto label_12a06c;
        }
    }
    ctx->pc = 0x12A068u;
label_12a068:
    // 0x12a068: 0x248203e8  addiu       $v0, $a0, 0x3E8
    ctx->pc = 0x12a068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1000));
label_12a06c:
    // 0x12a06c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x12a06cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x12a070: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12a070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12a074:
    // 0x12a074: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12a074u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12a078: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12a078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a07c: 0x3e00008  jr          $ra
    ctx->pc = 0x12A07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A07Cu;
        // 0x12a080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A084u;
}
