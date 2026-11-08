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

// Function: entry_0017ec50
// Address: 0x17ec50 - 0x17ec78
void entry_0017ec50_0x17ec50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ec50_0x17ec50");
#endif

    ctx->pc = 0x17ec50u;

    // 0x17ec50: 0xae550020  sw          $s5, 0x20($s2)
    ctx->pc = 0x17ec50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 21));
    // 0x17ec54: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17ec54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec58: 0x8e500024  lw          $s0, 0x24($s2)
    ctx->pc = 0x17ec58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x17ec5c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x17ec5cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec60: 0x1aa00022  blez        $s5, . + 4 + (0x22 << 2)
    ctx->pc = 0x17EC60u;
    {
        const bool branch_taken_0x17ec60 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x17EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EC60u;
        // 0x17ec64: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ec60) {
            ctx->pc = 0x17ECECu;
            return;
        }
    }
    ctx->pc = 0x17EC68u;
    // 0x17ec68: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x17ec68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17ec6c: 0x26f40008  addiu       $s4, $s7, 0x8
    ctx->pc = 0x17ec6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x17ec70: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x17ec70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec74: 0x0  nop
    ctx->pc = 0x17ec74u;
    // NOP
    ctx->pc = 0x17ec78u;
}
