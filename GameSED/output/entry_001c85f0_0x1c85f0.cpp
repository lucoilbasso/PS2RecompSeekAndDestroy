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

// Function: entry_001c85f0
// Address: 0x1c85f0 - 0x1c8638
void entry_001c85f0_0x1c85f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c85f0_0x1c85f0");
#endif

    ctx->pc = 0x1c85f0u;

    // 0x1c85f0: 0x1012  mflo        $v0
    ctx->pc = 0x1c85f0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c85f4: 0x1810  mfhi        $v1
    ctx->pc = 0x1c85f4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c85f8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c85f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c85fc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c85fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c8600: 0xe82818  mult        $a1, $a3, $t0
    ctx->pc = 0x1c8600u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1c8604: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c8604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c8608: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c8608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c860c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1C860Cu;
    {
        const bool branch_taken_0x1c860c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c860c) {
            ctx->pc = 0x1C8610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C860Cu;
            // 0x1c8610: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C863Cu;
            return;
        }
    }
    ctx->pc = 0x1C8614u;
    // 0x1c8614: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c8614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c8618: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1c8618u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c861c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C861Cu;
    {
        const bool branch_taken_0x1c861c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C861Cu;
        // 0x1c8620: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c861c) {
            ctx->pc = 0x1C8638u;
            return;
        }
    }
    ctx->pc = 0x1C8624u;
    // 0x1c8624: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c8624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c8628: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8628u;
    {
        const bool branch_taken_0x1c8628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8628) {
            ctx->pc = 0x1C862Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8628u;
            // 0x1c862c: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C863Cu;
            return;
        }
    }
    ctx->pc = 0x1C8630u;
    // 0x1c8630: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1c8630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1c8634: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c8634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    ctx->pc = 0x1c8638u;
}
