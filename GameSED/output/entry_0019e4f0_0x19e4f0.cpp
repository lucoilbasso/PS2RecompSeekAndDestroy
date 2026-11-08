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

// Function: entry_0019e4f0
// Address: 0x19e4f0 - 0x19e538
void entry_0019e4f0_0x19e4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e4f0_0x19e4f0");
#endif

    ctx->pc = 0x19e4f0u;

    // 0x19e4f0: 0x25280001  addiu       $t0, $t1, 0x1
    ctx->pc = 0x19e4f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x19e4f4: 0x90a70001  lbu         $a3, 0x1($a1)
    ctx->pc = 0x19e4f4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x19e4f8: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x19e4f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19e4fc: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x19e4fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x19e500: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x19e500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x19e504: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19E504u;
    {
        const bool branch_taken_0x19e504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E504u;
        // 0x19e508: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e504) {
            ctx->pc = 0x19E538u;
            return;
        }
    }
    ctx->pc = 0x19E50Cu;
    // 0x19e50c: 0x871823  subu        $v1, $a0, $a3
    ctx->pc = 0x19e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x19e510: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x19e510u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19e514: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x19e514u;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x19e518: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x19e518u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x19e51c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e520: 0x706210c8  pmaxw       $v0, $v1, $v0
    ctx->pc = 0x19e520u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x19e524: 0x21800  sll         $v1, $v0, 0
    ctx->pc = 0x19e524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x19e528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e52c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x19e52cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19e530: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19E530u;
    {
        const bool branch_taken_0x19e530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E530u;
        // 0x19e534: 0xa1040000  sb          $a0, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e530) {
            ctx->pc = 0x19E570u;
            return;
        }
    }
    ctx->pc = 0x19E538u;
}
