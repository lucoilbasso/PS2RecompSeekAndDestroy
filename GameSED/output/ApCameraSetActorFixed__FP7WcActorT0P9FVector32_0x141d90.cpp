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

// Function: ApCameraSetActorFixed__FP7WcActorT0P9FVector32
// Address: 0x141d90 - 0x141e00
void ApCameraSetActorFixed__FP7WcActorT0P9FVector32_0x141d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCameraSetActorFixed__FP7WcActorT0P9FVector32_0x141d90");
#endif

    switch (ctx->pc) {
        case 0x141db8u: goto label_141db8;
        case 0x141dd4u: goto label_141dd4;
        default: break;
    }

    ctx->pc = 0x141d90u;

    // 0x141d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x141d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x141d94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x141d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x141d98: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x141d98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141d9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x141d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x141da0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x141da0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141da4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x141da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141da8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x141da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141dac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x141dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x141db0: 0xc04fce4  jal         func_13F390
    ctx->pc = 0x141DB0u;
    SET_GPR_U32(ctx, 31, 0x141DB8u);
    ctx->pc = 0x141DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141DB0u;
    // 0x141db4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F390u, 0x141DB0u, 0x141DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141DB8u;
label_141db8:
    // 0x141db8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x141db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141dbc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x141dbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141dc0: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x141dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x141dc4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x141dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x141dc8: 0x231300b  movn        $a2, $s1, $s1
    ctx->pc = 0x141dc8u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 17));
    // 0x141dcc: 0xc0505d2  jal         func_141748
    ctx->pc = 0x141DCCu;
    SET_GPR_U32(ctx, 31, 0x141DD4u);
    ctx->pc = 0x141DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141DCCu;
    // 0x141dd0: 0x260500c0  addiu       $a1, $s0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141748u, 0x141DCCu, 0x141DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141DD4u;
label_141dd4:
    // 0x141dd4: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x141dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x141dd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x141dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x141ddc: 0x24020444  addiu       $v0, $zero, 0x444
    ctx->pc = 0x141ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1092));
    // 0x141de0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x141de0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x141de4: 0xae02014c  sw          $v0, 0x14C($s0)
    ctx->pc = 0x141de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
    // 0x141de8: 0xe6000148  swc1        $f0, 0x148($s0)
    ctx->pc = 0x141de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
    // 0x141dec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x141decu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141df0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x141df0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141df4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x141df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x141df8: 0x3e00008  jr          $ra
    ctx->pc = 0x141DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141DF8u;
        // 0x141dfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141E00u;
}
