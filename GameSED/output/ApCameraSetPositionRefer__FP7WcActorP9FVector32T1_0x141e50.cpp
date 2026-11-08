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

// Function: ApCameraSetPositionRefer__FP7WcActorP9FVector32T1
// Address: 0x141e50 - 0x141ecc
void ApCameraSetPositionRefer__FP7WcActorP9FVector32T1_0x141e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCameraSetPositionRefer__FP7WcActorP9FVector32T1_0x141e50");
#endif

    switch (ctx->pc) {
        case 0x141e78u: goto label_141e78;
        case 0x141ea4u: goto label_141ea4;
        default: break;
    }

    ctx->pc = 0x141e50u;

    // 0x141e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x141e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x141e54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x141e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x141e58: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x141e58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141e5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x141e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x141e60: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x141e60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141e64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x141e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141e68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x141e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141e6c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x141e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x141e70: 0xc04fce4  jal         func_13F390
    ctx->pc = 0x141E70u;
    SET_GPR_U32(ctx, 31, 0x141E78u);
    ctx->pc = 0x141E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141E70u;
    // 0x141e74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F390u, 0x141E70u, 0x141E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141E78u;
label_141e78:
    // 0x141e78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x141e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141e7c: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x141e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x141e80: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x141e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x141e84: 0x260500c0  addiu       $a1, $s0, 0xC0
    ctx->pc = 0x141e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x141e88: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x141E88u;
    {
        const bool branch_taken_0x141e88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x141E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141E88u;
        // 0x141e8c: 0x51880a  movz        $s1, $v0, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141e88) {
            ctx->pc = 0x141E98u;
            goto label_141e98;
        }
    }
    ctx->pc = 0x141E90u;
    // 0x141e90: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x141e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x141e94: 0x2452c490  addiu       $s2, $v0, -0x3B70
    ctx->pc = 0x141e94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952080));
label_141e98:
    // 0x141e98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x141e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141e9c: 0xc05060a  jal         func_141828
    ctx->pc = 0x141E9Cu;
    SET_GPR_U32(ctx, 31, 0x141EA4u);
    ctx->pc = 0x141EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141E9Cu;
    // 0x141ea0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141828u, 0x141E9Cu, 0x141EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141EA4u;
label_141ea4:
    // 0x141ea4: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x141ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
    // 0x141ea8: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x141ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x141eac: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x141eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
    // 0x141eb0: 0xae000148  sw          $zero, 0x148($s0)
    ctx->pc = 0x141eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 0));
    // 0x141eb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x141eb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x141eb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x141eb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141ebc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x141ebcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141ec0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x141ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x141ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x141EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141EC4u;
        // 0x141ec8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141ECCu;
}
