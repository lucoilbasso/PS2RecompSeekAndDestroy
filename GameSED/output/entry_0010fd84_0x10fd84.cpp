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

// Function: entry_0010fd84
// Address: 0x10fd84 - 0x10fda4
void entry_0010fd84_0x10fd84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fd84_0x10fd84");
#endif

    ctx->pc = 0x10fd84u;

    // 0x10fd84: 0x32220020  andi        $v0, $s1, 0x20
    ctx->pc = 0x10fd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
    // 0x10fd88: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10FD88u;
    {
        const bool branch_taken_0x10fd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD88u;
        // 0x10fd8c: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd88) {
            ctx->pc = 0x10FDA4u;
            return;
        }
    }
    ctx->pc = 0x10FD90u;
    // 0x10fd90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10fd90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10fd94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10fd94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10fd98: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x10fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x10fd9c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x10fd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10fda0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x10fda0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x10fda4u;
}
