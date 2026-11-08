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

// Function: entry_00192e28
// Address: 0x192e28 - 0x192e60
void entry_00192e28_0x192e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192e28_0x192e28");
#endif

    ctx->pc = 0x192e28u;

    // 0x192e28: 0x8e620240  lw          $v0, 0x240($s3)
    ctx->pc = 0x192e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 576)));
    // 0x192e2c: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x192E2Cu;
    {
        const bool branch_taken_0x192e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E2Cu;
        // 0x192e30: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192e2c) {
            ctx->pc = 0x193048u;
            return;
        }
    }
    ctx->pc = 0x192E34u;
    // 0x192e34: 0x26630180  addiu       $v1, $s3, 0x180
    ctx->pc = 0x192e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x192e38: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x192e38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192e3c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x192e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x192e40: 0x8e620240  lw          $v0, 0x240($s3)
    ctx->pc = 0x192e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 576)));
    // 0x192e44: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x192E44u;
    {
        const bool branch_taken_0x192e44 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x192E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E44u;
        // 0x192e48: 0xc7a000c0  lwc1        $f0, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x192e44) {
            ctx->pc = 0x192E60u;
            return;
        }
    }
    ctx->pc = 0x192E4Cu;
    // 0x192e4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192e50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192e50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x192e54: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x192E54u;
    {
        const bool branch_taken_0x192e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E54u;
        // 0x192e58: 0x8e620238  lw          $v0, 0x238($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192e54) {
            ctx->pc = 0x192E7Cu;
            return;
        }
    }
    ctx->pc = 0x192E5Cu;
    // 0x192e5c: 0x0  nop
    ctx->pc = 0x192e5cu;
    // NOP
    ctx->pc = 0x192e60u;
}
