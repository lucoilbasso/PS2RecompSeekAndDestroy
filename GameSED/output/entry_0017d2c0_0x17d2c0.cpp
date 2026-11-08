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

// Function: entry_0017d2c0
// Address: 0x17d2c0 - 0x17d314
void entry_0017d2c0_0x17d2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d2c0_0x17d2c0");
#endif

    ctx->pc = 0x17d2c0u;

label_17d2c0:
    // 0x17d2c0: 0x94e5fffe  lhu         $a1, -0x2($a3)
    ctx->pc = 0x17d2c0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294967294)));
    // 0x17d2c4: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x17d2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x17d2c8: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x17d2c8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17d2cc: 0xa9182b  sltu        $v1, $a1, $t1
    ctx->pc = 0x17d2ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x17d2d0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x17d2d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d2d4: 0x89102b  sltu        $v0, $a0, $t1
    ctx->pc = 0x17d2d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x17d2d8: 0x6b6018  mult        $t4, $v1, $t3
    ctx->pc = 0x17d2d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x17d2dc: 0x4b1818  mult        $v1, $v0, $t3
    ctx->pc = 0x17d2dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x17d2e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x17d2e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x17d2e4: 0x18a5021  addu        $t2, $t4, $t2
    ctx->pc = 0x17d2e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x17d2e8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17d2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17d2ec: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x17d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x17d2f0: 0x1452821  addu        $a1, $t2, $a1
    ctx->pc = 0x17d2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x17d2f4: 0x892023  subu        $a0, $a0, $t1
    ctx->pc = 0x17d2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x17d2f8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x17d2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x17d2fc: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x17d2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x17d300: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x17d300u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x17d304: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x17d304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17d308: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x17d308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17d30c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x17D30Cu;
    {
        const bool branch_taken_0x17d30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D30Cu;
        // 0x17d310: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d30c) {
            ctx->pc = 0x17D2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d2c0;
        }
    }
    ctx->pc = 0x17D314u;
}
