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

// Function: entry_0019c1f0
// Address: 0x19c1f0 - 0x19c230
void entry_0019c1f0_0x19c1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c1f0_0x19c1f0");
#endif

    ctx->pc = 0x19c1f0u;

    // 0x19c1f0: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x19c1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x19c1f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19c1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19c1f8: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x19c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x19c1fc: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x19c1fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19c200: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x19C200u;
    {
        const bool branch_taken_0x19c200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C200u;
        // 0x19c204: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c200) {
            ctx->pc = 0x19C30Cu;
            return;
        }
    }
    ctx->pc = 0x19C208u;
    // 0x19c208: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19c208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19c20c: 0x2444f0f0  addiu       $a0, $v0, -0xF10
    ctx->pc = 0x19c20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19c210: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19c210u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21F0F0u));
    // 0x19c214: 0x4610014  bgez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x19C214u;
    {
        const bool branch_taken_0x19c214 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x19C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C214u;
        // 0x19c218: 0x2445f0f0  addiu       $a1, $v0, -0xF10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c214) {
            ctx->pc = 0x19C268u;
            return;
        }
    }
    ctx->pc = 0x19C21Cu;
    // 0x19c21c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x19c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x19c220: 0x24880008  addiu       $t0, $a0, 0x8
    ctx->pc = 0x19c220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x19c224: 0x24478670  addiu       $a3, $v0, -0x7990
    ctx->pc = 0x19c224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936176));
    // 0x19c228: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c22c: 0x0  nop
    ctx->pc = 0x19c22cu;
    // NOP
    ctx->pc = 0x19c230u;
}
