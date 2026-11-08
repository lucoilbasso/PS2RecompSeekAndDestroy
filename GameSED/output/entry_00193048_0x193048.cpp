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

// Function: entry_00193048
// Address: 0x193048 - 0x193080
void entry_00193048_0x193048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193048_0x193048");
#endif

    ctx->pc = 0x193048u;

    // 0x193048: 0x8e620244  lw          $v0, 0x244($s3)
    ctx->pc = 0x193048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 580)));
    // 0x19304c: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x19304Cu;
    {
        const bool branch_taken_0x19304c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19304Cu;
        // 0x193050: 0x27a300c0  addiu       $v1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19304c) {
            ctx->pc = 0x1931F8u;
            return;
        }
    }
    ctx->pc = 0x193054u;
    // 0x193054: 0x26640180  addiu       $a0, $s3, 0x180
    ctx->pc = 0x193054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    // 0x193058: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x193058u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19305c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x19305cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x193060: 0xc6600190  lwc1        $f0, 0x190($s3)
    ctx->pc = 0x193060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193064: 0x8e620238  lw          $v0, 0x238($s3)
    ctx->pc = 0x193064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 568)));
    // 0x193068: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x193068u;
    {
        const bool branch_taken_0x193068 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193068u;
        // 0x19306c: 0xe7a000c0  swc1        $f0, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x193068) {
            ctx->pc = 0x193080u;
            return;
        }
    }
    ctx->pc = 0x193070u;
    // 0x193070: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x193070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193074: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x193074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x193078: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x193078u;
    {
        const bool branch_taken_0x193078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193078u;
        // 0x19307c: 0xc7a000c4  lwc1        $f0, 0xC4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x193078) {
            ctx->pc = 0x19309Cu;
            return;
        }
    }
    ctx->pc = 0x193080u;
}
