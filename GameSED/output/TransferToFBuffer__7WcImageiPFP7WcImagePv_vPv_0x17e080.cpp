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

// Function: TransferToFBuffer__7WcImageiPFP7WcImagePv_vPv
// Address: 0x17e080 - 0x17e1d0
void TransferToFBuffer__7WcImageiPFP7WcImagePv_vPv_0x17e080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TransferToFBuffer__7WcImageiPFP7WcImagePv_vPv_0x17e080");
#endif

    switch (ctx->pc) {
        case 0x17e0d0u: goto label_17e0d0;
        case 0x17e18cu: goto label_17e18c;
        case 0x17e1acu: goto label_17e1ac;
        case 0x17e1b8u: goto label_17e1b8;
        default: break;
    }

    ctx->pc = 0x17e080u;

    // 0x17e080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17e080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17e084: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x17e084u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e088: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17e088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17e08c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x17e08cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e090: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17e090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17e094: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x17e094u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e098: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17e098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17e09c: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x17e09cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e0a0: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x17E0A0u;
    {
        const bool branch_taken_0x17e0a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E0A0u;
        // 0x17e0a4: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e0a0) {
            ctx->pc = 0x17E140u;
            goto label_17e140;
        }
    }
    ctx->pc = 0x17E0A8u;
    // 0x17e0a8: 0x8d630020  lw          $v1, 0x20($t3)
    ctx->pc = 0x17e0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x17e0ac: 0x18600024  blez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x17E0ACu;
    {
        const bool branch_taken_0x17e0ac = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x17E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E0ACu;
        // 0x17e0b0: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e0ac) {
            ctx->pc = 0x17E140u;
            goto label_17e140;
        }
    }
    ctx->pc = 0x17E0B4u;
    // 0x17e0b4: 0x8d620028  lw          $v0, 0x28($t3)
    ctx->pc = 0x17e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 40)));
    // 0x17e0b8: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x17e0b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e0bc: 0x340f8000  ori         $t7, $zero, 0x8000
    ctx->pc = 0x17e0bcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17e0c0: 0xf7bbc  dsll32      $t7, $t7, 14
    ctx->pc = 0x17e0c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 14));
    // 0x17e0c4: 0x340e8000  ori         $t6, $zero, 0x8000
    ctx->pc = 0x17e0c4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17e0c8: 0xe74f8  dsll        $t6, $t6, 19
    ctx->pc = 0x17e0c8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 19);
    // 0x17e0cc: 0x24480010  addiu       $t0, $v0, 0x10
    ctx->pc = 0x17e0ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_17e0d0:
    // 0x17e0d0: 0x9502002c  lhu         $v0, 0x2C($t0)
    ctx->pc = 0x17e0d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x17e0d4: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x17e0d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x17e0d8: 0x95070018  lhu         $a3, 0x18($t0)
    ctx->pc = 0x17e0d8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x17e0dc: 0x95040004  lhu         $a0, 0x4($t0)
    ctx->pc = 0x17e0dcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x17e0e0: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x17e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x17e0e4: 0x95060002  lhu         $a2, 0x2($t0)
    ctx->pc = 0x17e0e4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x17e0e8: 0x73eb8  dsll        $a3, $a3, 26
    ctx->pc = 0x17e0e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 26);
    // 0x17e0ec: 0x9505001a  lhu         $a1, 0x1A($t0)
    ctx->pc = 0x17e0ecu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 26)));
    // 0x17e0f0: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x17e0f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x17e0f4: 0x9503000c  lhu         $v1, 0xC($t0)
    ctx->pc = 0x17e0f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x17e0f8: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x17e0f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x17e0fc: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x17e0fcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x17e100: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17e100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17e104: 0x31cfc  dsll32      $v1, $v1, 19
    ctx->pc = 0x17e104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 19));
    // 0x17e108: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x17e108u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x17e10c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x17e10cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x17e110: 0x9503002e  lhu         $v1, 0x2E($t0)
    ctx->pc = 0x17e110u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 46)));
    // 0x17e114: 0xee3825  or          $a3, $a3, $t6
    ctx->pc = 0x17e114u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 14));
    // 0x17e118: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x17e118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x17e11c: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x17e11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x17e120: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x17e120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x17e124: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x17e124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x17e128: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x17e128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x17e12c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x17e12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x17e130: 0xa5030008  sh          $v1, 0x8($t0)
    ctx->pc = 0x17e130u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x17e134: 0xfd020038  sd          $v0, 0x38($t0)
    ctx->pc = 0x17e134u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 56), GPR_U64(ctx, 2));
    // 0x17e138: 0x1520ffe5  bnez        $t1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x17E138u;
    {
        const bool branch_taken_0x17e138 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E138u;
        // 0x17e13c: 0x25080050  addiu       $t0, $t0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e138) {
            ctx->pc = 0x17E0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e0d0;
        }
    }
    ctx->pc = 0x17E140u;
label_17e140:
    // 0x17e140: 0x15a00009  bnez        $t5, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E140u;
    {
        const bool branch_taken_0x17e140 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E140u;
        // 0x17e144: 0x3c020018  lui         $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e140) {
            ctx->pc = 0x17E168u;
            goto label_17e168;
        }
    }
    ctx->pc = 0x17E148u;
    // 0x17e148: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17e148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e14c: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x17e14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e150: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17e150u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e154: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17e154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e158: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17e158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17e15c: 0x805f7be  j           func_17DEF8
    ctx->pc = 0x17E15Cu;
    ctx->pc = 0x17E160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E15Cu;
    // 0x17e160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF8u;
    WImageTransferToFBufferProc__FP7WcImage_0x17def8(rdram, ctx, runtime); return;
    ctx->pc = 0x17E164u;
    // 0x17e164: 0x0  nop
    ctx->pc = 0x17e164u;
    // NOP
label_17e168:
    // 0x17e168: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x17e168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e16c: 0xad90003c  sw          $s0, 0x3C($t4)
    ctx->pc = 0x17e16cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 60), GPR_U32(ctx, 16));
    // 0x17e170: 0x2452e7c0  addiu       $s2, $v0, -0x1840
    ctx->pc = 0x17e170u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961088));
    // 0x17e174: 0xad8d0038  sw          $t5, 0x38($t4)
    ctx->pc = 0x17e174u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 56), GPR_U32(ctx, 13));
    // 0x17e178: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17E178u;
    {
        const bool branch_taken_0x17e178 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E178u;
        // 0x17e17c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e178) {
            ctx->pc = 0x17E184u;
            goto label_17e184;
        }
    }
    ctx->pc = 0x17E180u;
    // 0x17e180: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x17e180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17e184:
    // 0x17e184: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17E184u;
    SET_GPR_U32(ctx, 31, 0x17E18Cu);
    ctx->pc = 0x17E188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E184u;
    // 0x17e188: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17E184u, 0x17E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E18Cu;
label_17e18c:
    // 0x17e18c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17e18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e190: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17e190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e194: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17e194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e198: 0x26080020  addiu       $t0, $s0, 0x20
    ctx->pc = 0x17e198u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x17e19c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1a0: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x17e1a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x17e1a4: 0xc0686a0  jal         func_1A1A80
    ctx->pc = 0x17E1A4u;
    SET_GPR_U32(ctx, 31, 0x17E1ACu);
    ctx->pc = 0x17E1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E1A4u;
    // 0x17e1a8: 0x240903f8  addiu       $t1, $zero, 0x3F8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1A80u, 0x17E1A4u, 0x17E1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E1ACu;
label_17e1ac:
    // 0x17e1ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17e1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17e1b0: 0xc06bca0  jal         func_1AF280
    ctx->pc = 0x17E1B0u;
    SET_GPR_U32(ctx, 31, 0x17E1B8u);
    ctx->pc = 0x17E1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E1B0u;
    // 0x17e1b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF280u, 0x17E1B0u, 0x17E1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E1B8u;
label_17e1b8:
    // 0x17e1b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17e1b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e1bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17e1bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e1c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17e1c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e1c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17e1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17e1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x17E1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E1C8u;
        // 0x17e1cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E1D0u;
}
