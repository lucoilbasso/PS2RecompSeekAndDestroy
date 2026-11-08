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

// Function: entry_00117cac
// Address: 0x117cac - 0x117d30
void entry_00117cac_0x117cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117cac_0x117cac");
#endif

    ctx->pc = 0x117cacu;

    // 0x117cac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x117cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x117cb0: 0x28c2000c  slti        $v0, $a2, 0xC
    ctx->pc = 0x117cb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x117cb4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x117CB4u;
    {
        const bool branch_taken_0x117cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117CB4u;
        // 0x117cb8: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117cb4) {
            ctx->pc = 0x117C68u;
            return;
        }
    }
    ctx->pc = 0x117CBCu;
    // 0x117cbc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x117cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117cc0: 0x12a2021  addu        $a0, $t1, $t2
    ctx->pc = 0x117cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x117cc4: 0x93a70008  lbu         $a3, 0x8($sp)
    ctx->pc = 0x117cc4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x117cc8: 0x308600f0  andi        $a2, $a0, 0xF0
    ctx->pc = 0x117cc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
    // 0x117ccc: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x117cccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x117cd0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x117cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x117cd4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x117cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x117cd8: 0xa1900  sll         $v1, $t2, 4
    ctx->pc = 0x117cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x117cdc: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x117cdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x117ce0: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x117ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x117ce4: 0x3185000f  andi        $a1, $t4, 0xF
    ctx->pc = 0x117ce4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)15);
    // 0x117ce8: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x117ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x117cec: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x117cecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x117cf0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x117cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x117cf4: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x117cf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x117cf8: 0x23402  srl         $a2, $v0, 16
    ctx->pc = 0x117cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x117cfc: 0x24602  srl         $t0, $v0, 24
    ctx->pc = 0x117cfcu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x117d00: 0x34e70080  ori         $a3, $a3, 0x80
    ctx->pc = 0x117d00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x117d04: 0x22a02  srl         $a1, $v0, 8
    ctx->pc = 0x117d04u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x117d08: 0xa2060001  sb          $a2, 0x1($s0)
    ctx->pc = 0x117d08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x117d0c: 0xa2030005  sb          $v1, 0x5($s0)
    ctx->pc = 0x117d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x117d10: 0x260b0007  addiu       $t3, $s0, 0x7
    ctx->pc = 0x117d10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x117d14: 0xa2050003  sb          $a1, 0x3($s0)
    ctx->pc = 0x117d14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x117d18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x117d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d1c: 0xa2080000  sb          $t0, 0x0($s0)
    ctx->pc = 0x117d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x117d20: 0xa2070002  sb          $a3, 0x2($s0)
    ctx->pc = 0x117d20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x117d24: 0xa2040004  sb          $a0, 0x4($s0)
    ctx->pc = 0x117d24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x117d28: 0xafa9000c  sw          $t1, 0xC($sp)
    ctx->pc = 0x117d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 9));
    // 0x117d2c: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x117d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x117d30u;
}
