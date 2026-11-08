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

// Function: entry_0014246c
// Address: 0x14246c - 0x142498
void entry_0014246c_0x14246c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014246c_0x14246c");
#endif

    ctx->pc = 0x14246cu;

    // 0x14246c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x14246cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x142470: 0x5447000d  bnel        $v0, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x142470u;
    {
        const bool branch_taken_0x142470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x142470) {
            ctx->pc = 0x142474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142470u;
            // 0x142474: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1424A8u;
            return;
        }
    }
    ctx->pc = 0x142478u;
    // 0x142478: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x142478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x14247c: 0x8ca30084  lw          $v1, 0x84($a1)
    ctx->pc = 0x14247cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x142480: 0x8ca40194  lw          $a0, 0x194($a1)
    ctx->pc = 0x142480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 404)));
    // 0x142484: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x142484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x142488: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x142488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x14248c: 0xe4b50188  swc1        $f21, 0x188($a1)
    ctx->pc = 0x14248cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    // 0x142490: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x142490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x142494: 0xe4b40184  swc1        $f20, 0x184($a1)
    ctx->pc = 0x142494u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 388), bits); }
    ctx->pc = 0x142498u;
}
