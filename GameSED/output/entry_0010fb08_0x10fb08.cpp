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

// Function: entry_0010fb08
// Address: 0x10fb08 - 0x10fb24
void entry_0010fb08_0x10fb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fb08_0x10fb08");
#endif

    ctx->pc = 0x10fb08u;

    // 0x10fb08: 0x32621000  andi        $v0, $s3, 0x1000
    ctx->pc = 0x10fb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4096);
    // 0x10fb0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FB0Cu;
    {
        const bool branch_taken_0x10fb0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB0Cu;
        // 0x10fb10: 0x32622000  andi        $v0, $s3, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb0c) {
            ctx->pc = 0x10FB24u;
            return;
        }
    }
    ctx->pc = 0x10FB14u;
    // 0x10fb14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10fb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10fb18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10fb18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10fb1c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x10fb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x10fb20: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x10fb20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->pc = 0x10fb24u;
}
