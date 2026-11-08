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

// Function: viBufCreate
// Address: 0x175128 - 0x1751a0
void viBufCreate_0x175128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufCreate_0x175128");
#endif

    switch (ctx->pc) {
        case 0x17517cu: goto label_17517c;
        case 0x175188u: goto label_175188;
        default: break;
    }

    ctx->pc = 0x175128u;

    // 0x175128: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x175128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x17512c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17512cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x175130: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x175130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x175134: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x175134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x175138: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x175138u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x17513c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17513cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175140: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x175140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x175144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175148: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x175148u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x17514c: 0x752c0  sll         $t2, $a3, 11
    ctx->pc = 0x17514cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    // 0x175150: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x175150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x175154: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x175154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175158: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x175158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x17515c: 0xae080050  sw          $t0, 0x50($s0)
    ctx->pc = 0x17515cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 8));
    // 0x175160: 0xae090054  sw          $t1, 0x54($s0)
    ctx->pc = 0x175160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 9));
    // 0x175164: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x175164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x175168: 0xae0a0018  sw          $t2, 0x18($s0)
    ctx->pc = 0x175168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 10));
    // 0x17516c: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x17516cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x175170: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x175170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x175174: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x175174u;
    SET_GPR_U32(ctx, 31, 0x17517Cu);
    ctx->pc = 0x175178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175174u;
    // 0x175178: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x175174u, 0x17517Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17517Cu;
label_17517c:
    // 0x17517c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x17517cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x175180: 0xc05d468  jal         func_1751A0
    ctx->pc = 0x175180u;
    SET_GPR_U32(ctx, 31, 0x175188u);
    ctx->pc = 0x175184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175180u;
    // 0x175184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1751A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1751A0u, 0x175180u, 0x175188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175188u;
label_175188:
    // 0x175188: 0xfe000048  sd          $zero, 0x48($s0)
    ctx->pc = 0x175188u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 0));
    // 0x17518c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17518cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x175190: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x175190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175194: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x175194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175198: 0x3e00008  jr          $ra
    ctx->pc = 0x175198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175198u;
        // 0x17519c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1751A0u;
}
