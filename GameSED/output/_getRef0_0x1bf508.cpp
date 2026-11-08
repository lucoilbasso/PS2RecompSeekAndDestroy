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

// Function: _getRef0
// Address: 0x1bf508 - 0x1bf924
void _getRef0_0x1bf508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_getRef0_0x1bf508");
#endif

    ctx->pc = 0x1bf508u;

    // 0x1bf508: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x1bf508u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf50c: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1bf50cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1bf510: 0x270206bc  addiu       $v0, $t8, 0x6BC
    ctx->pc = 0x1bf510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 1724));
    // 0x1bf514: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x1bf514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x1bf518: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1bf518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1bf51c: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1bf51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1bf520: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1bf520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1bf524: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1bf524u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf528: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1bf528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1bf52c: 0x120702d  daddu       $t6, $t1, $zero
    ctx->pc = 0x1bf52cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf530: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1bf530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1bf534: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1bf534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf538: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1bf538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1bf53c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1bf53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf540: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x1bf540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x1bf544: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1bf544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x1bf548: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1bf548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1bf54c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1bf54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1bf550: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x1bf550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1bf554: 0x8f04081c  lw          $a0, 0x81C($t8)
    ctx->pc = 0x1bf554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 2076)));
    // 0x1bf558: 0x8fb600b0  lw          $s6, 0xB0($sp)
    ctx->pc = 0x1bf558u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bf55c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1bf55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1bf560: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1bf560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1bf564: 0x8fad00c0  lw          $t5, 0xC0($sp)
    ctx->pc = 0x1bf564u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1bf568: 0x8f020810  lw          $v0, 0x810($t8)
    ctx->pc = 0x1bf568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 2064)));
    // 0x1bf56c: 0xafaa0004  sw          $t2, 0x4($sp)
    ctx->pc = 0x1bf56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 10));
    // 0x1bf570: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1bf570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bf574: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x1bf574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x1bf578: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x1bf578u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1bf57c: 0x165043  sra         $t2, $s6, 1
    ctx->pc = 0x1bf57cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 22), 1));
    // 0x1bf580: 0x8fb200b8  lw          $s2, 0xB8($sp)
    ctx->pc = 0x1bf580u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1bf584: 0x1474021  addu        $t0, $t2, $a3
    ctx->pc = 0x1bf584u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1bf588: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1bf588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1bf58c: 0x8c770000  lw          $s7, 0x0($v1)
    ctx->pc = 0x1bf58cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bf590: 0x24420590  addiu       $v0, $v0, 0x590
    ctx->pc = 0x1bf590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1424));
    // 0x1bf594: 0x3021021  addu        $v0, $t8, $v0
    ctx->pc = 0x1bf594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x1bf598: 0x2e42018  mult        $a0, $s7, $a0
    ctx->pc = 0x1bf598u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bf59c: 0x248300b8  addiu       $v1, $a0, 0xB8
    ctx->pc = 0x1bf59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 184));
    // 0x1bf5a0: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x1bf5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x1bf5a4: 0x437821  addu        $t7, $v0, $v1
    ctx->pc = 0x1bf5a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bf5a8: 0x11a00005  beqz        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BF5A8u;
    {
        const bool branch_taken_0x1bf5a8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF5A8u;
        // 0x1bf5ac: 0x446021  addu        $t4, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf5a8) {
            ctx->pc = 0x1BF5C0u;
            goto label_1bf5c0;
        }
    }
    ctx->pc = 0x1BF5B0u;
    // 0x1bf5b0: 0x121043  sra         $v0, $s2, 1
    ctx->pc = 0x1bf5b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 1));
    // 0x1bf5b4: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x1bf5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1bf5b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BF5B8u;
    {
        const bool branch_taken_0x1bf5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF5B8u;
        // 0x1bf5bc: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf5b8) {
            ctx->pc = 0x1BF5C8u;
            goto label_1bf5c8;
        }
    }
    ctx->pc = 0x1BF5C0u;
label_1bf5c0:
    // 0x1bf5c0: 0x121043  sra         $v0, $s2, 1
    ctx->pc = 0x1bf5c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 1));
    // 0x1bf5c4: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x1bf5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1bf5c8:
    // 0x1bf5c8: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1bf5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1bf5cc: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1bf5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bf5d0: 0x8fc50010  lw          $a1, 0x10($fp)
    ctx->pc = 0x1bf5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1bf5d4: 0x8a103  sra         $s4, $t0, 4
    ctx->pc = 0x1bf5d4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 8), 4));
    // 0x1bf5d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1bf5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf5dc: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x1bf5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1bf5e0: 0x2852818  mult        $a1, $s4, $a1
    ctx->pc = 0x1bf5e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bf5e4: 0x6a903  sra         $s5, $a2, 4
    ctx->pc = 0x1bf5e4u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 6), 4));
    // 0x1bf5e8: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x1bf5e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bf5ec: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1bf5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bf5f0: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x1bf5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1bf5f4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1bf5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1bf5f8: 0xad830004  sw          $v1, 0x4($t4)
    ctx->pc = 0x1bf5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 3));
    // 0x1bf5fc: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1bf5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1bf600: 0xb52821  addu        $a1, $a1, $s5
    ctx->pc = 0x1bf600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x1bf604: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x1bf604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x1bf608: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1bf608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1bf60c: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x1bf60cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1bf610: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x1bf610u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x1bf614: 0x32590001  andi        $t9, $s2, 0x1
    ctx->pc = 0x1bf614u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1bf618: 0x1320000f  beqz        $t9, . + 4 + (0xF << 2)
    ctx->pc = 0x1BF618u;
    {
        const bool branch_taken_0x1bf618 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF618u;
        // 0x1bf61c: 0x32d30001  andi        $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf618) {
            ctx->pc = 0x1BF658u;
            goto label_1bf658;
        }
    }
    ctx->pc = 0x1BF620u;
    // 0x1bf620: 0x1ae1004  sllv        $v0, $t6, $t5
    ctx->pc = 0x1bf620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 13) & 0x1F));
    // 0x1bf624: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1bf624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1bf628: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1bf628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1bf62c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BF62Cu;
    {
        const bool branch_taken_0x1bf62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf62c) {
            ctx->pc = 0x1BF630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF62Cu;
            // 0x1bf630: 0xad8e0008  sw          $t6, 0x8($t4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF68Cu;
            goto label_1bf68c;
        }
    }
    ctx->pc = 0x1BF634u;
    // 0x1bf634: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1bf634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bf638: 0x1a61807  srav        $v1, $a2, $t5
    ctx->pc = 0x1bf638u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 13) & 0x1F));
    // 0x1bf63c: 0x1a21007  srav        $v0, $v0, $t5
    ctx->pc = 0x1bf63cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
    // 0x1bf640: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1bf640u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bf644: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bf644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bf648: 0x1c21823  subu        $v1, $t6, $v0
    ctx->pc = 0x1bf648u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x1bf64c: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x1bf64cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
    // 0x1bf650: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BF650u;
    {
        const bool branch_taken_0x1bf650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF650u;
        // 0x1bf654: 0xad83000c  sw          $v1, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf650) {
            ctx->pc = 0x1BF690u;
            goto label_1bf690;
        }
    }
    ctx->pc = 0x1BF658u;
label_1bf658:
    // 0x1bf658: 0x1ae1004  sllv        $v0, $t6, $t5
    ctx->pc = 0x1bf658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 13) & 0x1F));
    // 0x1bf65c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1bf65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1bf660: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x1bf660u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1bf664: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BF664u;
    {
        const bool branch_taken_0x1bf664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf664) {
            ctx->pc = 0x1BF668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF664u;
            // 0x1bf668: 0xad8e0008  sw          $t6, 0x8($t4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF68Cu;
            goto label_1bf68c;
        }
    }
    ctx->pc = 0x1BF66Cu;
    // 0x1bf66c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1bf66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bf670: 0x1a61807  srav        $v1, $a2, $t5
    ctx->pc = 0x1bf670u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 13) & 0x1F));
    // 0x1bf674: 0x1a21007  srav        $v0, $v0, $t5
    ctx->pc = 0x1bf674u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
    // 0x1bf678: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1bf678u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bf67c: 0x1c22023  subu        $a0, $t6, $v0
    ctx->pc = 0x1bf67cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x1bf680: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x1bf680u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
    // 0x1bf684: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF684u;
    {
        const bool branch_taken_0x1bf684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF684u;
        // 0x1bf688: 0xad84000c  sw          $a0, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf684) {
            ctx->pc = 0x1BF690u;
            goto label_1bf690;
        }
    }
    ctx->pc = 0x1BF68Cu;
label_1bf68c:
    // 0x1bf68c: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x1bf68cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
label_1bf690:
    // 0x1bf690: 0x8f050810  lw          $a1, 0x810($t8)
    ctx->pc = 0x1bf690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 2064)));
    // 0x1bf694: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x1bf694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1bf698: 0x24070600  addiu       $a3, $zero, 0x600
    ctx->pc = 0x1bf698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x1bf69c: 0x132040  sll         $a0, $s3, 1
    ctx->pc = 0x1bf69cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1bf6a0: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x1bf6a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bf6a4: 0x2e73818  mult        $a3, $s7, $a3
    ctx->pc = 0x1bf6a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1bf6a8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1bf6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1bf6ac: 0x64900  sll         $t1, $a2, 4
    ctx->pc = 0x1bf6acu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1bf6b0: 0x252a0300  addiu       $t2, $t1, 0x300
    ctx->pc = 0x1bf6b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 768));
    // 0x1bf6b4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1bf6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bf6b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bf6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bf6bc: 0x1a63004  sllv        $a2, $a2, $t5
    ctx->pc = 0x1bf6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 13) & 0x1F));
    // 0x1bf6c0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1bf6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1bf6c4: 0x782821  addu        $a1, $v1, $t8
    ctx->pc = 0x1bf6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x1bf6c8: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1bf6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1bf6cc: 0x161fc2  srl         $v1, $s6, 31
    ctx->pc = 0x1bf6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 31));
    // 0x1bf6d0: 0x8ca80590  lw          $t0, 0x590($a1)
    ctx->pc = 0x1bf6d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1424)));
    // 0x1bf6d4: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x1bf6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1bf6d8: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x1bf6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1bf6dc: 0x39843  sra         $s3, $v1, 1
    ctx->pc = 0x1bf6dcu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1bf6e0: 0x1079021  addu        $s2, $t0, $a3
    ctx->pc = 0x1bf6e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1bf6e4: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1bf6e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1bf6e8: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x1bf6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bf6ec: 0x2494821  addu        $t1, $s2, $t1
    ctx->pc = 0x1bf6ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x1bf6f0: 0x24a5021  addu        $t2, $s2, $t2
    ctx->pc = 0x1bf6f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
    // 0x1bf6f4: 0x5b043  sra         $s6, $a1, 1
    ctx->pc = 0x1bf6f4u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1bf6f8: 0xe42025  or          $a0, $a3, $a0
    ctx->pc = 0x1bf6f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x1bf6fc: 0x992025  or          $a0, $a0, $t9
    ctx->pc = 0x1bf6fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 25));
    // 0x1bf700: 0x103843  sra         $a3, $s0, 1
    ctx->pc = 0x1bf700u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 1));
    // 0x1bf704: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x1bf704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x1bf708: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1bf708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1bf70c: 0xad890014  sw          $t1, 0x14($t4)
    ctx->pc = 0x1bf70cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 9));
    // 0x1bf710: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x1bf710u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1bf714: 0xad860010  sw          $a2, 0x10($t4)
    ctx->pc = 0x1bf714u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 6));
    // 0x1bf718: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x1bf718u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bf71c: 0xad8a0018  sw          $t2, 0x18($t4)
    ctx->pc = 0x1bf71cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 10));
    // 0x1bf720: 0x11a00008  beqz        $t5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BF720u;
    {
        const bool branch_taken_0x1bf720 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF720u;
        // 0x1bf724: 0xe4843  sra         $t1, $t6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf720) {
            ctx->pc = 0x1BF744u;
            goto label_1bf744;
        }
    }
    ctx->pc = 0x1BF728u;
    // 0x1bf728: 0x51083  sra         $v0, $a1, 2
    ctx->pc = 0x1bf728u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 2));
    // 0x1bf72c: 0xb2043  sra         $a0, $t3, 1
    ctx->pc = 0x1bf72cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 11), 1));
    // 0x1bf730: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1bf730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1bf734: 0xf11821  addu        $v1, $a3, $s1
    ctx->pc = 0x1bf734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x1bf738: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1bf738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1bf73c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF73Cu;
    {
        const bool branch_taken_0x1bf73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF73Cu;
        // 0x1bf740: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf73c) {
            ctx->pc = 0x1BF758u;
            goto label_1bf758;
        }
    }
    ctx->pc = 0x1BF744u;
label_1bf744:
    // 0x1bf744: 0x51083  sra         $v0, $a1, 2
    ctx->pc = 0x1bf744u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 2));
    // 0x1bf748: 0xb1843  sra         $v1, $t3, 1
    ctx->pc = 0x1bf748u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), 1));
    // 0x1bf74c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bf74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bf750: 0xf12021  addu        $a0, $a3, $s1
    ctx->pc = 0x1bf750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x1bf754: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x1bf754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1bf758:
    // 0x1bf758: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1bf758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf75c: 0x650c3  sra         $t2, $a2, 3
    ctx->pc = 0x1bf75cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 6), 3));
    // 0x1bf760: 0x8fac0008  lw          $t4, 0x8($sp)
    ctx->pc = 0x1bf760u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bf764: 0xa20c0  sll         $a0, $t2, 3
    ctx->pc = 0x1bf764u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1bf768: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x1bf768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1bf76c: 0x32730001  andi        $s3, $s3, 0x1
    ctx->pc = 0x1bf76cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1bf770: 0x838c3  sra         $a3, $t0, 3
    ctx->pc = 0x1bf770u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 3));
    // 0x1bf774: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1bf774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1bf778: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1bf778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1bf77c: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1bf77cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1bf780: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x1bf780u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1bf784: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x1bf784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x1bf788: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x1bf788u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1bf78c: 0x32d90001  andi        $t9, $s6, 0x1
    ctx->pc = 0x1bf78cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    // 0x1bf790: 0xade30004  sw          $v1, 0x4($t7)
    ctx->pc = 0x1bf790u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 3));
    // 0x1bf794: 0x1320000f  beqz        $t9, . + 4 + (0xF << 2)
    ctx->pc = 0x1BF794u;
    {
        const bool branch_taken_0x1bf794 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF794u;
        // 0x1bf798: 0xade20000  sw          $v0, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf794) {
            ctx->pc = 0x1BF7D4u;
            goto label_1bf7d4;
        }
    }
    ctx->pc = 0x1BF79Cu;
    // 0x1bf79c: 0x1a91004  sllv        $v0, $t1, $t5
    ctx->pc = 0x1bf79cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
    // 0x1bf7a0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1bf7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1bf7a4: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1bf7a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1bf7a8: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BF7A8u;
    {
        const bool branch_taken_0x1bf7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf7a8) {
            ctx->pc = 0x1BF7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF7A8u;
            // 0x1bf7ac: 0xade90008  sw          $t1, 0x8($t7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF808u;
            goto label_1bf808;
        }
    }
    ctx->pc = 0x1BF7B0u;
    // 0x1bf7b0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1bf7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf7b4: 0x1a61807  srav        $v1, $a2, $t5
    ctx->pc = 0x1bf7b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 13) & 0x1F));
    // 0x1bf7b8: 0x1a21007  srav        $v0, $v0, $t5
    ctx->pc = 0x1bf7b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
    // 0x1bf7bc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1bf7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bf7c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bf7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bf7c4: 0x1221823  subu        $v1, $t1, $v0
    ctx->pc = 0x1bf7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1bf7c8: 0xade20008  sw          $v0, 0x8($t7)
    ctx->pc = 0x1bf7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 2));
    // 0x1bf7cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BF7CCu;
    {
        const bool branch_taken_0x1bf7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7CCu;
        // 0x1bf7d0: 0xade3000c  sw          $v1, 0xC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf7cc) {
            ctx->pc = 0x1BF80Cu;
            goto label_1bf80c;
        }
    }
    ctx->pc = 0x1BF7D4u;
label_1bf7d4:
    // 0x1bf7d4: 0x1a91004  sllv        $v0, $t1, $t5
    ctx->pc = 0x1bf7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
    // 0x1bf7d8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1bf7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1bf7dc: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x1bf7dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1bf7e0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BF7E0u;
    {
        const bool branch_taken_0x1bf7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf7e0) {
            ctx->pc = 0x1BF7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF7E0u;
            // 0x1bf7e4: 0xade90008  sw          $t1, 0x8($t7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF808u;
            goto label_1bf808;
        }
    }
    ctx->pc = 0x1BF7E8u;
    // 0x1bf7e8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1bf7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf7ec: 0x1a61807  srav        $v1, $a2, $t5
    ctx->pc = 0x1bf7ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 13) & 0x1F));
    // 0x1bf7f0: 0x1a21007  srav        $v0, $v0, $t5
    ctx->pc = 0x1bf7f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
    // 0x1bf7f4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1bf7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bf7f8: 0x1222023  subu        $a0, $t1, $v0
    ctx->pc = 0x1bf7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1bf7fc: 0xade20008  sw          $v0, 0x8($t7)
    ctx->pc = 0x1bf7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 2));
    // 0x1bf800: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF800u;
    {
        const bool branch_taken_0x1bf800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF800u;
        // 0x1bf804: 0xade4000c  sw          $a0, 0xC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf800) {
            ctx->pc = 0x1BF80Cu;
            goto label_1bf80c;
        }
    }
    ctx->pc = 0x1BF808u;
label_1bf808:
    // 0x1bf808: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x1bf808u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
label_1bf80c:
    // 0x1bf80c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1bf80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf810: 0xf42023  subu        $a0, $a3, $s4
    ctx->pc = 0x1bf810u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x1bf814: 0x1a21004  sllv        $v0, $v0, $t5
    ctx->pc = 0x1bf814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
    // 0x1bf818: 0x1551823  subu        $v1, $t2, $s5
    ctx->pc = 0x1bf818u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
    // 0x1bf81c: 0xade20010  sw          $v0, 0x10($t7)
    ctx->pc = 0x1bf81cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 2));
    // 0x1bf820: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1bf820u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1bf824: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1bf824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bf828: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x1bf828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1bf82c: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x1bf82cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1bf830: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1bf830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1bf834: 0x8f080810  lw          $t0, 0x810($t8)
    ctx->pc = 0x1bf834u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 2064)));
    // 0x1bf838: 0x240a0180  addiu       $t2, $zero, 0x180
    ctx->pc = 0x1bf838u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1bf83c: 0x8fac0010  lw          $t4, 0x10($sp)
    ctx->pc = 0x1bf83cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf840: 0x2442dc80  addiu       $v0, $v0, -0x2380
    ctx->pc = 0x1bf840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958208));
    // 0x1bf844: 0x1054018  mult        $t0, $t0, $a1
    ctx->pc = 0x1bf844u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1bf848: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1bf848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1bf84c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bf84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bf850: 0x8a2818  mult        $a1, $a0, $t2
    ctx->pc = 0x1bf850u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bf854: 0x18a6818  mult        $t5, $t4, $t2
    ctx->pc = 0x1bf854u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1bf858: 0x8fcb0010  lw          $t3, 0x10($fp)
    ctx->pc = 0x1bf858u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1bf85c: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x1bf85cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bf860: 0x173880  sll         $a3, $s7, 2
    ctx->pc = 0x1bf860u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x1bf864: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1bf864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf868: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1bf868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1bf86c: 0xb22021  addu        $a0, $a1, $s2
    ctx->pc = 0x1bf86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x1bf870: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1bf870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1bf874: 0x6b5821  addu        $t3, $v1, $t3
    ctx->pc = 0x1bf874u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1bf878: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1bf878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bf87c: 0x3071821  addu        $v1, $t8, $a3
    ctx->pc = 0x1bf87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 7)));
    // 0x1bf880: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1bf880u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1bf884: 0xac6c05b8  sw          $t4, 0x5B8($v1)
    ctx->pc = 0x1bf884u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1464), GPR_U32(ctx, 12));
    // 0x1bf888: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1bf888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1bf88c: 0x8fac0014  lw          $t4, 0x14($sp)
    ctx->pc = 0x1bf88cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1bf890: 0x24c30400  addiu       $v1, $a2, 0x400
    ctx->pc = 0x1bf890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x1bf894: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bf894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bf898: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x1bf898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x1bf89c: 0x1884021  addu        $t0, $t4, $t0
    ctx->pc = 0x1bf89cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x1bf8a0: 0x24c60100  addiu       $a2, $a2, 0x100
    ctx->pc = 0x1bf8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x1bf8a4: 0x16a6018  mult        $t4, $t3, $t2
    ctx->pc = 0x1bf8a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1bf8a8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1bf8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1bf8ac: 0x8fc90000  lw          $t1, 0x0($fp)
    ctx->pc = 0x1bf8acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1bf8b0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1bf8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1bf8b4: 0x24a5dca0  addiu       $a1, $a1, -0x2360
    ctx->pc = 0x1bf8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958240));
    // 0x1bf8b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bf8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bf8bc: 0xade40014  sw          $a0, 0x14($t7)
    ctx->pc = 0x1bf8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 20), GPR_U32(ctx, 4));
    // 0x1bf8c0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1bf8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1bf8c4: 0xade30018  sw          $v1, 0x18($t7)
    ctx->pc = 0x1bf8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 24), GPR_U32(ctx, 3));
    // 0x1bf8c8: 0x3072021  addu        $a0, $t8, $a3
    ctx->pc = 0x1bf8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 7)));
    // 0x1bf8cc: 0x1895821  addu        $t3, $t4, $t1
    ctx->pc = 0x1bf8ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x1bf8d0: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x1bf8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1bf8d4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1bf8d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf8d8: 0x12d4821  addu        $t1, $t1, $t5
    ctx->pc = 0x1bf8d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x1bf8dc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1bf8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bf8e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1bf8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1bf8e4: 0xac890598  sw          $t1, 0x598($a0)
    ctx->pc = 0x1bf8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1432), GPR_U32(ctx, 9));
    // 0x1bf8e8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1bf8e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf8ec: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1bf8ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bf8f0: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x1bf8f0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bf8f4: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1bf8f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bf8f8: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1bf8f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bf8fc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1bf8fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bf900: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1bf900u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bf904: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1bf904u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bf908: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1bf908u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bf90c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1bf90cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf910: 0xac6605c8  sw          $a2, 0x5C8($v1)
    ctx->pc = 0x1bf910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1480), GPR_U32(ctx, 6));
    // 0x1bf914: 0xaceb05a8  sw          $t3, 0x5A8($a3)
    ctx->pc = 0x1bf914u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1448), GPR_U32(ctx, 11));
    // 0x1bf918: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x1bf918u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x1bf91c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF91Cu;
        // 0x1bf920: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF924u;
}
