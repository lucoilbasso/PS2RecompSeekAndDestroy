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

// Function: entry_00153f50
// Address: 0x153f50 - 0x153f88
void entry_00153f50_0x153f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153f50_0x153f50");
#endif

    ctx->pc = 0x153f50u;

    // 0x153f50: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x153f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x153f54: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x153f54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x153f58: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x153f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x153f5c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x153f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x153f60: 0x706418c8  pmaxw       $v1, $v1, $a0
    ctx->pc = 0x153f60u;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x153f64: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x153f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x153f68: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x153f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x153f6c: 0x2c630080  sltiu       $v1, $v1, 0x80
    ctx->pc = 0x153f6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x153f70: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x153F70u;
    {
        const bool branch_taken_0x153f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153f70) {
            ctx->pc = 0x153F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153F70u;
            // 0x153f74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153F88u;
            return;
        }
    }
    ctx->pc = 0x153F78u;
    // 0x153f78: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x153f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x153f7c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x153f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x153f80: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x153f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x153f84: 0x90422040  lbu         $v0, 0x2040($v0)
    ctx->pc = 0x153f84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8256)));
    ctx->pc = 0x153f88u;
}
