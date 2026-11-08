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

// Function: entry_001d8d50
// Address: 0x1d8d50 - 0x1d8d88
void entry_001d8d50_0x1d8d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8d50_0x1d8d50");
#endif

    ctx->pc = 0x1d8d50u;

    // 0x1d8d50: 0x24e30040  addiu       $v1, $a3, 0x40
    ctx->pc = 0x1d8d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x1d8d54: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1d8d54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8d58: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x1d8d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x1d8d5c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1d8d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8d60: 0x706418c8  pmaxw       $v1, $v1, $a0
    ctx->pc = 0x1d8d60u;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1d8d64: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x1d8d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x1d8d68: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1d8d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d8d6c: 0x2c630080  sltiu       $v1, $v1, 0x80
    ctx->pc = 0x1d8d6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x1d8d70: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8D70u;
    {
        const bool branch_taken_0x1d8d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8d70) {
            ctx->pc = 0x1D8D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8D70u;
            // 0x1d8d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8D88u;
            return;
        }
    }
    ctx->pc = 0x1D8D78u;
    // 0x1d8d78: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1d8d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1d8d7c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1d8d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1d8d80: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1d8d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1d8d84: 0x90422040  lbu         $v0, 0x2040($v0)
    ctx->pc = 0x1d8d84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8256)));
    ctx->pc = 0x1d8d88u;
}
