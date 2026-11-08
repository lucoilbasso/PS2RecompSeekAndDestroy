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

// Function: entry_0016cccc
// Address: 0x16cccc - 0x16cd10
void entry_0016cccc_0x16cccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016cccc_0x16cccc");
#endif

    ctx->pc = 0x16ccccu;

label_16cccc:
    // 0x16cccc: 0xe7b400c8  swc1        $f20, 0xC8($sp)
    ctx->pc = 0x16ccccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_16ccd0:
    // 0x16ccd0: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x16ccd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
label_16ccd4:
    // 0x16ccd4: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x16ccd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
label_16ccd8:
    // 0x16ccd8: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x16ccd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
label_16ccdc:
    // 0x16ccdc: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x16ccdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_16cce0:
    // 0x16cce0: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x16cce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_16cce4:
    // 0x16cce4: 0x8e240260  lw          $a0, 0x260($s1)
    ctx->pc = 0x16cce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_16cce8:
    // 0x16cce8: 0xc4600088  lwc1        $f0, 0x88($v1)
    ctx->pc = 0x16cce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16ccec:
    // 0x16ccec: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x16ccecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_16ccf0:
    // 0x16ccf0: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_16ccf4:
    if (ctx->pc == 0x16CCF4u) {
        ctx->pc = 0x16CCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCF0u;
        // 0x16ccf4: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CCF8u;
        goto label_16ccf8;
    }
    ctx->pc = 0x16CCF0u;
    {
        const bool branch_taken_0x16ccf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCF0u;
        // 0x16ccf4: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ccf0) {
            ctx->pc = 0x16CDD4u;
            return;
        }
    }
    ctx->pc = 0x16CCF8u;
label_16ccf8:
    // 0x16ccf8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x16ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16ccfc:
    // 0x16ccfc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x16ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_16cd00:
    // 0x16cd00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16cd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16cd04:
    // 0x16cd04: 0x8c637480  lw          $v1, 0x7480($v1)
    ctx->pc = 0x16cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29824)));
label_16cd08:
    // 0x16cd08: 0x600008  jr          $v1
label_16cd0c:
    if (ctx->pc == 0x16CD0Cu) {
        ctx->pc = 0x16CD10u;
        goto label_fallthrough_0x16cd08;
    }
    ctx->pc = 0x16CD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CD08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x16cd08:
    ctx->pc = 0x16CD10u;
}
