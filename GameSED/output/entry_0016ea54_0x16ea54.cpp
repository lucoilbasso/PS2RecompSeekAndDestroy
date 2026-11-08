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

// Function: entry_0016ea54
// Address: 0x16ea54 - 0x16eaa0
void entry_0016ea54_0x16ea54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ea54_0x16ea54");
#endif

    ctx->pc = 0x16ea54u;

label_16ea54:
    // 0x16ea54: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x16ea54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_16ea58:
    // 0x16ea58: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x16ea58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_16ea5c:
    // 0x16ea5c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x16ea5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_16ea60:
    // 0x16ea60: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x16ea60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_16ea64:
    // 0x16ea64: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x16ea64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_16ea68:
    // 0x16ea68: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x16ea68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
label_16ea6c:
    // 0x16ea6c: 0x8e360150  lw          $s6, 0x150($s1)
    ctx->pc = 0x16ea6cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_16ea70:
    // 0x16ea70: 0x8e230260  lw          $v1, 0x260($s1)
    ctx->pc = 0x16ea70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_16ea74:
    // 0x16ea74: 0xc6c10380  lwc1        $f1, 0x380($s6)
    ctx->pc = 0x16ea74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16ea78:
    // 0x16ea78: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x16ea78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_16ea7c:
    // 0x16ea7c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_16ea80:
    if (ctx->pc == 0x16EA80u) {
        ctx->pc = 0x16EA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA7Cu;
        // 0x16ea80: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EA84u;
        goto label_16ea84;
    }
    ctx->pc = 0x16EA7Cu;
    {
        const bool branch_taken_0x16ea7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA7Cu;
        // 0x16ea80: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ea7c) {
            ctx->pc = 0x16EB64u;
            return;
        }
    }
    ctx->pc = 0x16EA84u;
label_16ea84:
    // 0x16ea84: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_16ea88:
    // 0x16ea88: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x16ea88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_16ea8c:
    // 0x16ea8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16ea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16ea90:
    // 0x16ea90: 0x8c637510  lw          $v1, 0x7510($v1)
    ctx->pc = 0x16ea90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29968)));
label_16ea94:
    // 0x16ea94: 0x600008  jr          $v1
label_16ea98:
    if (ctx->pc == 0x16EA98u) {
        ctx->pc = 0x16EA9Cu;
        goto label_16ea9c;
    }
    ctx->pc = 0x16EA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EA94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16EA9Cu;
label_16ea9c:
    // 0x16ea9c: 0x0  nop
    ctx->pc = 0x16ea9cu;
    // NOP
    ctx->pc = 0x16eaa0u;
}
