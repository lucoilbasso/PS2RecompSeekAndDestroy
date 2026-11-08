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

// Function: entry_0015fb50
// Address: 0x15fb50 - 0x15fba4
void entry_0015fb50_0x15fb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fb50_0x15fb50");
#endif

    ctx->pc = 0x15fb50u;

    // 0x15fb50: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x15fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x15fb54: 0x3442b333  ori         $v0, $v0, 0xB333
    ctx->pc = 0x15fb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45875);
    // 0x15fb58: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x15fb58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15fb5c: 0x70002830  pmfhl.lw    $a1
    ctx->pc = 0x15fb5cu;
    SET_GPR_VEC(ctx, 5, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x15fb60: 0x52bfb  dsra        $a1, $a1, 15
    ctx->pc = 0x15fb60u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 15);
    // 0x15fb64: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x15fb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15fb68: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x15fb68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15fb6c: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x15fb6cu;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x15fb70: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x15fb70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x15fb74: 0xae630fc0  sw          $v1, 0xFC0($s3)
    ctx->pc = 0x15fb74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4032), GPR_U32(ctx, 3));
    // 0x15fb78: 0x3402f999  ori         $v0, $zero, 0xF999
    ctx->pc = 0x15fb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63897);
    // 0x15fb7c: 0x70a210e8  pminw       $v0, $a1, $v0
    ctx->pc = 0x15fb7cu;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x15fb80: 0x22800  sll         $a1, $v0, 0
    ctx->pc = 0x15fb80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x15fb84: 0x8e630fc8  lw          $v1, 0xFC8($s3)
    ctx->pc = 0x15fb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4040)));
    // 0x15fb88: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FB88u;
    {
        const bool branch_taken_0x15fb88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fb88) {
            ctx->pc = 0x15FB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FB88u;
            // 0x15fb8c: 0x8e640f34  lw          $a0, 0xF34($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3892)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FBA4u;
            return;
        }
    }
    ctx->pc = 0x15FB90u;
    // 0x15fb90: 0x24026000  addiu       $v0, $zero, 0x6000
    ctx->pc = 0x15fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x15fb94: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x15fb94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15fb98: 0x70002830  pmfhl.lw    $a1
    ctx->pc = 0x15fb98u;
    SET_GPR_VEC(ctx, 5, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x15fb9c: 0x52bfb  dsra        $a1, $a1, 15
    ctx->pc = 0x15fb9cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 15);
    // 0x15fba0: 0x8e640f34  lw          $a0, 0xF34($s3)
    ctx->pc = 0x15fba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3892)));
    ctx->pc = 0x15fba4u;
}
