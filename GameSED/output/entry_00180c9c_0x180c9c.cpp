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

// Function: entry_00180c9c
// Address: 0x180c9c - 0x180cc0
void entry_00180c9c_0x180c9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180c9c_0x180c9c");
#endif

    ctx->pc = 0x180c9cu;

    // 0x180c9c: 0x80c82d  daddu       $t9, $a0, $zero
    ctx->pc = 0x180c9cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180ca0: 0x322102a  slt         $v0, $t9, $v0
    ctx->pc = 0x180ca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x180ca4: 0x104001c2  beqz        $v0, . + 4 + (0x1C2 << 2)
    ctx->pc = 0x180CA4u;
    {
        const bool branch_taken_0x180ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CA4u;
        // 0x180ca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180ca4) {
            ctx->pc = 0x1813B0u;
            return;
        }
    }
    ctx->pc = 0x180CACu;
    // 0x180cac: 0xc7898568  lwc1        $f9, -0x7A98($gp)
    ctx->pc = 0x180cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x180cb0: 0x46000206  mov.s       $f8, $f0
    ctx->pc = 0x180cb0u;
    ctx->f[8] = FPU_MOV_S(ctx->f[0]);
    // 0x180cb4: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x180cb4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180cb8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x180cb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180cbc: 0x0  nop
    ctx->pc = 0x180cbcu;
    // NOP
    ctx->pc = 0x180cc0u;
}
