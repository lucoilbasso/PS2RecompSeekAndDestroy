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

// Function: entry_0014531c
// Address: 0x14531c - 0x145348
void entry_0014531c_0x14531c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014531c_0x14531c");
#endif

    ctx->pc = 0x14531cu;

    // 0x14531c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14531cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x145320: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x145320u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x145324: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x145324u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x145328: 0x8ce401ec  lw          $a0, 0x1EC($a3)
    ctx->pc = 0x145328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
    // 0x14532c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x14532cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x145330: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x145330u;
    {
        const bool branch_taken_0x145330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145330u;
        // 0x145334: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x145330) {
            ctx->pc = 0x145348u;
            return;
        }
    }
    ctx->pc = 0x145338u;
    // 0x145338: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x145338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x14533c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14533Cu;
    {
        const bool branch_taken_0x14533c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14533Cu;
        // 0x145340: 0x244300d0  addiu       $v1, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14533c) {
            ctx->pc = 0x14534Cu;
            return;
        }
    }
    ctx->pc = 0x145344u;
    // 0x145344: 0x0  nop
    ctx->pc = 0x145344u;
    // NOP
    ctx->pc = 0x145348u;
}
