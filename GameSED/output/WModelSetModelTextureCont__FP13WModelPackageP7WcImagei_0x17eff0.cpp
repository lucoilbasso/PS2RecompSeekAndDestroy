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

// Function: WModelSetModelTextureCont__FP13WModelPackageP7WcImagei
// Address: 0x17eff0 - 0x17f148
void WModelSetModelTextureCont__FP13WModelPackageP7WcImagei_0x17eff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WModelSetModelTextureCont__FP13WModelPackageP7WcImagei_0x17eff0");
#endif

    switch (ctx->pc) {
        case 0x17f058u: goto label_17f058;
        case 0x17f070u: goto label_17f070;
        default: break;
    }

    ctx->pc = 0x17eff0u;

    // 0x17eff0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17eff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17eff4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17eff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17eff8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17eff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17effc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17effcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17f000: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17f000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f004: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x17f004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x17f008: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x17f008u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f00c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x17f00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x17f010: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x17f010u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f014: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x17f014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17f018: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x17f018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x17f01c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x17f01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x17f020: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x17f020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x17f024: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x17f024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x17f028: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x17f028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x17f02c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x17f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17f030: 0x94560014  lhu         $s6, 0x14($v0)
    ctx->pc = 0x17f030u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x17f034: 0x12c00038  beqz        $s6, . + 4 + (0x38 << 2)
    ctx->pc = 0x17F034u;
    {
        const bool branch_taken_0x17f034 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F034u;
        // 0x17f038: 0x8c530018  lw          $s3, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f034) {
            ctx->pc = 0x17F118u;
            goto label_17f118;
        }
    }
    ctx->pc = 0x17F03Cu;
    // 0x17f03c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x17f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x17f040: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x17f040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x17f044: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x17f044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x17f048: 0x247eeb30  addiu       $fp, $v1, -0x14D0
    ctx->pc = 0x17f048u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961968));
    // 0x17f04c: 0x29100  sll         $s2, $v0, 4
    ctx->pc = 0x17f04cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17f050: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x17f050u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17f054: 0x0  nop
    ctx->pc = 0x17f054u;
    // NOP
label_17f058:
    // 0x17f058: 0x56970007  bnel        $s4, $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x17F058u;
    {
        const bool branch_taken_0x17f058 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x17f058) {
            ctx->pc = 0x17F05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17F058u;
            // 0x17f05c: 0x8ea20028  lw          $v0, 0x28($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F078u;
            goto label_17f078;
        }
    }
    ctx->pc = 0x17F060u;
    // 0x17f060: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17f060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f064: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x17f064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x17f068: 0xc05fa5c  jal         func_17E970
    ctx->pc = 0x17F068u;
    SET_GPR_U32(ctx, 31, 0x17F070u);
    ctx->pc = 0x17F06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F068u;
    // 0x17f06c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E970u, 0x17F068u, 0x17F070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F070u;
label_17f070:
    // 0x17f070: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17F070u;
    {
        const bool branch_taken_0x17f070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F070u;
        // 0x17f074: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f070) {
            ctx->pc = 0x17F07Cu;
            goto label_17f07c;
        }
    }
    ctx->pc = 0x17F078u;
label_17f078:
    // 0x17f078: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x17f078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_17f07c:
    // 0x17f07c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x17f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17f080: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x17f080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x17f084: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x17f084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x17f088: 0x114080  sll         $t0, $s1, 2
    ctx->pc = 0x17f088u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17f08c: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x17f08cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x17f090: 0x1148c0  sll         $t1, $s1, 3
    ctx->pc = 0x17f090u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x17f094: 0x9482001c  lhu         $v0, 0x1C($a0)
    ctx->pc = 0x17f094u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x17f098: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17f098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17f09c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x17f09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x17f0a0: 0x8e070038  lw          $a3, 0x38($s0)
    ctx->pc = 0x17f0a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x17f0a4: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x17f0a4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x17f0a8: 0x26520050  addiu       $s2, $s2, 0x50
    ctx->pc = 0x17f0a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x17f0ac: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x17f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x17f0b0: 0x1274821  addu        $t1, $t1, $a3
    ctx->pc = 0x17f0b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x17f0b4: 0x9483001e  lhu         $v1, 0x1E($a0)
    ctx->pc = 0x17f0b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x17f0b8: 0x236382b  sltu        $a3, $s1, $s6
    ctx->pc = 0x17f0b8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x17f0bc: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x17f0bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x17f0c0: 0xdc860038  ld          $a2, 0x38($a0)
    ctx->pc = 0x17f0c0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x17f0c4: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x17f0c4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x17f0c8: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x17f0c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x17f0cc: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x17f0ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17f0d0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x17f0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x17f0d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17f0d8: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x17f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x17f0dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17f0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f0e0: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x17f0e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x17f0e4: 0x94830030  lhu         $v1, 0x30($a0)
    ctx->pc = 0x17f0e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x17f0e8: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x17f0e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17f0ec: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x17f0ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x17f0f0: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x17f0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x17f0f4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x17f0f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x17f0f8: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x17f0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x17f0fc: 0xfd260000  sd          $a2, 0x0($t1)
    ctx->pc = 0x17f0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 6));
    // 0x17f100: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x17f100u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x17f104: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17f104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f108: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x17f108u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x17f10c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x17f10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x17f110: 0x14e0ffd1  bnez        $a3, . + 4 + (-0x2F << 2)
    ctx->pc = 0x17F110u;
    {
        const bool branch_taken_0x17f110 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F110u;
        // 0x17f114: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f110) {
            ctx->pc = 0x17F058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f058;
        }
    }
    ctx->pc = 0x17F118u;
label_17f118:
    // 0x17f118: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17f118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f11c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17f11cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17f120: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x17f120u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f124: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x17f124u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17f128: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x17f128u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f12c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x17f12cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17f130: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x17f130u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17f134: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x17f134u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17f138: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x17f138u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17f13c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x17f13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17f140: 0x3e00008  jr          $ra
    ctx->pc = 0x17F140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F140u;
        // 0x17f144: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F148u;
}
