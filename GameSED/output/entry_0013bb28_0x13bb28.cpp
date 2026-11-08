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

// Function: entry_0013bb28
// Address: 0x13bb28 - 0x13bb80
void entry_0013bb28_0x13bb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bb28_0x13bb28");
#endif

    ctx->pc = 0x13bb28u;

    // 0x13bb28: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x13bb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x13bb2c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x13bb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x13bb30: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x13bb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x13bb34: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x13bb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x13bb38: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x13bb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x13bb3c: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x13bb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x13bb40: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x13bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x13bb44: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x13bb44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13bb48: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x13bb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x13bb4c: 0x8c950200  lw          $s5, 0x200($a0)
    ctx->pc = 0x13bb4cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 512)));
    // 0x13bb50: 0x2c560001  sltiu       $s6, $v0, 0x1
    ctx->pc = 0x13bb50u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x13bb54: 0x24a500d0  addiu       $a1, $a1, 0xD0
    ctx->pc = 0x13bb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x13bb58: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x13bb58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13bb5c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x13bb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x13bb60: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x13bb60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13bb64: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x13bb64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x13bb68: 0x38631118  xori        $v1, $v1, 0x1118
    ctx->pc = 0x13bb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4376);
    // 0x13bb6c: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x13bb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x13bb70: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x13bb70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x13bb74: 0x12a00053  beqz        $s5, . + 4 + (0x53 << 2)
    ctx->pc = 0x13BB74u;
    {
        const bool branch_taken_0x13bb74 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB74u;
        // 0x13bb78: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb74) {
            ctx->pc = 0x13BCC4u;
            return;
        }
    }
    ctx->pc = 0x13BB7Cu;
    // 0x13bb7c: 0x8eb10004  lw          $s1, 0x4($s5)
    ctx->pc = 0x13bb7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    ctx->pc = 0x13bb80u;
}
