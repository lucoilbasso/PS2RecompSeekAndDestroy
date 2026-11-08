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

// Function: caseD_a
// Address: 0x111af0 - 0x111b08
void caseD_a_0x111af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x111af0");
#endif

    switch (ctx->pc) {
        case 0x111af8u: goto label_111af8;
        default: break;
    }

    ctx->pc = 0x111af0u;

    // 0x111af0: 0xc0416d0  jal         func_105B40
    ctx->pc = 0x111AF0u;
    SET_GPR_U32(ctx, 31, 0x111AF8u);
    ctx->pc = 0x111AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111AF0u;
    // 0x111af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B40u, 0x111AF0u, 0x111AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111AF8u;
label_111af8:
    // 0x111af8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x111af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x111afc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x111AFCu;
    {
        const bool branch_taken_0x111afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111AFCu;
        // 0x111b00: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111afc) {
            ctx->pc = 0x111B18u;
            return;
        }
    }
    ctx->pc = 0x111B04u;
    // 0x111b04: 0x0  nop
    ctx->pc = 0x111b04u;
    // NOP
    ctx->pc = 0x111b08u;
}
