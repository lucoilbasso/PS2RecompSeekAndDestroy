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

// Function: entry_00175ecc
// Address: 0x175ecc - 0x175f00
void entry_00175ecc_0x175ecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175ecc_0x175ecc");
#endif

    ctx->pc = 0x175eccu;

    // 0x175ecc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x175eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x175ed0: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x175ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x175ed4: 0x8e490058  lw          $t1, 0x58($s2)
    ctx->pc = 0x175ed4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x175ed8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x175ed8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175edc: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x175edcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x175ee0: 0x213001b  divu        $zero, $s0, $s3
    ctx->pc = 0x175ee0u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x175ee4: 0x1810  mfhi        $v1
    ctx->pc = 0x175ee4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x175ee8: 0x19200030  blez        $t1, . + 4 + (0x30 << 2)
    ctx->pc = 0x175EE8u;
    {
        const bool branch_taken_0x175ee8 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x175EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175EE8u;
        // 0x175eec: 0x8e44005c  lw          $a0, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ee8) {
            ctx->pc = 0x175FACu;
            return;
        }
    }
    ctx->pc = 0x175EF0u;
    // 0x175ef0: 0x895823  subu        $t3, $a0, $t1
    ctx->pc = 0x175ef0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x175ef4: 0x738021  addu        $s0, $v1, $s3
    ctx->pc = 0x175ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x175ef8: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x175ef8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175efc: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x175efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    ctx->pc = 0x175f00u;
}
