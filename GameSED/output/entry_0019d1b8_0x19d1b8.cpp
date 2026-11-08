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

// Function: entry_0019d1b8
// Address: 0x19d1b8 - 0x19d1f0
void entry_0019d1b8_0x19d1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d1b8_0x19d1b8");
#endif

    ctx->pc = 0x19d1b8u;

    // 0x19d1b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19d1bc: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x19d1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x19d1c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d1c4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x19d1c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x19d1c8: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x19d1c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19d1cc: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x19d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x19d1d0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x19d1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d1d4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19d1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19d1d8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x19d1d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19d1dc: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x19d1dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19d1e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D1E0u;
    {
        const bool branch_taken_0x19d1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D1E0u;
        // 0x19d1e4: 0x8a2021  addu        $a0, $a0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d1e0) {
            ctx->pc = 0x19D1F0u;
            return;
        }
    }
    ctx->pc = 0x19D1E8u;
    // 0x19d1e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19D1E8u;
    {
        const bool branch_taken_0x19d1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D1E8u;
        // 0x19d1ec: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d1e8) {
            ctx->pc = 0x19D1F4u;
            return;
        }
    }
    ctx->pc = 0x19D1F0u;
}
