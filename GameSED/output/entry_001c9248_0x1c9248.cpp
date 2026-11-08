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

// Function: entry_001c9248
// Address: 0x1c9248 - 0x1c9290
void entry_001c9248_0x1c9248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9248_0x1c9248");
#endif

    ctx->pc = 0x1c9248u;

    // 0x1c9248: 0x1012  mflo        $v0
    ctx->pc = 0x1c9248u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c924c: 0x1810  mfhi        $v1
    ctx->pc = 0x1c924cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c9250: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c9250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9254: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c9254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c9258: 0xe82818  mult        $a1, $a3, $t0
    ctx->pc = 0x1c9258u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1c925c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c925cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c9260: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c9260u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c9264: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1C9264u;
    {
        const bool branch_taken_0x1c9264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9264) {
            ctx->pc = 0x1C9268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9264u;
            // 0x1c9268: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9294u;
            return;
        }
    }
    ctx->pc = 0x1C926Cu;
    // 0x1c926c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c926cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c9270: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1c9270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c9274: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9274u;
    {
        const bool branch_taken_0x1c9274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9274u;
        // 0x1c9278: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9274) {
            ctx->pc = 0x1C9290u;
            return;
        }
    }
    ctx->pc = 0x1C927Cu;
    // 0x1c927c: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c927cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c9280: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9280u;
    {
        const bool branch_taken_0x1c9280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9280) {
            ctx->pc = 0x1C9284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9280u;
            // 0x1c9284: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9294u;
            return;
        }
    }
    ctx->pc = 0x1C9288u;
    // 0x1c9288: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1c9288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1c928c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c928cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    ctx->pc = 0x1c9290u;
}
