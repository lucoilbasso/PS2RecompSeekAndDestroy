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

// Function: entry_0014ea60
// Address: 0x14ea60 - 0x14eab0
void entry_0014ea60_0x14ea60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ea60_0x14ea60");
#endif

    switch (ctx->pc) {
        case 0x14eaa0u: goto label_14eaa0;
        default: break;
    }

    ctx->pc = 0x14ea60u;

label_14ea60:
    // 0x14ea60: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x14ea60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ea64: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x14ea64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x14ea68: 0xc6201a50  lwc1        $f0, 0x1A50($s1)
    ctx->pc = 0x14ea68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ea6c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x14ea6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea70: 0xc62119c8  lwc1        $f1, 0x19C8($s1)
    ctx->pc = 0x14ea70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ea74: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x14ea74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x14ea78: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x14ea78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x14ea7c: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x14ea7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x14ea80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14ea80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14ea84: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x14ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x14ea88: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x14ea88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x14ea8c: 0xc78c81f0  lwc1        $f12, -0x7E10($gp)
    ctx->pc = 0x14ea8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14ea90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14ea90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ea94: 0xd43021  addu        $a2, $a2, $s4
    ctx->pc = 0x14ea94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x14ea98: 0xc051588  jal         func_145620
    ctx->pc = 0x14EA98u;
    SET_GPR_U32(ctx, 31, 0x14EAA0u);
    ctx->pc = 0x14EA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EA98u;
    // 0x14ea9c: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x145620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145620u, 0x14EA98u, 0x14EAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EAA0u;
label_14eaa0:
    // 0x14eaa0: 0x8e2319c4  lw          $v1, 0x19C4($s1)
    ctx->pc = 0x14eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6596)));
    // 0x14eaa4: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x14eaa4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14eaa8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x14EAA8u;
    {
        const bool branch_taken_0x14eaa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EAA8u;
        // 0x14eaac: 0x26030010  addiu       $v1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eaa8) {
            ctx->pc = 0x14EA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ea60;
        }
    }
    ctx->pc = 0x14EAB0u;
}
