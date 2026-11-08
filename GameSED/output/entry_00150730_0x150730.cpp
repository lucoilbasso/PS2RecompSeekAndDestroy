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

// Function: entry_00150730
// Address: 0x150730 - 0x150758
void entry_00150730_0x150730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150730_0x150730");
#endif

    switch (ctx->pc) {
        case 0x150744u: goto label_150744;
        default: break;
    }

    ctx->pc = 0x150730u;

    // 0x150730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150734: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x150734u;
    {
        const bool branch_taken_0x150734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x150734) {
            ctx->pc = 0x150758u;
            return;
        }
    }
    ctx->pc = 0x15073Cu;
    // 0x15073c: 0xc066fb4  jal         func_19BED0
    ctx->pc = 0x15073Cu;
    SET_GPR_U32(ctx, 31, 0x150744u);
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x15073Cu, 0x150744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150744u;
label_150744:
    // 0x150744: 0xc7818214  lwc1        $f1, -0x7DEC($gp)
    ctx->pc = 0x150744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150748: 0xc64203cc  lwc1        $f2, 0x3CC($s2)
    ctx->pc = 0x150748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15074c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15074cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x150750: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x150750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x150754: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x150754u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->pc = 0x150758u;
}
