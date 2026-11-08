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

// Function: entry_001386e0
// Address: 0x1386e0 - 0x138700
void entry_001386e0_0x1386e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001386e0_0x1386e0");
#endif

    ctx->pc = 0x1386e0u;

    // 0x1386e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1386e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1386e4: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1386E4u;
    {
        const bool branch_taken_0x1386e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1386E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1386E4u;
        // 0x1386e8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1386e4) {
            ctx->pc = 0x138794u;
            return;
        }
    }
    ctx->pc = 0x1386ECu;
    // 0x1386ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1386ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1386f0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1386f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1386f4: 0x26510030  addiu       $s1, $s2, 0x30
    ctx->pc = 0x1386f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1386f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1386f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1386fc: 0x0  nop
    ctx->pc = 0x1386fcu;
    // NOP
    ctx->pc = 0x138700u;
}
