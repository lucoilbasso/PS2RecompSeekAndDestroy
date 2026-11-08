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

// Function: entry_0019e4b8
// Address: 0x19e4b8 - 0x19e4f0
void entry_0019e4b8_0x19e4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e4b8_0x19e4b8");
#endif

    ctx->pc = 0x19e4b8u;

    // 0x19e4b8: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x19e4b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19e4bc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x19E4BCu;
    {
        const bool branch_taken_0x19e4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e4bc) {
            ctx->pc = 0x19E4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E4BCu;
            // 0x19e4c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E4F0u;
            return;
        }
    }
    ctx->pc = 0x19E4C4u;
    // 0x19e4c4: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x19e4c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x19e4c8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x19e4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19e4cc: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x19e4ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19e4d0: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x19e4d0u;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x19e4d4: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x19e4d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x19e4d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e4dc: 0x706210c8  pmaxw       $v0, $v1, $v0
    ctx->pc = 0x19e4dcu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x19e4e0: 0x21800  sll         $v1, $v0, 0
    ctx->pc = 0x19e4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19e4e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e4e8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x19e4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19e4ec: 0xa1240000  sb          $a0, 0x0($t1)
    ctx->pc = 0x19e4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x19e4f0u;
}
