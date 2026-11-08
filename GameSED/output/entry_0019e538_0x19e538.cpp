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

// Function: entry_0019e538
// Address: 0x19e538 - 0x19e570
void entry_0019e538_0x19e538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e538_0x19e538");
#endif

    ctx->pc = 0x19e538u;

    // 0x19e538: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x19e538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19e53c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x19E53Cu;
    {
        const bool branch_taken_0x19e53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e53c) {
            ctx->pc = 0x19E540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E53Cu;
            // 0x19e540: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E570u;
            return;
        }
    }
    ctx->pc = 0x19E544u;
    // 0x19e544: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x19e544u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19e548: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x19e548u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19e54c: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x19e54cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19e550: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x19e550u;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x19e554: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x19e554u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x19e558: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e55c: 0x706210c8  pmaxw       $v0, $v1, $v0
    ctx->pc = 0x19e55cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x19e560: 0x21800  sll         $v1, $v0, 0
    ctx->pc = 0x19e560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19e564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e568: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x19e568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19e56c: 0xa1040000  sb          $a0, 0x0($t0)
    ctx->pc = 0x19e56cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x19e570u;
}
