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

// Function: entry_0010fa50
// Address: 0x10fa50 - 0x10fa88
void entry_0010fa50_0x10fa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fa50_0x10fa50");
#endif

    ctx->pc = 0x10fa50u;

    // 0x10fa50: 0x32220008  andi        $v0, $s1, 0x8
    ctx->pc = 0x10fa50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
    // 0x10fa54: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x10FA54u;
    {
        const bool branch_taken_0x10fa54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA54u;
        // 0x10fa58: 0x241400b6  addiu       $s4, $zero, 0xB6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fa54) {
            ctx->pc = 0x10FBE0u;
            return;
        }
    }
    ctx->pc = 0x10FA5Cu;
    // 0x10fa5c: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x10fa5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
    // 0x10fa60: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x10FA60u;
    {
        const bool branch_taken_0x10fa60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA60u;
        // 0x10fa64: 0x32624000  andi        $v0, $s3, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fa60) {
            ctx->pc = 0x10FAF0u;
            return;
        }
    }
    ctx->pc = 0x10FA68u;
    // 0x10fa68: 0x32224000  andi        $v0, $s1, 0x4000
    ctx->pc = 0x10fa68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16384);
    // 0x10fa6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10FA6Cu;
    {
        const bool branch_taken_0x10fa6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA6Cu;
        // 0x10fa70: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fa6c) {
            ctx->pc = 0x10FA88u;
            return;
        }
    }
    ctx->pc = 0x10FA74u;
    // 0x10fa74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10fa74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10fa78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10fa78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10fa7c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x10fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x10fa80: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x10fa80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10fa84: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x10fa84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x10fa88u;
}
