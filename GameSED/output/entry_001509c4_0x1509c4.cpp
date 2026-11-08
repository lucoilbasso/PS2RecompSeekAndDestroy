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

// Function: entry_001509c4
// Address: 0x1509c4 - 0x150a00
void entry_001509c4_0x1509c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001509c4_0x1509c4");
#endif

    switch (ctx->pc) {
        case 0x1509dcu: goto label_1509dc;
        default: break;
    }

    ctx->pc = 0x1509c4u;

    // 0x1509c4: 0xc7808234  lwc1        $f0, -0x7DCC($gp)
    ctx->pc = 0x1509c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1509c8: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1509c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1509cc: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x1509CCu;
    {
        const bool branch_taken_0x1509cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1509cc) {
            ctx->pc = 0x150A48u;
            return;
        }
    }
    ctx->pc = 0x1509D4u;
    // 0x1509d4: 0xc04c99a  jal         func_132668
    ctx->pc = 0x1509D4u;
    SET_GPR_U32(ctx, 31, 0x1509DCu);
    ctx->pc = 0x132668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132668u, 0x1509D4u, 0x1509DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1509DCu;
label_1509dc:
    // 0x1509dc: 0x8e430690  lw          $v1, 0x690($s2)
    ctx->pc = 0x1509dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
    // 0x1509e0: 0x8c620c08  lw          $v0, 0xC08($v1)
    ctx->pc = 0x1509e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3080)));
    // 0x1509e4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1509E4u;
    {
        const bool branch_taken_0x1509e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1509E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1509E4u;
        // 0x1509e8: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1509e4) {
            ctx->pc = 0x150A00u;
            return;
        }
    }
    ctx->pc = 0x1509ECu;
    // 0x1509ec: 0x8c6301b4  lw          $v1, 0x1B4($v1)
    ctx->pc = 0x1509ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x1509f0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1509f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1509f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1509F4u;
    {
        const bool branch_taken_0x1509f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1509F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1509F4u;
        // 0x1509f8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1509f4) {
            ctx->pc = 0x150A04u;
            return;
        }
    }
    ctx->pc = 0x1509FCu;
    // 0x1509fc: 0x0  nop
    ctx->pc = 0x1509fcu;
    // NOP
    ctx->pc = 0x150a00u;
}
