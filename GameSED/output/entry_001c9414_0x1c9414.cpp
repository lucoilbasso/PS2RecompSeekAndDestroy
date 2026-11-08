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

// Function: entry_001c9414
// Address: 0x1c9414 - 0x1c9464
void entry_001c9414_0x1c9414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9414_0x1c9414");
#endif

    ctx->pc = 0x1c9414u;

    // 0x1c9414: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x1c9414u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1c9418: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x1c9418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x1c941c: 0x1012  mflo        $v0
    ctx->pc = 0x1c941cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c9420: 0x1810  mfhi        $v1
    ctx->pc = 0x1c9420u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c9424: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c9424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9428: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c9428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c942c: 0xac3018  mult        $a2, $a1, $t4
    ctx->pc = 0x1c942cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1c9430: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c9430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c9434: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1c9434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1c9438: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C9438u;
    {
        const bool branch_taken_0x1c9438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9438u;
        // 0x1c943c: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9438) {
            ctx->pc = 0x1C9468u;
            return;
        }
    }
    ctx->pc = 0x1C9440u;
    // 0x1c9440: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1c9440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1c9444: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1c9444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c9448: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9448u;
    {
        const bool branch_taken_0x1c9448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9448u;
        // 0x1c944c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9448) {
            ctx->pc = 0x1C9464u;
            return;
        }
    }
    ctx->pc = 0x1C9450u;
    // 0x1c9450: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1c9450u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1c9454: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9454u;
    {
        const bool branch_taken_0x1c9454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9454u;
        // 0x1c9458: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9454) {
            ctx->pc = 0x1C9468u;
            return;
        }
    }
    ctx->pc = 0x1C945Cu;
    // 0x1c945c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1c945cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1c9460: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1c9460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->pc = 0x1c9464u;
}
