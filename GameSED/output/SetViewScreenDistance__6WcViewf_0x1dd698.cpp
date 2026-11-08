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

// Function: SetViewScreenDistance__6WcViewf
// Address: 0x1dd698 - 0x1dd6e0
void SetViewScreenDistance__6WcViewf_0x1dd698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetViewScreenDistance__6WcViewf_0x1dd698");
#endif

    switch (ctx->pc) {
        case 0x1dd6ccu: goto label_1dd6cc;
        default: break;
    }

    ctx->pc = 0x1dd698u;

    // 0x1dd698: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dd698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd69c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dd69cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd6a0: 0x46006046  mov.s       $f1, $f12
    ctx->pc = 0x1dd6a0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[12]);
    // 0x1dd6a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd6a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd6a8: 0x0  nop
    ctx->pc = 0x1dd6a8u;
    // NOP
    // 0x1dd6ac: 0x0  nop
    ctx->pc = 0x1dd6acu;
    // NOP
    // 0x1dd6b0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1dd6b0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1dd6b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd6b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dd6b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6bc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dd6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dd6c0: 0xe6010154  swc1        $f1, 0x154($s0)
    ctx->pc = 0x1dd6c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
    // 0x1dd6c4: 0xc067a5e  jal         func_19E978
    ctx->pc = 0x1DD6C4u;
    SET_GPR_U32(ctx, 31, 0x1DD6CCu);
    ctx->pc = 0x1DD6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD6C4u;
    // 0x1dd6c8: 0xe600015c  swc1        $f0, 0x15C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 348), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E978u, 0x1DD6C4u, 0x1DD6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6CCu;
label_1dd6cc:
    // 0x1dd6cc: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x1dd6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x1dd6d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dd6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd6d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd6d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6D8u;
        // 0x1dd6dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD6E0u;
}
