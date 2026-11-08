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

// Function: do_dyncast__C14__si_type_infoiQ216__user_type_info8sub_kindRC9type_infoPvT3T4RQ216__user_type_info14dyncast_result
// Address: 0x1cc0c8 - 0x1cc1e8
void do_dyncast__C14__si_type_infoiQ216__user_type_info8sub_kindRC9type_infoPvT3T4RQ216__user_type_info14dyncast_result_0x1cc0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("do_dyncast__C14__si_type_infoiQ216__user_type_info8sub_kindRC9type_infoPvT3T4RQ216__user_type_info14dyncast_result_0x1cc0c8");
#endif

    switch (ctx->pc) {
        case 0x1cc0c8u: goto label_1cc0c8;
        case 0x1cc0ccu: goto label_1cc0cc;
        case 0x1cc0d0u: goto label_1cc0d0;
        case 0x1cc0d4u: goto label_1cc0d4;
        case 0x1cc0d8u: goto label_1cc0d8;
        case 0x1cc0dcu: goto label_1cc0dc;
        case 0x1cc0e0u: goto label_1cc0e0;
        case 0x1cc0e4u: goto label_1cc0e4;
        case 0x1cc0e8u: goto label_1cc0e8;
        case 0x1cc0ecu: goto label_1cc0ec;
        case 0x1cc0f0u: goto label_1cc0f0;
        case 0x1cc0f4u: goto label_1cc0f4;
        case 0x1cc0f8u: goto label_1cc0f8;
        case 0x1cc0fcu: goto label_1cc0fc;
        case 0x1cc100u: goto label_1cc100;
        case 0x1cc104u: goto label_1cc104;
        case 0x1cc108u: goto label_1cc108;
        case 0x1cc10cu: goto label_1cc10c;
        case 0x1cc110u: goto label_1cc110;
        case 0x1cc114u: goto label_1cc114;
        case 0x1cc118u: goto label_1cc118;
        case 0x1cc11cu: goto label_1cc11c;
        case 0x1cc120u: goto label_1cc120;
        case 0x1cc124u: goto label_1cc124;
        case 0x1cc128u: goto label_1cc128;
        case 0x1cc12cu: goto label_1cc12c;
        case 0x1cc130u: goto label_1cc130;
        case 0x1cc134u: goto label_1cc134;
        case 0x1cc138u: goto label_1cc138;
        case 0x1cc13cu: goto label_1cc13c;
        case 0x1cc140u: goto label_1cc140;
        case 0x1cc144u: goto label_1cc144;
        case 0x1cc148u: goto label_1cc148;
        case 0x1cc14cu: goto label_1cc14c;
        case 0x1cc150u: goto label_1cc150;
        case 0x1cc154u: goto label_1cc154;
        case 0x1cc158u: goto label_1cc158;
        case 0x1cc15cu: goto label_1cc15c;
        case 0x1cc160u: goto label_1cc160;
        case 0x1cc164u: goto label_1cc164;
        case 0x1cc168u: goto label_1cc168;
        case 0x1cc16cu: goto label_1cc16c;
        case 0x1cc170u: goto label_1cc170;
        case 0x1cc174u: goto label_1cc174;
        case 0x1cc178u: goto label_1cc178;
        case 0x1cc17cu: goto label_1cc17c;
        case 0x1cc180u: goto label_1cc180;
        case 0x1cc184u: goto label_1cc184;
        case 0x1cc188u: goto label_1cc188;
        case 0x1cc18cu: goto label_1cc18c;
        case 0x1cc190u: goto label_1cc190;
        case 0x1cc194u: goto label_1cc194;
        case 0x1cc198u: goto label_1cc198;
        case 0x1cc19cu: goto label_1cc19c;
        case 0x1cc1a0u: goto label_1cc1a0;
        case 0x1cc1a4u: goto label_1cc1a4;
        case 0x1cc1a8u: goto label_1cc1a8;
        case 0x1cc1acu: goto label_1cc1ac;
        case 0x1cc1b0u: goto label_1cc1b0;
        case 0x1cc1b4u: goto label_1cc1b4;
        case 0x1cc1b8u: goto label_1cc1b8;
        case 0x1cc1bcu: goto label_1cc1bc;
        case 0x1cc1c0u: goto label_1cc1c0;
        case 0x1cc1c4u: goto label_1cc1c4;
        case 0x1cc1c8u: goto label_1cc1c8;
        case 0x1cc1ccu: goto label_1cc1cc;
        case 0x1cc1d0u: goto label_1cc1d0;
        case 0x1cc1d4u: goto label_1cc1d4;
        case 0x1cc1d8u: goto label_1cc1d8;
        case 0x1cc1dcu: goto label_1cc1dc;
        case 0x1cc1e0u: goto label_1cc1e0;
        case 0x1cc1e4u: goto label_1cc1e4;
        default: break;
    }

    ctx->pc = 0x1cc0c8u;

label_1cc0c8:
    // 0x1cc0c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cc0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1cc0cc:
    // 0x1cc0cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cc0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1cc0d0:
    // 0x1cc0d0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1cc0d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1cc0d4:
    // 0x1cc0d4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1cc0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1cc0d8:
    // 0x1cc0d8: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x1cc0d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1cc0dc:
    // 0x1cc0dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cc0e0:
    // 0x1cc0e0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1cc0e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cc0e4:
    // 0x1cc0e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1cc0e8:
    // 0x1cc0e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cc0e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cc0ec:
    // 0x1cc0ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cc0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1cc0f0:
    // 0x1cc0f0: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x1cc0f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1cc0f4:
    // 0x1cc0f4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cc0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1cc0f8:
    // 0x1cc0f8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1cc0f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cc0fc:
    // 0x1cc0fc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1cc0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_1cc100:
    // 0x1cc100: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1cc100u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1cc104:
    // 0x1cc104: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1cc104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_1cc108:
    // 0x1cc108: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x1cc108u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1cc10c:
    // 0x1cc10c: 0x16750008  bne         $s3, $s5, . + 4 + (0x8 << 2)
label_1cc110:
    if (ctx->pc == 0x1CC110u) {
        ctx->pc = 0x1CC110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC10Cu;
        // 0x1cc110: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC114u;
        goto label_1cc114;
    }
    ctx->pc = 0x1CC10Cu;
    {
        const bool branch_taken_0x1cc10c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 21));
        ctx->pc = 0x1CC110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC10Cu;
        // 0x1cc110: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc10c) {
            ctx->pc = 0x1CC130u;
            goto label_1cc130;
        }
    }
    ctx->pc = 0x1CC114u;
label_1cc114:
    // 0x1cc114: 0xc072f28  jal         func_1CBCA0
label_1cc118:
    if (ctx->pc == 0x1CC118u) {
        ctx->pc = 0x1CC118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC114u;
        // 0x1cc118: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC11Cu;
        goto label_1cc11c;
    }
    ctx->pc = 0x1CC114u;
    SET_GPR_U32(ctx, 31, 0x1CC11Cu);
    ctx->pc = 0x1CC118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC114u;
    // 0x1cc118: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCA0u, 0x1CC114u, 0x1CC11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC11Cu;
label_1cc11c:
    // 0x1cc11c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1cc120:
    if (ctx->pc == 0x1CC120u) {
        ctx->pc = 0x1CC120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC11Cu;
        // 0x1cc120: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC124u;
        goto label_1cc124;
    }
    ctx->pc = 0x1CC11Cu;
    {
        const bool branch_taken_0x1cc11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc11c) {
            ctx->pc = 0x1CC120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC11Cu;
            // 0x1cc120: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC134u;
            goto label_1cc134;
        }
    }
    ctx->pc = 0x1CC124u;
label_1cc124:
    // 0x1cc124: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x1cc124u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
label_1cc128:
    // 0x1cc128: 0x10000024  b           . + 4 + (0x24 << 2)
label_1cc12c:
    if (ctx->pc == 0x1CC12Cu) {
        ctx->pc = 0x1CC12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC128u;
        // 0x1cc12c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC130u;
        goto label_1cc130;
    }
    ctx->pc = 0x1CC128u;
    {
        const bool branch_taken_0x1cc128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC128u;
        // 0x1cc12c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc128) {
            ctx->pc = 0x1CC1BCu;
            goto label_1cc1bc;
        }
    }
    ctx->pc = 0x1CC130u;
label_1cc130:
    // 0x1cc130: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1cc130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1cc134:
    // 0x1cc134: 0xc072f28  jal         func_1CBCA0
label_1cc138:
    if (ctx->pc == 0x1CC138u) {
        ctx->pc = 0x1CC138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC134u;
        // 0x1cc138: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC13Cu;
        goto label_1cc13c;
    }
    ctx->pc = 0x1CC134u;
    SET_GPR_U32(ctx, 31, 0x1CC13Cu);
    ctx->pc = 0x1CC138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC134u;
    // 0x1cc138: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCA0u, 0x1CC134u, 0x1CC13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC13Cu;
label_1cc13c:
    // 0x1cc13c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_1cc140:
    if (ctx->pc == 0x1CC140u) {
        ctx->pc = 0x1CC140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC13Cu;
        // 0x1cc140: 0x8e8c0008  lw          $t4, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC144u;
        goto label_1cc144;
    }
    ctx->pc = 0x1CC13Cu;
    {
        const bool branch_taken_0x1cc13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc13c) {
            ctx->pc = 0x1CC140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC13Cu;
            // 0x1cc140: 0x8e8c0008  lw          $t4, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC188u;
            goto label_1cc188;
        }
    }
    ctx->pc = 0x1CC144u;
label_1cc144:
    // 0x1cc144: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x1cc144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_1cc148:
    // 0x1cc148: 0x6200009  bltz        $s1, . + 4 + (0x9 << 2)
label_1cc14c:
    if (ctx->pc == 0x1CC14Cu) {
        ctx->pc = 0x1CC14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC148u;
        // 0x1cc14c: 0xae530000  sw          $s3, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC150u;
        goto label_1cc150;
    }
    ctx->pc = 0x1CC148u;
    {
        const bool branch_taken_0x1cc148 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1CC14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC148u;
        // 0x1cc14c: 0xae530000  sw          $s3, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc148) {
            ctx->pc = 0x1CC170u;
            goto label_1cc170;
        }
    }
    ctx->pc = 0x1CC150u;
label_1cc150:
    // 0x1cc150: 0x2b31023  subu        $v0, $s5, $s3
    ctx->pc = 0x1cc150u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_1cc154:
    // 0x1cc154: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cc154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc158:
    // 0x1cc158: 0x511026  xor         $v0, $v0, $s1
    ctx->pc = 0x1cc158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
label_1cc15c:
    // 0x1cc15c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1cc15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cc160:
    // 0x1cc160: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1cc160u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_1cc164:
    // 0x1cc164: 0x1000fff0  b           . + 4 + (-0x10 << 2)
label_1cc168:
    if (ctx->pc == 0x1CC168u) {
        ctx->pc = 0x1CC168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC164u;
        // 0x1cc168: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC16Cu;
        goto label_1cc16c;
    }
    ctx->pc = 0x1CC164u;
    {
        const bool branch_taken_0x1cc164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC164u;
        // 0x1cc168: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc164) {
            ctx->pc = 0x1CC128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc128;
        }
    }
    ctx->pc = 0x1CC16Cu;
label_1cc16c:
    // 0x1cc16c: 0x0  nop
    ctx->pc = 0x1cc16cu;
    // NOP
label_1cc170:
    // 0x1cc170: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1cc170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1cc174:
    // 0x1cc174: 0x56220011  bnel        $s1, $v0, . + 4 + (0x11 << 2)
label_1cc178:
    if (ctx->pc == 0x1CC178u) {
        ctx->pc = 0x1CC178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC174u;
        // 0x1cc178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC17Cu;
        goto label_1cc17c;
    }
    ctx->pc = 0x1CC174u;
    {
        const bool branch_taken_0x1cc174 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cc174) {
            ctx->pc = 0x1CC178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC174u;
            // 0x1cc178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC1BCu;
            goto label_1cc1bc;
        }
    }
    ctx->pc = 0x1CC17Cu;
label_1cc17c:
    // 0x1cc17c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cc17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc180:
    // 0x1cc180: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
label_1cc184:
    if (ctx->pc == 0x1CC184u) {
        ctx->pc = 0x1CC184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC180u;
        // 0x1cc184: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC188u;
        goto label_1cc188;
    }
    ctx->pc = 0x1CC180u;
    {
        const bool branch_taken_0x1cc180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC180u;
        // 0x1cc184: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc180) {
            ctx->pc = 0x1CC128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc128;
        }
    }
    ctx->pc = 0x1CC188u;
label_1cc188:
    // 0x1cc188: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cc188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cc18c:
    // 0x1cc18c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cc18cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cc190:
    // 0x1cc190: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1cc190u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1cc194:
    // 0x1cc194: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x1cc194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
label_1cc198:
    // 0x1cc198: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1cc198u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1cc19c:
    // 0x1cc19c: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1cc19cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1cc1a0:
    // 0x1cc1a0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1cc1a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1cc1a4:
    // 0x1cc1a4: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x1cc1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_1cc1a8:
    // 0x1cc1a8: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x1cc1a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cc1ac:
    // 0x1cc1ac: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1cc1acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1cc1b0:
    // 0x1cc1b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cc1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cc1b4:
    // 0x1cc1b4: 0x40f809  jalr        $v0
label_1cc1b8:
    if (ctx->pc == 0x1CC1B8u) {
        ctx->pc = 0x1CC1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC1B4u;
        // 0x1cc1b8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC1BCu;
        goto label_1cc1bc;
    }
    ctx->pc = 0x1CC1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CC1BCu);
        ctx->pc = 0x1CC1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC1B4u;
        // 0x1cc1b8: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC1B4u, 0x1CC1BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CC1BCu;
label_1cc1bc:
    // 0x1cc1bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc1bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc1c0:
    // 0x1cc1c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc1c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cc1c4:
    // 0x1cc1c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cc1c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cc1c8:
    // 0x1cc1c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cc1c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1cc1cc:
    // 0x1cc1cc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cc1ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc1d0:
    // 0x1cc1d0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1cc1d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1cc1d4:
    // 0x1cc1d4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1cc1d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1cc1d8:
    // 0x1cc1d8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1cc1d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1cc1dc:
    // 0x1cc1dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cc1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1cc1e0:
    // 0x1cc1e0: 0x3e00008  jr          $ra
label_1cc1e4:
    if (ctx->pc == 0x1CC1E4u) {
        ctx->pc = 0x1CC1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC1E0u;
        // 0x1cc1e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC1E8u;
        goto label_fallthrough_0x1cc1e0;
    }
    ctx->pc = 0x1CC1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC1E0u;
        // 0x1cc1e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cc1e0:
    ctx->pc = 0x1CC1E8u;
}
