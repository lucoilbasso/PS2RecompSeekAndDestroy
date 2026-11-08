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

// Function: entry_0010fbe0
// Address: 0x10fbe0 - 0x10fbf8
void entry_0010fbe0_0x10fbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fbe0_0x10fbe0");
#endif

    ctx->pc = 0x10fbe0u;

    // 0x10fbe0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10fbe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10fbe4: 0x32221000  andi        $v0, $s1, 0x1000
    ctx->pc = 0x10fbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4096);
    // 0x10fbe8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x10fbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10fbec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10FBECu;
    {
        const bool branch_taken_0x10fbec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBECu;
        // 0x10fbf0: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fbec) {
            ctx->pc = 0x10FBF8u;
            return;
        }
    }
    ctx->pc = 0x10FBF4u;
    // 0x10fbf4: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x10fbf4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->pc = 0x10fbf8u;
}
