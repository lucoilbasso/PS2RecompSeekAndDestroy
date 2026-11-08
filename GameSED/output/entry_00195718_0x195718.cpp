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

// Function: entry_00195718
// Address: 0x195718 - 0x195738
void entry_00195718_0x195718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195718_0x195718");
#endif

    switch (ctx->pc) {
        case 0x195720u: goto label_195720;
        default: break;
    }

    ctx->pc = 0x195718u;

    // 0x195718: 0xc061422  jal         func_185088
    ctx->pc = 0x195718u;
    SET_GPR_U32(ctx, 31, 0x195720u);
    ctx->pc = 0x19571Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195718u;
    // 0x19571c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x195718u, 0x195720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195720u;
label_195720:
    // 0x195720: 0x26060110  addiu       $a2, $s0, 0x110
    ctx->pc = 0x195720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x195724: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x195724u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x195728: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x195728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x19572c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19572Cu;
    {
        const bool branch_taken_0x19572c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19572Cu;
        // 0x195730: 0xc6010190  lwc1        $f1, 0x190($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19572c) {
            ctx->pc = 0x195738u;
            return;
        }
    }
    ctx->pc = 0x195734u;
    // 0x195734: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x195734u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    ctx->pc = 0x195738u;
}
