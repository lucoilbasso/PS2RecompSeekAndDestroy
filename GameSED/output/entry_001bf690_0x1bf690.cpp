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

// Function: entry_001bf690
// Address: 0x1bf690 - 0x1bf744
void entry_001bf690_0x1bf690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf690_0x1bf690");
#endif

    ctx->pc = 0x1bf690u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x1BF744u;
}
