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

// Function: entry_00131ca8
// Address: 0x131ca8 - 0x131d44
void entry_00131ca8_0x131ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131ca8_0x131ca8");
#endif

    ctx->pc = 0x131ca8u;

label_131ca8:
    // 0x131ca8: 0xace00040  sw          $zero, 0x40($a3)
    ctx->pc = 0x131ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 0));
    // 0x131cac: 0xa4e00000  sh          $zero, 0x0($a3)
    ctx->pc = 0x131cacu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x131cb0: 0xa4e00004  sh          $zero, 0x4($a3)
    ctx->pc = 0x131cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x131cb4: 0xa4e0001c  sh          $zero, 0x1C($a3)
    ctx->pc = 0x131cb4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x131cb8: 0xa4e0001e  sh          $zero, 0x1E($a3)
    ctx->pc = 0x131cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x131cbc: 0xa4ee0006  sh          $t6, 0x6($a3)
    ctx->pc = 0x131cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 6), (uint16_t)GPR_U32(ctx, 14));
    // 0x131cc0: 0xa4e00002  sh          $zero, 0x2($a3)
    ctx->pc = 0x131cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x131cc4: 0x71001004  plzcw       $v0, $t0
    ctx->pc = 0x131cc4u;
    { uint64_t v = GPR_U64(ctx, 8); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x131cc8: 0x70021488  pextlw      $v0, $zero, $v0
    ctx->pc = 0x131cc8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x131ccc: 0x1421023  subu        $v0, $t2, $v0
    ctx->pc = 0x131cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x131cd0: 0xa4e20018  sh          $v0, 0x18($a3)
    ctx->pc = 0x131cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x131cd4: 0x71001804  plzcw       $v1, $t0
    ctx->pc = 0x131cd4u;
    { uint64_t v = GPR_U64(ctx, 8); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x131cd8: 0x70031c88  pextlw      $v1, $zero, $v1
    ctx->pc = 0x131cd8u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTLW(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x131cdc: 0x1431823  subu        $v1, $t2, $v1
    ctx->pc = 0x131cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x131ce0: 0xa4e00008  sh          $zero, 0x8($a3)
    ctx->pc = 0x131ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x131ce4: 0xa4e3001a  sh          $v1, 0x1A($a3)
    ctx->pc = 0x131ce4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x131ce8: 0x24e60008  addiu       $a2, $a3, 0x8
    ctx->pc = 0x131ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x131cec: 0xa4f9000a  sh          $t9, 0xA($a3)
    ctx->pc = 0x131cecu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 25));
    // 0x131cf0: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x131cf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x131cf4: 0xa4e0000c  sh          $zero, 0xC($a3)
    ctx->pc = 0x131cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x131cf8: 0xa4e00020  sh          $zero, 0x20($a3)
    ctx->pc = 0x131cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x131cfc: 0xa4e00022  sh          $zero, 0x22($a3)
    ctx->pc = 0x131cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x131d00: 0xfce00038  sd          $zero, 0x38($a3)
    ctx->pc = 0x131d00u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 56), GPR_U64(ctx, 0));
    // 0x131d04: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x131d04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x131d08: 0xace00024  sw          $zero, 0x24($a3)
    ctx->pc = 0x131d08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 0));
    // 0x131d0c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x131d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x131d10: 0xace00028  sw          $zero, 0x28($a3)
    ctx->pc = 0x131d10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
    // 0x131d14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x131d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x131d18: 0x4d2021  addu        $a0, $v0, $t5
    ctx->pc = 0x131d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x131d1c: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x131d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x131d20: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x131d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x131d24: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x131d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131d28: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x131d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x131d2c: 0xa31806  srlv        $v1, $v1, $a1
    ctx->pc = 0x131d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x131d30: 0xa4c30006  sh          $v1, 0x6($a2)
    ctx->pc = 0x131d30u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x131d34: 0xa4e00030  sh          $zero, 0x30($a3)
    ctx->pc = 0x131d34u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x131d38: 0x1538ffdb  bne         $t1, $t8, . + 4 + (-0x25 << 2)
    ctx->pc = 0x131D38u;
    {
        const bool branch_taken_0x131d38 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 24));
        ctx->pc = 0x131D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131D38u;
        // 0x131d3c: 0x24e70048  addiu       $a3, $a3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131d38) {
            ctx->pc = 0x131CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131ca8;
        }
    }
    ctx->pc = 0x131D40u;
    // 0x131d40: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x131d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x131d44u;
}
