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

// Function: entry_0018be58
// Address: 0x18be58 - 0x18befc
void entry_0018be58_0x18be58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018be58_0x18be58");
#endif

    ctx->pc = 0x18be58u;

    // 0x18be58: 0x33c22000  andi        $v0, $fp, 0x2000
    ctx->pc = 0x18be58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8192);
    // 0x18be5c: 0x144000c1  bnez        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x18BE5Cu;
    {
        const bool branch_taken_0x18be5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE5Cu;
        // 0x18be60: 0xafb000b4  sw          $s0, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18be5c) {
            ctx->pc = 0x18C164u;
            return;
        }
    }
    ctx->pc = 0x18BE64u;
    // 0x18be64: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x18be64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18be68: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18be68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18be6c: 0x106200ba  beq         $v1, $v0, . + 4 + (0xBA << 2)
    ctx->pc = 0x18BE6Cu;
    {
        const bool branch_taken_0x18be6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18BE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE6Cu;
        // 0x18be70: 0x33cc00f0  andi        $t4, $fp, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18be6c) {
            ctx->pc = 0x18C158u;
            return;
        }
    }
    ctx->pc = 0x18BE74u;
    // 0x18be74: 0x158000b9  bnez        $t4, . + 4 + (0xB9 << 2)
    ctx->pc = 0x18BE74u;
    {
        const bool branch_taken_0x18be74 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BE74u;
        // 0x18be78: 0x33c22000  andi        $v0, $fp, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18be74) {
            ctx->pc = 0x18C15Cu;
            return;
        }
    }
    ctx->pc = 0x18BE7Cu;
    // 0x18be7c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x18be7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18be80: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x18be80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x18be84: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18be84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18be88: 0x8fa60094  lw          $a2, 0x94($sp)
    ctx->pc = 0x18be88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x18be8c: 0x625821  addu        $t3, $v1, $v0
    ctx->pc = 0x18be8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18be90: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x18be90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x18be94: 0x916d0007  lbu         $t5, 0x7($t3)
    ctx->pc = 0x18be94u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 7)));
    // 0x18be98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18be98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18be9c: 0x86490010  lh          $t1, 0x10($s2)
    ctx->pc = 0x18be9cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x18bea0: 0xc75026  xor         $t2, $a2, $a3
    ctx->pc = 0x18bea0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x18bea4: 0x86480012  lh          $t0, 0x12($s2)
    ctx->pc = 0x18bea4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x18bea8: 0xd302b  sltu        $a2, $zero, $t5
    ctx->pc = 0x18bea8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x18beac: 0x95640000  lhu         $a0, 0x0($t3)
    ctx->pc = 0x18beacu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x18beb0: 0xa300b  movn        $a2, $zero, $t2
    ctx->pc = 0x18beb0u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x18beb4: 0x95650002  lhu         $a1, 0x2($t3)
    ctx->pc = 0x18beb4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x18beb8: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x18beb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bebc: 0x96c20002  lhu         $v0, 0x2($s6)
    ctx->pc = 0x18bebcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x18bec0: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x18bec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x18bec4: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x18bec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x18bec8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18becc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x18beccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18bed0: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x18bed0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18bed4: 0x15470009  bne         $t2, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x18BED4u;
    {
        const bool branch_taken_0x18bed4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 7));
        ctx->pc = 0x18BED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BED4u;
        // 0x18bed8: 0x2449ffff  addiu       $t1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bed4) {
            ctx->pc = 0x18BEFCu;
            return;
        }
    }
    ctx->pc = 0x18BEDCu;
    // 0x18bedc: 0x81620006  lb          $v0, 0x6($t3)
    ctx->pc = 0x18bedcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x18bee0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x18bee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18bee4: 0x706c18c8  pmaxw       $v1, $v1, $t4
    ctx->pc = 0x18bee4u;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 12)));
    // 0x18bee8: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x18bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x18beec: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x18beecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18bef0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x18bef0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18bef4: 0x8d1821  addu        $v1, $a0, $t5
    ctx->pc = 0x18bef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x18bef8: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x18bef8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x18befcu;
}
