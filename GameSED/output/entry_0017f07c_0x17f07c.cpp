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

// Function: entry_0017f07c
// Address: 0x17f07c - 0x17f118
void entry_0017f07c_0x17f07c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f07c_0x17f07c");
#endif

    ctx->pc = 0x17f07cu;

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
            return;
        }
    }
    ctx->pc = 0x17F118u;
}
