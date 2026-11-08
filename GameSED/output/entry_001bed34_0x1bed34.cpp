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

// Function: entry_001bed34
// Address: 0x1bed34 - 0x1bed90
void entry_001bed34_0x1bed34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bed34_0x1bed34");
#endif

    ctx->pc = 0x1bed34u;

    // 0x1bed34: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x1bed34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x1bed38: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x1bed38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1bed3c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1bed3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bed40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bed40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bed44: 0x472018  mult        $a0, $v0, $a3
    ctx->pc = 0x1bed44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bed48: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x1bed48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1bed4c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1bed4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1bed50: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x1bed50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1bed54: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1BED54u;
    {
        const bool branch_taken_0x1bed54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED54u;
        // 0x1bed58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed54) {
            ctx->pc = 0x1BED90u;
            return;
        }
    }
    ctx->pc = 0x1BED5Cu;
    // 0x1bed5c: 0x8e040810  lw          $a0, 0x810($s0)
    ctx->pc = 0x1bed5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x1bed60: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x1bed60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1bed64: 0x8e0501c0  lw          $a1, 0x1C0($s0)
    ctx->pc = 0x1bed64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x1bed68: 0x871818  mult        $v1, $a0, $a3
    ctx->pc = 0x1bed68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bed6c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1bed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1bed70: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x1bed70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1bed74: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1bed74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bed78: 0x2c22818  mult        $a1, $s6, $v0
    ctx->pc = 0x1bed78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bed7c: 0xb71021  addu        $v0, $a1, $s7
    ctx->pc = 0x1bed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x1bed80: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1bed80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bed84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bed84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bed88: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1BED88u;
    {
        const bool branch_taken_0x1bed88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED88u;
        // 0x1bed8c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed88) {
            ctx->pc = 0x1BEDCCu;
            return;
        }
    }
    ctx->pc = 0x1BED90u;
}
