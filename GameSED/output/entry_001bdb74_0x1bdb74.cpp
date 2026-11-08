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

// Function: entry_001bdb74
// Address: 0x1bdb74 - 0x1bdbb0
void entry_001bdb74_0x1bdb74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdb74_0x1bdb74");
#endif

    ctx->pc = 0x1bdb74u;

    // 0x1bdb74: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1bdb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bdb78: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1bdb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1bdb7c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1bdb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1bdb80: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1bdb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bdb84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bdb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bdb88: 0x47001b  divu        $zero, $v0, $a3
    ctx->pc = 0x1bdb88u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1bdb8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bdb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bdb90: 0x1012  mflo        $v0
    ctx->pc = 0x1bdb90u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1bdb94: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x1bdb94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bdb98: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1bdb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1bdb9c: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x1bdb9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1bdba0: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BDBA0u;
    {
        const bool branch_taken_0x1bdba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdba0) {
            ctx->pc = 0x1BDBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDBA0u;
            // 0x1bdba4: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDBB0u;
            return;
        }
    }
    ctx->pc = 0x1BDBA8u;
    // 0x1bdba8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BDBA8u;
    {
        const bool branch_taken_0x1bdba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDBA8u;
        // 0x1bdbac: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdba8) {
            ctx->pc = 0x1BDBC0u;
            return;
        }
    }
    ctx->pc = 0x1BDBB0u;
}
