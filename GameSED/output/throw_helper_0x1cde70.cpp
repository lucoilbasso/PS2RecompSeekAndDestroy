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

// Function: throw_helper
// Address: 0x1cde70 - 0x1ce1fc
void throw_helper_0x1cde70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("throw_helper_0x1cde70");
#endif

    switch (ctx->pc) {
        case 0x1cdee8u: goto label_1cdee8;
        case 0x1cdf40u: goto label_1cdf40;
        case 0x1cdf74u: goto label_1cdf74;
        case 0x1cdf98u: goto label_1cdf98;
        case 0x1cdfa8u: goto label_1cdfa8;
        case 0x1cdfd4u: goto label_1cdfd4;
        case 0x1ce044u: goto label_1ce044;
        case 0x1ce068u: goto label_1ce068;
        case 0x1ce098u: goto label_1ce098;
        case 0x1ce0a8u: goto label_1ce0a8;
        case 0x1ce0d0u: goto label_1ce0d0;
        case 0x1ce130u: goto label_1ce130;
        case 0x1ce140u: goto label_1ce140;
        case 0x1ce158u: goto label_1ce158;
        case 0x1ce178u: goto label_1ce178;
        case 0x1ce198u: goto label_1ce198;
        default: break;
    }

    ctx->pc = 0x1cde70u;

    // 0x1cde70: 0x27bdf210  addiu       $sp, $sp, -0xDF0
    ctx->pc = 0x1cde70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963728));
    // 0x1cde74: 0xffb00da0  sd          $s0, 0xDA0($sp)
    ctx->pc = 0x1cde74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3488), GPR_U64(ctx, 16));
    // 0x1cde78: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cde78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde7c: 0xffb20db0  sd          $s2, 0xDB0($sp)
    ctx->pc = 0x1cde7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3504), GPR_U64(ctx, 18));
    // 0x1cde80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cde80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde84: 0xffb30db8  sd          $s3, 0xDB8($sp)
    ctx->pc = 0x1cde84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3512), GPR_U64(ctx, 19));
    // 0x1cde88: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x1cde88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde8c: 0xffb50dc8  sd          $s5, 0xDC8($sp)
    ctx->pc = 0x1cde8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3528), GPR_U64(ctx, 21));
    // 0x1cde90: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1cde90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde94: 0xffb60dd0  sd          $s6, 0xDD0($sp)
    ctx->pc = 0x1cde94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3536), GPR_U64(ctx, 22));
    // 0x1cde98: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1cde98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde9c: 0xffb70dd8  sd          $s7, 0xDD8($sp)
    ctx->pc = 0x1cde9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3544), GPR_U64(ctx, 23));
    // 0x1cdea0: 0x26d70460  addiu       $s7, $s6, 0x460
    ctx->pc = 0x1cdea0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1120));
    // 0x1cdea4: 0xffb10da8  sd          $s1, 0xDA8($sp)
    ctx->pc = 0x1cdea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3496), GPR_U64(ctx, 17));
    // 0x1cdea8: 0xffb40dc0  sd          $s4, 0xDC0($sp)
    ctx->pc = 0x1cdea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3520), GPR_U64(ctx, 20));
    // 0x1cdeac: 0xffbe0de0  sd          $fp, 0xDE0($sp)
    ctx->pc = 0x1cdeacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3552), GPR_U64(ctx, 30));
    // 0x1cdeb0: 0xffbf0de8  sd          $ra, 0xDE8($sp)
    ctx->pc = 0x1cdeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3560), GPR_U64(ctx, 31));
    // 0x1cdeb4: 0xafa00d80  sw          $zero, 0xD80($sp)
    ctx->pc = 0x1cdeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3456), GPR_U32(ctx, 0));
    // 0x1cdeb8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1cdeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1cdebc: 0xafa70d84  sw          $a3, 0xD84($sp)
    ctx->pc = 0x1cdebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3460), GPR_U32(ctx, 7));
    // 0x1cdec0: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x1cdec0u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1cdec4: 0x27a20480  addiu       $v0, $sp, 0x480
    ctx->pc = 0x1cdec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    // 0x1cdec8: 0x8e5e0008  lw          $fp, 0x8($s2)
    ctx->pc = 0x1cdec8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1cdecc: 0xafb00d8c  sw          $s0, 0xD8C($sp)
    ctx->pc = 0x1cdeccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3468), GPR_U32(ctx, 16));
    // 0x1cded0: 0xafa00d90  sw          $zero, 0xD90($sp)
    ctx->pc = 0x1cded0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3472), GPR_U32(ctx, 0));
    // 0x1cded4: 0xafa00d94  sw          $zero, 0xD94($sp)
    ctx->pc = 0x1cded4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3476), GPR_U32(ctx, 0));
    // 0x1cded8: 0xafa00d98  sw          $zero, 0xD98($sp)
    ctx->pc = 0x1cded8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3480), GPR_U32(ctx, 0));
    // 0x1cdedc: 0xafa00d9c  sw          $zero, 0xD9C($sp)
    ctx->pc = 0x1cdedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3484), GPR_U32(ctx, 0));
    // 0x1cdee0: 0xafa20d88  sw          $v0, 0xD88($sp)
    ctx->pc = 0x1cdee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3464), GPR_U32(ctx, 2));
    // 0x1cdee4: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1cdee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1cdee8:
    // 0x1cdee8: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x1cdee8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cdeec: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x1cdeecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cdef0: 0xdc460010  ld          $a2, 0x10($v0)
    ctx->pc = 0x1cdef0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1cdef4: 0xdc470018  ld          $a3, 0x18($v0)
    ctx->pc = 0x1cdef4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1cdef8: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1cdef8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1cdefc: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x1cdefcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x1cdf00: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x1cdf00u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x1cdf04: 0xfc670018  sd          $a3, 0x18($v1)
    ctx->pc = 0x1cdf04u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 7));
    // 0x1cdf08: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1cdf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1cdf0c: 0x0  nop
    ctx->pc = 0x1cdf0cu;
    // NOP
    // 0x1cdf10: 0x0  nop
    ctx->pc = 0x1cdf10u;
    // NOP
    // 0x1cdf14: 0x1457fff4  bne         $v0, $s7, . + 4 + (-0xC << 2)
    ctx->pc = 0x1CDF14u;
    {
        const bool branch_taken_0x1cdf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x1CDF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF14u;
        // 0x1cdf18: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf14) {
            ctx->pc = 0x1CDEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdee8;
        }
    }
    ctx->pc = 0x1CDF1Cu;
    // 0x1cdf1c: 0xdee80000  ld          $t0, 0x0($s7)
    ctx->pc = 0x1cdf1cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1cdf20: 0xdee20008  ld          $v0, 0x8($s7)
    ctx->pc = 0x1cdf20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x1cdf24: 0xdee40010  ld          $a0, 0x10($s7)
    ctx->pc = 0x1cdf24u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x1cdf28: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x1cdf28u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x1cdf2c: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x1cdf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x1cdf30: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1cdf30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf34: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1CDF34u;
    {
        const bool branch_taken_0x1cdf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF34u;
        // 0x1cdf38: 0xfc640010  sd          $a0, 0x10($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf34) {
            ctx->pc = 0x1CE054u;
            goto label_1ce054;
        }
    }
    ctx->pc = 0x1CDF3Cu;
    // 0x1cdf3c: 0x0  nop
    ctx->pc = 0x1cdf3cu;
    // NOP
label_1cdf40:
    // 0x1cdf40: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1cdf40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1cdf44: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CDF44u;
    {
        const bool branch_taken_0x1cdf44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF44u;
        // 0x1cdf48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf44) {
            ctx->pc = 0x1CDF5Cu;
            goto label_1cdf5c;
        }
    }
    ctx->pc = 0x1CDF4Cu;
    // 0x1cdf4c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1cdf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cdf50: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1cdf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1cdf54: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1cdf54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1cdf58: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1cdf58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1cdf5c:
    // 0x1cdf5c: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CDF5Cu;
    {
        const bool branch_taken_0x1cdf5c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF5Cu;
        // 0x1cdf60: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf5c) {
            ctx->pc = 0x1CDF80u;
            goto label_1cdf80;
        }
    }
    ctx->pc = 0x1CDF64u;
    // 0x1cdf64: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1cdf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1cdf68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cdf68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdf6c: 0xc0736e0  jal         func_1CDB80
    ctx->pc = 0x1CDF6Cu;
    SET_GPR_U32(ctx, 31, 0x1CDF74u);
    ctx->pc = 0x1CDF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF6Cu;
    // 0x1cdf70: 0x27a80d80  addiu       $t0, $sp, 0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 3456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDB80u, 0x1CDF6Cu, 0x1CDF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDF74u;
label_1cdf74:
    // 0x1cdf74: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1cdf74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1cdf78: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1CDF78u;
    {
        const bool branch_taken_0x1cdf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF78u;
        // 0x1cdf7c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf78) {
            ctx->pc = 0x1CDFA8u;
            goto label_1cdfa8;
        }
    }
    ctx->pc = 0x1CDF80u;
label_1cdf80:
    // 0x1cdf80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CDF80u;
    {
        const bool branch_taken_0x1cdf80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF80u;
        // 0x1cdf84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf80) {
            ctx->pc = 0x1CDFA0u;
            goto label_1cdfa0;
        }
    }
    ctx->pc = 0x1CDF88u;
    // 0x1cdf88: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1cdf88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cdf8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf90: 0xc0736e0  jal         func_1CDB80
    ctx->pc = 0x1CDF90u;
    SET_GPR_U32(ctx, 31, 0x1CDF98u);
    ctx->pc = 0x1CDF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF90u;
    // 0x1cdf94: 0x27a80d80  addiu       $t0, $sp, 0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 3456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDB80u, 0x1CDF90u, 0x1CDF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDF98u;
label_1cdf98:
    // 0x1cdf98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CDF98u;
    {
        const bool branch_taken_0x1cdf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF98u;
        // 0x1cdf9c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf98) {
            ctx->pc = 0x1CDFACu;
            goto label_1cdfac;
        }
    }
    ctx->pc = 0x1CDFA0u;
label_1cdfa0:
    // 0x1cdfa0: 0xc0736ac  jal         func_1CDAB0
    ctx->pc = 0x1CDFA0u;
    SET_GPR_U32(ctx, 31, 0x1CDFA8u);
    ctx->pc = 0x1CDFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDFA0u;
    // 0x1cdfa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDAB0u, 0x1CDFA0u, 0x1CDFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDFA8u;
label_1cdfa8:
    // 0x1cdfa8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1cdfa8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cdfac:
    // 0x1cdfac: 0x12800021  beqz        $s4, . + 4 + (0x21 << 2)
    ctx->pc = 0x1CDFACu;
    {
        const bool branch_taken_0x1cdfac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDFACu;
        // 0x1cdfb0: 0x8fa20d80  lw          $v0, 0xD80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdfac) {
            ctx->pc = 0x1CE034u;
            goto label_1ce034;
        }
    }
    ctx->pc = 0x1CDFB4u;
    // 0x1cdfb4: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x1CDFB4u;
    {
        const bool branch_taken_0x1cdfb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdfb4) {
            ctx->pc = 0x1CDFB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDFB4u;
            // 0x1cdfb8: 0xafa00d98  sw          $zero, 0xD98($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 3480), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE074u;
            goto label_1ce074;
        }
    }
    ctx->pc = 0x1CDFBCu;
    // 0x1cdfbc: 0x8fa60d9c  lw          $a2, 0xD9C($sp)
    ctx->pc = 0x1cdfbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3484)));
    // 0x1cdfc0: 0x54c0001d  bnel        $a2, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CDFC0u;
    {
        const bool branch_taken_0x1cdfc0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdfc0) {
            ctx->pc = 0x1CDFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDFC0u;
            // 0x1cdfc4: 0x966403fa  lhu         $a0, 0x3FA($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1018)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE038u;
            goto label_1ce038;
        }
    }
    ctx->pc = 0x1CDFC8u;
    // 0x1cdfc8: 0x27a30900  addiu       $v1, $sp, 0x900
    ctx->pc = 0x1cdfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
    // 0x1cdfcc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1cdfccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdfd0: 0x26640460  addiu       $a0, $s3, 0x460
    ctx->pc = 0x1cdfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1120));
label_1cdfd4:
    // 0x1cdfd4: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x1cdfd4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cdfd8: 0xdc480008  ld          $t0, 0x8($v0)
    ctx->pc = 0x1cdfd8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cdfdc: 0xdc450010  ld          $a1, 0x10($v0)
    ctx->pc = 0x1cdfdcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1cdfe0: 0xdc460018  ld          $a2, 0x18($v0)
    ctx->pc = 0x1cdfe0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1cdfe4: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x1cdfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
    // 0x1cdfe8: 0xfc680008  sd          $t0, 0x8($v1)
    ctx->pc = 0x1cdfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 8));
    // 0x1cdfec: 0xfc650010  sd          $a1, 0x10($v1)
    ctx->pc = 0x1cdfecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 5));
    // 0x1cdff0: 0xfc660018  sd          $a2, 0x18($v1)
    ctx->pc = 0x1cdff0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 6));
    // 0x1cdff4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1cdff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1cdff8: 0x0  nop
    ctx->pc = 0x1cdff8u;
    // NOP
    // 0x1cdffc: 0x0  nop
    ctx->pc = 0x1cdffcu;
    // NOP
    // 0x1ce000: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1CE000u;
    {
        const bool branch_taken_0x1ce000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CE004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE000u;
        // 0x1ce004: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce000) {
            ctx->pc = 0x1CDFD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdfd4;
        }
    }
    ctx->pc = 0x1CE008u;
    // 0x1ce008: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x1ce008u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce00c: 0xdc480008  ld          $t0, 0x8($v0)
    ctx->pc = 0x1ce00cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ce010: 0xdc440010  ld          $a0, 0x10($v0)
    ctx->pc = 0x1ce010u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ce014: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x1ce014u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
    // 0x1ce018: 0xfc680008  sd          $t0, 0x8($v1)
    ctx->pc = 0x1ce018u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 8));
    // 0x1ce01c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ce01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce020: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x1ce020u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x1ce024: 0xafb00d94  sw          $s0, 0xD94($sp)
    ctx->pc = 0x1ce024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3476), GPR_U32(ctx, 16));
    // 0x1ce028: 0xafb40d90  sw          $s4, 0xD90($sp)
    ctx->pc = 0x1ce028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3472), GPR_U32(ctx, 20));
    // 0x1ce02c: 0xafa60d9c  sw          $a2, 0xD9C($sp)
    ctx->pc = 0x1ce02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3484), GPR_U32(ctx, 6));
    // 0x1ce030: 0xafa60d98  sw          $a2, 0xD98($sp)
    ctx->pc = 0x1ce030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3480), GPR_U32(ctx, 6));
label_1ce034:
    // 0x1ce034: 0x966403fa  lhu         $a0, 0x3FA($s3)
    ctx->pc = 0x1ce034u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1018)));
label_1ce038:
    // 0x1ce038: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ce038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce03c: 0xc073730  jal         func_1CDCC0
    ctx->pc = 0x1CE03Cu;
    SET_GPR_U32(ctx, 31, 0x1CE044u);
    ctx->pc = 0x1CE040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE03Cu;
    // 0x1ce040: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDCC0u, 0x1CE03Cu, 0x1CE044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE044u;
label_1ce044:
    // 0x1ce044: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1ce044u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce048: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ce048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ce04c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1ce04cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1ce050: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x1ce050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1ce054:
    // 0x1ce054: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x1ce054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce058: 0x8fa60d88  lw          $a2, 0xD88($sp)
    ctx->pc = 0x1ce058u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3464)));
    // 0x1ce05c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce060: 0xc07376e  jal         func_1CDDB8
    ctx->pc = 0x1CE060u;
    SET_GPR_U32(ctx, 31, 0x1CE068u);
    ctx->pc = 0x1CE064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE060u;
    // 0x1ce064: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDDB8u, 0x1CE060u, 0x1CE068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE068u;
label_1ce068:
    // 0x1ce068: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ce068u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce06c: 0x1660ffb4  bnez        $s3, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1CE06Cu;
    {
        const bool branch_taken_0x1ce06c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE06Cu;
        // 0x1ce070: 0xafb10d88  sw          $s1, 0xD88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 3464), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce06c) {
            ctx->pc = 0x1CDF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdf40;
        }
    }
    ctx->pc = 0x1CE074u;
label_1ce074:
    // 0x1ce074: 0x8fa70d9c  lw          $a3, 0xD9C($sp)
    ctx->pc = 0x1ce074u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3484)));
    // 0x1ce078: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE078u;
    {
        const bool branch_taken_0x1ce078 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE078u;
        // 0x1ce07c: 0x8fa80d98  lw          $t0, 0xD98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce078) {
            ctx->pc = 0x1CE098u;
            goto label_1ce098;
        }
    }
    ctx->pc = 0x1CE080u;
    // 0x1ce080: 0x27b30900  addiu       $s3, $sp, 0x900
    ctx->pc = 0x1ce080u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
    // 0x1ce084: 0x8fb40d90  lw          $s4, 0xD90($sp)
    ctx->pc = 0x1ce084u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3472)));
    // 0x1ce088: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE088u;
    {
        const bool branch_taken_0x1ce088 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE088u;
        // 0x1ce08c: 0x8fb00d94  lw          $s0, 0xD94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce088) {
            ctx->pc = 0x1CE098u;
            goto label_1ce098;
        }
    }
    ctx->pc = 0x1CE090u;
    // 0x1ce090: 0xc07379a  jal         func_1CDE68
    ctx->pc = 0x1CE090u;
    SET_GPR_U32(ctx, 31, 0x1CE098u);
    ctx->pc = 0x1CDE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDE68u, 0x1CE090u, 0x1CE098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE098u;
label_1ce098:
    // 0x1ce098: 0x56800003  bnel        $s4, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE098u;
    {
        const bool branch_taken_0x1ce098 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce098) {
            ctx->pc = 0x1CE09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE098u;
            // 0x1ce09c: 0xae540000  sw          $s4, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE0A8u;
            goto label_1ce0a8;
        }
    }
    ctx->pc = 0x1CE0A0u;
    // 0x1ce0a0: 0xc073468  jal         func_1CD1A0
    ctx->pc = 0x1CE0A0u;
    SET_GPR_U32(ctx, 31, 0x1CE0A8u);
    ctx->pc = 0x1CD1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1A0u, 0x1CE0A0u, 0x1CE0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE0A8u;
label_1ce0a8:
    // 0x1ce0a8: 0x8fa20d8c  lw          $v0, 0xD8C($sp)
    ctx->pc = 0x1ce0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3468)));
    // 0x1ce0ac: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE0ACu;
    {
        const bool branch_taken_0x1ce0ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CE0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE0ACu;
        // 0x1ce0b0: 0xde7e0018  ld          $fp, 0x18($s3) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce0ac) {
            ctx->pc = 0x1CE0C0u;
            goto label_1ce0c0;
        }
    }
    ctx->pc = 0x1CE0B4u;
    // 0x1ce0b4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1CE0B4u;
    {
        const bool branch_taken_0x1ce0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE0B4u;
        // 0x1ce0b8: 0x2c0982d  daddu       $s3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce0b4) {
            ctx->pc = 0x1CE1B0u;
            goto label_1ce1b0;
        }
    }
    ctx->pc = 0x1CE0BCu;
    // 0x1ce0bc: 0x0  nop
    ctx->pc = 0x1ce0bcu;
    // NOP
label_1ce0c0:
    // 0x1ce0c0: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x1ce0c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce0c4: 0x8fb00d8c  lw          $s0, 0xD8C($sp)
    ctx->pc = 0x1ce0c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3468)));
    // 0x1ce0c8: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x1ce0c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce0cc: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1ce0ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ce0d0:
    // 0x1ce0d0: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x1ce0d0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce0d4: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x1ce0d4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ce0d8: 0xdc460010  ld          $a2, 0x10($v0)
    ctx->pc = 0x1ce0d8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ce0dc: 0xdc470018  ld          $a3, 0x18($v0)
    ctx->pc = 0x1ce0dcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1ce0e0: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1ce0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1ce0e4: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x1ce0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x1ce0e8: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x1ce0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x1ce0ec: 0xfc670018  sd          $a3, 0x18($v1)
    ctx->pc = 0x1ce0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 7));
    // 0x1ce0f0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1ce0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1ce0f4: 0x0  nop
    ctx->pc = 0x1ce0f4u;
    // NOP
    // 0x1ce0f8: 0x0  nop
    ctx->pc = 0x1ce0f8u;
    // NOP
    // 0x1ce0fc: 0x1457fff4  bne         $v0, $s7, . + 4 + (-0xC << 2)
    ctx->pc = 0x1CE0FCu;
    {
        const bool branch_taken_0x1ce0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x1CE100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE0FCu;
        // 0x1ce100: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce0fc) {
            ctx->pc = 0x1CE0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ce0d0;
        }
    }
    ctx->pc = 0x1CE104u;
    // 0x1ce104: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x1ce104u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce108: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x1ce108u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ce10c: 0xdc450010  ld          $a1, 0x10($v0)
    ctx->pc = 0x1ce10cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ce110: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x1ce110u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x1ce114: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x1ce114u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x1ce118: 0xfc650010  sd          $a1, 0x10($v1)
    ctx->pc = 0x1ce118u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 5));
    // 0x1ce11c: 0x8fa70d8c  lw          $a3, 0xD8C($sp)
    ctx->pc = 0x1ce11cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3468)));
    // 0x1ce120: 0x50f50024  beql        $a3, $s5, . + 4 + (0x24 << 2)
    ctx->pc = 0x1CE120u;
    {
        const bool branch_taken_0x1ce120 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 21));
        if (branch_taken_0x1ce120) {
            ctx->pc = 0x1CE124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE120u;
            // 0x1ce124: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE1B4u;
            goto label_1ce1b4;
        }
    }
    ctx->pc = 0x1CE128u;
    // 0x1ce128: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x1ce128u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce12c: 0x0  nop
    ctx->pc = 0x1ce12cu;
    // NOP
label_1ce130:
    // 0x1ce130: 0x8fa60d88  lw          $a2, 0xD88($sp)
    ctx->pc = 0x1ce130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3464)));
    // 0x1ce134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce138: 0xc07376e  jal         func_1CDDB8
    ctx->pc = 0x1CE138u;
    SET_GPR_U32(ctx, 31, 0x1CE140u);
    ctx->pc = 0x1CE13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE138u;
    // 0x1ce13c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDDB8u, 0x1CE138u, 0x1CE140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE140u;
label_1ce140:
    // 0x1ce140: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ce140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce144: 0xafb20d88  sw          $s2, 0xD88($sp)
    ctx->pc = 0x1ce144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3464), GPR_U32(ctx, 18));
    // 0x1ce148: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ce148u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce14c: 0x267003fc  addiu       $s0, $s3, 0x3FC
    ctx->pc = 0x1ce14cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1020));
    // 0x1ce150: 0x966403fa  lhu         $a0, 0x3FA($s3)
    ctx->pc = 0x1ce150u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1018)));
    // 0x1ce154: 0x0  nop
    ctx->pc = 0x1ce154u;
    // NOP
label_1ce158:
    // 0x1ce158: 0x52240009  beql        $s1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CE158u;
    {
        const bool branch_taken_0x1ce158 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        if (branch_taken_0x1ce158) {
            ctx->pc = 0x1CE15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE158u;
            // 0x1ce15c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE180u;
            goto label_1ce180;
        }
    }
    ctx->pc = 0x1CE160u;
    // 0x1ce160: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1ce160u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ce164: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE164u;
    {
        const bool branch_taken_0x1ce164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE164u;
        // 0x1ce168: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce164) {
            ctx->pc = 0x1CE17Cu;
            goto label_1ce17c;
        }
    }
    ctx->pc = 0x1CE16Cu;
    // 0x1ce16c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ce16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce170: 0xc073754  jal         func_1CDD50
    ctx->pc = 0x1CE170u;
    SET_GPR_U32(ctx, 31, 0x1CE178u);
    ctx->pc = 0x1CE174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE170u;
    // 0x1ce174: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDD50u, 0x1CE170u, 0x1CE178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE178u;
label_1ce178:
    // 0x1ce178: 0x966403fa  lhu         $a0, 0x3FA($s3)
    ctx->pc = 0x1ce178u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1018)));
label_1ce17c:
    // 0x1ce17c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ce17cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ce180:
    // 0x1ce180: 0x2a22007a  slti        $v0, $s1, 0x7A
    ctx->pc = 0x1ce180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)122) ? 1 : 0);
    // 0x1ce184: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1CE184u;
    {
        const bool branch_taken_0x1ce184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE184u;
        // 0x1ce188: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce184) {
            ctx->pc = 0x1CE158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ce158;
        }
    }
    ctx->pc = 0x1CE18Cu;
    // 0x1ce18c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ce18cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce190: 0xc073730  jal         func_1CDCC0
    ctx->pc = 0x1CE190u;
    SET_GPR_U32(ctx, 31, 0x1CE198u);
    ctx->pc = 0x1CE194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE190u;
    // 0x1ce194: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDCC0u, 0x1CE190u, 0x1CE198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE198u;
label_1ce198:
    // 0x1ce198: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1ce198u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce19c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ce19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ce1a0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1ce1a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1ce1a4: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x1ce1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ce1a8: 0x1615ffe1  bne         $s0, $s5, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1CE1A8u;
    {
        const bool branch_taken_0x1ce1a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        ctx->pc = 0x1CE1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE1A8u;
        // 0x1ce1ac: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce1a8) {
            ctx->pc = 0x1CE130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ce130;
        }
    }
    ctx->pc = 0x1CE1B0u;
label_1ce1b0:
    // 0x1ce1b0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ce1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ce1b4:
    // 0x1ce1b4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1ce1b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce1b8: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1ce1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1ce1bc: 0x8fa80d84  lw          $t0, 0xD84($sp)
    ctx->pc = 0x1ce1bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3460)));
    // 0x1ce1c0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1ce1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ce1c4: 0xdfb00da0  ld          $s0, 0xDA0($sp)
    ctx->pc = 0x1ce1c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 3488)));
    // 0x1ce1c8: 0x7e182d  daddu       $v1, $v1, $fp
    ctx->pc = 0x1ce1c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 30));
    // 0x1ce1cc: 0xdfbe0de0  ld          $fp, 0xDE0($sp)
    ctx->pc = 0x1ce1ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 3552)));
    // 0x1ce1d0: 0xdfb10da8  ld          $s1, 0xDA8($sp)
    ctx->pc = 0x1ce1d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 3496)));
    // 0x1ce1d4: 0xdfb20db0  ld          $s2, 0xDB0($sp)
    ctx->pc = 0x1ce1d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 3504)));
    // 0x1ce1d8: 0xdfb30db8  ld          $s3, 0xDB8($sp)
    ctx->pc = 0x1ce1d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 3512)));
    // 0x1ce1dc: 0xdfb40dc0  ld          $s4, 0xDC0($sp)
    ctx->pc = 0x1ce1dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 3520)));
    // 0x1ce1e0: 0xdfb50dc8  ld          $s5, 0xDC8($sp)
    ctx->pc = 0x1ce1e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 3528)));
    // 0x1ce1e4: 0xdfb60dd0  ld          $s6, 0xDD0($sp)
    ctx->pc = 0x1ce1e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 3536)));
    // 0x1ce1e8: 0xdfb70dd8  ld          $s7, 0xDD8($sp)
    ctx->pc = 0x1ce1e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 3544)));
    // 0x1ce1ec: 0xdfbf0de8  ld          $ra, 0xDE8($sp)
    ctx->pc = 0x1ce1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 3560)));
    // 0x1ce1f0: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x1ce1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x1ce1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE1F4u;
        // 0x1ce1f8: 0x27bd0df0  addiu       $sp, $sp, 0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3568));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE1FCu;
}
