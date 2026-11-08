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

// Function: ApCqpart_SDScale_Proc__FP9ApcCqpartP17CQ2PartsSequencerP9FVScale32
// Address: 0x166248 - 0x1665d0
void ApCqpart_SDScale_Proc__FP9ApcCqpartP17CQ2PartsSequencerP9FVScale32_0x166248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCqpart_SDScale_Proc__FP9ApcCqpartP17CQ2PartsSequencerP9FVScale32_0x166248");
#endif

    switch (ctx->pc) {
        case 0x1662e0u: goto label_1662e0;
        case 0x166330u: goto label_166330;
        case 0x166354u: goto label_166354;
        case 0x1663b0u: goto label_1663b0;
        case 0x1663d4u: goto label_1663d4;
        case 0x1663ecu: goto label_1663ec;
        case 0x166430u: goto label_166430;
        case 0x166440u: goto label_166440;
        case 0x1664c8u: goto label_1664c8;
        case 0x1664ecu: goto label_1664ec;
        case 0x166504u: goto label_166504;
        case 0x166548u: goto label_166548;
        case 0x166558u: goto label_166558;
        default: break;
    }

    ctx->pc = 0x166248u;

    // 0x166248: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x166248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16624c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16624cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x166250: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x166250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166254: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x166254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x166258: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x166258u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16625c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x16625cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x166260: 0x24170008  addiu       $s7, $zero, 0x8
    ctx->pc = 0x166260u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x166264: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x166264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x166268: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x166268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16626c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16626cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x166270: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x166270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x166274: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x166274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x166278: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x166278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x16627c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16627cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x166280: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x166280u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x166284: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x166284u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x166288: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x166288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x16628c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x16628cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x166290: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x166290u;
    {
        const bool branch_taken_0x166290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x166294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166290u;
        // 0x166294: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x166290) {
            ctx->pc = 0x166370u;
            goto label_166370;
        }
    }
    ctx->pc = 0x166298u;
    // 0x166298: 0x1c600007  bgtz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x166298u;
    {
        const bool branch_taken_0x166298 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x16629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166298u;
        // 0x16629c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166298) {
            ctx->pc = 0x1662B8u;
            goto label_1662b8;
        }
    }
    ctx->pc = 0x1662A0u;
    // 0x1662a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1662a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1662a4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1662A4u;
    {
        const bool branch_taken_0x1662a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1662A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1662A4u;
        // 0x1662a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1662a4) {
            ctx->pc = 0x1662C8u;
            goto label_1662c8;
        }
    }
    ctx->pc = 0x1662ACu;
    // 0x1662ac: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x1662ACu;
    {
        const bool branch_taken_0x1662ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1662B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1662ACu;
        // 0x1662b0: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1662ac) {
            ctx->pc = 0x1665A4u;
            goto label_1665a4;
        }
    }
    ctx->pc = 0x1662B4u;
    // 0x1662b4: 0x0  nop
    ctx->pc = 0x1662b4u;
    // NOP
label_1662b8:
    // 0x1662b8: 0x10620071  beq         $v1, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x1662B8u;
    {
        const bool branch_taken_0x1662b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1662BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1662B8u;
        // 0x1662bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1662b8) {
            ctx->pc = 0x166480u;
            goto label_166480;
        }
    }
    ctx->pc = 0x1662C0u;
    // 0x1662c0: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x1662C0u;
    {
        const bool branch_taken_0x1662c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1662C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1662C0u;
        // 0x1662c4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1662c0) {
            ctx->pc = 0x1665A4u;
            goto label_1665a4;
        }
    }
    ctx->pc = 0x1662C8u;
label_1662c8:
    // 0x1662c8: 0x8e4211e0  lw          $v0, 0x11E0($s2)
    ctx->pc = 0x1662c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4576)));
    // 0x1662cc: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1662CCu;
    {
        const bool branch_taken_0x1662cc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1662D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1662CCu;
        // 0x1662d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1662cc) {
            ctx->pc = 0x166314u;
            goto label_166314;
        }
    }
    ctx->pc = 0x1662D4u;
    // 0x1662d4: 0x26690008  addiu       $t1, $s3, 0x8
    ctx->pc = 0x1662d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1662d8: 0x264711e4  addiu       $a3, $s2, 0x11E4
    ctx->pc = 0x1662d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4580));
    // 0x1662dc: 0x0  nop
    ctx->pc = 0x1662dcu;
    // NOP
label_1662e0:
    // 0x1662e0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1662e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1662e4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1662e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1662e8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1662e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1662ec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1662ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1662f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1662f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1662f4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1662f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1662f8: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x1662f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x1662fc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1662fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x166300: 0x8e4211e0  lw          $v0, 0x11E0($s2)
    ctx->pc = 0x166300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4576)));
    // 0x166304: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x166304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x166308: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x166308u;
    {
        const bool branch_taken_0x166308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166308u;
        // 0x16630c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166308) {
            ctx->pc = 0x1662E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1662e0;
        }
    }
    ctx->pc = 0x166310u;
    // 0x166310: 0x8e4211e0  lw          $v0, 0x11E0($s2)
    ctx->pc = 0x166310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4576)));
label_166314:
    // 0x166314: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x166314u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166318: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x166318u;
    {
        const bool branch_taken_0x166318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166318u;
        // 0x16631c: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166318) {
            ctx->pc = 0x166364u;
            goto label_166364;
        }
    }
    ctx->pc = 0x166320u;
    // 0x166320: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x166320u;
    {
        const bool branch_taken_0x166320 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x166324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166320u;
        // 0x166324: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166320) {
            ctx->pc = 0x166364u;
            goto label_166364;
        }
    }
    ctx->pc = 0x166328u;
    // 0x166328: 0x265011e4  addiu       $s0, $s2, 0x11E4
    ctx->pc = 0x166328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4580));
    // 0x16632c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16632cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_166330:
    // 0x166330: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x166330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x166334: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x166334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x166338: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x166338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16633c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x16633cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x166340: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x166340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166344: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x166348: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x166348u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x16634c: 0xc0618f2  jal         func_1863C8
    ctx->pc = 0x16634Cu;
    SET_GPR_U32(ctx, 31, 0x166354u);
    ctx->pc = 0x166350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16634Cu;
    // 0x166350: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x16634Cu, 0x166354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166354u;
label_166354:
    // 0x166354: 0x8e2211e0  lw          $v0, 0x11E0($s1)
    ctx->pc = 0x166354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4576)));
    // 0x166358: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x166358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16635c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x16635Cu;
    {
        const bool branch_taken_0x16635c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16635c) {
            ctx->pc = 0x166360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16635Cu;
            // 0x166360: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166330;
        }
    }
    ctx->pc = 0x166364u;
label_166364:
    // 0x166364: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x166364u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x166368: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x166368u;
    {
        const bool branch_taken_0x166368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166368u;
        // 0x16636c: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166368) {
            ctx->pc = 0x16659Cu;
            goto label_16659c;
        }
    }
    ctx->pc = 0x166370u;
label_166370:
    // 0x166370: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x166370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x166374: 0x54400045  bnel        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x166374u;
    {
        const bool branch_taken_0x166374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166374) {
            ctx->pc = 0x166378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166374u;
            // 0x166378: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16648Cu;
            goto label_16648c;
        }
    }
    ctx->pc = 0x16637Cu;
    // 0x16637c: 0x10800088  beqz        $a0, . + 4 + (0x88 << 2)
    ctx->pc = 0x16637Cu;
    {
        const bool branch_taken_0x16637c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x166380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16637Cu;
        // 0x166380: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16637c) {
            ctx->pc = 0x1665A0u;
            goto label_1665a0;
        }
    }
    ctx->pc = 0x166384u;
    // 0x166384: 0x8e4211e0  lw          $v0, 0x11E0($s2)
    ctx->pc = 0x166384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4576)));
    // 0x166388: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x166388u;
    {
        const bool branch_taken_0x166388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166388u;
        // 0x16638c: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166388) {
            ctx->pc = 0x1663FCu;
            goto label_1663fc;
        }
    }
    ctx->pc = 0x166390u;
    // 0x166390: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x166390u;
    {
        const bool branch_taken_0x166390 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x166394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166390u;
        // 0x166394: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166390) {
            ctx->pc = 0x1663FCu;
            goto label_1663fc;
        }
    }
    ctx->pc = 0x166398u;
    // 0x166398: 0xc795837c  lwc1        $f21, -0x7C84($gp)
    ctx->pc = 0x166398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16639c: 0x3c160021  lui         $s6, 0x21
    ctx->pc = 0x16639cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)33 << 16));
    // 0x1663a0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1663a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1663a4: 0x265111e4  addiu       $s1, $s2, 0x11E4
    ctx->pc = 0x1663a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4580));
    // 0x1663a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1663a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1663ac: 0x0  nop
    ctx->pc = 0x1663acu;
    // NOP
label_1663b0:
    // 0x1663b0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1663b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1663b4: 0x8e8301b4  lw          $v1, 0x1B4($s4)
    ctx->pc = 0x1663b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x1663b8: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x1663b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1663bc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1663bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1663c0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1663c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1663c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1663c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1663c8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1663c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1663cc: 0xc06164c  jal         func_185930
    ctx->pc = 0x1663CCu;
    SET_GPR_U32(ctx, 31, 0x1663D4u);
    ctx->pc = 0x1663D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1663CCu;
    // 0x1663d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1663CCu, 0x1663D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1663D4u;
label_1663d4:
    // 0x1663d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1663d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1663d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1663d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1663dc: 0x26c6aa70  addiu       $a2, $s6, -0x5590
    ctx->pc = 0x1663dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945392));
    // 0x1663e0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1663e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1663e4: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x1663E4u;
    SET_GPR_U32(ctx, 31, 0x1663ECu);
    ctx->pc = 0x1663E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1663E4u;
    // 0x1663e8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x1663E4u, 0x1663ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1663ECu;
label_1663ec:
    // 0x1663ec: 0x8e8211e0  lw          $v0, 0x11E0($s4)
    ctx->pc = 0x1663ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4576)));
    // 0x1663f0: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x1663f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1663f4: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1663F4u;
    {
        const bool branch_taken_0x1663f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1663f4) {
            ctx->pc = 0x1663F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1663F4u;
            // 0x1663f8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1663B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1663b0;
        }
    }
    ctx->pc = 0x1663FCu;
label_1663fc:
    // 0x1663fc: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1663fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x166400: 0x26461258  addiu       $a2, $s2, 0x1258
    ctx->pc = 0x166400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4696));
    // 0x166404: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x166404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x166408: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x166408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16640c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16640cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x166410: 0xae77000c  sw          $s7, 0xC($s3)
    ctx->pc = 0x166410u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 23));
    // 0x166414: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x166414u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x166418: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16641c: 0x1080005f  beqz        $a0, . + 4 + (0x5F << 2)
    ctx->pc = 0x16641Cu;
    {
        const bool branch_taken_0x16641c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x166420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16641Cu;
        // 0x166420: 0xae431260  sw          $v1, 0x1260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16641c) {
            ctx->pc = 0x16659Cu;
            goto label_16659c;
        }
    }
    ctx->pc = 0x166424u;
    // 0x166424: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x166424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166428: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x166428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16642c: 0x0  nop
    ctx->pc = 0x16642cu;
    // NOP
label_166430:
    // 0x166430: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x166430u;
    {
        const bool branch_taken_0x166430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166430) {
            ctx->pc = 0x166434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166430u;
            // 0x166434: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166460u;
            goto label_166460;
        }
    }
    ctx->pc = 0x166438u;
    // 0x166438: 0xac4000e0  sw          $zero, 0xE0($v0)
    ctx->pc = 0x166438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
    // 0x16643c: 0x0  nop
    ctx->pc = 0x16643cu;
    // NOP
label_166440:
    // 0x166440: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x166440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x166444: 0x0  nop
    ctx->pc = 0x166444u;
    // NOP
    // 0x166448: 0x0  nop
    ctx->pc = 0x166448u;
    // NOP
    // 0x16644c: 0x0  nop
    ctx->pc = 0x16644cu;
    // NOP
    // 0x166450: 0x0  nop
    ctx->pc = 0x166450u;
    // NOP
    // 0x166454: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x166454u;
    {
        const bool branch_taken_0x166454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166454) {
            ctx->pc = 0x166458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166454u;
            // 0x166458: 0xac4000e0  sw          $zero, 0xE0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166440;
        }
    }
    ctx->pc = 0x16645Cu;
    // 0x16645c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x16645cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_166460:
    // 0x166460: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x166460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x166464: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x166464u;
    {
        const bool branch_taken_0x166464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166464u;
        // 0x166468: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166464) {
            ctx->pc = 0x16659Cu;
            goto label_16659c;
        }
    }
    ctx->pc = 0x16646Cu;
    // 0x16646c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x16646cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x166470: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x166470u;
    {
        const bool branch_taken_0x166470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166470) {
            ctx->pc = 0x166474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166470u;
            // 0x166474: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166430;
        }
    }
    ctx->pc = 0x166478u;
    // 0x166478: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x166478u;
    {
        const bool branch_taken_0x166478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166478u;
        // 0x16647c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166478) {
            ctx->pc = 0x1665A0u;
            goto label_1665a0;
        }
    }
    ctx->pc = 0x166480u;
label_166480:
    // 0x166480: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x166480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x166484: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x166484u;
    {
        const bool branch_taken_0x166484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166484u;
        // 0x166488: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166484) {
            ctx->pc = 0x166498u;
            goto label_166498;
        }
    }
    ctx->pc = 0x16648Cu;
label_16648c:
    // 0x16648c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x16648Cu;
    {
        const bool branch_taken_0x16648c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16648Cu;
        // 0x166490: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16648c) {
            ctx->pc = 0x16659Cu;
            goto label_16659c;
        }
    }
    ctx->pc = 0x166494u;
    // 0x166494: 0x0  nop
    ctx->pc = 0x166494u;
    // NOP
label_166498:
    // 0x166498: 0x14800041  bnez        $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x166498u;
    {
        const bool branch_taken_0x166498 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166498u;
        // 0x16649c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166498) {
            ctx->pc = 0x1665A0u;
            goto label_1665a0;
        }
    }
    ctx->pc = 0x1664A0u;
    // 0x1664a0: 0x8e4211e0  lw          $v0, 0x11E0($s2)
    ctx->pc = 0x1664a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4576)));
    // 0x1664a4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1664a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1664a8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1664A8u;
    {
        const bool branch_taken_0x1664a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1664ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1664A8u;
        // 0x1664ac: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1664a8) {
            ctx->pc = 0x166514u;
            goto label_166514;
        }
    }
    ctx->pc = 0x1664B0u;
    // 0x1664b0: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1664B0u;
    {
        const bool branch_taken_0x1664b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1664B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1664B0u;
        // 0x1664b4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1664b0) {
            ctx->pc = 0x166514u;
            goto label_166514;
        }
    }
    ctx->pc = 0x1664B8u;
    // 0x1664b8: 0xc7958380  lwc1        $f21, -0x7C80($gp)
    ctx->pc = 0x1664b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1664bc: 0x265111e4  addiu       $s1, $s2, 0x11E4
    ctx->pc = 0x1664bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4580));
    // 0x1664c0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1664c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1664c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1664c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1664c8:
    // 0x1664c8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1664c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1664cc: 0x8e8301b4  lw          $v1, 0x1B4($s4)
    ctx->pc = 0x1664ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x1664d0: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x1664d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1664d4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1664d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1664d8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1664d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1664dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1664dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1664e0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1664e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1664e4: 0xc06164c  jal         func_185930
    ctx->pc = 0x1664E4u;
    SET_GPR_U32(ctx, 31, 0x1664ECu);
    ctx->pc = 0x1664E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1664E4u;
    // 0x1664e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1664E4u, 0x1664ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1664ECu;
label_1664ec:
    // 0x1664ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1664ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1664f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1664f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1664f4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1664f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1664f8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1664f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1664fc: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x1664FCu;
    SET_GPR_U32(ctx, 31, 0x166504u);
    ctx->pc = 0x166500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1664FCu;
    // 0x166500: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x1664FCu, 0x166504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166504u;
label_166504:
    // 0x166504: 0x8e8211e0  lw          $v0, 0x11E0($s4)
    ctx->pc = 0x166504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4576)));
    // 0x166508: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x166508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16650c: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x16650Cu;
    {
        const bool branch_taken_0x16650c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16650c) {
            ctx->pc = 0x166510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16650Cu;
            // 0x166510: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1664C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1664c8;
        }
    }
    ctx->pc = 0x166514u;
label_166514:
    // 0x166514: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x166514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166518: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x166518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x16651c: 0x8c831258  lw          $v1, 0x1258($a0)
    ctx->pc = 0x16651cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4696)));
    // 0x166520: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x166520u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166524: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x166524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x166528: 0xae77000c  sw          $s7, 0xC($s3)
    ctx->pc = 0x166528u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 23));
    // 0x16652c: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x16652cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x166530: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x166530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x166534: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x166534u;
    {
        const bool branch_taken_0x166534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x166538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166534u;
        // 0x166538: 0xac801260  sw          $zero, 0x1260($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166534) {
            ctx->pc = 0x16659Cu;
            goto label_16659c;
        }
    }
    ctx->pc = 0x16653Cu;
    // 0x16653c: 0x24071250  addiu       $a3, $zero, 0x1250
    ctx->pc = 0x16653cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4688));
    // 0x166540: 0x24061250  addiu       $a2, $zero, 0x1250
    ctx->pc = 0x166540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4688));
    // 0x166544: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x166544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_166548:
    // 0x166548: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x166548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16654c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16654Cu;
    {
        const bool branch_taken_0x16654c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16654Cu;
        // 0x166550: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16654c) {
            ctx->pc = 0x166574u;
            goto label_166574;
        }
    }
    ctx->pc = 0x166554u;
    // 0x166554: 0xac4300e0  sw          $v1, 0xE0($v0)
    ctx->pc = 0x166554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 3));
label_166558:
    // 0x166558: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x166558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x16655c: 0x0  nop
    ctx->pc = 0x16655cu;
    // NOP
    // 0x166560: 0x0  nop
    ctx->pc = 0x166560u;
    // NOP
    // 0x166564: 0x0  nop
    ctx->pc = 0x166564u;
    // NOP
    // 0x166568: 0x0  nop
    ctx->pc = 0x166568u;
    // NOP
    // 0x16656c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16656Cu;
    {
        const bool branch_taken_0x16656c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16656c) {
            ctx->pc = 0x166570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16656Cu;
            // 0x166570: 0xac4300e0  sw          $v1, 0xE0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166558;
        }
    }
    ctx->pc = 0x166574u;
label_166574:
    // 0x166574: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x166574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x166578: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x166578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x16657c: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x16657cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x166580: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x166580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x166584: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x166584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166588: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x166588u;
    {
        const bool branch_taken_0x166588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166588u;
        // 0x16658c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166588) {
            ctx->pc = 0x16659Cu;
            goto label_16659c;
        }
    }
    ctx->pc = 0x166590u;
    // 0x166590: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x166590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x166594: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x166594u;
    {
        const bool branch_taken_0x166594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166594u;
        // 0x166598: 0xa61021  addu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166594) {
            ctx->pc = 0x166548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166548;
        }
    }
    ctx->pc = 0x16659Cu;
label_16659c:
    // 0x16659c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16659cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1665a0:
    // 0x1665a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1665a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1665a4:
    // 0x1665a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1665a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1665a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1665a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1665ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1665acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1665b0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1665b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1665b4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1665b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1665b8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1665b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1665bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1665bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1665c0: 0xc7b50050  lwc1        $f21, 0x50($sp)
    ctx->pc = 0x1665c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1665c4: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x1665c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1665c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1665C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1665CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665C8u;
        // 0x1665cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1665C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1665D0u;
}
