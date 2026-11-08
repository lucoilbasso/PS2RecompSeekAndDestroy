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

// Function: BUtilitySmoothColor__FP7Color32T0i
// Address: 0x19e470 - 0x19e5f8
void BUtilitySmoothColor__FP7Color32T0i_0x19e470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BUtilitySmoothColor__FP7Color32T0i_0x19e470");
#endif

    ctx->pc = 0x19e470u;

    // 0x19e470: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x19e470u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e474: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x19e474u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19e478: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x19e478u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x19e47c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19e47cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e480: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x19e480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x19e484: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19E484u;
    {
        const bool branch_taken_0x19e484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E484u;
        // 0x19e488: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e484) {
            ctx->pc = 0x19E4B8u;
            goto label_19e4b8;
        }
    }
    ctx->pc = 0x19E48Cu;
    // 0x19e48c: 0x871823  subu        $v1, $a0, $a3
    ctx->pc = 0x19e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x19e490: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x19e490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19e494: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x19e494u;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x19e498: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x19e498u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x19e49c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e4a0: 0x706210c8  pmaxw       $v0, $v1, $v0
    ctx->pc = 0x19e4a0u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x19e4a4: 0x21800  sll         $v1, $v0, 0
    ctx->pc = 0x19e4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19e4a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e4ac: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x19e4acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19e4b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19E4B0u;
    {
        const bool branch_taken_0x19e4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4B0u;
        // 0x19e4b4: 0xa1240000  sb          $a0, 0x0($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e4b0) {
            ctx->pc = 0x19E4F0u;
            goto label_19e4f0;
        }
    }
    ctx->pc = 0x19E4B8u;
label_19e4b8:
    // 0x19e4b8: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x19e4b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19e4bc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x19E4BCu;
    {
        const bool branch_taken_0x19e4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e4bc) {
            ctx->pc = 0x19E4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E4BCu;
            // 0x19e4c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E4F0u;
            goto label_19e4f0;
        }
    }
    ctx->pc = 0x19E4C4u;
    // 0x19e4c4: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x19e4c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x19e4c8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x19e4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19e4cc: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x19e4ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19e4d0: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x19e4d0u;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x19e4d4: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x19e4d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x19e4d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e4dc: 0x706210c8  pmaxw       $v0, $v1, $v0
    ctx->pc = 0x19e4dcu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x19e4e0: 0x21800  sll         $v1, $v0, 0
    ctx->pc = 0x19e4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19e4e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e4e8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x19e4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19e4ec: 0xa1240000  sb          $a0, 0x0($t1)
    ctx->pc = 0x19e4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 4));
label_19e4f0:
    // 0x19e4f0: 0x25280001  addiu       $t0, $t1, 0x1
    ctx->pc = 0x19e4f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x19e4f4: 0x90a70001  lbu         $a3, 0x1($a1)
    ctx->pc = 0x19e4f4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x19e4f8: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x19e4f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19e4fc: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x19e4fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x19e500: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x19e500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x19e504: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19E504u;
    {
        const bool branch_taken_0x19e504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E504u;
        // 0x19e508: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e504) {
            ctx->pc = 0x19E538u;
            goto label_19e538;
        }
    }
    ctx->pc = 0x19E50Cu;
    // 0x19e50c: 0x871823  subu        $v1, $a0, $a3
    ctx->pc = 0x19e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x19e510: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x19e510u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19e514: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x19e514u;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x19e518: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x19e518u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x19e51c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e520: 0x706210c8  pmaxw       $v0, $v1, $v0
    ctx->pc = 0x19e520u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x19e524: 0x21800  sll         $v1, $v0, 0
    ctx->pc = 0x19e524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19e528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e52c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x19e52cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19e530: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19E530u;
    {
        const bool branch_taken_0x19e530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E530u;
        // 0x19e534: 0xa1040000  sb          $a0, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e530) {
            ctx->pc = 0x19E570u;
            goto label_19e570;
        }
    }
    ctx->pc = 0x19E538u;
label_19e538:
    // 0x19e538: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x19e538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19e53c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x19E53Cu;
    {
        const bool branch_taken_0x19e53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e53c) {
            ctx->pc = 0x19E540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E53Cu;
            // 0x19e540: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E570u;
            goto label_19e570;
        }
    }
    ctx->pc = 0x19E544u;
    // 0x19e544: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x19e544u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19e548: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x19e548u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19e54c: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x19e54cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19e550: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x19e550u;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x19e554: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x19e554u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x19e558: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e55c: 0x706210c8  pmaxw       $v0, $v1, $v0
    ctx->pc = 0x19e55cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x19e560: 0x21800  sll         $v1, $v0, 0
    ctx->pc = 0x19e560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19e564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e568: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x19e568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19e56c: 0xa1040000  sb          $a0, 0x0($t0)
    ctx->pc = 0x19e56cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 4));
label_19e570:
    // 0x19e570: 0x25270002  addiu       $a3, $t1, 0x2
    ctx->pc = 0x19e570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x19e574: 0x90a50002  lbu         $a1, 0x2($a1)
    ctx->pc = 0x19e574u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x19e578: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x19e578u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19e57c: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x19e57cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x19e580: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x19e580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x19e584: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19E584u;
    {
        const bool branch_taken_0x19e584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E584u;
        // 0x19e588: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e584) {
            ctx->pc = 0x19E5B8u;
            goto label_19e5b8;
        }
    }
    ctx->pc = 0x19E58Cu;
    // 0x19e58c: 0x851823  subu        $v1, $a0, $a1
    ctx->pc = 0x19e58cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x19e590: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x19e590u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19e594: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x19e594u;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x19e598: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x19e598u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x19e59c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e5a0: 0x706210c8  pmaxw       $v0, $v1, $v0
    ctx->pc = 0x19e5a0u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x19e5a4: 0x21800  sll         $v1, $v0, 0
    ctx->pc = 0x19e5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19e5a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e5ac: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x19e5acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19e5b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19E5B0u;
    {
        const bool branch_taken_0x19e5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5B0u;
        // 0x19e5b4: 0xa0e40000  sb          $a0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e5b0) {
            ctx->pc = 0x19E5F0u;
            goto label_19e5f0;
        }
    }
    ctx->pc = 0x19E5B8u;
label_19e5b8:
    // 0x19e5b8: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x19e5b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19e5bc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x19E5BCu;
    {
        const bool branch_taken_0x19e5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e5bc) {
            ctx->pc = 0x19E5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E5BCu;
            // 0x19e5c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E5F0u;
            goto label_19e5f0;
        }
    }
    ctx->pc = 0x19E5C4u;
    // 0x19e5c4: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x19e5c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19e5c8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x19e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19e5cc: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x19e5ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19e5d0: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x19e5d0u;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x19e5d4: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x19e5d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x19e5d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e5dc: 0x706210c8  pmaxw       $v0, $v1, $v0
    ctx->pc = 0x19e5dcu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x19e5e0: 0x21800  sll         $v1, $v0, 0
    ctx->pc = 0x19e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19e5e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e5e8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x19e5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19e5ec: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x19e5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
label_19e5f0:
    // 0x19e5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x19E5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5F0u;
        // 0x19e5f4: 0x1421021  addu        $v0, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E5F8u;
}
