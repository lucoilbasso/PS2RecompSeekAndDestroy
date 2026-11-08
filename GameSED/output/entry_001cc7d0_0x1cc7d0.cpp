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

// Function: entry_001cc7d0
// Address: 0x1cc7d0 - 0x1cc808
void entry_001cc7d0_0x1cc7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc7d0_0x1cc7d0");
#endif

    ctx->pc = 0x1cc7d0u;

    // 0x1cc7d0: 0x1e60001e  bgtz        $s3, . + 4 + (0x1E << 2)
    ctx->pc = 0x1CC7D0u;
    {
        const bool branch_taken_0x1cc7d0 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x1CC7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7D0u;
        // 0x1cc7d4: 0x2301026  xor         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc7d0) {
            ctx->pc = 0x1CC84Cu;
            return;
        }
    }
    ctx->pc = 0x1CC7D8u;
    // 0x1cc7d8: 0x32020005  andi        $v0, $s0, 0x5
    ctx->pc = 0x1cc7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)5);
    // 0x1cc7dc: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x1cc7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x1cc7e0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CC7E0u;
    {
        const bool branch_taken_0x1cc7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7E0u;
        // 0x1cc7e4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc7e0) {
            ctx->pc = 0x1CC848u;
            return;
        }
    }
    ctx->pc = 0x1CC7E8u;
    // 0x1cc7e8: 0x6800007  bltz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CC7E8u;
    {
        const bool branch_taken_0x1cc7e8 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x1CC7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC7E8u;
        // 0x1cc7ec: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc7e8) {
            ctx->pc = 0x1CC808u;
            return;
        }
    }
    ctx->pc = 0x1CC7F0u;
    // 0x1cc7f0: 0x2c71023  subu        $v0, $s6, $a3
    ctx->pc = 0x1cc7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
    // 0x1cc7f4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1cc7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cc7f8: 0x541026  xor         $v0, $v0, $s4
    ctx->pc = 0x1cc7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 20));
    // 0x1cc7fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cc7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc800: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1CC800u;
    {
        const bool branch_taken_0x1cc800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC800u;
        // 0x1cc804: 0x82180b  movn        $v1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc800) {
            ctx->pc = 0x1CC844u;
            return;
        }
    }
    ctx->pc = 0x1CC808u;
}
