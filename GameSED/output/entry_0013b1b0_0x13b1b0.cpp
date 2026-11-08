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

// Function: entry_0013b1b0
// Address: 0x13b1b0 - 0x13b1e8
void entry_0013b1b0_0x13b1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b1b0_0x13b1b0");
#endif

    ctx->pc = 0x13b1b0u;

    // 0x13b1b0: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x13b1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x13b1b4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x13b1b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13b1b8: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x13b1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x13b1bc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x13b1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13b1c0: 0x706418c8  pmaxw       $v1, $v1, $a0
    ctx->pc = 0x13b1c0u;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x13b1c4: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x13b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x13b1c8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x13b1c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13b1cc: 0x2c630080  sltiu       $v1, $v1, 0x80
    ctx->pc = 0x13b1ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x13b1d0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13B1D0u;
    {
        const bool branch_taken_0x13b1d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b1d0) {
            ctx->pc = 0x13B1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B1D0u;
            // 0x13b1d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B1E8u;
            return;
        }
    }
    ctx->pc = 0x13B1D8u;
    // 0x13b1d8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x13b1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x13b1dc: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x13b1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x13b1e0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13b1e4: 0x90422040  lbu         $v0, 0x2040($v0)
    ctx->pc = 0x13b1e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8256)));
    ctx->pc = 0x13b1e8u;
}
