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

// Function: DeadRequiem__7ApcTankP5BcObj
// Address: 0x155748 - 0x15580c
void DeadRequiem__7ApcTankP5BcObj_0x155748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeadRequiem__7ApcTankP5BcObj_0x155748");
#endif

    switch (ctx->pc) {
        case 0x155790u: goto label_155790;
        case 0x155800u: goto label_155800;
        default: break;
    }

    ctx->pc = 0x155748u;

    // 0x155748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15574c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x15574cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155750: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x155754: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x155754u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155758: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x155758u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15575c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x15575cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155760: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x155760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x155764: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x155764u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155768: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x155768u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15576c: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x15576cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x155770: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x155770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x155774: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x155774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x155778: 0x38420018  xori        $v0, $v0, 0x18
    ctx->pc = 0x155778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)24);
    // 0x15577c: 0x38630006  xori        $v1, $v1, 0x6
    ctx->pc = 0x15577cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
    // 0x155780: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x155780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x155784: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x155784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x155788: 0x102580a  movz        $t3, $t0, $v0
    ctx->pc = 0x155788u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 8));
    // 0x15578c: 0x103500a  movz        $t2, $t0, $v1
    ctx->pc = 0x15578cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 8));
label_155790:
    // 0x155790: 0x8ce20444  lw          $v0, 0x444($a3)
    ctx->pc = 0x155790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1092)));
    // 0x155794: 0x504b0005  beql        $v0, $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x155794u;
    {
        const bool branch_taken_0x155794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 11));
        if (branch_taken_0x155794) {
            ctx->pc = 0x155798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155794u;
            // 0x155798: 0xace00440  sw          $zero, 0x440($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 1088), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1557ACu;
            goto label_1557ac;
        }
    }
    ctx->pc = 0x15579Cu;
    // 0x15579c: 0x8ce20448  lw          $v0, 0x448($a3)
    ctx->pc = 0x15579cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1096)));
    // 0x1557a0: 0x544a0012  bnel        $v0, $t2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1557A0u;
    {
        const bool branch_taken_0x1557a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x1557a0) {
            ctx->pc = 0x1557A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1557A0u;
            // 0x1557a4: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1557ECu;
            goto label_1557ec;
        }
    }
    ctx->pc = 0x1557A8u;
    // 0x1557a8: 0xace00440  sw          $zero, 0x440($a3)
    ctx->pc = 0x1557a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1088), GPR_U32(ctx, 0));
label_1557ac:
    // 0x1557ac: 0x24e60450  addiu       $a2, $a3, 0x450
    ctx->pc = 0x1557acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1104));
    // 0x1557b0: 0xace00444  sw          $zero, 0x444($a3)
    ctx->pc = 0x1557b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1092), GPR_U32(ctx, 0));
    // 0x1557b4: 0xace00448  sw          $zero, 0x448($a3)
    ctx->pc = 0x1557b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1096), GPR_U32(ctx, 0));
    // 0x1557b8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1557b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1557bc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1557bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1557c0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1557c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1557c4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1557c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1557c8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1557c8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1557cc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1557ccu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1557d0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1557d0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1557d4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1557d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1557d8: 0xa0e0044f  sb          $zero, 0x44F($a3)
    ctx->pc = 0x1557d8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1103), (uint8_t)GPR_U32(ctx, 0));
    // 0x1557dc: 0xa0e0044e  sb          $zero, 0x44E($a3)
    ctx->pc = 0x1557dcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1102), (uint8_t)GPR_U32(ctx, 0));
    // 0x1557e0: 0xa0e0044d  sb          $zero, 0x44D($a3)
    ctx->pc = 0x1557e0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1101), (uint8_t)GPR_U32(ctx, 0));
    // 0x1557e4: 0xa0e0044c  sb          $zero, 0x44C($a3)
    ctx->pc = 0x1557e4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1100), (uint8_t)GPR_U32(ctx, 0));
    // 0x1557e8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1557e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_1557ec:
    // 0x1557ec: 0x521ffe8  bgez        $t1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1557ECu;
    {
        const bool branch_taken_0x1557ec = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1557F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1557ECu;
        // 0x1557f0: 0x24e70050  addiu       $a3, $a3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557ec) {
            ctx->pc = 0x155790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155790;
        }
    }
    ctx->pc = 0x1557F4u;
    // 0x1557f4: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x1557f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1557f8: 0xc0533a4  jal         func_14CE90
    ctx->pc = 0x1557F8u;
    SET_GPR_U32(ctx, 31, 0x155800u);
    ctx->pc = 0x1557FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1557F8u;
    // 0x1557fc: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CE90u, 0x1557F8u, 0x155800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155800u;
label_155800:
    // 0x155800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155804: 0x3e00008  jr          $ra
    ctx->pc = 0x155804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155804u;
        // 0x155808: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15580Cu;
}
