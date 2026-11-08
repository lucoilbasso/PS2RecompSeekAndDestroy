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

// Function: entry_0010fd64
// Address: 0x10fd64 - 0x10fd84
void entry_0010fd64_0x10fd64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fd64_0x10fd64");
#endif

    ctx->pc = 0x10fd64u;

    // 0x10fd64: 0x32220080  andi        $v0, $s1, 0x80
    ctx->pc = 0x10fd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
    // 0x10fd68: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10FD68u;
    {
        const bool branch_taken_0x10fd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD68u;
        // 0x10fd6c: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd68) {
            ctx->pc = 0x10FD84u;
            return;
        }
    }
    ctx->pc = 0x10FD70u;
    // 0x10fd70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10fd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10fd74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10fd74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10fd78: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x10fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x10fd7c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x10fd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10fd80: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x10fd80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x10fd84u;
}
