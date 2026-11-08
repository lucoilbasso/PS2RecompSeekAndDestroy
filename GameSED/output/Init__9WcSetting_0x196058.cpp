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

// Function: Init__9WcSetting
// Address: 0x196058 - 0x1960b8
void Init__9WcSetting_0x196058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__9WcSetting_0x196058");
#endif

    switch (ctx->pc) {
        case 0x19606cu: goto label_19606c;
        case 0x196090u: goto label_196090;
        default: break;
    }

    ctx->pc = 0x196058u;

    // 0x196058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19605c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19605cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x196060: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x196060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x196064: 0xc064e54  jal         func_193950
    ctx->pc = 0x196064u;
    SET_GPR_U32(ctx, 31, 0x19606Cu);
    ctx->pc = 0x196068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196064u;
    // 0x196068: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193950u, 0x196064u, 0x19606Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19606Cu;
label_19606c:
    // 0x19606c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19606cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196070: 0x24020146  addiu       $v0, $zero, 0x146
    ctx->pc = 0x196070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 326));
    // 0x196074: 0xae030198  sw          $v1, 0x198($s0)
    ctx->pc = 0x196074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 3));
    // 0x196078: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x196078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19607c: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x19607cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
    // 0x196080: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x196080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
    // 0x196084: 0xc78c85c0  lwc1        $f12, -0x7A40($gp)
    ctx->pc = 0x196084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x196088: 0xc067a5e  jal         func_19E978
    ctx->pc = 0x196088u;
    SET_GPR_U32(ctx, 31, 0x196090u);
    ctx->pc = 0x19608Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196088u;
    // 0x19608c: 0xae000248  sw          $zero, 0x248($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E978u, 0x196088u, 0x196090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196090u;
label_196090:
    // 0x196090: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x196090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x196094: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x196094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x196098: 0x21023  negu        $v0, $v0
    ctx->pc = 0x196098u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x19609c: 0xae02019c  sw          $v0, 0x19C($s0)
    ctx->pc = 0x19609cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
    // 0x1960a0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1960a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1960a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1960a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1960a8: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1960a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1960ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1960acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1960b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1960B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1960B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960B0u;
        // 0x1960b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1960B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1960B8u;
}
