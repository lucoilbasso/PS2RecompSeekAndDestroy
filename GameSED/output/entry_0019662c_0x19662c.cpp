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

// Function: entry_0019662c
// Address: 0x19662c - 0x196650
void entry_0019662c_0x19662c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019662c_0x19662c");
#endif

    ctx->pc = 0x19662cu;

    // 0x19662c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x19662Cu;
    {
        const bool branch_taken_0x19662c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19662c) {
            ctx->pc = 0x1965E0u;
            return;
        }
    }
    ctx->pc = 0x196634u;
    // 0x196634: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x196634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196638: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x196638u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19663c: 0x460010a8  max.s       $f2, $f2, $f0
    ctx->pc = 0x19663cu;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[0]);
    // 0x196640: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x196640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x196644: 0xf6102a  slt         $v0, $a3, $s6
    ctx->pc = 0x196644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x196648: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x196648u;
    {
        const bool branch_taken_0x196648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196648u;
        // 0x19664c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196648) {
            ctx->pc = 0x1965D0u;
            return;
        }
    }
    ctx->pc = 0x196650u;
}
