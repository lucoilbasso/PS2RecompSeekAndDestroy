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

// Function: entry_0010fd0c
// Address: 0x10fd0c - 0x10fd38
void entry_0010fd0c_0x10fd0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fd0c_0x10fd0c");
#endif

    ctx->pc = 0x10fd0cu;

    // 0x10fd0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10fd0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10fd10: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x10fd10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10fd14: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x10FD14u;
    {
        const bool branch_taken_0x10fd14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD14u;
        // 0x10fd18: 0x8f83911c  lw          $v1, -0x6EE4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938908)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd14) {
            ctx->pc = 0x10FD64u;
            return;
        }
    }
    ctx->pc = 0x10FD1Cu;
    // 0x10fd1c: 0x28620017  slti        $v0, $v1, 0x17
    ctx->pc = 0x10fd1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x10fd20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FD20u;
    {
        const bool branch_taken_0x10fd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD20u;
        // 0x10fd24: 0xaf809120  sw          $zero, -0x6EE0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938912), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd20) {
            ctx->pc = 0x10FD38u;
            return;
        }
    }
    ctx->pc = 0x10FD28u;
    // 0x10fd28: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x10fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10fd2c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x10fd2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10FD30u;
    {
        const bool branch_taken_0x10fd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD30u;
        // 0x10fd34: 0xaf82911c  sw          $v0, -0x6EE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938908), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd30) {
            ctx->pc = 0x10FD3Cu;
            return;
        }
    }
    ctx->pc = 0x10FD38u;
}
