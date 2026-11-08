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

// Function: entry_00151160
// Address: 0x151160 - 0x151180
void entry_00151160_0x151160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151160_0x151160");
#endif

    ctx->pc = 0x151160u;

    // 0x151160: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x151160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x151164: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x151164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x151168: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x151168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x15116c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15116Cu;
    {
        const bool branch_taken_0x15116c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15116Cu;
        // 0x151170: 0xc60003b8  lwc1        $f0, 0x3B8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15116c) {
            ctx->pc = 0x151180u;
            return;
        }
    }
    ctx->pc = 0x151174u;
    // 0x151174: 0xc7818244  lwc1        $f1, -0x7DBC($gp)
    ctx->pc = 0x151174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151178: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x151178u;
    {
        const bool branch_taken_0x151178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151178u;
        // 0x15117c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151178) {
            ctx->pc = 0x151188u;
            return;
        }
    }
    ctx->pc = 0x151180u;
}
